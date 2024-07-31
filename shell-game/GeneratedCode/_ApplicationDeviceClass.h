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
  EW_PROPERTY( AchFrame,        XInt32 )
  EW_PROPERTY( Animation,       XBool )
  EW_ARRAY   ( CupsArray,       XBool, [13])
  EW_ARRAY   ( BallsArray,      XBool, [10])
  EW_ARRAY   ( MusicsArray,     XBool, [16])
  EW_PROPERTY( HallAct,         XBool )
  EW_PROPERTY( HallPack,        XBool )
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
void ApplicationDeviceClass_UpdateProperty( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty()' */
void ApplicationDeviceClass__UpdateProperty( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateProperty(). */
#define _ApplicationDeviceClass__UpdateProperty_

/* 'C' function for method : 'Application::DeviceClass.OnGetSFXVolume()' */
XInt32 ApplicationDeviceClass_OnGetSFXVolume( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetSFXVolume()' */
void ApplicationDeviceClass_OnSetSFXVolume( ApplicationDeviceClass _this, XInt32 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty1( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty1()' */
void ApplicationDeviceClass__UpdateProperty1( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateProperty1(). */
#define _ApplicationDeviceClass__UpdateProperty1_

/* 'C' function for method : 'Application::DeviceClass.OnGetAnimation()' */
XBool ApplicationDeviceClass_OnGetAnimation( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetAnimation()' */
void ApplicationDeviceClass_OnSetAnimation( ApplicationDeviceClass _this, XBool 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty2( ApplicationDeviceClass _this, XBool 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty2()' */
void ApplicationDeviceClass__UpdateProperty2( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateProperty2(). */
#define _ApplicationDeviceClass__UpdateProperty2_

/* 'C' function for method : 'Application::DeviceClass.OnGetMaxLevel()' */
XInt32 ApplicationDeviceClass_OnGetMaxLevel( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetMaxLevel()' */
void ApplicationDeviceClass_OnSetMaxLevel( ApplicationDeviceClass _this, XInt32 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty3( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty3()' */
void ApplicationDeviceClass__UpdateProperty3( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateProperty3(). */
#define _ApplicationDeviceClass__UpdateProperty3_

/* 'C' function for method : 'Application::DeviceClass.OnGetTotalRounds()' */
XInt32 ApplicationDeviceClass_OnGetTotalRounds( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetTotalRounds()' */
void ApplicationDeviceClass_OnSetTotalRounds( ApplicationDeviceClass _this, XInt32 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty4( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty4()' */
void ApplicationDeviceClass__UpdateProperty4( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateProperty4(). */
#define _ApplicationDeviceClass__UpdateProperty4_

/* 'C' function for method : 'Application::DeviceClass.OnGetCorrectGuesses()' */
XInt32 ApplicationDeviceClass_OnGetCorrectGuesses( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetCorrectGuesses()' */
void ApplicationDeviceClass_OnSetCorrectGuesses( ApplicationDeviceClass _this, XInt32 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty5( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty5()' */
void ApplicationDeviceClass__UpdateProperty5( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateProperty5(). */
#define _ApplicationDeviceClass__UpdateProperty5_

/* 'C' function for method : 'Application::DeviceClass.OnGetCoins()' */
XInt32 ApplicationDeviceClass_OnGetCoins( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetCoins()' */
void ApplicationDeviceClass_OnSetCoins( ApplicationDeviceClass _this, XInt32 value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty6( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty6()' */
void ApplicationDeviceClass__UpdateProperty6( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateProperty6(). */
#define _ApplicationDeviceClass__UpdateProperty6_

/* 'C' function for method : 'Application::DeviceClass.OnGetShopTab()' */
XInt32 ApplicationDeviceClass_OnGetShopTab( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetShopTab()' */
void ApplicationDeviceClass_OnSetShopTab( ApplicationDeviceClass _this, XInt32 value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty7( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty7()' */
void ApplicationDeviceClass__UpdateProperty7( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateProperty7(). */
#define _ApplicationDeviceClass__UpdateProperty7_

/* 'C' function for method : 'Application::DeviceClass.OnGetActiveCup()' */
XInt32 ApplicationDeviceClass_OnGetActiveCup( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetActiveCup()' */
void ApplicationDeviceClass_OnSetActiveCup( ApplicationDeviceClass _this, XInt32 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty8( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty8()' */
void ApplicationDeviceClass__UpdateProperty8( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateProperty8(). */
#define _ApplicationDeviceClass__UpdateProperty8_

/* 'C' function for method : 'Application::DeviceClass.OnGetActiveBall()' */
XInt32 ApplicationDeviceClass_OnGetActiveBall( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetActiveBall()' */
void ApplicationDeviceClass_OnSetActiveBall( ApplicationDeviceClass _this, XInt32 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty9( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty9()' */
void ApplicationDeviceClass__UpdateProperty9( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateProperty9(). */
#define _ApplicationDeviceClass__UpdateProperty9_

/* 'C' function for method : 'Application::DeviceClass.OnGetActiveMusic()' */
XInt32 ApplicationDeviceClass_OnGetActiveMusic( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetActiveMusic()' */
void ApplicationDeviceClass_OnSetActiveMusic( ApplicationDeviceClass _this, XInt32 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty10( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty10()' */
void ApplicationDeviceClass__UpdateProperty10( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateProperty10(). */
#define _ApplicationDeviceClass__UpdateProperty10_

/* 'C' function for method : 'Application::DeviceClass.OnGetHallAct()' */
XBool ApplicationDeviceClass_OnGetHallAct( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetHallAct()' */
void ApplicationDeviceClass_OnSetHallAct( ApplicationDeviceClass _this, XBool value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty11( ApplicationDeviceClass _this, XBool 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty11()' */
void ApplicationDeviceClass__UpdateProperty11( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateProperty11(). */
#define _ApplicationDeviceClass__UpdateProperty11_

/* 'C' function for method : 'Application::DeviceClass.OnGetHallPack()' */
XBool ApplicationDeviceClass_OnGetHallPack( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetHallPack()' */
void ApplicationDeviceClass_OnSetHallPack( ApplicationDeviceClass _this, XBool value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty12( ApplicationDeviceClass _this, XBool 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty12()' */
void ApplicationDeviceClass__UpdateProperty12( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateProperty12(). */
#define _ApplicationDeviceClass__UpdateProperty12_

/* 'C' function for method : 'Application::DeviceClass.OnGetAchFrame()' */
XInt32 ApplicationDeviceClass_OnGetAchFrame( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.OnSetAchFrame()' */
void ApplicationDeviceClass_OnSetAchFrame( ApplicationDeviceClass _this, XInt32 
  value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty13( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty13()' */
void ApplicationDeviceClass__UpdateProperty13( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateProperty13(). */
#define _ApplicationDeviceClass__UpdateProperty13_

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationDeviceClass_H */

/* Embedded Wizard */
