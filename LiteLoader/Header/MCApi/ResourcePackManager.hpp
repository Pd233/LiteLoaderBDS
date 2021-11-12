// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ResourcePackManager {
public:
    virtual ~ResourcePackManager();
    virtual bool load(class ResourceLocationPair const&, std::string&, std::vector<std::string> const&);
    virtual bool load(class ResourceLocation const&, std::string&, std::vector<std::string> const&);
    virtual bool load(class ResourceLocation const&, std::string&);
    virtual std::vector<class LoadedResourceData> loadAllVersionsOf(class ResourceLocation const&);
    virtual bool isInStreamableLocation(class ResourceLocation const&, std::vector<std::string> const&);
    virtual bool isInStreamableLocation(class ResourceLocation const&);
    virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const&, std::vector<std::string> const&);
    virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const&);
    virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const&, std::vector<std::string>);
    virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const&);
    virtual struct std::pair<int, std::string const&> getPackStackIndexOfResource(class ResourceLocation const&, std::vector<std::string> const&);
    virtual bool hasCapability(class gsl::basic_string_span<char const, -1>);

public:
    MCAPI int composeFullStack(class ResourcePackStack&, class ResourcePackStack const&, class ResourcePackStack const&, class ResourcePackStack const&) const;
    MCAPI class SemVersion getFullStackMinEngineVersion() const;
    MCAPI class PackSourceReport const* getPackSourceReport() const;
    MCAPI class ResourcePackStack const& getStack(enum ResourcePackStackType) const;
    MCAPI void handlePendingStackChanges();
    MCAPI bool hasResource(class ResourceLocation const&) const;
    MCAPI bool loadAllVersionsOf(class ResourceLocation const&, class ResourcePackMergeStrategy&) const;
    MCAPI void registerResourcePackListener(class ResourcePackListener&);
    MCAPI void setPackSourceReport(class PackSourceReport&&);
    MCAPI bool setStack(std::unique_ptr<class ResourcePackStack>, enum ResourcePackStackType, bool);
    MCAPI void unRegisterResourcePackListener(class ResourcePackListener&);

private:
    MCAPI void _calculateMinEngineVersionFromFullStack();
    MCAPI void _composeFullStack();
    MCAPI class PackInstance* _getPackForResource(class Core::Path const&) const;
    MCAPI void _updateLanguageSubpacks();
};