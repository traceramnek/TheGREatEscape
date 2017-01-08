#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_GenericTypeParamete553556921.h"
#include "mscorlib_System_Reflection_Emit_ILTokenInfo1354080954.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator1499877190.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelFi660379442.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelD3207823784.h"
#include "mscorlib_System_Reflection_Emit_Label2268465130.h"
#include "mscorlib_System_Reflection_Emit_LocalBuilder194563060.h"
#include "mscorlib_System_Reflection_Emit_MethodBuilder302405488.h"
#include "mscorlib_System_Reflection_Emit_MethodToken23137230.h"
#include "mscorlib_System_Reflection_Emit_ModuleBuilder595214213.h"
#include "mscorlib_System_Reflection_Emit_ModuleBuilderToken3788085887.h"
#include "mscorlib_System_Reflection_Emit_OpCode3389331186.h"
#include "mscorlib_System_Reflection_Emit_OpCodeNames3688280752.h"
#include "mscorlib_System_Reflection_Emit_OpCodes3677614459.h"
#include "mscorlib_System_Reflection_Emit_OperandType912928217.h"
#include "mscorlib_System_Reflection_Emit_PEFileKinds1559682852.h"
#include "mscorlib_System_Reflection_Emit_PackingSize581671168.h"
#include "mscorlib_System_Reflection_Emit_ParameterBuilder3159962230.h"
#include "mscorlib_System_Reflection_Emit_StackBehaviour1381517209.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder1918497079.h"
#include "mscorlib_System_Reflection_Emit_UnmanagedMarshal224089244.h"
#include "mscorlib_System_Reflection_AmbiguousMatchException3708683968.h"
#include "mscorlib_System_Reflection_Assembly1418687608.h"
#include "mscorlib_System_Reflection_Assembly_ResolveEventHo3538800511.h"
#include "mscorlib_System_Reflection_AssemblyCompanyAttribut3289935671.h"
#include "mscorlib_System_Reflection_AssemblyConfigurationAtt931286878.h"
#include "mscorlib_System_Reflection_AssemblyCopyrightAttrib1376411821.h"
#include "mscorlib_System_Reflection_AssemblyDefaultAliasAtt3141296401.h"
#include "mscorlib_System_Reflection_AssemblyDelaySignAttrib1806962356.h"
#include "mscorlib_System_Reflection_AssemblyDescriptionAttr4061720984.h"
#include "mscorlib_System_Reflection_AssemblyFileVersionAttr4214444504.h"
#include "mscorlib_System_Reflection_AssemblyInformationalVe1023794527.h"
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribut3238168825.h"
#include "mscorlib_System_Reflection_AssemblyName2915647011.h"
#include "mscorlib_System_Reflection_AssemblyNameFlags1632705024.h"
#include "mscorlib_System_Reflection_AssemblyProductAttribut1246248709.h"
#include "mscorlib_System_Reflection_AssemblyTitleAttribute318896700.h"
#include "mscorlib_System_Reflection_AssemblyTrademarkAttribu153437571.h"
#include "mscorlib_System_Reflection_Binder1074302268.h"
#include "mscorlib_System_Reflection_Binder_Default186944512.h"
#include "mscorlib_System_Reflection_BindingFlags1523912596.h"
#include "mscorlib_System_Reflection_CallingConventions2863034704.h"
#include "mscorlib_System_Reflection_ConstructorInfo4136801618.h"
#include "mscorlib_System_Reflection_CustomAttributeData2955630591.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArg3059612989.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArg3301293422.h"
#include "mscorlib_System_Reflection_EventAttributes1762685211.h"
#include "mscorlib_System_Reflection_EventInfo2739272946.h"
#include "mscorlib_System_Reflection_EventInfo_AddEventAdapt1462580491.h"
#include "mscorlib_System_Reflection_FieldAttributes3975817083.h"
#include "mscorlib_System_Reflection_FieldInfo3973053266.h"
#include "mscorlib_System_Reflection_LocalVariableInfo962988767.h"
#include "mscorlib_System_Reflection_MemberInfoSerialization1406378686.h"
#include "mscorlib_System_Reflection_MemberTypes2305219977.h"
#include "mscorlib_System_Reflection_MethodAttributes1709777834.h"
#include "mscorlib_System_Reflection_MethodBase318515428.h"
#include "mscorlib_System_Reflection_MethodImplAttributes1917366122.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"
#include "mscorlib_System_Reflection_Missing3109089008.h"
#include "mscorlib_System_Reflection_Module1394482686.h"
#include "mscorlib_System_Reflection_MonoEventInfo3743085391.h"
#include "mscorlib_System_Reflection_MonoEvent1233923073.h"
#include "mscorlib_System_Reflection_MonoField1234459233.h"
#include "mscorlib_System_Reflection_MonoGenericMethod1484675583.h"
#include "mscorlib_System_Reflection_MonoGenericCMethod782382242.h"
#include "mscorlib_System_Reflection_MonoMethodInfo1372150788.h"
#include "mscorlib_System_Reflection_MonoMethod2798466870.h"
#include "mscorlib_System_Reflection_MonoCMethod2855206475.h"
#include "mscorlib_System_Reflection_MonoPropertyInfo3938502968.h"
#include "mscorlib_System_Reflection_PInfo2721197512.h"
#include "mscorlib_System_Reflection_MonoProperty1246977642.h"
#include "mscorlib_System_Reflection_MonoProperty_GetterAdap4082266865.h"
#include "mscorlib_System_Reflection_ParameterAttributes358477162.h"
#include "mscorlib_System_Reflection_ParameterInfo2235474049.h"
#include "mscorlib_System_Reflection_ParameterModifier741930026.h"
#include "mscorlib_System_Reflection_Pointer1639033799.h"
#include "mscorlib_System_Reflection_ProcessorArchitecture2992100239.h"
#include "mscorlib_System_Reflection_PropertyAttributes1999146654.h"
#include "mscorlib_System_Reflection_PropertyInfo924268725.h"
#include "mscorlib_System_Reflection_ResourceAttributes223003031.h"
#include "mscorlib_System_Reflection_StrongNameKeyPair3001743425.h"
#include "mscorlib_System_Reflection_TargetException1160323912.h"
#include "mscorlib_System_Reflection_TargetInvocationExcepti3880899288.h"
#include "mscorlib_System_Reflection_TargetParameterCountExc1930104770.h"
#include "mscorlib_System_Reflection_TypeAttributes1370933187.h"
#include "mscorlib_System_Reflection_TypeDelegator949417779.h"
#include "mscorlib_System_Resources_NeutralResourcesLanguage1239221824.h"
#include "mscorlib_System_Resources_ResourceManager1323731545.h"
#include "mscorlib_System_Resources_PredefinedResourceType2553580280.h"
#include "mscorlib_System_Resources_ResourceReader2295508955.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceI4013605874.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceC2113902833.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceEn177058824.h"
#include "mscorlib_System_Resources_ResourceSet3047644174.h"
#include "mscorlib_System_Resources_RuntimeResourceSet565351398.h"
#include "mscorlib_System_Resources_SatelliteContractVersion3298646731.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize300 = { sizeof (GenericTypeParameterBuilder_t553556921), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable300[4] = 
{
	GenericTypeParameterBuilder_t553556921::get_offset_of_tbuilder_8(),
	GenericTypeParameterBuilder_t553556921::get_offset_of_mbuilder_9(),
	GenericTypeParameterBuilder_t553556921::get_offset_of_name_10(),
	GenericTypeParameterBuilder_t553556921::get_offset_of_base_type_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize301 = { sizeof (ILTokenInfo_t1354080954)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable301[2] = 
{
	ILTokenInfo_t1354080954::get_offset_of_member_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ILTokenInfo_t1354080954::get_offset_of_code_pos_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize302 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize303 = { sizeof (ILGenerator_t1499877190), -1, sizeof(ILGenerator_t1499877190_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable303[14] = 
{
	ILGenerator_t1499877190_StaticFields::get_offset_of_void_type_0(),
	ILGenerator_t1499877190::get_offset_of_code_1(),
	ILGenerator_t1499877190::get_offset_of_code_len_2(),
	ILGenerator_t1499877190::get_offset_of_max_stack_3(),
	ILGenerator_t1499877190::get_offset_of_cur_stack_4(),
	ILGenerator_t1499877190::get_offset_of_locals_5(),
	ILGenerator_t1499877190::get_offset_of_num_token_fixups_6(),
	ILGenerator_t1499877190::get_offset_of_token_fixups_7(),
	ILGenerator_t1499877190::get_offset_of_labels_8(),
	ILGenerator_t1499877190::get_offset_of_num_labels_9(),
	ILGenerator_t1499877190::get_offset_of_fixups_10(),
	ILGenerator_t1499877190::get_offset_of_num_fixups_11(),
	ILGenerator_t1499877190::get_offset_of_module_12(),
	ILGenerator_t1499877190::get_offset_of_token_gen_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize304 = { sizeof (LabelFixup_t660379442)+ sizeof (Il2CppObject), sizeof(LabelFixup_t660379442_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable304[3] = 
{
	LabelFixup_t660379442::get_offset_of_offset_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	LabelFixup_t660379442::get_offset_of_pos_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	LabelFixup_t660379442::get_offset_of_label_idx_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize305 = { sizeof (LabelData_t3207823784)+ sizeof (Il2CppObject), sizeof(LabelData_t3207823784_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable305[2] = 
{
	LabelData_t3207823784::get_offset_of_addr_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	LabelData_t3207823784::get_offset_of_maxStack_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize306 = { sizeof (Label_t2268465130)+ sizeof (Il2CppObject), sizeof(Label_t2268465130_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable306[1] = 
{
	Label_t2268465130::get_offset_of_label_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize307 = { sizeof (LocalBuilder_t194563060), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable307[1] = 
{
	LocalBuilder_t194563060::get_offset_of_ilgen_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize308 = { sizeof (MethodBuilder_t302405488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable308[18] = 
{
	MethodBuilder_t302405488::get_offset_of_rtype_0(),
	MethodBuilder_t302405488::get_offset_of_parameters_1(),
	MethodBuilder_t302405488::get_offset_of_attrs_2(),
	MethodBuilder_t302405488::get_offset_of_iattrs_3(),
	MethodBuilder_t302405488::get_offset_of_name_4(),
	MethodBuilder_t302405488::get_offset_of_table_idx_5(),
	MethodBuilder_t302405488::get_offset_of_code_6(),
	MethodBuilder_t302405488::get_offset_of_ilgen_7(),
	MethodBuilder_t302405488::get_offset_of_type_8(),
	MethodBuilder_t302405488::get_offset_of_pinfo_9(),
	MethodBuilder_t302405488::get_offset_of_override_method_10(),
	MethodBuilder_t302405488::get_offset_of_call_conv_11(),
	MethodBuilder_t302405488::get_offset_of_init_locals_12(),
	MethodBuilder_t302405488::get_offset_of_generic_params_13(),
	MethodBuilder_t302405488::get_offset_of_returnModReq_14(),
	MethodBuilder_t302405488::get_offset_of_returnModOpt_15(),
	MethodBuilder_t302405488::get_offset_of_paramModReq_16(),
	MethodBuilder_t302405488::get_offset_of_paramModOpt_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize309 = { sizeof (MethodToken_t23137230)+ sizeof (Il2CppObject), sizeof(MethodToken_t23137230_marshaled_pinvoke), sizeof(MethodToken_t23137230_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable309[2] = 
{
	MethodToken_t23137230::get_offset_of_tokValue_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MethodToken_t23137230_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize310 = { sizeof (ModuleBuilder_t595214213), -1, sizeof(ModuleBuilder_t595214213_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable310[13] = 
{
	ModuleBuilder_t595214213::get_offset_of_num_types_10(),
	ModuleBuilder_t595214213::get_offset_of_types_11(),
	ModuleBuilder_t595214213::get_offset_of_guid_12(),
	ModuleBuilder_t595214213::get_offset_of_table_idx_13(),
	ModuleBuilder_t595214213::get_offset_of_assemblyb_14(),
	ModuleBuilder_t595214213::get_offset_of_global_type_15(),
	ModuleBuilder_t595214213::get_offset_of_name_cache_16(),
	ModuleBuilder_t595214213::get_offset_of_us_string_cache_17(),
	ModuleBuilder_t595214213::get_offset_of_table_indexes_18(),
	ModuleBuilder_t595214213::get_offset_of_transient_19(),
	ModuleBuilder_t595214213::get_offset_of_token_gen_20(),
	ModuleBuilder_t595214213::get_offset_of_symbolWriter_21(),
	ModuleBuilder_t595214213_StaticFields::get_offset_of_type_modifiers_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize311 = { sizeof (ModuleBuilderTokenGenerator_t3788085887), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable311[1] = 
{
	ModuleBuilderTokenGenerator_t3788085887::get_offset_of_mb_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize312 = { sizeof (OpCode_t3389331186)+ sizeof (Il2CppObject), sizeof(OpCode_t3389331186_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable312[8] = 
{
	OpCode_t3389331186::get_offset_of_op1_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	OpCode_t3389331186::get_offset_of_op2_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	OpCode_t3389331186::get_offset_of_push_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	OpCode_t3389331186::get_offset_of_pop_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	OpCode_t3389331186::get_offset_of_size_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	OpCode_t3389331186::get_offset_of_type_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	OpCode_t3389331186::get_offset_of_args_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	OpCode_t3389331186::get_offset_of_flow_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize313 = { sizeof (OpCodeNames_t3688280752), -1, sizeof(OpCodeNames_t3688280752_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable313[1] = 
{
	OpCodeNames_t3688280752_StaticFields::get_offset_of_names_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize314 = { sizeof (OpCodes_t3677614459), -1, sizeof(OpCodes_t3677614459_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable314[226] = 
{
	OpCodes_t3677614459_StaticFields::get_offset_of_Nop_0(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Break_1(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldarg_0_2(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldarg_1_3(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldarg_2_4(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldarg_3_5(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldloc_0_6(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldloc_1_7(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldloc_2_8(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldloc_3_9(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stloc_0_10(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stloc_1_11(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stloc_2_12(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stloc_3_13(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldarg_S_14(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldarga_S_15(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Starg_S_16(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldloc_S_17(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldloca_S_18(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stloc_S_19(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldnull_20(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldc_I4_M1_21(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldc_I4_0_22(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldc_I4_1_23(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldc_I4_2_24(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldc_I4_3_25(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldc_I4_4_26(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldc_I4_5_27(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldc_I4_6_28(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldc_I4_7_29(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldc_I4_8_30(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldc_I4_S_31(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldc_I4_32(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldc_I8_33(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldc_R4_34(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldc_R8_35(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Dup_36(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Pop_37(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Jmp_38(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Call_39(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Calli_40(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ret_41(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Br_S_42(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Brfalse_S_43(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Brtrue_S_44(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Beq_S_45(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Bge_S_46(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Bgt_S_47(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ble_S_48(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Blt_S_49(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Bne_Un_S_50(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Bge_Un_S_51(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Bgt_Un_S_52(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ble_Un_S_53(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Blt_Un_S_54(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Br_55(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Brfalse_56(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Brtrue_57(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Beq_58(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Bge_59(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Bgt_60(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ble_61(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Blt_62(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Bne_Un_63(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Bge_Un_64(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Bgt_Un_65(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ble_Un_66(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Blt_Un_67(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Switch_68(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldind_I1_69(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldind_U1_70(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldind_I2_71(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldind_U2_72(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldind_I4_73(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldind_U4_74(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldind_I8_75(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldind_I_76(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldind_R4_77(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldind_R8_78(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldind_Ref_79(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stind_Ref_80(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stind_I1_81(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stind_I2_82(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stind_I4_83(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stind_I8_84(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stind_R4_85(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stind_R8_86(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Add_87(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Sub_88(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Mul_89(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Div_90(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Div_Un_91(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Rem_92(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Rem_Un_93(),
	OpCodes_t3677614459_StaticFields::get_offset_of_And_94(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Or_95(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Xor_96(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Shl_97(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Shr_98(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Shr_Un_99(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Neg_100(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Not_101(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_I1_102(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_I2_103(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_I4_104(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_I8_105(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_R4_106(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_R8_107(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_U4_108(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_U8_109(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Callvirt_110(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Cpobj_111(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldobj_112(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldstr_113(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Newobj_114(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Castclass_115(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Isinst_116(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_R_Un_117(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Unbox_118(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Throw_119(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldfld_120(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldflda_121(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stfld_122(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldsfld_123(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldsflda_124(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stsfld_125(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stobj_126(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_I1_Un_127(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_I2_Un_128(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_I4_Un_129(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_I8_Un_130(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_U1_Un_131(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_U2_Un_132(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_U4_Un_133(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_U8_Un_134(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_I_Un_135(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_U_Un_136(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Box_137(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Newarr_138(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldlen_139(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldelema_140(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldelem_I1_141(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldelem_U1_142(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldelem_I2_143(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldelem_U2_144(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldelem_I4_145(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldelem_U4_146(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldelem_I8_147(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldelem_I_148(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldelem_R4_149(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldelem_R8_150(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldelem_Ref_151(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stelem_I_152(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stelem_I1_153(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stelem_I2_154(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stelem_I4_155(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stelem_I8_156(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stelem_R4_157(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stelem_R8_158(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stelem_Ref_159(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldelem_160(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stelem_161(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Unbox_Any_162(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_I1_163(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_U1_164(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_I2_165(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_U2_166(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_I4_167(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_U4_168(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_I8_169(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_U8_170(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Refanyval_171(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ckfinite_172(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Mkrefany_173(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldtoken_174(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_U2_175(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_U1_176(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_I_177(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_I_178(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_Ovf_U_179(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Add_Ovf_180(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Add_Ovf_Un_181(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Mul_Ovf_182(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Mul_Ovf_Un_183(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Sub_Ovf_184(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Sub_Ovf_Un_185(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Endfinally_186(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Leave_187(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Leave_S_188(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stind_I_189(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Conv_U_190(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Prefix7_191(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Prefix6_192(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Prefix5_193(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Prefix4_194(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Prefix3_195(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Prefix2_196(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Prefix1_197(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Prefixref_198(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Arglist_199(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ceq_200(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Cgt_201(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Cgt_Un_202(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Clt_203(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Clt_Un_204(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldftn_205(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldvirtftn_206(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldarg_207(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldarga_208(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Starg_209(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldloc_210(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Ldloca_211(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Stloc_212(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Localloc_213(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Endfilter_214(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Unaligned_215(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Volatile_216(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Tailcall_217(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Initobj_218(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Constrained_219(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Cpblk_220(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Initblk_221(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Rethrow_222(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Sizeof_223(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Refanytype_224(),
	OpCodes_t3677614459_StaticFields::get_offset_of_Readonly_225(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize315 = { sizeof (OperandType_t912928217)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable315[19] = 
{
	OperandType_t912928217::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize316 = { sizeof (PEFileKinds_t1559682852)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable316[4] = 
{
	PEFileKinds_t1559682852::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize317 = { sizeof (PackingSize_t581671168)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable317[10] = 
{
	PackingSize_t581671168::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize318 = { sizeof (ParameterBuilder_t3159962230), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable318[3] = 
{
	ParameterBuilder_t3159962230::get_offset_of_name_0(),
	ParameterBuilder_t3159962230::get_offset_of_attrs_1(),
	ParameterBuilder_t3159962230::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize319 = { sizeof (StackBehaviour_t1381517209)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable319[30] = 
{
	StackBehaviour_t1381517209::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize320 = { sizeof (TypeBuilder_t1918497079), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable320[20] = 
{
	TypeBuilder_t1918497079::get_offset_of_tname_8(),
	TypeBuilder_t1918497079::get_offset_of_nspace_9(),
	TypeBuilder_t1918497079::get_offset_of_parent_10(),
	TypeBuilder_t1918497079::get_offset_of_nesting_type_11(),
	TypeBuilder_t1918497079::get_offset_of_interfaces_12(),
	TypeBuilder_t1918497079::get_offset_of_num_methods_13(),
	TypeBuilder_t1918497079::get_offset_of_methods_14(),
	TypeBuilder_t1918497079::get_offset_of_ctors_15(),
	TypeBuilder_t1918497079::get_offset_of_fields_16(),
	TypeBuilder_t1918497079::get_offset_of_subtypes_17(),
	TypeBuilder_t1918497079::get_offset_of_attrs_18(),
	TypeBuilder_t1918497079::get_offset_of_table_idx_19(),
	TypeBuilder_t1918497079::get_offset_of_pmodule_20(),
	TypeBuilder_t1918497079::get_offset_of_class_size_21(),
	TypeBuilder_t1918497079::get_offset_of_packing_size_22(),
	TypeBuilder_t1918497079::get_offset_of_generic_params_23(),
	TypeBuilder_t1918497079::get_offset_of_created_24(),
	TypeBuilder_t1918497079::get_offset_of_fullname_25(),
	TypeBuilder_t1918497079::get_offset_of_createTypeCalled_26(),
	TypeBuilder_t1918497079::get_offset_of_underlying_type_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize321 = { sizeof (UnmanagedMarshal_t224089244), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable321[9] = 
{
	UnmanagedMarshal_t224089244::get_offset_of_count_0(),
	UnmanagedMarshal_t224089244::get_offset_of_t_1(),
	UnmanagedMarshal_t224089244::get_offset_of_tbase_2(),
	UnmanagedMarshal_t224089244::get_offset_of_guid_3(),
	UnmanagedMarshal_t224089244::get_offset_of_mcookie_4(),
	UnmanagedMarshal_t224089244::get_offset_of_marshaltype_5(),
	UnmanagedMarshal_t224089244::get_offset_of_marshaltyperef_6(),
	UnmanagedMarshal_t224089244::get_offset_of_param_num_7(),
	UnmanagedMarshal_t224089244::get_offset_of_has_size_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize322 = { sizeof (AmbiguousMatchException_t3708683968), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize323 = { sizeof (Assembly_t1418687608), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable323[10] = 
{
	Assembly_t1418687608::get_offset_of__mono_assembly_0(),
	Assembly_t1418687608::get_offset_of_resolve_event_holder_1(),
	Assembly_t1418687608::get_offset_of__evidence_2(),
	Assembly_t1418687608::get_offset_of__minimum_3(),
	Assembly_t1418687608::get_offset_of__optional_4(),
	Assembly_t1418687608::get_offset_of__refuse_5(),
	Assembly_t1418687608::get_offset_of__granted_6(),
	Assembly_t1418687608::get_offset_of__denied_7(),
	Assembly_t1418687608::get_offset_of_fromByteArray_8(),
	Assembly_t1418687608::get_offset_of_assemblyName_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize324 = { sizeof (ResolveEventHolder_t3538800511), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize325 = { sizeof (AssemblyCompanyAttribute_t3289935671), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable325[1] = 
{
	AssemblyCompanyAttribute_t3289935671::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize326 = { sizeof (AssemblyConfigurationAttribute_t931286878), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable326[1] = 
{
	AssemblyConfigurationAttribute_t931286878::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize327 = { sizeof (AssemblyCopyrightAttribute_t1376411821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable327[1] = 
{
	AssemblyCopyrightAttribute_t1376411821::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize328 = { sizeof (AssemblyDefaultAliasAttribute_t3141296401), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable328[1] = 
{
	AssemblyDefaultAliasAttribute_t3141296401::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize329 = { sizeof (AssemblyDelaySignAttribute_t1806962356), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable329[1] = 
{
	AssemblyDelaySignAttribute_t1806962356::get_offset_of_delay_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize330 = { sizeof (AssemblyDescriptionAttribute_t4061720984), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable330[1] = 
{
	AssemblyDescriptionAttribute_t4061720984::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize331 = { sizeof (AssemblyFileVersionAttribute_t4214444504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable331[1] = 
{
	AssemblyFileVersionAttribute_t4214444504::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize332 = { sizeof (AssemblyInformationalVersionAttribute_t1023794527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable332[1] = 
{
	AssemblyInformationalVersionAttribute_t1023794527::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize333 = { sizeof (AssemblyKeyFileAttribute_t3238168825), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable333[1] = 
{
	AssemblyKeyFileAttribute_t3238168825::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize334 = { sizeof (AssemblyName_t2915647011), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable334[15] = 
{
	AssemblyName_t2915647011::get_offset_of_name_0(),
	AssemblyName_t2915647011::get_offset_of_codebase_1(),
	AssemblyName_t2915647011::get_offset_of_major_2(),
	AssemblyName_t2915647011::get_offset_of_minor_3(),
	AssemblyName_t2915647011::get_offset_of_build_4(),
	AssemblyName_t2915647011::get_offset_of_revision_5(),
	AssemblyName_t2915647011::get_offset_of_cultureinfo_6(),
	AssemblyName_t2915647011::get_offset_of_flags_7(),
	AssemblyName_t2915647011::get_offset_of_hashalg_8(),
	AssemblyName_t2915647011::get_offset_of_keypair_9(),
	AssemblyName_t2915647011::get_offset_of_publicKey_10(),
	AssemblyName_t2915647011::get_offset_of_keyToken_11(),
	AssemblyName_t2915647011::get_offset_of_versioncompat_12(),
	AssemblyName_t2915647011::get_offset_of_version_13(),
	AssemblyName_t2915647011::get_offset_of_processor_architecture_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize335 = { sizeof (AssemblyNameFlags_t1632705024)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable335[6] = 
{
	AssemblyNameFlags_t1632705024::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize336 = { sizeof (AssemblyProductAttribute_t1246248709), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable336[1] = 
{
	AssemblyProductAttribute_t1246248709::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize337 = { sizeof (AssemblyTitleAttribute_t318896700), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable337[1] = 
{
	AssemblyTitleAttribute_t318896700::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize338 = { sizeof (AssemblyTrademarkAttribute_t153437571), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable338[1] = 
{
	AssemblyTrademarkAttribute_t153437571::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize339 = { sizeof (Binder_t1074302268), -1, sizeof(Binder_t1074302268_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable339[1] = 
{
	Binder_t1074302268_StaticFields::get_offset_of_default_binder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize340 = { sizeof (Default_t186944512), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize341 = { sizeof (BindingFlags_t1523912596)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable341[21] = 
{
	BindingFlags_t1523912596::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize342 = { sizeof (CallingConventions_t2863034704)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable342[6] = 
{
	CallingConventions_t2863034704::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize343 = { sizeof (ConstructorInfo_t4136801618), -1, sizeof(ConstructorInfo_t4136801618_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable343[2] = 
{
	ConstructorInfo_t4136801618_StaticFields::get_offset_of_ConstructorName_0(),
	ConstructorInfo_t4136801618_StaticFields::get_offset_of_TypeConstructorName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize344 = { sizeof (CustomAttributeData_t2955630591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable344[3] = 
{
	CustomAttributeData_t2955630591::get_offset_of_ctorInfo_0(),
	CustomAttributeData_t2955630591::get_offset_of_ctorArgs_1(),
	CustomAttributeData_t2955630591::get_offset_of_namedArgs_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize345 = { sizeof (CustomAttributeNamedArgument_t3059612989)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable345[2] = 
{
	CustomAttributeNamedArgument_t3059612989::get_offset_of_typedArgument_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CustomAttributeNamedArgument_t3059612989::get_offset_of_memberInfo_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize346 = { sizeof (CustomAttributeTypedArgument_t3301293422)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable346[2] = 
{
	CustomAttributeTypedArgument_t3301293422::get_offset_of_argumentType_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CustomAttributeTypedArgument_t3301293422::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize347 = { sizeof (EventAttributes_t1762685211)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable347[5] = 
{
	EventAttributes_t1762685211::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize348 = { sizeof (EventInfo_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable348[1] = 
{
	EventInfo_t::get_offset_of_cached_add_event_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize349 = { sizeof (AddEventAdapter_t1462580491), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize350 = { sizeof (FieldAttributes_t3975817083)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable350[20] = 
{
	FieldAttributes_t3975817083::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize351 = { sizeof (FieldInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize352 = { sizeof (LocalVariableInfo_t962988767), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable352[3] = 
{
	LocalVariableInfo_t962988767::get_offset_of_type_0(),
	LocalVariableInfo_t962988767::get_offset_of_is_pinned_1(),
	LocalVariableInfo_t962988767::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize353 = { sizeof (MemberInfoSerializationHolder_t1406378686), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable353[5] = 
{
	MemberInfoSerializationHolder_t1406378686::get_offset_of__memberName_0(),
	MemberInfoSerializationHolder_t1406378686::get_offset_of__memberSignature_1(),
	MemberInfoSerializationHolder_t1406378686::get_offset_of__memberType_2(),
	MemberInfoSerializationHolder_t1406378686::get_offset_of__reflectedType_3(),
	MemberInfoSerializationHolder_t1406378686::get_offset_of__genericArguments_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize354 = { sizeof (MemberTypes_t2305219977)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable354[10] = 
{
	MemberTypes_t2305219977::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize355 = { sizeof (MethodAttributes_t1709777834)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable355[25] = 
{
	MethodAttributes_t1709777834::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize356 = { sizeof (MethodBase_t318515428), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize357 = { sizeof (MethodImplAttributes_t1917366122)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable357[15] = 
{
	MethodImplAttributes_t1917366122::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize358 = { sizeof (MethodInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize359 = { sizeof (Missing_t3109089008), -1, sizeof(Missing_t3109089008_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable359[1] = 
{
	Missing_t3109089008_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize360 = { sizeof (Module_t1394482686), -1, sizeof(Module_t1394482686_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable360[10] = 
{
	0,
	Module_t1394482686_StaticFields::get_offset_of_FilterTypeName_1(),
	Module_t1394482686_StaticFields::get_offset_of_FilterTypeNameIgnoreCase_2(),
	Module_t1394482686::get_offset_of__impl_3(),
	Module_t1394482686::get_offset_of_assembly_4(),
	Module_t1394482686::get_offset_of_fqname_5(),
	Module_t1394482686::get_offset_of_name_6(),
	Module_t1394482686::get_offset_of_scopename_7(),
	Module_t1394482686::get_offset_of_is_resource_8(),
	Module_t1394482686::get_offset_of_token_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize361 = { sizeof (MonoEventInfo_t3743085391)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable361[8] = 
{
	MonoEventInfo_t3743085391::get_offset_of_declaring_type_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t3743085391::get_offset_of_reflected_type_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t3743085391::get_offset_of_name_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t3743085391::get_offset_of_add_method_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t3743085391::get_offset_of_remove_method_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t3743085391::get_offset_of_raise_method_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t3743085391::get_offset_of_attrs_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t3743085391::get_offset_of_other_methods_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize362 = { sizeof (MonoEvent_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable362[2] = 
{
	MonoEvent_t::get_offset_of_klass_1(),
	MonoEvent_t::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize363 = { sizeof (MonoField_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable363[5] = 
{
	MonoField_t::get_offset_of_klass_0(),
	MonoField_t::get_offset_of_fhandle_1(),
	MonoField_t::get_offset_of_name_2(),
	MonoField_t::get_offset_of_type_3(),
	MonoField_t::get_offset_of_attrs_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize364 = { sizeof (MonoGenericMethod_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize365 = { sizeof (MonoGenericCMethod_t782382242), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize366 = { sizeof (MonoMethodInfo_t1372150788)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable366[5] = 
{
	MonoMethodInfo_t1372150788::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoMethodInfo_t1372150788::get_offset_of_ret_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoMethodInfo_t1372150788::get_offset_of_attrs_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoMethodInfo_t1372150788::get_offset_of_iattrs_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoMethodInfo_t1372150788::get_offset_of_callconv_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize367 = { sizeof (MonoMethod_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable367[3] = 
{
	MonoMethod_t::get_offset_of_mhandle_0(),
	MonoMethod_t::get_offset_of_name_1(),
	MonoMethod_t::get_offset_of_reftype_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize368 = { sizeof (MonoCMethod_t2855206475), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable368[3] = 
{
	MonoCMethod_t2855206475::get_offset_of_mhandle_2(),
	MonoCMethod_t2855206475::get_offset_of_name_3(),
	MonoCMethod_t2855206475::get_offset_of_reftype_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize369 = { sizeof (MonoPropertyInfo_t3938502968)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable369[5] = 
{
	MonoPropertyInfo_t3938502968::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoPropertyInfo_t3938502968::get_offset_of_name_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoPropertyInfo_t3938502968::get_offset_of_get_method_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoPropertyInfo_t3938502968::get_offset_of_set_method_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoPropertyInfo_t3938502968::get_offset_of_attrs_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize370 = { sizeof (PInfo_t2721197512)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable370[7] = 
{
	PInfo_t2721197512::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize371 = { sizeof (MonoProperty_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable371[5] = 
{
	MonoProperty_t::get_offset_of_klass_0(),
	MonoProperty_t::get_offset_of_prop_1(),
	MonoProperty_t::get_offset_of_info_2(),
	MonoProperty_t::get_offset_of_cached_3(),
	MonoProperty_t::get_offset_of_cached_getter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize372 = { sizeof (GetterAdapter_t4082266865), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize373 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize374 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize375 = { sizeof (ParameterAttributes_t358477162)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable375[12] = 
{
	ParameterAttributes_t358477162::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize376 = { sizeof (ParameterInfo_t2235474049), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable376[7] = 
{
	ParameterInfo_t2235474049::get_offset_of_ClassImpl_0(),
	ParameterInfo_t2235474049::get_offset_of_DefaultValueImpl_1(),
	ParameterInfo_t2235474049::get_offset_of_MemberImpl_2(),
	ParameterInfo_t2235474049::get_offset_of_NameImpl_3(),
	ParameterInfo_t2235474049::get_offset_of_PositionImpl_4(),
	ParameterInfo_t2235474049::get_offset_of_AttrsImpl_5(),
	ParameterInfo_t2235474049::get_offset_of_marshalAs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize377 = { sizeof (ParameterModifier_t741930026)+ sizeof (Il2CppObject), sizeof(ParameterModifier_t741930026_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable377[1] = 
{
	ParameterModifier_t741930026::get_offset_of__byref_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize378 = { sizeof (Pointer_t1639033799), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable378[2] = 
{
	Pointer_t1639033799::get_offset_of_data_0(),
	Pointer_t1639033799::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize379 = { sizeof (ProcessorArchitecture_t2992100239)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable379[6] = 
{
	ProcessorArchitecture_t2992100239::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize380 = { sizeof (PropertyAttributes_t1999146654)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable380[9] = 
{
	PropertyAttributes_t1999146654::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize381 = { sizeof (PropertyInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize382 = { sizeof (ResourceAttributes_t223003031)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable382[3] = 
{
	ResourceAttributes_t223003031::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize383 = { sizeof (StrongNameKeyPair_t3001743425), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable383[5] = 
{
	StrongNameKeyPair_t3001743425::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t3001743425::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t3001743425::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t3001743425::get_offset_of__keyPairArray_3(),
	StrongNameKeyPair_t3001743425::get_offset_of__rsa_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize384 = { sizeof (TargetException_t1160323912), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize385 = { sizeof (TargetInvocationException_t3880899288), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize386 = { sizeof (TargetParameterCountException_t1930104770), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize387 = { sizeof (TypeAttributes_t1370933187)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable387[32] = 
{
	TypeAttributes_t1370933187::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize388 = { sizeof (TypeDelegator_t949417779), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable388[1] = 
{
	TypeDelegator_t949417779::get_offset_of_typeImpl_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize389 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize390 = { sizeof (NeutralResourcesLanguageAttribute_t1239221824), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable390[1] = 
{
	NeutralResourcesLanguageAttribute_t1239221824::get_offset_of_culture_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize391 = { sizeof (ResourceManager_t1323731545), -1, sizeof(ResourceManager_t1323731545_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable391[5] = 
{
	ResourceManager_t1323731545_StaticFields::get_offset_of_ResourceCache_0(),
	ResourceManager_t1323731545_StaticFields::get_offset_of_NonExistent_1(),
	ResourceManager_t1323731545_StaticFields::get_offset_of_HeaderVersionNumber_2(),
	ResourceManager_t1323731545_StaticFields::get_offset_of_MagicNumber_3(),
	ResourceManager_t1323731545::get_offset_of_resourceSetType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize392 = { sizeof (PredefinedResourceType_t2553580280)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable392[21] = 
{
	PredefinedResourceType_t2553580280::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize393 = { sizeof (ResourceReader_t2295508955), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable393[13] = 
{
	ResourceReader_t2295508955::get_offset_of_reader_0(),
	ResourceReader_t2295508955::get_offset_of_readerLock_1(),
	ResourceReader_t2295508955::get_offset_of_formatter_2(),
	ResourceReader_t2295508955::get_offset_of_resourceCount_3(),
	ResourceReader_t2295508955::get_offset_of_typeCount_4(),
	ResourceReader_t2295508955::get_offset_of_typeNames_5(),
	ResourceReader_t2295508955::get_offset_of_hashes_6(),
	ResourceReader_t2295508955::get_offset_of_infos_7(),
	ResourceReader_t2295508955::get_offset_of_dataSectionOffset_8(),
	ResourceReader_t2295508955::get_offset_of_nameSectionOffset_9(),
	ResourceReader_t2295508955::get_offset_of_resource_ver_10(),
	ResourceReader_t2295508955::get_offset_of_cache_11(),
	ResourceReader_t2295508955::get_offset_of_cache_lock_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize394 = { sizeof (ResourceInfo_t4013605874)+ sizeof (Il2CppObject), sizeof(ResourceInfo_t4013605874_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable394[3] = 
{
	ResourceInfo_t4013605874::get_offset_of_ValuePosition_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ResourceInfo_t4013605874::get_offset_of_ResourceName_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ResourceInfo_t4013605874::get_offset_of_TypeIndex_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize395 = { sizeof (ResourceCacheItem_t2113902833)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable395[2] = 
{
	ResourceCacheItem_t2113902833::get_offset_of_ResourceName_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ResourceCacheItem_t2113902833::get_offset_of_ResourceValue_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize396 = { sizeof (ResourceEnumerator_t177058824), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable396[3] = 
{
	ResourceEnumerator_t177058824::get_offset_of_reader_0(),
	ResourceEnumerator_t177058824::get_offset_of_index_1(),
	ResourceEnumerator_t177058824::get_offset_of_finished_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize397 = { sizeof (ResourceSet_t3047644174), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable397[4] = 
{
	ResourceSet_t3047644174::get_offset_of_Reader_0(),
	ResourceSet_t3047644174::get_offset_of_Table_1(),
	ResourceSet_t3047644174::get_offset_of_resources_read_2(),
	ResourceSet_t3047644174::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize398 = { sizeof (RuntimeResourceSet_t565351398), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize399 = { sizeof (SatelliteContractVersionAttribute_t3298646731), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable399[1] = 
{
	SatelliteContractVersionAttribute_t3298646731::get_offset_of_ver_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
