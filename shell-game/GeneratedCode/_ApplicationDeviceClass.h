/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 13.04
* Profile  : Simulation
* Platform : Windows.Software.RGBA8888
*
*******************************************************************************/

#ifndef _ApplicationDeviceClass_H
#define _ApplicationDeviceClass_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if ( EW_RTE_VERSION >> 16 ) != 13
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if ( EW_GFX_VERSION >> 16 ) != 13
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_TemplatesDeviceClass.h"

/* Forward declaration of the class Application::DeviceClass */
#ifndef _ApplicationDeviceClass_
  EW_DECLARE_CLASS( ApplicationDeviceClass )
#define _ApplicationDeviceClass_
#endif


/* Deklaration of class : 'Application::DeviceClass' */
EW_DEFINE_FIELDS( ApplicationDeviceClass, TemplatesDeviceClass )
  EW_PROPERTY( ActiveMusicName, XString )
  EW_PROPERTY( Date,            XString )
  EW_PROPERTY( Hours,           XString )
  EW_PROPERTY( Volume,          XInt32 )
  EW_PROPERTY( SFXVolume,       XInt32 )
  EW_PROPERTY( MaxLevel,        XInt32 )
  EW_PROPERTY( TotalRounds,     XInt32 )
  EW_PROPERTY( CorrectGuesses,  XInt32 )
  EW_PROPERTY( Coins,           XInt32 )
  EW_PROPERTY( ShopTab,         XInt32 )
  EW_PROPERTY( ActiveCup,       XInt32 )
  EW_PROPERTY( ActiveBall,      XInt32 )
  EW_PROPERTY( ActiveMusic,     XInt32 )
  EW_PROPERTY( CurrentScreen,   XEnum )
  EW_VARIABLE( LeftToRight,     XInt32 )
  EW_PROPERTY( Frame,           XInt32 )
  EW_PROPERTY( WrongGuesses,    XInt32 )
  EW_PROPERTY( Animation,       XBool )
  EW_ARRAY   ( CupsArray,       XBool, [13])
  EW_ARRAY   ( BallsArray,      XBool, [10])
  EW_ARRAY   ( MusicsArray,     XBool, [16])
  EW_PROPERTY( HallAct,         XBool )
  EW_PROPERTY( HallPack,        XBool )
  EW_PROPERTY( FrameSound,      XBool )
  EW_VARIABLE( ShowOr,          XBool )
  EW_PROPERTY( NextLevel,       XBool )
  EW_PROPERTY( Reset,           XBool )
  EW_PROPERTY( StartSound,      XBool )
  EW_ARRAY   ( Unlocked,        XBool, [15])
EW_END_OF_FIELDS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_METHODS( ApplicationDeviceClass, TemplatesDeviceClass )
EW_END_OF_METHODS( ApplicationDeviceClass )

