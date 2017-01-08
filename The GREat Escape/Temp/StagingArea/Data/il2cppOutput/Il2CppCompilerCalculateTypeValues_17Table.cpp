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
#include "AssemblyU2DCSharp_MovingObject3243022669.h"
#include "AssemblyU2DCSharp_PersistenceManager4086022190.h"
#include "AssemblyU2DCSharp_PersistenceSceneController469088457.h"
#include "AssemblyU2DCSharp_PlayerController2866526589.h"
#include "AssemblyU2DCSharp_PlayerPersistantData1870225214.h"
#include "AssemblyU2DCSharp_QuestionCanvas598303998.h"
#include "AssemblyU2DCSharp_QuestionPanel4049178014.h"
#include "AssemblyU2DCSharp_ReviewScript3308529251.h"
#include "AssemblyU2DCSharp_SettingsScript1385258734.h"
#include "AssemblyU2DCSharp_SlimeController3776994404.h"
#include "AssemblyU2DCSharp_StompEnemy3063565783.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1700 = { sizeof (MovingObject_t3243022669), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1700[5] = 
{
	MovingObject_t3243022669::get_offset_of_objectToMove_2(),
	MovingObject_t3243022669::get_offset_of_startPoint_3(),
	MovingObject_t3243022669::get_offset_of_endPoint_4(),
	MovingObject_t3243022669::get_offset_of_moveSpeed_5(),
	MovingObject_t3243022669::get_offset_of_currentTarget_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1701 = { sizeof (PersistenceManager_t4086022190), -1, sizeof(PersistenceManager_t4086022190_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1701[1] = 
{
	PersistenceManager_t4086022190_StaticFields::get_offset_of_Instance_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1702 = { sizeof (PersistenceSceneController_t469088457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1702[2] = 
{
	PersistenceSceneController_t469088457::get_offset_of_Player_2(),
	PersistenceSceneController_t469088457::get_offset_of_HealthBar_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1703 = { sizeof (PlayerController_t2866526589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1703[23] = 
{
	PlayerController_t2866526589::get_offset_of_gameButton_2(),
	PlayerController_t2866526589::get_offset_of_moveSpeed_3(),
	PlayerController_t2866526589::get_offset_of_jumpSpeed_4(),
	PlayerController_t2866526589::get_offset_of_numBooks_5(),
	PlayerController_t2866526589::get_offset_of_maxBooks_6(),
	PlayerController_t2866526589::get_offset_of_numBooksCollected_7(),
	PlayerController_t2866526589::get_offset_of_wordDisplay_8(),
	PlayerController_t2866526589::get_offset_of_myRigidBody_9(),
	PlayerController_t2866526589::get_offset_of_myAnim_10(),
	PlayerController_t2866526589::get_offset_of_respawnPosition_11(),
	PlayerController_t2866526589::get_offset_of_groundCheck_12(),
	PlayerController_t2866526589::get_offset_of_groundCheckRadius_13(),
	PlayerController_t2866526589::get_offset_of_whatIsGround_14(),
	PlayerController_t2866526589::get_offset_of_isGrounded_15(),
	PlayerController_t2866526589::get_offset_of_isJumping_16(),
	PlayerController_t2866526589::get_offset_of_jumpSound_17(),
	PlayerController_t2866526589::get_offset_of_hurtSound_18(),
	PlayerController_t2866526589::get_offset_of_rightSound_19(),
	PlayerController_t2866526589::get_offset_of_wrongSound_20(),
	PlayerController_t2866526589::get_offset_of_collectSound_21(),
	PlayerController_t2866526589::get_offset_of_isPaused_22(),
	PlayerController_t2866526589::get_offset_of_health_23(),
	PlayerController_t2866526589::get_offset_of_bookNames_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1704 = { sizeof (PlayerPersistantData_t1870225214), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1704[6] = 
{
	0,
	PlayerPersistantData_t1870225214::get_offset_of_level_1(),
	PlayerPersistantData_t1870225214::get_offset_of_posX_2(),
	PlayerPersistantData_t1870225214::get_offset_of_posY_3(),
	PlayerPersistantData_t1870225214::get_offset_of_health_4(),
	PlayerPersistantData_t1870225214::get_offset_of_booksCollected_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1705 = { sizeof (QuestionCanvas_t598303998), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1705[2] = 
{
	QuestionCanvas_t598303998::get_offset_of_enable_2(),
	QuestionCanvas_t598303998::get_offset_of_canvas_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1706 = { sizeof (QuestionPanel_t4049178014), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1707 = { sizeof (ReviewScript_t3308529251), -1, sizeof(ReviewScript_t3308529251_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1707[7] = 
{
	0,
	ReviewScript_t3308529251_StaticFields::get_offset_of_reviewNum_3(),
	ReviewScript_t3308529251::get_offset_of_canSetRev_4(),
	ReviewScript_t3308529251::get_offset_of_revWord1_5(),
	ReviewScript_t3308529251::get_offset_of_revWord2_6(),
	ReviewScript_t3308529251::get_offset_of_revWord3_7(),
	ReviewScript_t3308529251::get_offset_of_revWord4_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1708 = { sizeof (SettingsScript_t1385258734), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1708[1] = 
{
	SettingsScript_t1385258734::get_offset_of_volumeSlider_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1709 = { sizeof (SlimeController_t3776994404), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1709[5] = 
{
	SlimeController_t3776994404::get_offset_of_moveSpeed_2(),
	SlimeController_t3776994404::get_offset_of_leftPoint_3(),
	SlimeController_t3776994404::get_offset_of_rightPoint_4(),
	SlimeController_t3776994404::get_offset_of_myRigidbody_5(),
	SlimeController_t3776994404::get_offset_of_movingRight_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1710 = { sizeof (StompEnemy_t3063565783), -1, sizeof(StompEnemy_t3063565783_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1710[14] = 
{
	StompEnemy_t3063565783::get_offset_of_questionDisplay_2(),
	StompEnemy_t3063565783::get_offset_of_boss_3(),
	StompEnemy_t3063565783::get_offset_of_choice1_4(),
	StompEnemy_t3063565783::get_offset_of_choice2_5(),
	StompEnemy_t3063565783::get_offset_of_choice3_6(),
	StompEnemy_t3063565783::get_offset_of_choice4_7(),
	StompEnemy_t3063565783::get_offset_of_qCanvas_8(),
	StompEnemy_t3063565783::get_offset_of_panel_9(),
	StompEnemy_t3063565783::get_offset_of_answer_10(),
	StompEnemy_t3063565783::get_offset_of_button1_11(),
	StompEnemy_t3063565783::get_offset_of_button2_12(),
	StompEnemy_t3063565783::get_offset_of_button3_13(),
	StompEnemy_t3063565783::get_offset_of_button4_14(),
	StompEnemy_t3063565783_StaticFields::get_offset_of_ques_15(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
