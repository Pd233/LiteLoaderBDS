// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class MinecraftGameTest : public BlockSourceListener {
public:
    virtual ~MinecraftGameTest();
    virtual void unk_vfn_1();
    virtual void onSourceDestroyed(class BlockSource&);
    virtual bool shouldTick(int /*enum SimulationType*/);
    virtual void unk_vfn_4();
    virtual void unk_vfn_6();
    virtual();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();
    virtual void unk_vfn_13();
    virtual void unk_vfn_14();
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
    virtual void unk_vfn_19();
    virtual void unk_vfn_20();
    virtual void unk_vfn_21();
    virtual void unk_vfn_22();
    virtual void unk_vfn_23();
    virtual void unk_vfn_24();
    virtual void onLevelDestruction(std::string const&);
    virtual void unk_vfn_26();
    virtual void unk_vfn_27();
    virtual void unk_vfn_28();
    virtual void unk_vfn_29();
    virtual void unk_vfn_30();
    virtual void unk_vfn_31();
    virtual void unk_vfn_32();
    virtual void unk_vfn_33();
    virtual void unk_vfn_34();
    virtual void unk_vfn_35();
    virtual void unk_vfn_36();
    virtual void unk_vfn_37();
    virtual void unk_vfn_38();
    virtual void unk_vfn_39();
    virtual void unk_vfn_40();
    virtual void unk_vfn_41();
    virtual void unk_vfn_42();
    virtual void unk_vfn_43();
    virtual void unk_vfn_44();
    virtual void unk_vfn_45();
    virtual void unk_vfn_46();
    virtual void unk_vfn_47();
    virtual void unk_vfn_48();
    virtual void unk_vfn_49();
    virtual void unk_vfn_50();
    virtual void unk_vfn_51();
    virtual void unk_vfn_52();
    virtual void unk_vfn_53();
    virtual void unk_vfn_54();
    virtual void unk_vfn_55();
    virtual void unk_vfn_56();
    virtual void unk_vfn_57();
    virtual void unk_vfn_58();
    virtual void unk_vfn_59();
    virtual void unk_vfn_60();
    virtual void unk_vfn_61();
    virtual void unk_vfn_62();
    virtual void unk_vfn_63();
    virtual void unk_vfn_64();
    virtual void unk_vfn_65();
    virtual void unk_vfn_66();
    virtual void unk_vfn_67();
    virtual void unk_vfn_68();
    virtual void unk_vfn_69();
    virtual void unk_vfn_70();
    virtual void unk_vfn_71();
    virtual void unk_vfn_72();
    virtual void unk_vfn_73();
    virtual void unk_vfn_74();
    virtual void unk_vfn_75();
    virtual void unk_vfn_76();
    virtual void unk_vfn_77();
    virtual void unk_vfn_78();
    virtual void unk_vfn_79();
    virtual void unk_vfn_80();
    virtual void unk_vfn_81();
    virtual void unk_vfn_82();
    virtual void unk_vfn_83();
    virtual void unk_vfn_84();
    virtual void unk_vfn_85();
    virtual void unk_vfn_86();
    virtual void unk_vfn_87();
    virtual void unk_vfn_88();
    virtual void unk_vfn_89();
    virtual void unk_vfn_90();
    virtual void unk_vfn_91();

public:
    MCAPI void clearAllTests(class BlockSource&);
    MCAPI class gametest::GameTestRegistry& getRegistry();
    MCAPI class gametest::GameTestTicker& getTicker();
    MCAPI void loadExistingTests(class Level&);
    MCAPI void registerDefaultGameBatches(class Level&);
    MCAPI void registerNativeGameTests();
    MCAPI std::string runTest(std::string const&, class Dimension&, struct gametest::TestParameters const&);
    MCAPI std::string runTestAt(class BlockSource&, class BlockPos const&, class std::optional<enum Rotation>);

private:
    MCAPI void _runTestPreparation(class gametest::BaseGameTestFunction const&);
};