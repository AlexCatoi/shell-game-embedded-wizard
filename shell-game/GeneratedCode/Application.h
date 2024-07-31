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

#ifndef Application_H
#define Application_H

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

#include "_ApplicationAchPop.h"
#include "_ApplicationAchievement.h"
#include "_ApplicationAchievements.h"
#include "_ApplicationApplication.h"
#include "_ApplicationContainer.h"
#include "_ApplicationDeviceClass.h"
#include "_ApplicationDeviceClass1.h"
#include "_ApplicationGame.h"
#include "_ApplicationHelpMenu.h"
#include "_ApplicationLoadingGame.h"
#include "_ApplicationMainMenu.h"
#include "_ApplicationSettings.h"
#include "_ApplicationShop.h"
#include "_ApplicationShopListItem.h"
#include "_ApplicationStats.h"
#include "_ApplicationTheClass.h"

/* Font resource : 'Application::Font' */
EW_DECLARE_FONT_RES( ApplicationFont )

/* Bitmap resource : 'Application::Cup' */
EW_DECLARE_BITMAP_RES( ApplicationCup )

/* Font resource : 'Application::Font1' */
EW_DECLARE_FONT_RES( ApplicationFont1 )

/* Font resource : 'Application::Font2' */
EW_DECLARE_FONT_RES( ApplicationFont2 )

/* Bitmap resource : 'Application::MusicNote' */
EW_DECLARE_BITMAP_RES( ApplicationMusicNote )

/* Bitmap resource : 'Application::BallSlider' */
EW_DECLARE_BITMAP_RES( ApplicationBallSlider )

/* Bitmap resource : 'Application::ShopCups' */
EW_DECLARE_BITMAP_RES( ApplicationShopCups )

/* Bitmap resource : 'Application::ShopBalls' */
EW_DECLARE_BITMAP_RES( ApplicationShopBalls )

/* Bitmap resource : 'Application::Coin' */
EW_DECLARE_BITMAP_RES( ApplicationCoin )

/* Bitmap resource : 'Application::Check' */
EW_DECLARE_BITMAP_RES( ApplicationCheck )

/* Bitmap resource : 'Application::ShopMusic' */
EW_DECLARE_BITMAP_RES( ApplicationShopMusic )

/* Font resource : 'Application::MusicFont' */
EW_DECLARE_FONT_RES( ApplicationMusicFont )

/* Bitmap resource : 'Application::HelpIcon' */
EW_DECLARE_BITMAP_RES( ApplicationHelpIcon )

/* Bitmap resource : 'Application::SettingsIcon' */
EW_DECLARE_BITMAP_RES( ApplicationSettingsIcon )

/* Bitmap resource : 'Application::HelpImages' */
EW_DECLARE_BITMAP_RES( ApplicationHelpImages )

/* Bitmap resource : 'Application::Spider' */
EW_DECLARE_BITMAP_RES( ApplicationSpider )

/* Bitmap resource : 'Application::Pumpkings' */
EW_DECLARE_BITMAP_RES( ApplicationPumpkings )

/* Bitmap resource : 'Application::CrystalBall' */
EW_DECLARE_BITMAP_RES( ApplicationCrystalBall )

/* Bitmap resource : 'Application::Achives' */
EW_DECLARE_BITMAP_RES( ApplicationAchives )

/* Bitmap resource : 'Application::AchiveIcon' */
EW_DECLARE_BITMAP_RES( ApplicationAchiveIcon )

/* User defined auto object: 'Application::Device' */
EW_DECLARE_AUTOOBJECT( ApplicationDevice, ApplicationDeviceClass )

/* User defined enumeration: 'Application::ScreenType' */
typedef XEnum ApplicationScreenType;

#define ApplicationScreenTypeMainMenu                       0
#define ApplicationScreenTypeHelpMenu                       1
#define ApplicationScreenTypeSettingsMenu                   2
#define ApplicationScreenTypeShop                           3
#define ApplicationScreenTypeStats                          4
#define ApplicationScreenTypeInitilizeGame                  5
#define ApplicationScreenTypeGame                           6
#define ApplicationScreenTypeAchivements                    7

/* User defined auto object: 'Application::Device1' */
EW_DECLARE_AUTOOBJECT( ApplicationDevice1, ApplicationDeviceClass1 )

#ifdef __cplusplus
  }
#endif

#endif /* Application_H */

/* Embedded Wizard */