/* 'C' function for method : 'Application::DeviceClass.Done()' */
void ApplicationDeviceClass_Done( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.Init()' */
void ApplicationDeviceClass_Init( ApplicationDeviceClass _this, XHandle aArg );

/* 'C' function for method : 'Application::DeviceClass.OnGetVolume()' */
XInt32 ApplicationDeviceClass_OnGetVolume( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetVolume()' */
void ApplicationDeviceClass_OnSetVolume( ApplicationDeviceClass _this, XInt32 value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateVolume( ApplicationDeviceClass _this, XInt32 aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateVolume()' */
void ApplicationDeviceClass__UpdateVolume( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateVolume(). */
#define _ApplicationDeviceClass__UpdateVolume_

/* 'C' function for method : 'Application::DeviceClass.OnGetSFXVolume()' */
XInt32 ApplicationDeviceClass_OnGetSFXVolume( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetSFXVolume()' */
void ApplicationDeviceClass_OnSetSFXVolume( ApplicationDeviceClass _this, XInt32 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateSFXVolume( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateSFXVolume()' */
void ApplicationDeviceClass__UpdateSFXVolume( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateSFXVolume(). */
#define _ApplicationDeviceClass__UpdateSFXVolume_

/* 'C' function for method : 'Application::DeviceClass.OnGetAnimation()' */
XBool ApplicationDeviceClass_OnGetAnimation( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetAnimation()' */
void ApplicationDeviceClass_OnSetAnimation( ApplicationDeviceClass _this, XBool 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateAnimation( ApplicationDeviceClass _this, XBool 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateAnimation()' */
void ApplicationDeviceClass__UpdateAnimation( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateAnimation(). */
#define _ApplicationDeviceClass__UpdateAnimation_

/* 'C' function for method : 'Application::DeviceClass.OnGetMaxLevel()' */
XInt32 ApplicationDeviceClass_OnGetMaxLevel( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetMaxLevel()' */
void ApplicationDeviceClass_OnSetMaxLevel( ApplicationDeviceClass _this, XInt32 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateMaxLevel( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateMaxLevel()' */
void ApplicationDeviceClass__UpdateMaxLevel( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateMaxLevel(). */
#define _ApplicationDeviceClass__UpdateMaxLevel_

/* 'C' function for method : 'Application::DeviceClass.OnGetTotalRounds()' */
XInt32 ApplicationDeviceClass_OnGetTotalRounds( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetTotalRounds()' */
void ApplicationDeviceClass_OnSetTotalRounds( ApplicationDeviceClass _this, XInt32 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateTotalRounds( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateTotalRounds()' */
void ApplicationDeviceClass__UpdateTotalRounds( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateTotalRounds(). */
#define _ApplicationDeviceClass__UpdateTotalRounds_

/* 'C' function for method : 'Application::DeviceClass.OnGetCorrectGuesses()' */
XInt32 ApplicationDeviceClass_OnGetCorrectGuesses( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetCorrectGuesses()' */
void ApplicationDeviceClass_OnSetCorrectGuesses( ApplicationDeviceClass _this, XInt32 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateCorrectGuesses( ApplicationDeviceClass _this, 
  XInt32 aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateCorrectGuesses()' */
void ApplicationDeviceClass__UpdateCorrectGuesses( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateCorrectGuesses(). */
#define _ApplicationDeviceClass__UpdateCorrectGuesses_

/* 'C' function for method : 'Application::DeviceClass.OnGetCoins()' */
XInt32 ApplicationDeviceClass_OnGetCoins( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetCoins()' */
void ApplicationDeviceClass_OnSetCoins( ApplicationDeviceClass _this, XInt32 value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateCoins( ApplicationDeviceClass _this, XInt32 aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateCoins()' */
void ApplicationDeviceClass__UpdateCoins( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateCoins(). */
#define _ApplicationDeviceClass__UpdateCoins_

/* 'C' function for method : 'Application::DeviceClass.OnGetShopTab()' */
XInt32 ApplicationDeviceClass_OnGetShopTab( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetShopTab()' */
void ApplicationDeviceClass_OnSetShopTab( ApplicationDeviceClass _this, XInt32 value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateShopTab( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateShopTab()' */
void ApplicationDeviceClass__UpdateShopTab( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateShopTab(). */
#define _ApplicationDeviceClass__UpdateShopTab_

/* 'C' function for method : 'Application::DeviceClass.OnGetActiveCup()' */
XInt32 ApplicationDeviceClass_OnGetActiveCup( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetActiveCup()' */
void ApplicationDeviceClass_OnSetActiveCup( ApplicationDeviceClass _this, XInt32 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateActiveCup( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateActiveCup()' */
void ApplicationDeviceClass__UpdateActiveCup( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateActiveCup(). */
#define _ApplicationDeviceClass__UpdateActiveCup_

/* 'C' function for method : 'Application::DeviceClass.OnGetActiveBall()' */
XInt32 ApplicationDeviceClass_OnGetActiveBall( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetActiveBall()' */
void ApplicationDeviceClass_OnSetActiveBall( ApplicationDeviceClass _this, XInt32 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateActiveBall( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateActiveBall()' */
void ApplicationDeviceClass__UpdateActiveBall( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateActiveBall(). */
#define _ApplicationDeviceClass__UpdateActiveBall_

/* 'C' function for method : 'Application::DeviceClass.OnGetActiveMusic()' */
XInt32 ApplicationDeviceClass_OnGetActiveMusic( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetActiveMusic()' */
void ApplicationDeviceClass_OnSetActiveMusic( ApplicationDeviceClass _this, XInt32 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateActiveMusic( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateActiveMusic()' */
void ApplicationDeviceClass__UpdateActiveMusic( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateActiveMusic(). */
#define _ApplicationDeviceClass__UpdateActiveMusic_

/* 'C' function for method : 'Application::DeviceClass.OnGetHallAct()' */
XBool ApplicationDeviceClass_OnGetHallAct( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetHallAct()' */
void ApplicationDeviceClass_OnSetHallAct( ApplicationDeviceClass _this, XBool value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateHallAct( ApplicationDeviceClass _this, XBool aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateHallAct()' */
void ApplicationDeviceClass__UpdateHallAct( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateHallAct(). */
#define _ApplicationDeviceClass__UpdateHallAct_

/* 'C' function for method : 'Application::DeviceClass.OnGetHallPack()' */
XBool ApplicationDeviceClass_OnGetHallPack( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetHallPack()' */
void ApplicationDeviceClass_OnSetHallPack( ApplicationDeviceClass _this, XBool value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateHallPack( ApplicationDeviceClass _this, XBool 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateHallPack()' */
void ApplicationDeviceClass__UpdateHallPack( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateHallPack(). */
#define _ApplicationDeviceClass__UpdateHallPack_

/* 'C' function for method : 'Application::DeviceClass.OnGetFrameSound()' */
XBool ApplicationDeviceClass_OnGetFrameSound( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetFrameSound()' */
void ApplicationDeviceClass_OnSetFrameSound( ApplicationDeviceClass _this, XBool 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateFrameSound( ApplicationDeviceClass _this, XBool 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateFrameSound()' */
void ApplicationDeviceClass__UpdateFrameSound( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateFrameSound(). */
#define _ApplicationDeviceClass__UpdateFrameSound_

/* 'C' function for method : 'Application::DeviceClass.OnGetCurrentScreen()' */
XEnum ApplicationDeviceClass_OnGetCurrentScreen( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetCurrentScreen()' */
void ApplicationDeviceClass_OnSetCurrentScreen( ApplicationDeviceClass _this, XEnum 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateCurrentScreen( ApplicationDeviceClass _this, XEnum 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateCurrentScreen()' */
void ApplicationDeviceClass__UpdateCurrentScreen( void* _this, XEnum aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateCurrentScreen(). */
#define _ApplicationDeviceClass__UpdateCurrentScreen_

/* 'C' function for method : 'Application::DeviceClass.OnGetFrame()' */
XInt32 ApplicationDeviceClass_OnGetFrame( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetFrame()' */
void ApplicationDeviceClass_OnSetFrame( ApplicationDeviceClass _this, XInt32 value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateFrame( ApplicationDeviceClass _this, XInt32 aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateFrame()' */
void ApplicationDeviceClass__UpdateFrame( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateFrame(). */
#define _ApplicationDeviceClass__UpdateFrame_

/* 'C' function for method : 'Application::DeviceClass.OnGetNextLevel()' */
XBool ApplicationDeviceClass_OnGetNextLevel( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetNextLevel()' */
void ApplicationDeviceClass_OnSetNextLevel( ApplicationDeviceClass _this, XBool 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateNextLevel( ApplicationDeviceClass _this, XBool 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateNextLevel()' */
void ApplicationDeviceClass__UpdateNextLevel( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateNextLevel(). */
#define _ApplicationDeviceClass__UpdateNextLevel_

/* 'C' function for method : 'Application::DeviceClass.OnGetReset()' */
XBool ApplicationDeviceClass_OnGetReset( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetReset()' */
void ApplicationDeviceClass_OnSetReset( ApplicationDeviceClass _this, XBool value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateReset( ApplicationDeviceClass _this, XBool aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateReset()' */
void ApplicationDeviceClass__UpdateReset( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateReset(). */
#define _ApplicationDeviceClass__UpdateReset_

/* 'C' function for method : 'Application::DeviceClass.OnGetStartSound()' */
XBool ApplicationDeviceClass_OnGetStartSound( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetStartSound()' */
void ApplicationDeviceClass_OnSetStartSound( ApplicationDeviceClass _this, XBool 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateStartSound( ApplicationDeviceClass _this, XBool 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateStartSound()' */
void ApplicationDeviceClass__UpdateStartSound( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateStartSound(). */
#define _ApplicationDeviceClass__UpdateStartSound_

/* 'C' function for method : 'Application::DeviceClass.OnGetWrongGuesses()' */
XInt32 ApplicationDeviceClass_OnGetWrongGuesses( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetWrongGuesses()' */
void ApplicationDeviceClass_OnSetWrongGuesses( ApplicationDeviceClass _this, XInt32 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateWrongGuesses( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateWrongGuesses()' */
void ApplicationDeviceClass__UpdateWrongGuesses( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateWrongGuesses(). */
#define _ApplicationDeviceClass__UpdateWrongGuesses_

/* 'C' function for method : 'Application::DeviceClass.OnGetActiveMusicName()' */
XString ApplicationDeviceClass_OnGetActiveMusicName( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetActiveMusicName()' */
void ApplicationDeviceClass_OnSetActiveMusicName( ApplicationDeviceClass _this, 
  XString value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateActiveMusicName( ApplicationDeviceClass _this, 
  XString aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateActiveMusicName()' */
void ApplicationDeviceClass__UpdateActiveMusicName( void* _this, XString aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateActiveMusicName(). */
#define _ApplicationDeviceClass__UpdateActiveMusicName_

/* 'C' function for method : 'Application::DeviceClass.OnGetDate()' */
XString ApplicationDeviceClass_OnGetDate( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetDate()' */
void ApplicationDeviceClass_OnSetDate( ApplicationDeviceClass _this, XString value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateDate( ApplicationDeviceClass _this, XString aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateDate()' */
void ApplicationDeviceClass__UpdateDate( void* _this, XString aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateDate(). */
#define _ApplicationDeviceClass__UpdateDate_

/* 'C' function for method : 'Application::DeviceClass.OnGetHours()' */
XString ApplicationDeviceClass_OnGetHours( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetHours()' */
void ApplicationDeviceClass_OnSetHours( ApplicationDeviceClass _this, XString value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateHours( ApplicationDeviceClass _this, XString aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateHours()' */
void ApplicationDeviceClass__UpdateHours( void* _this, XString aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateHours(). */
#define _ApplicationDeviceClass__UpdateHours_

/* 'C' function for method : 'Application::DeviceClass.GetShopArrays()' */
void ApplicationDeviceClass_GetShopArrays( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.UpdateShopArrays()' */
void ApplicationDeviceClass_UpdateShopArrays( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.GetAchivementsArray()' */
void ApplicationDeviceClass_GetAchivementsArray( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.CheckAchivements()' */
XInt32 ApplicationDeviceClass_CheckAchivements( ApplicationDeviceClass _this, XInt32 
  aArg1 );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationDeviceClass_H */

/* Embedded Wizard */
