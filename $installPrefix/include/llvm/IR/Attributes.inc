#ifdef GET_ATTR_NAMES
#undef GET_ATTR_NAMES
#ifndef ATTRIBUTE_ALL
#define ATTRIBUTE_ALL(FIRST, SECOND)
#endif

#ifndef ATTRIBUTE_ENUM
#define ATTRIBUTE_ENUM(FIRST, SECOND) ATTRIBUTE_ALL(FIRST, SECOND)
#endif

ATTRIBUTE_ENUM(AllocAlign,allocalign)
ATTRIBUTE_ENUM(AllocatedPointer,allocptr)
ATTRIBUTE_ENUM(AlwaysInline,alwaysinline)
ATTRIBUTE_ENUM(Builtin,builtin)
ATTRIBUTE_ENUM(Cold,cold)
ATTRIBUTE_ENUM(Convergent,convergent)
ATTRIBUTE_ENUM(CoroDestroyOnlyWhenComplete,coro_only_destroy_when_complete)
ATTRIBUTE_ENUM(DeadOnUnwind,dead_on_unwind)
ATTRIBUTE_ENUM(DisableBlockPlacementPass,disable_blockplacement_pass)
ATTRIBUTE_ENUM(DisableCodeGenPreparePass,disable_codegen_prepare_pass)
ATTRIBUTE_ENUM(DisableSanitizerInstrumentation,disable_sanitizer_instrumentation)
ATTRIBUTE_ENUM(FnRetThunkExtern,fn_ret_thunk_extern)
ATTRIBUTE_ENUM(HasCXXSEH,has_cxxseh)
ATTRIBUTE_ENUM(HasSEH,has_seh)
ATTRIBUTE_ENUM(Hot,hot)
ATTRIBUTE_ENUM(ImmArg,immarg)
ATTRIBUTE_ENUM(InReg,inreg)
ATTRIBUTE_ENUM(InlineHint,inlinehint)
ATTRIBUTE_ENUM(IsFastISelDisabled,is_fastisel_disabled)
ATTRIBUTE_ENUM(IsSEHFilterFunction,is_sehfilter_function)
ATTRIBUTE_ENUM(IsSEHFinallyFunction,is_sehfinally_function)
ATTRIBUTE_ENUM(IsVolatileFunction,is_volatile_function)
ATTRIBUTE_ENUM(JumpTable,jumptable)
ATTRIBUTE_ENUM(Marker,marker)
ATTRIBUTE_ENUM(MinSize,minsize)
ATTRIBUTE_ENUM(MustProgress,mustprogress)
ATTRIBUTE_ENUM(Naked,naked)
ATTRIBUTE_ENUM(Nest,nest)
ATTRIBUTE_ENUM(NoAlias,noalias)
ATTRIBUTE_ENUM(NoBuiltin,nobuiltin)
ATTRIBUTE_ENUM(NoCallback,nocallback)
ATTRIBUTE_ENUM(NoCapture,nocapture)
ATTRIBUTE_ENUM(NoCfCheck,nocf_check)
ATTRIBUTE_ENUM(NoDuplicate,noduplicate)
ATTRIBUTE_ENUM(NoFree,nofree)
ATTRIBUTE_ENUM(NoImplicitFloat,noimplicitfloat)
ATTRIBUTE_ENUM(NoInline,noinline)
ATTRIBUTE_ENUM(NoMerge,nomerge)
ATTRIBUTE_ENUM(NoProfile,noprofile)
ATTRIBUTE_ENUM(NoRecurse,norecurse)
ATTRIBUTE_ENUM(NoRedZone,noredzone)
ATTRIBUTE_ENUM(NoReturn,noreturn)
ATTRIBUTE_ENUM(NoSanitizeBounds,nosanitize_bounds)
ATTRIBUTE_ENUM(NoSanitizeCoverage,nosanitize_coverage)
ATTRIBUTE_ENUM(NoSync,nosync)
ATTRIBUTE_ENUM(NoUndef,noundef)
ATTRIBUTE_ENUM(NoUnwind,nounwind)
ATTRIBUTE_ENUM(NonLazyBind,nonlazybind)
ATTRIBUTE_ENUM(NonNull,nonnull)
ATTRIBUTE_ENUM(NullPointerIsValid,null_pointer_is_valid)
ATTRIBUTE_ENUM(OptForFuzzing,optforfuzzing)
ATTRIBUTE_ENUM(OptimizeForDebugging,optdebug)
ATTRIBUTE_ENUM(OptimizeForSize,optsize)
ATTRIBUTE_ENUM(OptimizeNone,optnone)
ATTRIBUTE_ENUM(PresplitCoroutine,presplitcoroutine)
ATTRIBUTE_ENUM(ReadNone,readnone)
ATTRIBUTE_ENUM(ReadOnly,readonly)
ATTRIBUTE_ENUM(Returned,returned)
ATTRIBUTE_ENUM(ReturnsTwice,returns_twice)
ATTRIBUTE_ENUM(SExt,signext)
ATTRIBUTE_ENUM(SafeStack,safestack)
ATTRIBUTE_ENUM(SanitizeAddress,sanitize_address)
ATTRIBUTE_ENUM(SanitizeHWAddress,sanitize_hwaddress)
ATTRIBUTE_ENUM(SanitizeMemTag,sanitize_memtag)
ATTRIBUTE_ENUM(SanitizeMemory,sanitize_memory)
ATTRIBUTE_ENUM(SanitizeThread,sanitize_thread)
ATTRIBUTE_ENUM(ShadowCallStack,shadowcallstack)
ATTRIBUTE_ENUM(SkipProfile,skipprofile)
ATTRIBUTE_ENUM(Speculatable,speculatable)
ATTRIBUTE_ENUM(SpeculativeLoadHardening,speculative_load_hardening)
ATTRIBUTE_ENUM(StackProtect,ssp)
ATTRIBUTE_ENUM(StackProtectReq,sspreq)
ATTRIBUTE_ENUM(StackProtectStrong,sspstrong)
ATTRIBUTE_ENUM(StrictFP,strictfp)
ATTRIBUTE_ENUM(SwiftAsync,swiftasync)
ATTRIBUTE_ENUM(SwiftError,swifterror)
ATTRIBUTE_ENUM(SwiftSelf,swiftself)
ATTRIBUTE_ENUM(WillReturn,willreturn)
ATTRIBUTE_ENUM(Writable,writable)
ATTRIBUTE_ENUM(WriteOnly,writeonly)
ATTRIBUTE_ENUM(ZExt,zeroext)
ATTRIBUTE_ENUM(ByRef,byref)
ATTRIBUTE_ENUM(ByVal,byval)
ATTRIBUTE_ENUM(ElementType,elementtype)
ATTRIBUTE_ENUM(InAlloca,inalloca)
ATTRIBUTE_ENUM(Preallocated,preallocated)
ATTRIBUTE_ENUM(StructRet,sret)
ATTRIBUTE_ENUM(Alignment,align)
ATTRIBUTE_ENUM(AllocKind,allockind)
ATTRIBUTE_ENUM(AllocSize,allocsize)
ATTRIBUTE_ENUM(Dereferenceable,dereferenceable)
ATTRIBUTE_ENUM(DereferenceableOrNull,dereferenceable_or_null)
ATTRIBUTE_ENUM(Memory,memory)
ATTRIBUTE_ENUM(NoFPClass,nofpclass)
ATTRIBUTE_ENUM(StackAlignment,alignstack)
ATTRIBUTE_ENUM(UWTable,uwtable)
ATTRIBUTE_ENUM(VScaleRange,vscale_range)
#undef ATTRIBUTE_ENUM

