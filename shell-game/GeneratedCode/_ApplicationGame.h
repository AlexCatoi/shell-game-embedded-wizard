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

#ifndef _ApplicationGame_H
#define _ApplicationGame_H

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

#include "_ApplicationTheClass.h"
#include "_CoreGroup.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_EffectsColorEffect.h"
#include "_EffectsPointEffect.h"
#include "_EffectsRectEffect.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"

/* Forward declaration of the class Application::DeviceClass */
#ifndef _ApplicationDeviceClass_
  EW_DECLARE_CLASS( ApplicationDeviceClass )
#define _ApplicationDeviceClass_
#endif

/* Forward declaration of the class Application::Game */
#ifndef _ApplicationGame_
  EW_DECLARE_CLASS( ApplicationGame )
#define _ApplicationGame_
#endif

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::KeyPressHandler */
#ifndef _CoreKeyPressHandler_
  EW_DECLARE_CLASS( CoreKeyPressHandler )
#define _CoreKeyPressHandler_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::TaskQueue */
#ifndef _CoreTaskQueue_
  EW_DECLARE_CLASS( CoreTaskQueue )
#define _CoreTaskQueue_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Effects::Fader */
#ifndef _EffectsFader_
  EW_DECLARE_CLASS( EffectsFader )
#define _EffectsFader_
#endif


/* Deklaration of class : 'Application::Game' */
EW_DEFINE_FIELDS( ApplicationGame, CoreGroup )
  EW_OBJECT  ( Rectangle,       ViewsRectangle )
  EW_OBJECT  ( Center,          ViewsImage )
  EW_OBJECT  ( Rectangle2,      ViewsRectangle )
  EW_OBJECT  ( Ball,            ViewsImage )
  EW_OBJECT  ( ShowBall,        EffectsPointEffect )
  EW_OBJECT  ( HideBall,        EffectsPointEffect )
  EW_OBJECT  ( Left,            ViewsImage )
  EW_OBJECT  ( Right,           ViewsImage )
  EW_OBJECT  ( MakeMoves,       CoreTimer )
  EW_OBJECT  ( Text,            ViewsText )
  EW_OBJECT  ( WaitFinish,      CoreTimer )
  EW_OBJECT  ( ChooseLeft,      CoreSimpleTouchHandler )
  EW_OBJECT  ( ChooseCenter,    CoreSimpleTouchHandler )
  EW_OBJECT  ( ChooseRight,     CoreSimpleTouchHandler )
  EW_OBJECT  ( LeftToRightF,    EffectsRectEffect )
  EW_OBJECT  ( LeftToRightS,    EffectsRectEffect )
  EW_OBJECT  ( RightToLeftF,    EffectsRectEffect )
  EW_OBJECT  ( RightToLeftS,    EffectsRectEffect )
  EW_OBJECT  ( LeftToCenterF,   EffectsRectEffect )
  EW_OBJECT  ( LeftToCenterS,   EffectsRectEffect )
  EW_OBJECT  ( CenterToLeftF,   EffectsRectEffect )
  EW_OBJECT  ( CenterToLeftS,   EffectsRectEffect )
  EW_OBJECT  ( CenterToRightF,  EffectsRectEffect )
  EW_OBJECT  ( CenterToRightS,  EffectsRectEffect )
  EW_OBJECT  ( RightToCenterF,  EffectsRectEffect )
  EW_OBJECT  ( RightToCenterS,  EffectsRectEffect )
  EW_OBJECT  ( ChooseTextEffectTL, EffectsColorEffect )
  EW_OBJECT  ( ChooseTextEffectBR, EffectsColorEffect )
  EW_OBJECT  ( NivelCurrent,    ViewsText )
  EW_OBJECT  ( PushButton,      WidgetSetPushButton )
  EW_OBJECT  ( PushButtonConfig, WidgetSetPushButtonConfig )
  EW_OBJECT  ( LeftCenterAnimation, ApplicationTheClass )
  EW_OBJECT  ( CenterRightAnimation, ApplicationTheClass )
  EW_OBJECT  ( LeftRightAnimation, ApplicationTheClass )
  EW_OBJECT  ( Image,           ViewsImage )
  EW_OBJECT  ( Text1,           ViewsText )
  EW_OBJECT  ( SpiderLeft,      ViewsImage )
  EW_OBJECT  ( SpiderRight,     ViewsImage )
  EW_OBJECT  ( PumpLeft,        ViewsImage )
  EW_OBJECT  ( PumpRight,       ViewsImage )
  EW_OBJECT  ( AchPopDismiss,   CoreTimer )
  EW_VARIABLE( SettingsObject,  ApplicationDeviceClass )
  EW_VARIABLE( Moves,           XInt32 )
  EW_VARIABLE( Nivel,           XInt32 )
  EW_VARIABLE( Correct,         XBool )
EW_END_OF_FIELDS( ApplicationGame )

