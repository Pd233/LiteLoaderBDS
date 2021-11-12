// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class Recipe {
public:
    virtual ~Recipe();
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&);
    virtual int getCraftingSize();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual bool matches(class CraftingContainer&, class Level&);
    virtual int size();
    virtual class mce::UUID const& getId();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual bool itemValidForRecipe(class ItemDescriptor const&, class ItemStack const&);
    virtual bool itemsMatch(class ItemDescriptor const&, int, int, class CompoundTag const*);
    virtual bool itemsMatch(class ItemDescriptor const&, class ItemDescriptor const&, class CompoundTag const*);
    virtual bool itemsMatch(class ItemDescriptor const&, class ItemDescriptor const&);
    virtual void unk_vfn_15();

public:
    MCAPI int countQuantityOfIngredient(class ItemInstance const&) const;
    MCAPI int getHeight() const;
    MCAPI std::vector<class RecipeIngredient> const& getIngredients() const;
    MCAPI class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const& getNetId() const;
    MCAPI int getPriority() const;
    MCAPI std::string getRecipeId() const;
    MCAPI class HashedString const& getTag() const;
    MCAPI int getWidth() const;
    MCAPI void setNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const&);

    MCAPI static bool isAnyAuxValue(class ItemDescriptor const&);
};