#ifndef ATTRIBUTE_STRBOOL
#define ATTRIBUTE_STRBOOL(FIRST, SECOND) ATTRIBUTE_ALL(FIRST, SECOND)
#endif

ATTRIBUTE_STRBOOL(ApproxFuncFPMath,approx-func-fp-math)
ATTRIBUTE_STRBOOL(LessPreciseFPMAD,less-precise-fpmad)
ATTRIBUTE_STRBOOL(NoInfsFPMath,no-infs-fp-math)
ATTRIBUTE_STRBOOL(NoInlineLineTables,no-inline-line-tables)
ATTRIBUTE_STRBOOL(NoJumpTables,no-jump-tables)
ATTRIBUTE_STRBOOL(NoNansFPMath,no-nans-fp-math)
ATTRIBUTE_STRBOOL(NoSignedZerosFPMath,no-signed-zeros-fp-math)
ATTRIBUTE_STRBOOL(ProfileSampleAccurate,profile-sample-accurate)
ATTRIBUTE_STRBOOL(UnsafeFPMath,unsafe-fp-math)
ATTRIBUTE_STRBOOL(UseSampleProfile,use-sample-profile)
#undef ATTRIBUTE_STRBOOL

#ifndef ATTRIBUTE_COMPLEXSTR
#define ATTRIBUTE_COMPLEXSTR(FIRST, SECOND) ATTRIBUTE_ALL(FIRST, SECOND)
#endif

ATTRIBUTE_COMPLEXSTR(DenormalFPMath,denormal-fp-math)
ATTRIBUTE_COMPLEXSTR(DenormalFPMathF32,denormal-fp-math-f32)
#undef ATTRIBUTE_COMPLEXSTR

#undef ATTRIBUTE_ALL
#endif

