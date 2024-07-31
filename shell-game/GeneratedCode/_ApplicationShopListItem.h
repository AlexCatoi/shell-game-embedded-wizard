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

#ifndef _ApplicationShopListItem_H
#define _ApplicationShopListItem_H

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

#include "_CoreGroup.h"
#include "_CoreTimer.h"
#include "_ViewsImage.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"

/* Forward declaration of the class Application::DeviceClass */
#ifndef _ApplicationDeviceClass_
  EW_DECLARE_CLASS( ApplicationDeviceClass )
#define _ApplicationDeviceClass_
#endif

/* Forward declaration of the class Application::ShopListItem */
#ifndef _ApplicationShopListItem_
  EW_DECLARE_CLASS( ApplicationShopListItem )
#define _ApplicationShopListItem_
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


/* Deklaration of class : 'Application::ShopListItem' */
EW_DEFINE_FIELDS( ApplicationShopListItem, CoreGroup )
  EW_OBJECT  ( Image,           ViewsImage )
  EW_OBJECT  ( PushButton,      WidgetSetPushButton )
  EW_OBJECT  ( PushButtonConfigBuy, WidgetSetPushButtonConfig )
  EW_OBJECT  ( Text,            ViewsText )
  EW_OBJECT  ( PushButtonConfigSold, WidgetSetPushButtonConfig )
  EW_OBJECT  ( Active,          ViewsImage )
  EW_OBJECT  ( SongName,        ViewsText )
  EW_OBJECT  ( AchPopDismiss,   CoreTimer )
  EW_VARIABLE( Obj,             ApplicationDeviceClass )
  EW_PROPERTY( Price,           XInt32 )
  EW_PROPERTY( ImageNr,         XInt32 )
  EW_PROPERTY( Color,           XColor )
  EW_PROPERTY( Property,        XInt32 )
  EW_PROPERTY( Bought,          XBool )
EW_END_OF_FIELDS( ApplicationShopListItem )

/* Virtual Method Table (VMT) for the class : 'Application::ShopListItem' */
EW_DEFINE_METHODS( ApplicationShopListItem, CoreGroup )
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
EW_END_OF_METHODS( ApplicationShopListItem )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationShopListItem_Init( ApplicationShopListItem _this, XHandle aArg );

/* 'C' function for method : 'Application::ShopListItem.OnSetPrice()' */
void ApplicationShopListItem_OnSetPrice( ApplicationShopListItem _this, XInt32 value );

/* 'C' function for method : 'Application::ShopListItem.OnSetImageNr()' */
void ApplicationShopListItem_OnSetImageNr( ApplicationShopListItem _this, XInt32 
  value );

/* 'C' function for method : 'Application::ShopListItem.OnSetBought()' */
void ApplicationShopListItem_OnSetBought( ApplicationShopListItem _this, XBool value );

/* 'C' function for method : 'Application::ShopListItem.OnSetColor()' */
void ApplicationShopListItem_OnSetColor( ApplicationShopListItem _this, XColor value );

/* 'C' function for method : 'Application::ShopListItem.OnSetProperty()' */
void ApplicationShopListItem_OnSetProperty( ApplicationShopListItem _this, XInt32 
  value );

/* 'C' function for method : 'Application::ShopListItem.Buy()' */
void ApplicationShopListItem_Buy( ApplicationShopListItem _this, XObject sender );

/* 'C' function for method : 'Application::ShopListItem.SongNameVisible()' */
void ApplicationShopListItem_SongNameVisible( ApplicationShopListItem _this );

/* 'C' function for method : 'Application::ShopListItem.PlayNewActiveMusic()' */
void ApplicationShopListItem_PlayNewActiveMusic( ApplicationShopListItem _this );

/* 'C' function for method : 'Application::ShopListItem.BoughtOrNot()' */
void ApplicationShopListItem_BoughtOrNot( ApplicationShopListItem _this, XBool aArg1 );

/* 'C' function for method : 'Application::ShopListItem.ActiveItem()' */
void ApplicationShopListItem_ActiveItem( ApplicationShopListItem _this );

/* 'C' function for method : 'Application::ShopListItem.UpdateCoinsSpent()' */
void ApplicationShopListItem_UpdateCoinsSpent( ApplicationShopListItem _this );

/* 'C' function for method : 'Application::ShopListItem.UpdateActives()' */
void ApplicationShopListItem_UpdateActives( ApplicationShopListItem _this );

/* 'C' function for method : 'Application::ShopListItem.Check()' */
XInt32 ApplicationShopListItem_Check( ApplicationShopListItem _this, XInt32 aArg1 );

/* 'C' function for method : 'Application::ShopListItem.AchPopTrigger()' */
void ApplicationShopListItem_AchPopTrigger( ApplicationShopListItem _this, XObject 
  sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationShopListItem_H */

/* Embedded Wizard */
