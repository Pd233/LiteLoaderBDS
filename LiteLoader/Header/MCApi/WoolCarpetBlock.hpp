// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class WoolCarpetBlock : public CarpetBlock {
public:
    virtual ~WoolCarpetBlock();
    virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&);
    virtual bool isObstructingChests(class BlockSource&, class BlockPos const&);
    virtual class Vec3 randomlyModifyPosition(class BlockPos const&);
    virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool);
    virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&);
    virtual void onLightningHit(class BlockSource&, class BlockPos const&);
    virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const&(class BlockPos const&)> const&, class BlockPos const&);
    virtual void unk_vfn_17();
    virtual bool isStrippable(class Block const&);
    virtual class Block const& getStrippedBlock(class Block const&);
    virtual class CopperBehavior const* tryGetCopperBehavior();
    virtual void unk_vfn_25();
    virtual void unk_vfn_26();
    virtual void unk_vfn_27();
    virtual void unk_vfn_29();
    virtual void unk_vfn_30();
    virtual void unk_vfn_31();
    virtual void unk_vfn_32();
    virtual void unk_vfn_33();
    virtual void unk_vfn_34();
    virtual void unk_vfn_35();
    virtual bool isDoubleSlabBlock();
    virtual void unk_vfn_37();
    virtual void unk_vfn_38();
    virtual void unk_vfn_39();
    virtual void unk_vfn_40();
    virtual void unk_vfn_41();
    virtual void unk_vfn_43();
    virtual void unk_vfn_44();
    virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&);
    virtual bool isValidAuxValue(int);
    virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&);
    virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&);
    virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int);
    virtual void unk_vfn_51();
    virtual void unk_vfn_52();
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int);
    virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float);
    virtual void unk_vfn_58();
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&);
    virtual bool shouldDispense(class BlockSource&, class Container&);
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char);
    virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float);
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool);
    virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&);
    virtual void unk_vfn_65();
    virtual void movedByPiston(class BlockSource&, class BlockPos const&);
    virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&);
    virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&);
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&);
    virtual int /*enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&);
    virtual void unk_vfn_72();
    virtual bool isFilteredOut(int /*enum BlockRenderLayer*/);
    virtual bool ignoreEntitiesOnPistonMove(class Block const&);
    virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum FertilizerType*/);
    virtual bool mayConsumeFertilizer(class BlockSource&);
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&);
    virtual bool mayPick();
    virtual bool mayPlace(class BlockSource&, class BlockPos const&);
    virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char);
    virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&);
    virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&);
    virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*);
    virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&);
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&);
    virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&);
    virtual int getResourceCount(class Randomize&, class Block const&, int);
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int);
    virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&);
    virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const*>*, float, int);
    virtual void unk_vfn_96();
    virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int);
    virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&);
    virtual bool attack(class Player*, class BlockPos const&);
    virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&);
    virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&);
    virtual int getExperienceDrop(class Random&);
    virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int);
    virtual void unk_vfn_114();
    virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&);
    virtual void unk_vfn_116();
    virtual void unk_vfn_117();
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char);
    virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&);
    virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&);
    virtual void unk_vfn_122();
    virtual int getIconYOffset();
    virtual bool isAuxValueRelevantForPicking();
    virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&);
    virtual int getColor(class Block const&);
    virtual int getColorAtPos(class BlockSource&, class BlockPos const&);
    virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&);
    virtual void unk_vfn_138();
    virtual class Block const& getRenderBlock();
    virtual unsigned char getMappedFace(unsigned char, class Block const&);
    virtual int /*enum Flip*/ getFaceFlip(unsigned char, class Block const&);
    virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&);
    virtual void unk_vfn_154();
    virtual class ItemInstance getSilkTouchItemInstance(class Block const&);
    virtual class Block const* tryLegacyUpgrade(unsigned short);
    virtual bool dealsContactDamage(class Actor const&, class Block const&, bool);
    virtual class Block const* tryGetInfested(class Block const&);
    virtual class Block const* tryGetUninfested(class Block const&);
    virtual void onRemove(class BlockSource&, class BlockPos const&);
    virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*);
    virtual void onStandOn(class Actor&, class BlockPos const&);
    virtual void onStepOn(class Actor&, class BlockPos const&);
    virtual void unk_vfn_167();
    virtual void unk_vfn_168();
    virtual void unk_vfn_175();
    virtual bool use(class Player&, class BlockPos const&, unsigned char);
    virtual void unk_vfn_181();
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&);
    virtual void unk_vfn_185();
    virtual void unk_vfn_186();
    virtual void unk_vfn_190();
    virtual void unk_vfn_191();
    virtual void unk_vfn_192();
    virtual void unk_vfn_193();
    virtual void unk_vfn_194();
    virtual void unk_vfn_195();
    virtual void unk_vfn_196();
    virtual void unk_vfn_197();
    virtual void unk_vfn_198();
    virtual void unk_vfn_199();
    virtual void unk_vfn_200();
    virtual void unk_vfn_201();
    virtual void unk_vfn_202();
    virtual void unk_vfn_203();
    virtual void unk_vfn_204();
    virtual void unk_vfn_205();
    virtual void unk_vfn_206();
    virtual void unk_vfn_207();
    virtual void unk_vfn_208();
    virtual void unk_vfn_209();
    virtual void unk_vfn_210();
    virtual void unk_vfn_211();
    virtual void unk_vfn_212();
    virtual void unk_vfn_213();
    virtual void unk_vfn_214();
    virtual void unk_vfn_215();
    virtual void unk_vfn_216();
    virtual void unk_vfn_217();
    virtual void unk_vfn_218();
    virtual void unk_vfn_219();
    virtual void unk_vfn_220();
    virtual void unk_vfn_221();
    virtual void unk_vfn_222();
    virtual void unk_vfn_223();
    virtual void unk_vfn_224();
    virtual void unk_vfn_225();
    virtual void unk_vfn_226();
    virtual void unk_vfn_227();
    virtual void unk_vfn_228();
    virtual void unk_vfn_229();
    virtual void unk_vfn_230();
    virtual void unk_vfn_231();
    virtual void unk_vfn_232();
    virtual void unk_vfn_233();
    virtual void unk_vfn_234();
    virtual void unk_vfn_235();
    virtual void unk_vfn_236();
    virtual void unk_vfn_237();
    virtual void unk_vfn_238();
    virtual void unk_vfn_239();
    virtual void unk_vfn_240();
    virtual void unk_vfn_241();
    virtual void unk_vfn_242();
    virtual void unk_vfn_243();
    virtual void unk_vfn_244();
    virtual void unk_vfn_245();
    virtual void unk_vfn_246();
    virtual void unk_vfn_247();
    virtual void unk_vfn_248();
    virtual void unk_vfn_249();
    virtual void unk_vfn_250();
    virtual void unk_vfn_251();
    virtual void unk_vfn_252();
    virtual void unk_vfn_253();
    virtual void unk_vfn_254();
    virtual void unk_vfn_255();
    virtual void unk_vfn_256();
    virtual void unk_vfn_257();
    virtual void unk_vfn_258();
    virtual void unk_vfn_259();
    virtual void unk_vfn_260();
    virtual void unk_vfn_261();
    virtual void unk_vfn_262();
    virtual void unk_vfn_263();
    virtual void unk_vfn_264();
    virtual void unk_vfn_265();
    virtual void unk_vfn_266();
    virtual void unk_vfn_267();
    virtual void unk_vfn_268();
    virtual void unk_vfn_269();
    virtual void unk_vfn_270();
    virtual void unk_vfn_271();
    virtual void unk_vfn_272();
    virtual void unk_vfn_273();
    virtual void unk_vfn_274();
    virtual void unk_vfn_275();
    virtual void unk_vfn_276();
    virtual void unk_vfn_277();
    virtual void unk_vfn_278();
    virtual void unk_vfn_279();
    virtual void unk_vfn_280();
    virtual void unk_vfn_281();
    virtual void unk_vfn_282();
    virtual void unk_vfn_283();
    virtual void unk_vfn_284();
    virtual void unk_vfn_285();
    virtual void unk_vfn_286();
    virtual void unk_vfn_287();
    virtual void unk_vfn_288();
    virtual void unk_vfn_289();
    virtual void unk_vfn_290();
    virtual void unk_vfn_291();
    virtual void unk_vfn_292();
    virtual void unk_vfn_293();
    virtual void unk_vfn_294();
    virtual void unk_vfn_295();
    virtual void unk_vfn_296();
    virtual void unk_vfn_297();
    virtual void unk_vfn_298();
    virtual void unk_vfn_299();
    virtual void unk_vfn_300();
    virtual void unk_vfn_301();
    virtual void unk_vfn_302();
    virtual void unk_vfn_303();
    virtual void unk_vfn_304();
    virtual void unk_vfn_305();
    virtual void unk_vfn_306();
    virtual void unk_vfn_307();
    virtual void unk_vfn_308();
    virtual void unk_vfn_309();
    virtual void unk_vfn_310();
    virtual void unk_vfn_311();
    virtual void unk_vfn_312();
    virtual void unk_vfn_313();
    virtual void unk_vfn_314();
    virtual void unk_vfn_315();
    virtual void unk_vfn_316();
    virtual void unk_vfn_317();
    virtual void unk_vfn_318();
    virtual void unk_vfn_319();
    virtual void unk_vfn_320();
    virtual void unk_vfn_321();
    virtual void unk_vfn_322();
    virtual void unk_vfn_323();
    virtual void unk_vfn_324();
    virtual void unk_vfn_325();
    virtual void unk_vfn_326();
    virtual void unk_vfn_327();
    virtual void unk_vfn_328();
    virtual void unk_vfn_329();
    virtual void unk_vfn_330();
    virtual void unk_vfn_331();
    virtual void unk_vfn_332();
    virtual void unk_vfn_333();
    virtual void unk_vfn_334();
    virtual void unk_vfn_335();
    virtual void unk_vfn_336();
    virtual void unk_vfn_337();
    virtual void unk_vfn_338();
    virtual void unk_vfn_339();
    virtual void unk_vfn_340();
    virtual void unk_vfn_341();
    virtual void unk_vfn_342();
    virtual void unk_vfn_343();
    virtual void unk_vfn_344();
    virtual void unk_vfn_345();
    virtual void unk_vfn_346();
    virtual void unk_vfn_347();
    virtual void unk_vfn_348();
    virtual void unk_vfn_349();
    virtual void unk_vfn_350();
    virtual void unk_vfn_351();
    virtual void unk_vfn_352();
    virtual void unk_vfn_353();
    virtual void unk_vfn_354();
    virtual void unk_vfn_355();
    virtual void unk_vfn_356();
    virtual void unk_vfn_357();
    virtual void unk_vfn_358();
    virtual void unk_vfn_359();
    virtual void unk_vfn_360();
    virtual void unk_vfn_361();
    virtual void unk_vfn_362();
    virtual void unk_vfn_363();
    virtual void unk_vfn_364();
    virtual void unk_vfn_365();
    virtual void unk_vfn_366();
    virtual void unk_vfn_367();
    virtual void unk_vfn_368();
    virtual void unk_vfn_369();
    virtual void unk_vfn_370();
    virtual void unk_vfn_371();
    virtual void unk_vfn_372();
    virtual void unk_vfn_373();
    virtual void unk_vfn_374();
    virtual void unk_vfn_375();
    virtual void unk_vfn_376();
    virtual void unk_vfn_377();
    virtual void unk_vfn_378();
    virtual void unk_vfn_379();
    virtual void unk_vfn_380();
    virtual void unk_vfn_381();
    virtual void unk_vfn_382();
    virtual void unk_vfn_383();
    virtual void unk_vfn_384();
    virtual void unk_vfn_385();
    virtual void unk_vfn_386();
    virtual void unk_vfn_387();
    virtual void unk_vfn_388();
    virtual void unk_vfn_389();
    virtual void unk_vfn_390();
    virtual void unk_vfn_391();
    virtual void unk_vfn_392();
    virtual void unk_vfn_393();
    virtual void unk_vfn_394();
    virtual void unk_vfn_395();
    virtual void unk_vfn_396();
    virtual void unk_vfn_397();
    virtual void unk_vfn_398();
    virtual void unk_vfn_399();
    virtual void unk_vfn_400();
    virtual void unk_vfn_401();
    virtual void unk_vfn_402();
    virtual void unk_vfn_403();
    virtual void unk_vfn_404();
    virtual void unk_vfn_405();
    virtual void unk_vfn_406();
    virtual void unk_vfn_407();
    virtual void unk_vfn_408();
    virtual void unk_vfn_409();
    virtual void unk_vfn_410();
    virtual void unk_vfn_411();
    virtual void unk_vfn_412();
    virtual void unk_vfn_413();
    virtual void unk_vfn_414();
    virtual void unk_vfn_415();
    virtual void unk_vfn_416();
    virtual void unk_vfn_417();
    virtual void unk_vfn_418();
    virtual void unk_vfn_419();
    virtual void unk_vfn_420();
    virtual void unk_vfn_421();
    virtual void unk_vfn_422();
    virtual void unk_vfn_423();
    virtual void unk_vfn_424();
    virtual void unk_vfn_425();
    virtual void unk_vfn_426();
    virtual void unk_vfn_427();
    virtual void unk_vfn_428();
    virtual void unk_vfn_429();
    virtual void unk_vfn_430();
    virtual void unk_vfn_431();
    virtual void unk_vfn_432();
    virtual void unk_vfn_433();
    virtual void unk_vfn_434();
    virtual void unk_vfn_435();
    virtual void unk_vfn_436();
    virtual void unk_vfn_437();
    virtual void unk_vfn_438();
    virtual void unk_vfn_439();
    virtual void unk_vfn_440();
    virtual void unk_vfn_441();
    virtual void unk_vfn_442();
    virtual void unk_vfn_443();
    virtual void unk_vfn_444();
    virtual void unk_vfn_445();
    virtual void unk_vfn_446();
    virtual void unk_vfn_447();
    virtual void unk_vfn_448();
    virtual void unk_vfn_449();
    virtual void unk_vfn_450();
    virtual void unk_vfn_451();
    virtual void unk_vfn_452();
    virtual void unk_vfn_453();
    virtual void unk_vfn_454();
    virtual void unk_vfn_455();
    virtual void unk_vfn_456();
    virtual void unk_vfn_457();
    virtual void unk_vfn_458();
    virtual void unk_vfn_459();
    virtual void unk_vfn_460();
    virtual void unk_vfn_461();
    virtual void unk_vfn_462();
    virtual void unk_vfn_463();
    virtual void unk_vfn_464();
    virtual void unk_vfn_465();
    virtual void unk_vfn_466();
    virtual void unk_vfn_467();
    virtual void unk_vfn_468();
    virtual void unk_vfn_469();
    virtual void unk_vfn_470();
    virtual void unk_vfn_471();
    virtual void unk_vfn_472();
    virtual void unk_vfn_473();
    virtual void unk_vfn_474();
    virtual void unk_vfn_475();
    virtual void unk_vfn_476();
    virtual void unk_vfn_477();
    virtual void unk_vfn_478();
    virtual void unk_vfn_479();
    virtual void unk_vfn_480();
    virtual void unk_vfn_481();
    virtual void unk_vfn_482();
    virtual void unk_vfn_483();
    virtual void unk_vfn_484();
    virtual void unk_vfn_485();
    virtual void unk_vfn_486();
    virtual void unk_vfn_487();
    virtual void unk_vfn_488();
    virtual void unk_vfn_489();
    virtual void unk_vfn_490();
    virtual void unk_vfn_491();
    virtual void unk_vfn_492();
    virtual void unk_vfn_493();
    virtual void unk_vfn_494();
    virtual void unk_vfn_495();
    virtual void unk_vfn_496();
    virtual void unk_vfn_497();
    virtual void unk_vfn_498();
    virtual void unk_vfn_499();
    virtual void unk_vfn_500();
    virtual void unk_vfn_501();
    virtual void unk_vfn_502();
    virtual void unk_vfn_503();
    virtual void unk_vfn_504();
    virtual void unk_vfn_505();
    virtual void unk_vfn_506();
    virtual void unk_vfn_507();
    virtual void unk_vfn_508();
    virtual void unk_vfn_509();
    virtual void unk_vfn_510();
    virtual void unk_vfn_511();
    virtual void unk_vfn_512();
    virtual void unk_vfn_513();
    virtual void unk_vfn_514();
    virtual void unk_vfn_515();
    virtual void unk_vfn_516();
    virtual void unk_vfn_517();
    virtual void unk_vfn_518();
    virtual void unk_vfn_519();
    virtual void unk_vfn_520();
    virtual void unk_vfn_521();
    virtual void unk_vfn_522();
    virtual void unk_vfn_523();
    virtual void unk_vfn_524();
    virtual void unk_vfn_525();
    virtual void unk_vfn_526();
    virtual void unk_vfn_527();
    virtual void unk_vfn_528();
    virtual void unk_vfn_529();
    virtual void unk_vfn_530();
    virtual void unk_vfn_531();
    virtual void unk_vfn_532();
    virtual void unk_vfn_533();
    virtual void unk_vfn_534();
    virtual void unk_vfn_535();
    virtual void unk_vfn_536();
    virtual void unk_vfn_537();
    virtual void unk_vfn_538();
    virtual void unk_vfn_539();
    virtual void unk_vfn_540();
    virtual void unk_vfn_541();
    virtual void unk_vfn_542();
    virtual void unk_vfn_543();
    virtual void unk_vfn_544();
    virtual void unk_vfn_545();
    virtual void unk_vfn_546();
    virtual void unk_vfn_547();
    virtual void unk_vfn_548();
    virtual void unk_vfn_549();
    virtual void unk_vfn_550();
    virtual void unk_vfn_551();
    virtual void unk_vfn_552();
    virtual void unk_vfn_553();
    virtual void unk_vfn_554();
    virtual void unk_vfn_555();
    virtual void unk_vfn_556();
    virtual void unk_vfn_557();
    virtual void unk_vfn_558();
    virtual void unk_vfn_559();
    virtual void unk_vfn_560();
    virtual void unk_vfn_561();
    virtual void unk_vfn_562();
    virtual void unk_vfn_563();
    virtual void unk_vfn_564();
    virtual void unk_vfn_565();
    virtual void unk_vfn_566();
    virtual void unk_vfn_567();
    virtual void unk_vfn_568();
    virtual void unk_vfn_569();
    virtual void unk_vfn_570();
    virtual void unk_vfn_571();
    virtual void unk_vfn_572();
    virtual void unk_vfn_573();
    virtual void unk_vfn_574();
    virtual void unk_vfn_575();
    virtual void unk_vfn_576();
    virtual void unk_vfn_577();
    virtual void unk_vfn_578();
    virtual void unk_vfn_579();
    virtual void unk_vfn_580();
    virtual void unk_vfn_581();
    virtual void unk_vfn_582();
    virtual void unk_vfn_583();
    virtual void unk_vfn_584();
    virtual void unk_vfn_585();
    virtual void unk_vfn_586();
    virtual void unk_vfn_587();
    virtual void unk_vfn_588();
    virtual void unk_vfn_589();
    virtual void unk_vfn_590();
    virtual void unk_vfn_591();
    virtual void unk_vfn_592();
    virtual void unk_vfn_593();
    virtual void unk_vfn_594();
    virtual void unk_vfn_595();
    virtual void unk_vfn_596();
    virtual void unk_vfn_597();
    virtual void unk_vfn_598();
    virtual void unk_vfn_599();
    virtual void unk_vfn_600();
    virtual void unk_vfn_601();
    virtual void unk_vfn_602();
    virtual void unk_vfn_603();
    virtual void unk_vfn_604();
    virtual void unk_vfn_605();
    virtual void unk_vfn_606();
    virtual void unk_vfn_607();
    virtual void unk_vfn_608();
    virtual void unk_vfn_609();
    virtual void unk_vfn_610();
    virtual void unk_vfn_611();
    virtual void unk_vfn_612();
    virtual void unk_vfn_613();
    virtual void unk_vfn_614();
    virtual void unk_vfn_615();
    virtual void unk_vfn_616();
    virtual void unk_vfn_617();
    virtual void unk_vfn_618();
    virtual void unk_vfn_619();
    virtual void unk_vfn_620();
    virtual void unk_vfn_621();
    virtual void unk_vfn_622();
    virtual void unk_vfn_623();
    virtual void unk_vfn_624();
    virtual void unk_vfn_625();
    virtual void unk_vfn_626();
    virtual void unk_vfn_627();
    virtual void unk_vfn_628();
    virtual void unk_vfn_629();
    virtual void unk_vfn_630();
    virtual void unk_vfn_631();
    virtual void unk_vfn_632();
    virtual void unk_vfn_633();
    virtual void unk_vfn_634();
    virtual void unk_vfn_635();
    virtual void unk_vfn_636();
    virtual void unk_vfn_637();
    virtual void unk_vfn_638();
    virtual void unk_vfn_639();
    virtual void unk_vfn_640();
    virtual void unk_vfn_641();
    virtual void unk_vfn_642();
    virtual void unk_vfn_643();
    virtual void unk_vfn_644();
    virtual void unk_vfn_645();
};