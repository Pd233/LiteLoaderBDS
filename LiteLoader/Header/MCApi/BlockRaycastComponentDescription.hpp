// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class BlockRaycastComponentDescription {
public:
    virtual ~BlockRaycastComponentDescription();
    virtual std::string const& getName();
    virtual void initializeComponent(class EntityContext&);
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&, class BlockComponentFactory const&);
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();

public:
    MCAPI static std::string const NameID;
};