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

#ifndef _ApplicationDeviceClassSimulation_H
#define _ApplicationDeviceClassSimulation_H

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

#include "_ApplicationDeviceClass.h"


/* Deklaration of class variant : 'Application::DeviceClassSimulation' */
EW_DEFINE_VFIELDS( ApplicationDeviceClassSimulation, XObject, ApplicationDeviceClass )
EW_END_OF_VFIELDS( ApplicationDeviceClassSimulation )

/* Virtual Method Table (VMT) for the class variant : 'Application::DeviceClassSimulation' */
EW_DEFINE_VMETHODS( ApplicationDeviceClassSimulation, XObject, ApplicationDeviceClass )
  EW_METHOD( OnSetNextLevel,    void )( ApplicationDeviceClass _this, XBool value )
  EW_METHOD( CheckAchivements,  XInt32 )( ApplicationDeviceClass _this, XInt32 aArg1 )
EW_END_OF_VMETHODS( ApplicationDeviceClassSimulation )

/* 'C' function for method : 'Application::DeviceClassSimulation.OnSetNextLevel()' */
void ApplicationDeviceClassSimulation_OnSetNextLevel( ApplicationDeviceClass _this, 
  XBool value );

/* 'C' function for method : 'Application::DeviceClassSimulation.CheckAchivements()' */
XInt32 ApplicationDeviceClassSimulation_CheckAchivements( ApplicationDeviceClass _this, 
  XInt32 aArg1 );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationDeviceClassSimulation_H */

/* Embedded Wizard */
