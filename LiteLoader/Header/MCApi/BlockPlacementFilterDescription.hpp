// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class BlockPlacementFilterDescription {
public:
    virtual ~BlockPlacementFilterDescription();
    virtual std::string const& getName();
    virtual void initializeComponent(class EntityContext&);
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&, class BlockComponentFactory const&);
    virtual void unk_vfn_4();
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag();
    virtual void initializeFromNetwork(class CompoundTag const&);

public:
    MCAPI static std::string const NameID;
};