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

#ifndef _WidgetSetHorizontalValueBar_H
#define _WidgetSetHorizontalValueBar_H

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
#include "_EffectsFloatEffect.h"

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

/* Forward declaration of the class Core::Outline */
#ifndef _CoreOutline_
  EW_DECLARE_CLASS( CoreOutline )
#define _CoreOutline_
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

/* Forward declaration of the class Views::Border */
#ifndef _ViewsBorder_
  EW_DECLARE_CLASS( ViewsBorder )
#define _ViewsBorder_
#endif

/* Forward declaration of the class Views::Image */
#ifndef _ViewsImage_
  EW_DECLARE_CLASS( ViewsImage )
#define _ViewsImage_
#endif

/* Forward declaration of the class Views::Rectangle */
#ifndef _ViewsRectangle_
  EW_DECLARE_CLASS( ViewsRectangle )
#define _ViewsRectangle_
#endif

/* Forward declaration of the class WidgetSet::HorizontalValueBar */
#ifndef _WidgetSetHorizontalValueBar_
  EW_DECLARE_CLASS( WidgetSetHorizontalValueBar )
#define _WidgetSetHorizontalValueBar_
#endif

/* Forward declaration of the class WidgetSet::HorizontalValueBarConfig */
#ifndef _WidgetSetHorizontalValueBarConfig_
  EW_DECLARE_CLASS( WidgetSetHorizontalValueBarConfig )
#define _WidgetSetHorizontalValueBarConfig_
#endif


/* This class implements a 'horizontal value bar' (bar gauge) instrument intended 
   to display a value as a needle that moves horizontally along a track. The areas 
   on the left and on the right of the needle can appear as filled bars. The position 
   of the needle corresponds to the value specified in the property @CurrentValue, 
   which lies in range determined by the properties @MinValue and @MaxValue.
   Alternatively the property @Outlet can refer to any other 'int32' property the 
   widget should remain synchronized with. When the referred property is modified 
   by another one, the widget is automatically notified to remain in sync with the 
   property.
   This approach follows the Model-View-Controller (MVC) programming paradigm. Here 
   the value bar widget represents the 'View' and the property referred via 'Outlet' 
   can be seen as a part of the 'Model'.
   The exact look and feel of the value bar widget is determined by the 'Horizontal 
   Value Bar Configuration' object assigned to the property @Appearance. The configuration 
   object provides bitmaps, colors and other configuration parameters needed to 
   construct and display the value bar widget. Usually, you will manage in your 
   project your own configuration objects and customize the value bar widgets according 
   to your design expectations.
   The value bar widget implements a 'swing' animation effect to move the needle 
   smoothly. You can configure the duration and the timing of this effect in the 
   configuration object. Value bar widgets are not intended to be controlled by 
   the user. The widget ignores all touch and keyboard events and it can't be focused.
   The value bar widget provides an additional set of methods useful to query the 
   actual position of the needle and its possible movement range (@GetNeedleMaxPosition(), 
   @GetNeedleMinPosition(), @GetNeedlePosition()). These methods can be invoked 
   from a slot method assigned to the property @OnUpdate. In this manner you can 
   automatically arrange and updated additional decoration according to the actual 
   state of the value bar widget. For example, you can arrange a Views::Text view 
   to follow the needle and to display the actual value of the widget (@CurrentValue).
   For more details regarding the customization of the value bar widget see the 
   description of WidgetSet::HorizontalValueBarConfig class. */
EW_DEFINE_FIELDS( WidgetSetHorizontalValueBar, CoreGroup )
  EW_OBJECT  ( FloatEffect,     EffectsFloatEffect )
  EW_VARIABLE( outline2,        CoreOutline )
  EW_VARIABLE( outline1,        CoreOutline )
  EW_VARIABLE( borderView2,     ViewsBorder )
  EW_VARIABLE( rectView2,       ViewsRectangle )
  EW_VARIABLE( borderView1,     ViewsBorder )
  EW_VARIABLE( rectView1,       ViewsRectangle )
  EW_VARIABLE( imageView,       ViewsImage )
  EW_PROPERTY( Appearance,      WidgetSetHorizontalValueBarConfig )
  EW_VARIABLE( currentPos,      XFloat )
  EW_PROPERTY( CurrentValue,    XInt32 )
  EW_VARIABLE( setupCurrentPos, XBool )
EW_END_OF_FIELDS( WidgetSetHorizontalValueBar )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalValueBar' */
EW_DEFINE_METHODS( WidgetSetHorizontalValueBar, CoreGroup )
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
  EW_METHOD( OnSetBounds,       void )( WidgetSetHorizontalValueBar _this, XRect 
    value )
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
  EW_METHOD( UpdateViewState,   void )( WidgetSetHorizontalValueBar _this, XSet 
    aState )
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
EW_END_OF_METHODS( WidgetSetHorizontalValueBar )

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnSetBounds()' */
void WidgetSetHorizontalValueBar_OnSetBounds( WidgetSetHorizontalValueBar _this, 
  XRect value );

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void WidgetSetHorizontalValueBar_UpdateViewState( WidgetSetHorizontalValueBar _this, 
  XSet aState );

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onUpdatePos()' */
void WidgetSetHorizontalValueBar_onUpdatePos( WidgetSetHorizontalValueBar _this, 
  XObject sender );

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onEndFloatEffect()' */
void WidgetSetHorizontalValueBar_onEndFloatEffect( WidgetSetHorizontalValueBar _this, 
  XObject sender );

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onFloatEffect()' */
void WidgetSetHorizontalValueBar_onFloatEffect( WidgetSetHorizontalValueBar _this, 
  XObject sender );

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onConfigChanged()' */
void WidgetSetHorizontalValueBar_onConfigChanged( WidgetSetHorizontalValueBar _this, 
  XObject sender );

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnGetCurrentValue()' */
XInt32 WidgetSetHorizontalValueBar_OnGetCurrentValue( WidgetSetHorizontalValueBar _this );

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnSetCurrentValue()' */
void WidgetSetHorizontalValueBar_OnSetCurrentValue( WidgetSetHorizontalValueBar _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnSetAppearance()' */
void WidgetSetHorizontalValueBar_OnSetAppearance( WidgetSetHorizontalValueBar _this, 
  WidgetSetHorizontalValueBarConfig value );

#ifdef __cplusplus
  }
#endif

#endif /* _WidgetSetHorizontalValueBar_H */

/* Embedded Wizard */
