#pragma once
#include <I18nAPI.h>

static const I18N::LangData defaultLangData = {
    {"en", {
               {"init.loadConfig.fail", "Loading ScriptEngine config failed"},
               {"init.fileMapping.fail", "Failed to load global shared data"},
               {"init.mapFile.fail", "Global shared data mapping failed"},
               {"init.llMoney.noFound", "LLMoney.dll not found, ScriptEngine Economy System won't work"},
               {"init.idFile.fail", "Failed to initialize unique identification file! Code: "},
               {"api.parseJson.fail", "Json parse error"},
               {"remoteCall.createMessageThread.fail", "Creating Message Thread failed"},
               {"remoteCall.createEventObject.fail", "Creating Event Object failed"},
               {"remoteCall.postMessage.fail", "Posting remote call information failed"},
               {"remoteCall.timeout.fail", "Remote call timeout, call failed"},
               {"remoteCall.waitFail.fail", "Remote call waiting failed, call failed"},
               {"remoteCall.postMessageReturn.fail", "Remote call post return value failed"},
               {"remoteCall.inRemoteEngine.fail", "Remote call error in remote engine"},
               {"base.getDimName.0", "Overworld"},
               {"base.getDimName.1", "Nether"},
               {"base.getDimName.2", "End"},
               {"base.getDimName.unknown", "Other dimension"},
               {"llseapi.require.success", " - Plugin require loaded successfully. Loaded: "},
               {"llseapi.require.fail", " - Plugin require load failed"},
               {"llseapi.require.download.success", " - Successfully downloaded require! Path: "},
               {"llseapi.require.network.fail", " - Download plugin require failed! Code: "},
           }},
    {"zh_CN", {
                  {"init.loadConfig.fail", "LLSE配置文件加载失败！"},
                  {"init.fileMapping.fail", "全局共享数据加载失败！"},
                  {"init.mapFile.fail", "全局共享数据映射失败！"},
                  {"init.llMoney.noFound", "LLMoney.dll 未找到！LLSE经济系统将不会工作"},
                  {"init.idFile.fail", "初始化唯一识别文件失败！错误码："},
                  {"api.parseJson.fail", "Json解析发生错误！"},
                  {"remoteCall.createMessageThread.fail", "创建消息循环失败！"},
                  {"remoteCall.createEventObject.fail", "创建事件对象失败！"},
                  {"remoteCall.postMessage.fail", "递送远程调用信息失败！"},
                  {"remoteCall.timeout.fail", "远程调用等待超时！调用失败"},
                  {"remoteCall.waitFail.fail", "远程调用等待失败！调用失败"},
                  {"remoteCall.postMessageReturn.fail", "远程调用传递返回值失败！"},
                  {"remoteCall.inRemoteEngine.fail", "在远程引擎中发生错误！"},
                  {"base.getDimName.0", "主世界"},
                  {"base.getDimName.1", "下界"},
                  {"base.getDimName.2", "末地"},
                  {"base.getDimName.unknown", "其他维度"},
                  {"llseapi.require.success", " - 插件依赖包加载成功。已加载："},
                  {"llseapi.require.fail", " - 插件依赖包加载失败！"},
                  {"llseapi.require.download.success", " - 插件依赖包拉取成功！已安装到路径："},
                  {"llseapi.require.network.fail", " - 插件依赖包拉取网络请求失败！错误码："},
                  {"Detected the existence of another BDS process with the same path!", "检测到另一个相同的BDS进程存在!"},
                  {"This may cause the network port and the level to be occupied", "这可能会导致存档和端口占用"},
                  {"Do you want to terminate the process with PID {}?  (y=Yes, n=No)", "您是否要强制终止该PID为 {} 的进程? (y=是, n=否)"},
              }},
    {"zh_TW", {
                  {"init.loadConfig.fail", "加載ScriptEngine配置文件失敗！"},
                  {"init.fileMapping.fail", "加載全局共享數據失敗！"},
                  {"init.mapFile.fail", "全局共享數據映射失敗！"},
                  {"init.llMoney.noFound", "LLMoney.dll 未找到！ScriptEngine經濟系統將無法工作"},
                  {"init.idFile.fail", "初始化唯一標識文件失敗！ 錯誤代碼：："},
                  {"api.parseJson.fail", "解析Json時發生錯誤！"},
                  {"remoteCall.createMessageThread.fail", "創建消息線程失敗"},
                  {"remoteCall.createEventObject.fail", "創建事件線程失敗"},
                  {"remoteCall.postMessage.fail", "發送遠程調用信息失敗！"},
                  {"remoteCall.timeout.fail", "遠程調用超時，調用失敗！"},
                  {"remoteCall.waitFail.fail", "遠程調用等待失敗，調用失敗！"},
                  {"remoteCall.postMessageReturn.fail", "遠程調用後返回值失敗！"},
                  {"remoteCall.inRemoteEngine.fail", "在遠程引擎中的遠程調用錯誤！"},
                  {"base.getDimName.0", "主世界"},
                  {"base.getDimName.1", "地獄"},
                  {"base.getDimName.2", "終界"},
                  {"base.getDimName.unknown", "其他維度(世界)"},
                  {"llseapi.require.success", " - 插件所需拓展包加載成功。已加載："},
                  {"llseapi.require.fail", " - 插件所需拓展包加載失敗！"},
                  {"llseapi.require.download.success", " - 插件所需拓展包下載成功！已安裝到至："},
                  {"llseapi.require.network.fail", " - 插件所需拓展包下載請求失敗！錯誤代碼："},
                  {"Detected the existence of another BDS process with the same path!", "檢測到另一個相同的BDS進程存在!"},
                  {"This may cause the network port and the level to be occupied", "這可能會導致存檔和端口占用"},
                  {"Do you want to terminate the process with PID {}?  (y=Yes, n=No)", "您是否要強製終止該PID為 {} 的進程? (y=是, n=否)"},
              }}};