#ifdef GET_ATTR_ENUM
#undef GET_ATTR_ENUM
FirstEnumAttr = 1,
AllocAlign = 1,
AllocatedPointer = 2,
AlwaysInline = 3,
Builtin = 4,
Cold = 5,
Convergent = 6,
CoroDestroyOnlyWhenComplete = 7,
DeadOnUnwind = 8,
DisableBlockPlacementPass = 9,
DisableCodeGenPreparePass = 10,
DisableSanitizerInstrumentation = 11,
FnRetThunkExtern = 12,
HasCXXSEH = 13,
HasSEH = 14,
Hot = 15,
ImmArg = 16,
InReg = 17,
InlineHint = 18,
IsFastISelDisabled = 19,
IsSEHFilterFunction = 20,
IsSEHFinallyFunction = 21,
IsVolatileFunction = 22,
JumpTable = 23,
Marker = 24,
MinSize = 25,
MustProgress = 26,
Naked = 27,
Nest = 28,
NoAlias = 29,
NoBuiltin = 30,
NoCallback = 31,
NoCapture = 32,
NoCfCheck = 33,
NoDuplicate = 34,
NoFree = 35,
NoImplicitFloat = 36,
NoInline = 37,
NoMerge = 38,
NoProfile = 39,
NoRecurse = 40,
NoRedZone = 41,
NoReturn = 42,
NoSanitizeBounds = 43,
NoSanitizeCoverage = 44,
NoSync = 45,
NoUndef = 46,
NoUnwind = 47,
NonLazyBind = 48,
NonNull = 49,
NullPointerIsValid = 50,
OptForFuzzing = 51,
OptimizeForDebugging = 52,
OptimizeForSize = 53,
OptimizeNone = 54,
PresplitCoroutine = 55,
ReadNone = 56,
ReadOnly = 57,
Returned = 58,
ReturnsTwice = 59,
SExt = 60,
SafeStack = 61,
SanitizeAddress = 62,
SanitizeHWAddress = 63,
SanitizeMemTag = 64,
SanitizeMemory = 65,
SanitizeThread = 66,
ShadowCallStack = 67,
SkipProfile = 68,
Speculatable = 69,
SpeculativeLoadHardening = 70,
StackProtect = 71,
StackProtectReq = 72,
StackProtectStrong = 73,
StrictFP = 74,
SwiftAsync = 75,
SwiftError = 76,
SwiftSelf = 77,
WillReturn = 78,
Writable = 79,
WriteOnly = 80,
ZExt = 81,
LastEnumAttr = 81,
FirstTypeAttr = 82,
ByRef = 82,
ByVal = 83,
ElementType = 84,
InAlloca = 85,
Preallocated = 86,
StructRet = 87,
LastTypeAttr = 87,
FirstIntAttr = 88,
Alignment = 88,
AllocKind = 89,
AllocSize = 90,
Dereferenceable = 91,
DereferenceableOrNull = 92,
Memory = 93,
NoFPClass = 94,
StackAlignment = 95,
UWTable = 96,
VScaleRange = 97,
LastIntAttr = 97,
#endif

#ifdef GET_ATTR_COMPAT_FUNC
#undef GET_ATTR_COMPAT_FUNC
static inline bool hasCompatibleFnAttrs(const Function &Caller,
                                        const Function &Callee) {
  bool Ret = true;

  Ret &= isEqual<SanitizeAddressAttr>(Caller, Callee);
  Ret &= isEqual<SanitizeThreadAttr>(Caller, Callee);
  Ret &= isEqual<SanitizeMemoryAttr>(Caller, Callee);
  Ret &= isEqual<SanitizeHWAddressAttr>(Caller, Callee);
  Ret &= isEqual<SanitizeMemTagAttr>(Caller, Callee);
  Ret &= isEqual<SafeStackAttr>(Caller, Callee);
  Ret &= isEqual<ShadowCallStackAttr>(Caller, Callee);
  Ret &= isEqual<UseSampleProfileAttr>(Caller, Callee);
  Ret &= isEqual<NoProfileAttr>(Caller, Callee);
  Ret &= checkDenormMode(Caller, Callee);

  return Ret;
}

static inline void mergeFnAttrs(Function &Caller,
                                const Function &Callee) {
  setAND<LessPreciseFPMADAttr>(Caller, Callee);
  setAND<NoInfsFPMathAttr>(Caller, Callee);
  setAND<NoNansFPMathAttr>(Caller, Callee);
  setAND<ApproxFuncFPMathAttr>(Caller, Callee);
  setAND<NoSignedZerosFPMathAttr>(Caller, Callee);
  setAND<UnsafeFPMathAttr>(Caller, Callee);
  setOR<NoImplicitFloatAttr>(Caller, Callee);
  setOR<NoJumpTablesAttr>(Caller, Callee);
  setOR<ProfileSampleAccurateAttr>(Caller, Callee);
  setOR<SpeculativeLoadHardeningAttr>(Caller, Callee);
  adjustCallerSSPLevel(Caller, Callee);
  adjustCallerStackProbes(Caller, Callee);
  adjustCallerStackProbeSize(Caller, Callee);
  adjustMinLegalVectorWidth(Caller, Callee);
  adjustNullPointerValidAttr(Caller, Callee);
  setAND<MustProgressAttr>(Caller, Callee);
}

#endif
#ifdef GET_ATTR_PROP_TABLE
#undef GET_ATTR_PROP_TABLE
static const uint8_t AttrPropTable[] = {
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr | AttributeProperty::ParamAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::FnAttr | AttributeProperty::ParamAttr,
0 | AttributeProperty::ParamAttr,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr,
0 | AttributeProperty::FnAttr | AttributeProperty::ParamAttr,
0 | AttributeProperty::FnAttr,
0 | AttributeProperty::FnAttr,
};
#endif
