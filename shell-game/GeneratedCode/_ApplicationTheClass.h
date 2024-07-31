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

#ifndef _ApplicationTheClass_H
#define _ApplicationTheClass_H

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

#include "_EffectsEffect.h"

/* Forward declaration of the class Application::TheClass */
#ifndef _ApplicationTheClass_
  EW_DECLARE_CLASS( ApplicationTheClass )
#define _ApplicationTheClass_
#endif

/* Forward declaration of the class Core::Timer */
#ifndef _CoreTimer_
  EW_DECLARE_CLASS( CoreTimer )
#define _CoreTimer_
#endif

/* Forward declaration of the class Effects::TimingList */
#ifndef _EffectsTimingList_
  EW_DECLARE_CLASS( EffectsTimingList )
#define _EffectsTimingList_
#endif


/* Deklaration of class : 'Application::TheClass' */
EW_DEFINE_FIELDS( ApplicationTheClass, EffectsEffect )
  EW_PROPERTY( Outlet,          XRef )
  EW_PROPERTY( Outlet1,         XRef )
  EW_PROPERTY( Value1,          XRect )
  EW_PROPERTY( Value2,          XRect )
  EW_PROPERTY( Value,           XRect )
  EW_PROPERTY( Value11,         XRect )
  EW_PROPERTY( Value22,         XRect )
EW_END_OF_FIELDS( ApplicationTheClass )

/* Virtual Method Table (VMT) for the class : 'Application::TheClass' */
EW_DEFINE_METHODS( ApplicationTheClass, EffectsEffect )
  EW_METHOD( Animate,           void )( ApplicationTheClass _this, XFloat aProgress )
EW_END_OF_METHODS( ApplicationTheClass )

/* 'C' function for method : 'Application::TheClass.Animate()' */
void ApplicationTheClass_Animate( ApplicationTheClass _this, XFloat aProgress );

/* 'C' function for method : 'Application::TheClass.OnSetOutlet()' */
void ApplicationTheClass_OnSetOutlet( ApplicationTheClass _this, XRef value );

/* 'C' function for method : 'Application::TheClass.OnSetValue1()' */
void ApplicationTheClass_OnSetValue1( ApplicationTheClass _this, XRect value );

/* 'C' function for method : 'Application::TheClass.OnSetValue2()' */
void ApplicationTheClass_OnSetValue2( ApplicationTheClass _this, XRect value );

/* 'C' function for method : 'Application::TheClass.OnSetValue()' */
void ApplicationTheClass_OnSetValue( ApplicationTheClass _this, XRect value );

/* 'C' function for method : 'Application::TheClass.OnSetOutlet1()' */
void ApplicationTheClass_OnSetOutlet1( ApplicationTheClass _this, XRef value );

/* 'C' function for method : 'Application::TheClass.OnSetValue11()' */
void ApplicationTheClass_OnSetValue11( ApplicationTheClass _this, XRect value );

/* 'C' function for method : 'Application::TheClass.OnSetValue22()' */
void ApplicationTheClass_OnSetValue22( ApplicationTheClass _this, XRect value );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationTheClass_H */

/* Embedded Wizard */