/* Virtual Method Table (VMT) for the class : 'Application::Game' */
EW_DEFINE_METHODS( ApplicationGame, CoreGroup )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( CoreGroup _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( GetClipping,       XRect )( CoreGroup _this )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, CoreView aStartView, 
    XSet aRetargetReason )
  EW_METHOD( AdjustDrawingArea, XRect )( CoreGroup _this, XRect aArea )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreGroup _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( OnSetOpacity,      void )( CoreGroup _this, XInt32 value )
  EW_METHOD( FindCurrentDialog, CoreGroup )( CoreGroup _this )
  EW_METHOD( SwitchToDialog,    void )( CoreGroup _this, CoreGroup aDialogGroup, 
    EffectsTransition aPresentTransition, EffectsTransition aDismissTransition, 
    EffectsTransition aOverlayTransition, EffectsTransition aRestoreTransition, 
    EffectsTransition aOverrideDismissTransition, EffectsTransition aOverrideOverlayTransition, 
    EffectsTransition aOverrideRestoreTransition, XSlot aComplete, XSlot aCancel, 
    XBool aCombine )
  EW_METHOD( DismissDialog,     void )( CoreGroup _this, CoreGroup aDialogGroup, 
    EffectsTransition aOverrideDismissTransition, EffectsTransition aOverrideOverlayTransition, 
    EffectsTransition aOverrideRestoreTransition, XSlot aComplete, XSlot aCancel, 
    XBool aCombine )
  EW_METHOD( PresentDialog,     void )( CoreGroup _this, CoreGroup aDialogGroup, 
    EffectsTransition aPresentTransition, EffectsTransition aDismissTransition, 
    EffectsTransition aOverlayTransition, EffectsTransition aRestoreTransition, 
    EffectsTransition aOverrideOverlayTransition, EffectsTransition aOverrideRestoreTransition, 
    XSlot aComplete, XSlot aCancel, XBool aCombine )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( FindSiblingView,   CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( FadeGroup,         void )( CoreGroup _this, CoreGroup aGroup, EffectsFader 
    aFader, XSlot aComplete, XSlot aCancel, XBool aCombine )
  EW_METHOD( RestackTop,        void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Restack,           void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
  EW_METHOD( Remove,            void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( ApplicationGame )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationGame_Init( ApplicationGame _this, XHandle aArg );

/* 'C' function for method : 'Application::Game.CallHideBall()' */
void ApplicationGame_CallHideBall( ApplicationGame _this, XObject sender );

/* 'C' function for method : 'Application::Game.LeftCenter()' */
void ApplicationGame_LeftCenter( ApplicationGame _this, XObject sender );

/* 'C' function for method : 'Application::Game.RightLeft()' */
void ApplicationGame_RightLeft( ApplicationGame _this, XObject sender );

/* 'C' function for method : 'Application::Game.ShowBallCall()' */
void ApplicationGame_ShowBallCall( ApplicationGame _this, XObject sender );

/* 'C' function for method : 'Application::Game.HideIt()' */
void ApplicationGame_HideIt( ApplicationGame _this, XObject sender );

/* 'C' function for method : 'Application::Game.CenterRight()' */
void ApplicationGame_CenterRight( ApplicationGame _this, XObject sender );

/* 'C' function for method : 'Application::Game.ShowBallFinal()' */
void ApplicationGame_ShowBallFinal( ApplicationGame _this, XObject sender );

/* 'C' function for method : 'Application::Game.GameLogic()' */
void ApplicationGame_GameLogic( ApplicationGame _this, XObject sender );

/* 'C' function for method : 'Application::Game.OnFinish()' */
void ApplicationGame_OnFinish( ApplicationGame _this, XObject sender );

/* 'C' function for method : 'Application::Game.Choice()' */
void ApplicationGame_Choice( ApplicationGame _this, XObject sender );

/* 'C' function for method : 'Application::Game.Reset()' */
void ApplicationGame_Reset( ApplicationGame _this, XObject sender );

/* 'C' function for method : 'Application::Game.NextLevel()' */
void ApplicationGame_NextLevel( ApplicationGame _this, XObject sender );

/* 'C' function for method : 'Application::Game.GoToMenu()' */
void ApplicationGame_GoToMenu( ApplicationGame _this, XObject sender );

/* 'C' function for method : 'Application::Game.LeftCenterSecondaryAnimation()' */
void ApplicationGame_LeftCenterSecondaryAnimation( ApplicationGame _this );

/* 'C' function for method : 'Application::Game.RightLeftSecondaryAnimation()' */
void ApplicationGame_RightLeftSecondaryAnimation( ApplicationGame _this );

/* 'C' function for method : 'Application::Game.CenterRightSecondaryAnimation()' */
void ApplicationGame_CenterRightSecondaryAnimation( ApplicationGame _this );

/* 'C' function for method : 'Application::Game.UpdateCoins()' */
void ApplicationGame_UpdateCoins( ApplicationGame _this, XInt32 coins );

/* 'C' function for method : 'Application::Game.MakeItHalloween()' */
void ApplicationGame_MakeItHalloween( ApplicationGame _this );

/* 'C' function for method : 'Application::Game.FromDB()' */
void ApplicationGame_FromDB( ApplicationGame _this );

/* 'C' function for method : 'Application::Game.AchPopTrigger()' */
void ApplicationGame_AchPopTrigger( ApplicationGame _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationGame_H */

/* Embedded Wizard */
