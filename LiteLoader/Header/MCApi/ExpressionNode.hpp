// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ExpressionNode {

public:
    MCAPI void clear();
    MCAPI bool deserialize(class BasicLoader&, struct SerializerTraits const&, class BedrockLoadContext const&);
    MCAPI float evalAsFloat(class RenderParams&) const;
    MCAPI struct MolangScriptArg const& evalGeneric(class RenderParams&) const;
    MCAPI std::string const& getExpressionString();
    MCAPI std::string const getExpressionString() const;
    MCAPI enum MolangVersion const getMolangVersion() const;
    MCAPI unsigned __int64 getTreeHash(bool) const;
    MCAPI bool getTreeString(std::string&, bool) const;
    MCAPI bool hasMadd() const;
    MCAPI bool operator==(class ExpressionNode const&);
    MCAPI class ExpressionNode& operator=(float);
    MCAPI class ExpressionNode& operator=(class ExpressionNode const&);
    MCAPI bool isInitialized() const;
    MCAPI bool isValid() const;
    MCAPI enum MolangCompileResult link() const;
    MCAPI void moveConstantChildToValueIfFloatOrHashType(int);
    MCAPI bool parse(std::string const&, enum MolangVersion, class gsl::span<class HashedString const, -1>);
    MCAPI bool serialize(class BasicSaver&, struct SerializerTraits const&) const;

    MCAPI static void bindType();
    MCAPI static void buildExpressionOpTable();
    MCAPI static float fast_atof_positiveOnly(char const*&);
    MCAPI static char const* getOpFriendlyName(enum ExpressionOp);
    MCAPI static class std::recursive_mutex& getQueryFunctionMutex();
    MCAPI static std::vector<std::string> mExpressionOpTokens;
    MCAPI static struct std::atomic<int> mNumRootExpressionsWithVariables;
    MCAPI static void setExperiments(class Experiments const&);
    MCAPI static void unregisterQueryFunction(std::string const&, class HashedString);

private:
    MCAPI bool _checkIsValidAndPopulateUsedTokenFlags(struct ExpressionOpBitField const&);
    MCAPI bool _optimize(enum MolangVersion);
    MCAPI bool _readNextToken(char const*&, class gsl::span<class HashedString const, -1> const&, enum MolangVersion);
    MCAPI void _setExpressionStringWithoutRelink(std::string const&);
    MCAPI bool _tokenize(char const*, struct ExpressionOpBitField&, class gsl::span<class HashedString const, -1> const&, enum MolangVersion);
    MCAPI bool _validate(enum MolangVersion, bool, int) const;
    MCAPI bool _validateChildrenAreNumerical(enum MolangVersion) const;
    MCAPI bool buildTree(struct ExpressionOpBitField const&);
    MCAPI struct MolangScriptArg const& executeMolangProgram(class RenderParams&, struct MolangEvalParams&) const;
    MCAPI bool findClosingOp(unsigned __int64&, enum ExpressionOp) const;
    MCAPI bool optimizeFunctionCallParams();
    MCAPI bool processArrays();
    MCAPI bool processBinaryExpression(enum ExpressionOp);
    MCAPI bool processMathFuncs();
    MCAPI bool processMemberAccessors();
    MCAPI bool processNegativesAndLogicalNots();
    MCAPI bool processQueriesAndFunctions();
    MCAPI bool processSections();
    MCAPI bool processSemicolons();
    MCAPI bool processUnaryExpression(enum ExpressionOp);

    MCAPI static enum MolangCompileResult _buildProgram(struct MolangProgramBuildState&, class ExpressionNode const*);
    MCAPI static struct MolangScriptArg* _getOrCreateReferencedMemberVariableScriptArg(struct MolangEvalParams&, class ExpressionNode const&);
    MCAPI static struct MolangScriptArg const* _getScriptArgFromMemberAccessedVariable(struct MolangEvalParams&, class ExpressionNode const&);
    MCAPI static bool _initializeMolangQueries();
    MCAPI static void _writeScriptArgToMemberAccessedVariable(struct MolangEvalParams&, class ExpressionNode const&, struct MolangScriptArg const&);
    MCAPI static void _writeScriptArgToMolangVariable(class MolangVariableMap&, enum MolangVariableIndex, struct MolangScriptArg const&);
    MCAPI static class ExperimentStorage mExperiments;
    MCAPI static bool mMolangInitialized;
};