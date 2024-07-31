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

#ifndef _ApplicationDeviceClass1_H
#define _ApplicationDeviceClass1_H

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

/* Forward declaration of the class Application::DeviceClass1 */
#ifndef _ApplicationDeviceClass1_
  EW_DECLARE_CLASS( ApplicationDeviceClass1 )
#define _ApplicationDeviceClass1_
#endif


/* Deklaration of class : 'Application::DeviceClass1' */
EW_DEFINE_FIELDS( ApplicationDeviceClass1, TemplatesDeviceClass )
  EW_PROPERTY( CurrentScreen,   XEnum )
  EW_VARIABLE( LeftToRight,     XInt32 )
  EW_VARIABLE( ShowOr,          XBool )
EW_END_OF_FIELDS( ApplicationDeviceClass1 )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass1' */
EW_DEFINE_METHODS( ApplicationDeviceClass1, TemplatesDeviceClass )
EW_END_OF_METHODS( ApplicationDeviceClass1 )

/* 'C' function for method : 'Application::DeviceClass1.Done()' */
void ApplicationDeviceClass1_Done( ApplicationDeviceClass1 _this );

/* 'C' function for method : 'Application::DeviceClass1.Init()' */
void ApplicationDeviceClass1_Init( ApplicationDeviceClass1 _this, XHandle aArg );

/* 'C' function for method : 'Application::DeviceClass1.OnGetCurrentScreen()' */
XEnum ApplicationDeviceClass1_OnGetCurrentScreen( ApplicationDeviceClass1 _this );

/* 'C' function for method : 'Application::DeviceClass1.OnSetCurrentScreen()' */
void ApplicationDeviceClass1_OnSetCurrentScreen( ApplicationDeviceClass1 _this, 
  XEnum value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass1_UpdateProperty( ApplicationDeviceClass1 _this, XEnum 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass1.UpdateProperty()' */
void ApplicationDeviceClass1__UpdateProperty( void* _this, XEnum aNewValue );

/* The following define announces the presence of the method Application::DeviceClass1.UpdateProperty(). */
#define _ApplicationDeviceClass1__UpdateProperty_

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationDeviceClass1_H */

/* Embedded Wizard */
