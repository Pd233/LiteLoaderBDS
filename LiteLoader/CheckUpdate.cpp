#include "pch.h"


int updateCheck()
{
    std::thread t([] {
        LPCTSTR lpszAgent = L"WinInetGet/0.1";
        HINTERNET hInternet = InternetOpen(lpszAgent,
            INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
        DWORD rec_timeout = 500 * 1000;
        InternetSetOption(hInternet, INTERNET_OPTION_RECEIVE_TIMEOUT, &rec_timeout, sizeof(rec_timeout));
        LPCTSTR lpszServerName = L"gitee.com";
        INTERNET_PORT nServerPort = INTERNET_DEFAULT_HTTPS_PORT;
        LPCTSTR lpszUserName = NULL;
        LPCTSTR lpszPassword = NULL;
        DWORD dwConnectFlags = 0;
        DWORD dwConnectContext = 0;
        HINTERNET hConnect = InternetConnect(hInternet,
            lpszServerName, nServerPort,
            lpszUserName, lpszPassword,
            INTERNET_SERVICE_HTTP,
            dwConnectFlags, dwConnectContext);
        LPCTSTR lpszVerb = L"GET";
        LPCTSTR lpszObjectName = L"/dreamguxiang/LLessentials/raw/master/llupdate.json";
        LPCTSTR lpszVersion = NULL;
        LPCTSTR lpszReferrer = NULL;
        LPCTSTR* lplpszAcceptTypes = NULL;
        DWORD dwOpenRequestFlags = INTERNET_FLAG_IGNORE_REDIRECT_TO_HTTP |
            INTERNET_FLAG_KEEP_CONNECTION |
            INTERNET_FLAG_NO_AUTH |
            INTERNET_FLAG_NO_COOKIES |
            INTERNET_FLAG_NO_UI |
            INTERNET_FLAG_SECURE |
            INTERNET_FLAG_RELOAD;
        DWORD dwOpenRequestContext = 0;
        HINTERNET hRequest = HttpOpenRequest(hConnect, lpszVerb, lpszObjectName, lpszVersion,
            lpszReferrer, lplpszAcceptTypes,
            dwOpenRequestFlags, dwOpenRequestContext);
        DWORD dwError = 0;
        if (!HttpSendRequest(hRequest, NULL, 0, NULL, 0))
        {
            dwError = GetLastError();
        }
        DWORD dwBytesAvailable;
        while (InternetQueryDataAvailable(hRequest, &dwBytesAvailable, 0, 0)) {
            BYTE* pMessageBody = (BYTE*)malloc(dwBytesAvailable + 1);
            DWORD dwBytesRead;
            BOOL bResult = InternetReadFile(hRequest, pMessageBody,
                dwBytesAvailable, &dwBytesRead);
            if (!bResult) {
                fprintf(stderr, "InternetReadFile failed, error = %d (0x%x)/n",
                    GetLastError(), GetLastError());
                break;
            }
            if (dwBytesRead == 0) {
                std::cout << "[BDSLiteloader] Failed to get updates(0)\n";
                break; // End of File.
            }
            pMessageBody[dwBytesRead];
            std::string res = (char*)pMessageBody;
            rapidjson::Document json;                
            json.Parse(res.c_str());
            for (int i = 0; i < 3; i++)
                if (json.HasParseError()) {
                    std::cout << "[BDSLiteloader] Failed to get updates(1)\n";
                    break;
                }
                auto arr = json.GetArray();
                std::string LatestRelease = arr[arr.Size() - 1]["name"].GetString();
                int latestVersionNum = arr[arr.Size() - 1]["versionNum"].GetInt();
                if (latestVersionNum < LiteLoaderVersionNum) {
                    std::cout << "[BDSLiteloader] Found a new version: " << LatestRelease << "\n";
                    break;
                }
                if (latestVersionNum == LiteLoaderVersionNum) {
                    break;
                }
                if (latestVersionNum > LiteLoaderVersionNum) {
                    std::cout << "[BDSLiteloader] Using preview version: " << LatestRelease << "\n";
                    break;
                }
            }
        });
    t.detach();
}