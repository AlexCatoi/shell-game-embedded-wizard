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

#include "ewlocale.h"
#include "_CoreKeyPressHandler.h"
#include "_CoreOutline.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_EffectsFloatEffect.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsShadow.h"
#include "_ViewsText.h"
#include "_WidgetSetHorizontalSlider.h"
#include "_WidgetSetHorizontalSliderConfig.h"
#include "_WidgetSetHorizontalValueBar.h"
#include "_WidgetSetHorizontalValueBarConfig.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_WidgetSetToggleButton.h"
#include "_WidgetSetToggleButtonConfig.h"
#include "_WidgetSetWidgetConfig.h"
#include "Core.h"
#include "Effects.h"
#include "Graphics.h"
#include "Resources.h"
#include "Views.h"
#include "WidgetSet.h"

/* Constant values used in this 'C' module only. */
static const XColor _Const0000 = { 0x6C, 0x6E, 0x70, 0xFF };
static const XColor _Const0001 = { 0xA8, 0xAB, 0xAB, 0xFF };
static const XColor _Const0002 = { 0xA8, 0xAB, 0xAB, 0xAA };
static const XPoint _Const0003 = { 70, 39 };
static const XColor _Const0004 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XColor _Const0005 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const0006 = {{ 0, 0 }, { 200, 50 }};
static const XPoint _Const0007 = { 0, 0 };
static const XPoint _Const0008 = { -1, -1 };
static const XPoint _Const0009 = { 0, 50 };
static const XPoint _Const000A = { 200, 50 };
static const XPoint _Const000B = { 200, 0 };
static const XColor _Const000C = { 0x00, 0x00, 0x00, 0x00 };
static const XRect _Const000D = {{ 0, 0 }, { 0, 0 }};
static const XRect _Const000E = {{ -8, -8 }, { 9, 9 }};
static const XRect _Const000F = {{ 0, 0 }, { 150, 50 }};
static const XPoint _Const0010 = { 150, 50 };
static const XPoint _Const0011 = { 150, 0 };

/* Include a file containing the bitmap resource : 'WidgetSet::SwitchMedium' */
#include "_WidgetSetSwitchMedium.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::SwitchMedium' */
EW_RES_WITHOUT_VARIANTS( WidgetSetSwitchMedium )

/* This autoobject provides one of the default customizations for the 'toggle' widget 
   (WidgetSet::ToggleButton) in its medium size variant. With this customization 
   the toggle button appears as a 'switch'. */
EW_DEFINE_AUTOOBJECT( WidgetSetSwitch_Lime_Medium, WidgetSetToggleButtonConfig )

/* Initializer for the auto object 'WidgetSet::Switch_Lime_Medium' */
void WidgetSetSwitch_Lime_Medium__Init( WidgetSetToggleButtonConfig _this )
{
  WidgetSetToggleButtonConfig_OnSetLabelOnColorActive( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorFocused( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorDisabled( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorDefault( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorActive( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorFocused( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorDisabled( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorDefault( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetLabelMarginRight( _this, 75 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintActive( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintFocused( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintDisabled( _this, _Const0002 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintDefault( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintActive( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintFocused( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintDisabled( _this, _Const0002 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintDefault( _this, _Const0000 );
  WidgetSetToggleButtonConfig_OnSetIconMarginRight( _this, 75 );
  WidgetSetToggleButtonConfig_OnSetLabelAlignment( _this, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  WidgetSetToggleButtonConfig_OnSetLabelOnFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetToggleButtonConfig_OnSetLabelOffFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetToggleButtonConfig_OnSetIconAlignment( _this, ViewsImageAlignmentAlignHorzLeft 
  | ViewsImageAlignmentAlignVertCenter );
  WidgetSetToggleButtonConfig_OnSetFaceLayout( _this, CoreLayoutAlignToRight );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameActive( _this, 7 );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameFocused( _this, 5 );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameDisabled( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameDefault( _this, 3 );
  WidgetSetToggleButtonConfig_OnSetFaceOnBitmapActive( _this, EwLoadResource( &WidgetSetSwitchMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOnBitmapFocused( _this, EwLoadResource( &WidgetSetSwitchMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOnBitmapDisabled( _this, EwLoadResource( 
  &WidgetSetSwitchMedium, ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOnBitmapDefault( _this, EwLoadResource( &WidgetSetSwitchMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameActive( _this, 6 );
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameFocused( _this, 4 );
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameDisabled( _this, 0 );
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameDefault( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetFaceOffBitmapActive( _this, EwLoadResource( &WidgetSetSwitchMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffBitmapFocused( _this, EwLoadResource( 
  &WidgetSetSwitchMedium, ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffBitmapDisabled( _this, EwLoadResource( 
  &WidgetSetSwitchMedium, ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffBitmapDefault( _this, EwLoadResource( 
  &WidgetSetSwitchMedium, ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetWidgetMinSize( _this, _Const0003 );
}

/* Re-Initializer for the auto object 'WidgetSet::Switch_Lime_Medium' */
void WidgetSetSwitch_Lime_Medium__ReInit( WidgetSetToggleButtonConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::Switch_Lime_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetSwitch_Lime_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetSwitch_Lime_Medium )

/* Initializer for the class 'WidgetSet::HorizontalValueBarConfig' */
void WidgetSetHorizontalValueBarConfig__Init( WidgetSetHorizontalValueBarConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetHorizontalValueBarConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetHorizontalValueBarConfig );

  /* ... and initialize objects, variables, properties, etc. */
}

/* Re-Initializer for the class 'WidgetSet::HorizontalValueBarConfig' */
void WidgetSetHorizontalValueBarConfig__ReInit( WidgetSetHorizontalValueBarConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::HorizontalValueBarConfig' */
void WidgetSetHorizontalValueBarConfig__Done( WidgetSetHorizontalValueBarConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetNeedleBitmap()' */
void WidgetSetHorizontalValueBarConfig_OnSetNeedleBitmap( WidgetSetHorizontalValueBarConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->NeedleBitmap == value )
    return;

  _this->NeedleBitmap = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightBorderColor()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightBorderColor( WidgetSetHorizontalValueBarConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightBorderColor, value ))
    return;

  _this->TrackRightBorderColor = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightBorderWidth()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightBorderWidth( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightBorderWidth == value )
    return;

  _this->TrackRightBorderWidth = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightColor()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightColor( WidgetSetHorizontalValueBarConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightColor, value ))
    return;

  _this->TrackRightColor = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightFlattened()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightFlattened( WidgetSetHorizontalValueBarConfig _this, 
  XBool value )
{
  if ( _this->TrackRightFlattened == value )
    return;

  _this->TrackRightFlattened = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightCornerRadius()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightCornerRadius( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightCornerRadius == value )
    return;

  _this->TrackRightCornerRadius = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightThickness()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightThickness( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightThickness == value )
    return;

  _this->TrackRightThickness = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightWithEdge()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightWithEdge( WidgetSetHorizontalValueBarConfig _this, 
  XBool value )
{
  if ( _this->TrackRightWithEdge == value )
    return;

  _this->TrackRightWithEdge = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightMarginRight()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightMarginRight( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value )
{
  if ( _this->TrackRightMarginRight == value )
    return;

  _this->TrackRightMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackLeftBorderColor()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackLeftBorderColor( WidgetSetHorizontalValueBarConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackLeftBorderColor, value ))
    return;

  _this->TrackLeftBorderColor = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackLeftBorderWidth()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackLeftBorderWidth( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftBorderWidth == value )
    return;

  _this->TrackLeftBorderWidth = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackLeftColor()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackLeftColor( WidgetSetHorizontalValueBarConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackLeftColor, value ))
    return;

  _this->TrackLeftColor = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackLeftFlattened()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackLeftFlattened( WidgetSetHorizontalValueBarConfig _this, 
  XBool value )
{
  if ( _this->TrackLeftFlattened == value )
    return;

  _this->TrackLeftFlattened = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackLeftCornerRadius()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackLeftCornerRadius( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftCornerRadius == value )
    return;

  _this->TrackLeftCornerRadius = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackLeftThickness()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackLeftThickness( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftThickness == value )
    return;

  _this->TrackLeftThickness = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalValueBarConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalValueBarConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalValueBarConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalValueBarConfig' */
EW_DEFINE_CLASS( WidgetSetHorizontalValueBarConfig, WidgetSetWidgetConfig, NeedleBitmap, 
                 NeedleBitmap, TrackRightBorderColor, TrackRightBorderColor, TrackRightBorderColor, 
                 TrackRightBorderColor, "WidgetSet::HorizontalValueBarConfig" )
EW_END_OF_CLASS( WidgetSetHorizontalValueBarConfig )

/* Initializer for the class 'WidgetSet::HorizontalSliderConfig' */
void WidgetSetHorizontalSliderConfig__Init( WidgetSetHorizontalSliderConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetHorizontalSliderConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetHorizontalSliderConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->ThumbTintDefault = _Const0004;
}

/* Re-Initializer for the class 'WidgetSet::HorizontalSliderConfig' */
void WidgetSetHorizontalSliderConfig__ReInit( WidgetSetHorizontalSliderConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::HorizontalSliderConfig' */
void WidgetSetHorizontalSliderConfig__Done( WidgetSetHorizontalSliderConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetCoverBitmapDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetCoverBitmapDefault( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->CoverBitmapDefault == value )
    return;

  _this->CoverBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbShadowColorDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbShadowColorDefault( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbShadowColorDefault, value ))
    return;

  _this->ThumbShadowColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbCornerRadiusDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbCornerRadiusDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusDefault == value )
    return;

  _this->ThumbCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbSizeDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbSizeDefault( WidgetSetHorizontalSliderConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->ThumbSizeDefault, value ))
    return;

  _this->ThumbSizeDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbTintDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbTintDefault( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbTintDefault, value ))
    return;

  _this->ThumbTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapActive()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapActive( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbBitmapActive == value )
    return;

  _this->ThumbBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapFocused( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbBitmapFocused == value )
    return;

  _this->ThumbBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDisabled( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbBitmapDisabled == value )
    return;

  _this->ThumbBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDefault( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbBitmapDefault == value )
    return;

  _this->ThumbBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbOffsetActive()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbOffsetActive( WidgetSetHorizontalSliderConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffsetActive, value ))
    return;

  _this->ThumbOffsetActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbOffsetFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbOffsetFocused( WidgetSetHorizontalSliderConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffsetFocused, value ))
    return;

  _this->ThumbOffsetFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbOffsetDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbOffsetDisabled( WidgetSetHorizontalSliderConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffsetDisabled, value ))
    return;

  _this->ThumbOffsetDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbOffsetDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbOffsetDefault( WidgetSetHorizontalSliderConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffsetDefault, value ))
    return;

  _this->ThumbOffsetDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBorderColorActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderColorActive( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightBorderColorActive, value ))
    return;

  _this->TrackRightBorderColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBorderColorFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderColorFocused( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightBorderColorFocused, value ))
    return;

  _this->TrackRightBorderColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBorderColorDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderColorDisabled( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightBorderColorDisabled, value ))
    return;

  _this->TrackRightBorderColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBorderColorDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderColorDefault( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightBorderColorDefault, value ))
    return;

  _this->TrackRightBorderColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBorderWidthActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderWidthActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightBorderWidthActive == value )
    return;

  _this->TrackRightBorderWidthActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBorderWidthFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderWidthFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightBorderWidthFocused == value )
    return;

  _this->TrackRightBorderWidthFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBorderWidthDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderWidthDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightBorderWidthDisabled == value )
    return;

  _this->TrackRightBorderWidthDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBorderWidthDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderWidthDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightBorderWidthDefault == value )
    return;

  _this->TrackRightBorderWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightColorActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightColorActive( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightColorActive, value ))
    return;

  _this->TrackRightColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightColorFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightColorFocused( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightColorFocused, value ))
    return;

  _this->TrackRightColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightColorDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightColorDisabled( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightColorDisabled, value ))
    return;

  _this->TrackRightColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightColorDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightColorDefault( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightColorDefault, value ))
    return;

  _this->TrackRightColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightCornerRadiusActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightCornerRadiusActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightCornerRadiusActive == value )
    return;

  _this->TrackRightCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightCornerRadiusFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightCornerRadiusFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightCornerRadiusFocused == value )
    return;

  _this->TrackRightCornerRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightCornerRadiusDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightCornerRadiusDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightCornerRadiusDisabled == value )
    return;

  _this->TrackRightCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightCornerRadiusDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightCornerRadiusDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightCornerRadiusDefault == value )
    return;

  _this->TrackRightCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightThicknessActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightThicknessActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightThicknessActive == value )
    return;

  _this->TrackRightThicknessActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightThicknessFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightThicknessFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightThicknessFocused == value )
    return;

  _this->TrackRightThicknessFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightThicknessDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightThicknessDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightThicknessDisabled == value )
    return;

  _this->TrackRightThicknessDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightThicknessDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightThicknessDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightThicknessDefault == value )
    return;

  _this->TrackRightThicknessDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFlattened()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFlattened( WidgetSetHorizontalSliderConfig _this, 
  XBool value )
{
  if ( _this->TrackRightFlattened == value )
    return;

  _this->TrackRightFlattened = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightMarginRight()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightMarginRight( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackRightMarginRight == value )
    return;

  _this->TrackRightMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBorderColorActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBorderColorActive( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackLeftBorderColorActive, value ))
    return;

  _this->TrackLeftBorderColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBorderColorFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBorderColorFocused( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackLeftBorderColorFocused, value ))
    return;

  _this->TrackLeftBorderColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBorderColorDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBorderColorDisabled( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackLeftBorderColorDisabled, value ))
    return;

  _this->TrackLeftBorderColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBorderColorDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBorderColorDefault( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackLeftBorderColorDefault, value ))
    return;

  _this->TrackLeftBorderColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBorderWidthActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBorderWidthActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftBorderWidthActive == value )
    return;

  _this->TrackLeftBorderWidthActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBorderWidthFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBorderWidthFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftBorderWidthFocused == value )
    return;

  _this->TrackLeftBorderWidthFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBorderWidthDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBorderWidthDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftBorderWidthDisabled == value )
    return;

  _this->TrackLeftBorderWidthDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBorderWidthDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBorderWidthDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftBorderWidthDefault == value )
    return;

  _this->TrackLeftBorderWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftColorActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftColorActive( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackLeftColorActive, value ))
    return;

  _this->TrackLeftColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftColorFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftColorFocused( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackLeftColorFocused, value ))
    return;

  _this->TrackLeftColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftColorDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftColorDisabled( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackLeftColorDisabled, value ))
    return;

  _this->TrackLeftColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftColorDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftColorDefault( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackLeftColorDefault, value ))
    return;

  _this->TrackLeftColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftCornerRadiusActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftCornerRadiusActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftCornerRadiusActive == value )
    return;

  _this->TrackLeftCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftCornerRadiusFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftCornerRadiusFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftCornerRadiusFocused == value )
    return;

  _this->TrackLeftCornerRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftCornerRadiusDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftCornerRadiusDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftCornerRadiusDisabled == value )
    return;

  _this->TrackLeftCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftCornerRadiusDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftCornerRadiusDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftCornerRadiusDefault == value )
    return;

  _this->TrackLeftCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftThicknessActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftThicknessActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftThicknessActive == value )
    return;

  _this->TrackLeftThicknessActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftThicknessFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftThicknessFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftThicknessFocused == value )
    return;

  _this->TrackLeftThicknessFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftThicknessDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftThicknessDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftThicknessDisabled == value )
    return;

  _this->TrackLeftThicknessDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftThicknessDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftThicknessDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftThicknessDefault == value )
    return;

  _this->TrackLeftThicknessDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFlattened()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFlattened( WidgetSetHorizontalSliderConfig _this, 
  XBool value )
{
  if ( _this->TrackLeftFlattened == value )
    return;

  _this->TrackLeftFlattened = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBitmapFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapFocused( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackLeftBitmapFocused == value )
    return;

  _this->TrackLeftBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftMarginLeft()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftMarginLeft( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackLeftMarginLeft == value )
    return;

  _this->TrackLeftMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetFaceBitmapFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetFaceBitmapFocused( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceBitmapFocused == value )
    return;

  _this->FaceBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetFaceBitmapDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetFaceBitmapDisabled( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceBitmapDisabled == value )
    return;

  _this->FaceBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetFaceBitmapDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetFaceBitmapDefault( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceBitmapDefault == value )
    return;

  _this->FaceBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalSliderConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalSliderConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalSliderConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalSliderConfig' */
EW_DEFINE_CLASS( WidgetSetHorizontalSliderConfig, WidgetSetWidgetConfig, CoverBitmapDefault, 
                 CoverBitmapDefault, ThumbShadowColorDefault, ThumbShadowColorDefault, 
                 ThumbShadowColorDefault, ThumbShadowColorDefault, "WidgetSet::HorizontalSliderConfig" )
EW_END_OF_CLASS( WidgetSetHorizontalSliderConfig )

/* Initializer for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__Init( WidgetSetToggleButtonConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetToggleButtonConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetToggleButtonConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->LabelOnColorActive = _Const0005;
  _this->LabelOnColorFocused = _Const0005;
  _this->LabelOnColorDisabled = _Const0005;
  _this->LabelOnColorDefault = _Const0005;
  _this->LabelOffColorActive = _Const0005;
  _this->LabelOffColorFocused = _Const0005;
  _this->LabelOffColorDisabled = _Const0005;
  _this->LabelOffColorDefault = _Const0005;
  _this->IconOnTintActive = _Const0004;
  _this->IconOnTintFocused = _Const0004;
  _this->IconOnTintDisabled = _Const0004;
  _this->IconOnTintDefault = _Const0004;
  _this->IconOffTintActive = _Const0004;
  _this->IconOffTintFocused = _Const0004;
  _this->IconOffTintDisabled = _Const0004;
  _this->IconOffTintDefault = _Const0004;
  _this->LabelAlignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->IconAlignment = ViewsImageAlignmentAlignHorzCenter | ViewsImageAlignmentAlignVertCenter;
  _this->FaceLayout = CoreLayoutAlignToBottom | CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert;
  _this->FaceOnFrameActive = -1;
  _this->FaceOnFrameFocused = -1;
  _this->FaceOnFrameDisabled = -1;
  _this->FaceOnFrameDefault = -1;
  _this->FaceOffFrameActive = -1;
  _this->FaceOffFrameFocused = -1;
  _this->FaceOffFrameDisabled = -1;
  _this->FaceOffFrameDefault = -1;
}

/* Re-Initializer for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__ReInit( WidgetSetToggleButtonConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__Done( WidgetSetToggleButtonConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorActive()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorActive, value ))
    return;

  _this->LabelOnColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorFocused, value ))
    return;

  _this->LabelOnColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorDisabled, value ))
    return;

  _this->LabelOnColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorDefault, value ))
    return;

  _this->LabelOnColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorActive()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorActive, value ))
    return;

  _this->LabelOffColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorFocused, value ))
    return;

  _this->LabelOffColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorDisabled, value ))
    return;

  _this->LabelOffColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorDefault, value ))
    return;

  _this->LabelOffColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelMarginRight()' */
void WidgetSetToggleButtonConfig_OnSetLabelMarginRight( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginRight == value )
    return;

  _this->LabelMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintActive()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintActive, value ))
    return;

  _this->IconOnTintActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintFocused()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintFocused, value ))
    return;

  _this->IconOnTintFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintDisabled()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintDisabled, value ))
    return;

  _this->IconOnTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintDefault()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintDefault, value ))
    return;

  _this->IconOnTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintActive()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintActive, value ))
    return;

  _this->IconOffTintActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintFocused()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintFocused, value ))
    return;

  _this->IconOffTintFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintDisabled()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintDisabled, value ))
    return;

  _this->IconOffTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintDefault()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintDefault, value ))
    return;

  _this->IconOffTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconMarginRight()' */
void WidgetSetToggleButtonConfig_OnSetIconMarginRight( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginRight == value )
    return;

  _this->IconMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelAlignment()' */
void WidgetSetToggleButtonConfig_OnSetLabelAlignment( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->LabelAlignment == value )
    return;

  _this->LabelAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnFont()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnFont( WidgetSetToggleButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelOnFont == value )
    return;

  _this->LabelOnFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffFont()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffFont( WidgetSetToggleButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelOffFont == value )
    return;

  _this->LabelOffFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconAlignment()' */
void WidgetSetToggleButtonConfig_OnSetIconAlignment( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->IconAlignment == value )
    return;

  _this->IconAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceLayout()' */
void WidgetSetToggleButtonConfig_OnSetFaceLayout( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->FaceLayout == value )
    return;

  _this->FaceLayout = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameActive == value )
    return;

  _this->FaceOnFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameFocused == value )
    return;

  _this->FaceOnFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameDisabled == value )
    return;

  _this->FaceOnFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameDefault == value )
    return;

  _this->FaceOnFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnBitmapActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnBitmapActive( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnBitmapActive == value )
    return;

  _this->FaceOnBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnBitmapFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnBitmapFocused( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnBitmapFocused == value )
    return;

  _this->FaceOnBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnBitmapDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnBitmapDisabled( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnBitmapDisabled == value )
    return;

  _this->FaceOnBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnBitmapDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnBitmapDefault( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnBitmapDefault == value )
    return;

  _this->FaceOnBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameActive == value )
    return;

  _this->FaceOffFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameFocused == value )
    return;

  _this->FaceOffFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameDisabled == value )
    return;

  _this->FaceOffFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameDefault == value )
    return;

  _this->FaceOffFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffBitmapActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffBitmapActive( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffBitmapActive == value )
    return;

  _this->FaceOffBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffBitmapFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffBitmapFocused( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffBitmapFocused == value )
    return;

  _this->FaceOffBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffBitmapDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffBitmapDisabled( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffBitmapDisabled == value )
    return;

  _this->FaceOffBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffBitmapDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffBitmapDefault( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffBitmapDefault == value )
    return;

  _this->FaceOffBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetWidgetMinSize()' */
void WidgetSetToggleButtonConfig_OnSetWidgetMinSize( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::ToggleButtonConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetToggleButtonConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetToggleButtonConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ToggleButtonConfig' */
EW_DEFINE_CLASS( WidgetSetToggleButtonConfig, WidgetSetWidgetConfig, LabelOnFont, 
                 LabelOnFont, LabelOnColorActive, LabelOnColorActive, LabelOnColorActive, 
                 LabelOnColorActive, "WidgetSet::ToggleButtonConfig" )
EW_END_OF_CLASS( WidgetSetToggleButtonConfig )

/* Initializer for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__Init( WidgetSetPushButtonConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetPushButtonConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetPushButtonConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->LabelColorActive = _Const0005;
  _this->LabelColorFocused = _Const0005;
  _this->LabelColorDisabled = _Const0005;
  _this->LabelColorDefault = _Const0005;
  _this->IconTintActive = _Const0004;
  _this->IconTintFocused = _Const0004;
  _this->IconTintDisabled = _Const0004;
  _this->IconTintDefault = _Const0004;
  _this->FaceTintActive = _Const0004;
  _this->FaceTintFocused = _Const0004;
  _this->FaceTintDisabled = _Const0004;
  _this->FaceTintDefault = _Const0004;
}

/* Re-Initializer for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__ReInit( WidgetSetPushButtonConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__Done( WidgetSetPushButtonConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowColorActive()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowColorActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbShadowColorActive, value ))
    return;

  _this->ThumbShadowColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowColorFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbShadowColorFocused, value ))
    return;

  _this->ThumbShadowColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowColorDisabled()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowColorDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbShadowColorDisabled, value ))
    return;

  _this->ThumbShadowColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowColorDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbShadowColorDefault, value ))
    return;

  _this->ThumbShadowColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowBlurRadiusActive()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusActive( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 64 )
    value = 64;

  if ( _this->ThumbShadowBlurRadiusActive == value )
    return;

  _this->ThumbShadowBlurRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowBlurRadiusFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusFocused( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 64 )
    value = 64;

  if ( _this->ThumbShadowBlurRadiusFocused == value )
    return;

  _this->ThumbShadowBlurRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowBlurRadiusDisabled()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusDisabled( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 64 )
    value = 64;

  if ( _this->ThumbShadowBlurRadiusDisabled == value )
    return;

  _this->ThumbShadowBlurRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowBlurRadiusDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusDefault( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 64 )
    value = 64;

  if ( _this->ThumbShadowBlurRadiusDefault == value )
    return;

  _this->ThumbShadowBlurRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowOffsetFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowOffsetFocused( WidgetSetPushButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbShadowOffsetFocused, value ))
    return;

  _this->ThumbShadowOffsetFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderColorActive()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderColorActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorActive, value ))
    return;

  _this->ThumbBorderColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderColorFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorFocused, value ))
    return;

  _this->ThumbBorderColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderColorDisabled()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderColorDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorDisabled, value ))
    return;

  _this->ThumbBorderColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderColorDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorDefault, value ))
    return;

  _this->ThumbBorderColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderWidthFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderWidthFocused( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthFocused == value )
    return;

  _this->ThumbBorderWidthFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderWidthDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderWidthDefault( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthDefault == value )
    return;

  _this->ThumbBorderWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbColorActive()' */
void WidgetSetPushButtonConfig_OnSetThumbColorActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorActive, value ))
    return;

  _this->ThumbColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbColorFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorFocused, value ))
    return;

  _this->ThumbColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbColorDisabled()' */
void WidgetSetPushButtonConfig_OnSetThumbColorDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorDisabled, value ))
    return;

  _this->ThumbColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbColorDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorDefault, value ))
    return;

  _this->ThumbColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbCornerRadiusDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDefault( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusDefault == value )
    return;

  _this->ThumbCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorActive()' */
void WidgetSetPushButtonConfig_OnSetLabelColorActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorActive, value ))
    return;

  _this->LabelColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorFocused()' */
void WidgetSetPushButtonConfig_OnSetLabelColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorFocused, value ))
    return;

  _this->LabelColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorDisabled()' */
void WidgetSetPushButtonConfig_OnSetLabelColorDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorDisabled, value ))
    return;

  _this->LabelColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorDefault()' */
void WidgetSetPushButtonConfig_OnSetLabelColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorDefault, value ))
    return;

  _this->LabelColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintActive()' */
void WidgetSetPushButtonConfig_OnSetIconTintActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintActive, value ))
    return;

  _this->IconTintActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintFocused()' */
void WidgetSetPushButtonConfig_OnSetIconTintFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintFocused, value ))
    return;

  _this->IconTintFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintDisabled()' */
void WidgetSetPushButtonConfig_OnSetIconTintDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintDisabled, value ))
    return;

  _this->IconTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintDefault()' */
void WidgetSetPushButtonConfig_OnSetIconTintDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintDefault, value ))
    return;

  _this->IconTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelFont()' */
void WidgetSetPushButtonConfig_OnSetLabelFont( WidgetSetPushButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelFont == value )
    return;

  _this->LabelFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceTintActive()' */
void WidgetSetPushButtonConfig_OnSetFaceTintActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->FaceTintActive, value ))
    return;

  _this->FaceTintActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceTintFocused()' */
void WidgetSetPushButtonConfig_OnSetFaceTintFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->FaceTintFocused, value ))
    return;

  _this->FaceTintFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceTintDisabled()' */
void WidgetSetPushButtonConfig_OnSetFaceTintDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->FaceTintDisabled, value ))
    return;

  _this->FaceTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceTintDefault()' */
void WidgetSetPushButtonConfig_OnSetFaceTintDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->FaceTintDefault, value ))
    return;

  _this->FaceTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceBitmapActive()' */
void WidgetSetPushButtonConfig_OnSetFaceBitmapActive( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceBitmapActive == value )
    return;

  _this->FaceBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceBitmapFocused()' */
void WidgetSetPushButtonConfig_OnSetFaceBitmapFocused( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceBitmapFocused == value )
    return;

  _this->FaceBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceBitmapDisabled()' */
void WidgetSetPushButtonConfig_OnSetFaceBitmapDisabled( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceBitmapDisabled == value )
    return;

  _this->FaceBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceBitmapDefault()' */
void WidgetSetPushButtonConfig_OnSetFaceBitmapDefault( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceBitmapDefault == value )
    return;

  _this->FaceBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::PushButtonConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetPushButtonConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetPushButtonConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::PushButtonConfig' */
EW_DEFINE_CLASS( WidgetSetPushButtonConfig, WidgetSetWidgetConfig, LabelFont, LabelFont, 
                 ThumbShadowColorActive, ThumbShadowColorActive, ThumbShadowColorActive, 
                 ThumbShadowColorActive, "WidgetSet::PushButtonConfig" )
EW_END_OF_CLASS( WidgetSetPushButtonConfig )

/* Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Init( WidgetSetWidgetConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetWidgetConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetWidgetConfig );
}

/* Re-Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__ReInit( WidgetSetWidgetConfig _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Done( WidgetSetWidgetConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::WidgetConfig.onInvalidate()' */
void WidgetSetWidgetConfig_onInvalidate( WidgetSetWidgetConfig _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwNotifyObjObservers((XObject)_this, 0 );
}

/* Variants derived from the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetWidgetConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetWidgetConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS( WidgetSetWidgetConfig, XObject, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "WidgetSet::WidgetConfig" )
EW_END_OF_CLASS( WidgetSetWidgetConfig )

/* Initializer for the class 'WidgetSet::HorizontalValueBar' */
void WidgetSetHorizontalValueBar__Init( WidgetSetHorizontalValueBar _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetHorizontalValueBar );

  /* ... then construct all embedded objects */
  EffectsFloatEffect__Init( &_this->FloatEffect, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetHorizontalValueBar );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0006 );
  _this->setupCurrentPos = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingBack_Out );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FloatEffect, 1 );
  _this->CurrentValue = 50;
  _this->FloatEffect.Super1.OnFinished = EwNewSlot( _this, WidgetSetHorizontalValueBar_onEndFloatEffect );
  _this->FloatEffect.Super1.OnAnimate = EwNewSlot( _this, WidgetSetHorizontalValueBar_onFloatEffect );
}

/* Re-Initializer for the class 'WidgetSet::HorizontalValueBar' */
void WidgetSetHorizontalValueBar__ReInit( WidgetSetHorizontalValueBar _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  EffectsFloatEffect__ReInit( &_this->FloatEffect );
}

/* Finalizer method for the class 'WidgetSet::HorizontalValueBar' */
void WidgetSetHorizontalValueBar__Done( WidgetSetHorizontalValueBar _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  EffectsFloatEffect__Done( &_this->FloatEffect );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnSetBounds()' */
void WidgetSetHorizontalValueBar_OnSetBounds( WidgetSetHorizontalValueBar _this, 
  XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < 0 )
      ns.X = 0;

    if ( ns.Y < 0 )
      ns.Y = 0;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

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
  XSet aState )
{
  XBool needsImage;
  XBool needsRect1;
  XBool needsBorder1;
  XBool needsRect2;
  XBool needsBorder2;
  XBool needsOutline1;
  XBool needsOutline2;
  XRect area;
  XInt32 marginLeft;
  XInt32 marginRight;
  XInt32 pos;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsImage = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->NeedleBitmap 
  != 0 ));
  needsRect1 = (XBool)((( _this->Appearance != 0 ) && !EwIsColorNull( _this->Appearance->TrackLeftColor )) 
  && !!_this->Appearance->TrackLeftThickness );
  needsBorder1 = (XBool)(((( _this->Appearance != 0 ) && !EwIsColorNull( _this->Appearance->TrackLeftBorderColor )) 
  && !!_this->Appearance->TrackLeftBorderWidth ) && !!_this->Appearance->TrackLeftThickness );
  needsRect2 = (XBool)((( _this->Appearance != 0 ) && !EwIsColorNull( _this->Appearance->TrackRightColor )) 
  && !!_this->Appearance->TrackRightThickness );
  needsBorder2 = (XBool)(((( _this->Appearance != 0 ) && !EwIsColorNull( _this->Appearance->TrackRightBorderColor )) 
  && !!_this->Appearance->TrackRightBorderWidth ) && !!_this->Appearance->TrackRightThickness );
  needsOutline1 = (XBool)((( needsRect1 || needsBorder1 ) && ( _this->Appearance 
  != 0 )) && !!_this->Appearance->TrackLeftCornerRadius );
  needsOutline2 = (XBool)((( needsRect2 || needsBorder2 ) && ( _this->Appearance 
  != 0 )) && !!_this->Appearance->TrackRightCornerRadius );
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsImage && !( _this->imageView != 0 ))
  {
    _this->imageView = EwNewObject( ViewsImage, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->imageView ), 0 );
  }
  else
    if ( !needsImage && ( _this->imageView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->imageView ));
      _this->imageView = 0;
    }

  if ( needsRect1 && !( _this->rectView1 != 0 ))
  {
    _this->rectView1 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->rectView1 ), 0 );
  }
  else
    if ( !needsRect1 && ( _this->rectView1 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->rectView1 ));
      _this->rectView1 = 0;
    }

  if ( needsBorder1 && !( _this->borderView1 != 0 ))
  {
    _this->borderView1 = EwNewObject( ViewsBorder, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->borderView1 ), 0 );
  }
  else
    if ( !needsBorder1 && ( _this->borderView1 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->borderView1 ));
      _this->borderView1 = 0;
    }

  if ( needsRect2 && !( _this->rectView2 != 0 ))
  {
    _this->rectView2 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->rectView2 ), 0 );
  }
  else
    if ( !needsRect2 && ( _this->rectView2 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->rectView2 ));
      _this->rectView2 = 0;
    }

  if ( needsBorder2 && !( _this->borderView2 != 0 ))
  {
    _this->borderView2 = EwNewObject( ViewsBorder, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->borderView2 ), 0 );
  }
  else
    if ( !needsBorder2 && ( _this->borderView2 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->borderView2 ));
      _this->borderView2 = 0;
    }

  if ( needsOutline1 && !( _this->outline1 != 0 ))
  {
    _this->outline1 = EwNewObject( CoreOutline, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->outline1 ), 0 );
  }
  else
    if ( !needsOutline1 && ( _this->outline1 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->outline1 ));
      _this->outline1 = 0;
    }

  if ( needsOutline2 && !( _this->outline2 != 0 ))
  {
    _this->outline2 = EwNewObject( CoreOutline, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->outline2 ), 0 );
  }
  else
    if ( !needsOutline2 && ( _this->outline2 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->outline2 ));
      _this->outline2 = 0;
    }

  if ( _this->imageView != 0 )
  {
    ViewsImage_OnSetBitmap( _this->imageView, _this->Appearance->NeedleBitmap );
    ViewsImage_OnSetColor( _this->imageView, _Const0004 );
    CoreView_OnSetStackingPriority((CoreView)_this->imageView, 74 );
    ViewsImage_OnSetAnimated( _this->imageView, 1 );
    ViewsImage_OnSetFrameNumber( _this->imageView, 0 );
  }

  if ( _this->rectView1 != 0 )
  {
    ViewsRectangle_OnSetRadius( _this->rectView1, _this->Appearance->TrackLeftCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView1, _this->Appearance->TrackLeftColor );
    ViewsRectangle_OnSetEmbedded( _this->rectView1, _this->outline1 != 0 );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView1, 52 );
  }

  if ( _this->borderView1 != 0 )
  {
    ViewsBorder_OnSetRadius( _this->borderView1, _this->Appearance->TrackLeftCornerRadius );
    ViewsBorder_OnSetColor( _this->borderView1, _this->Appearance->TrackLeftBorderColor );
    ViewsBorder_OnSetWidth( _this->borderView1, _this->Appearance->TrackLeftBorderWidth );
    ViewsBorder_OnSetEmbedded( _this->borderView1, _this->outline1 != 0 );
    CoreView_OnSetStackingPriority((CoreView)_this->borderView1, 53 );
  }

  if ( _this->rectView2 != 0 )
  {
    ViewsRectangle_OnSetRadius( _this->rectView2, _this->Appearance->TrackRightCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView2, _this->Appearance->TrackRightColor );
    ViewsRectangle_OnSetEmbedded( _this->rectView2, _this->outline2 != 0 );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView2, 33 );
  }

  if ( _this->borderView2 != 0 )
  {
    ViewsBorder_OnSetRadius( _this->borderView2, _this->Appearance->TrackRightCornerRadius );
    ViewsBorder_OnSetColor( _this->borderView2, _this->Appearance->TrackRightBorderColor );
    ViewsBorder_OnSetWidth( _this->borderView2, _this->Appearance->TrackRightBorderWidth );
    ViewsBorder_OnSetEmbedded( _this->borderView2, _this->outline2 != 0 );
    CoreView_OnSetStackingPriority((CoreView)_this->borderView2, 34 );
  }

  marginLeft = 0;
  marginRight = 0;

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
  {
    XInt32 width = _this->imageView->Bitmap->FrameSize.X;
    marginLeft += ( width / 2 );
    marginRight += ( width - ( width / 2 ));
  }

  pos = marginLeft + (XInt32)((XFloat)(( EwGetRectW( area ) - marginRight ) - marginLeft ) 
  * _this->currentPos );

  if ( pos < marginLeft )
    pos = marginLeft;

  if ( pos > ( EwGetRectW( area ) - marginRight ))
    pos = EwGetRectW( area ) - marginRight;

  if ( _this->imageView != 0 )
  {
    XRect needleArea = EwNewRect2Point( _Const0007, _this->imageView->Bitmap->FrameSize );
    CoreRectView__OnSetBounds( _this->imageView, EwMoveRectPos( EwMoveRectNeg( needleArea, 
    EwGetRectCenter( needleArea )), EwNewPoint( pos, EwGetRectH( area ) / 2 )));
  }

  if ( _this->outline1 != 0 )
  {
    XInt32 x2 = EwGetRectW( area );
    XInt32 x = pos;

    if ( x > x2 )
      x = x2;

    CoreRectView__OnSetBounds( _this->outline1, EwNewRect( 0, 0, x, EwGetRectH( 
    area )));
    CoreView_OnSetStackingPriority((CoreView)_this->outline1, 51 );
  }

  if ( _this->outline2 != 0 )
  {
    XInt32 x2 = EwGetRectW( area ) - _this->Appearance->TrackRightMarginRight;
    XInt32 x = pos;

    if ( x < 0 )
      x = 0;

    CoreRectView__OnSetBounds( _this->outline2, EwNewRect( x, 0, x2, EwGetRectH( 
    area )));
    CoreView_OnSetStackingPriority((CoreView)_this->outline2, 32 );
  }

  if (( _this->rectView1 != 0 ) || ( _this->borderView1 != 0 ))
  {
    XInt32 h = _this->Appearance->TrackLeftThickness;
    XInt32 x2 = EwGetRectW( area );
    XInt32 x = pos + ( _this->Appearance->TrackLeftFlattened? _this->Appearance->TrackLeftCornerRadius 
      : 0 );
    XRect r;

    if ( x < ( 2 * _this->Appearance->TrackLeftCornerRadius ))
      x = 2 * _this->Appearance->TrackLeftCornerRadius;

    if ( x > x2 )
      x = x2;

    r = EwNewRect( 0, ( EwGetRectH( area ) / 2 ) - ( h / 2 ), x, (( EwGetRectH( 
    area ) / 2 ) - ( h / 2 )) + h );

    if ( _this->borderView1 != 0 )
      CoreRectView__OnSetBounds( _this->borderView1, r );

    if (((( _this->rectView1 != 0 ) && ( _this->borderView1 != 0 )) && !!_this->borderView1->Width ) 
        && ( _this->borderView1->Color.Alpha == 255 ))
      r = EwInflateRect( r, _Const0008 );

    if ( _this->rectView1 != 0 )
      CoreRectView__OnSetBounds( _this->rectView1, r );
  }

  if (( _this->rectView2 != 0 ) || ( _this->borderView2 != 0 ))
  {
    XInt32 h = _this->Appearance->TrackRightThickness;
    XInt32 x2 = EwGetRectW( area ) - _this->Appearance->TrackRightMarginRight;
    XInt32 x = pos - ( _this->Appearance->TrackRightFlattened? _this->Appearance->TrackRightCornerRadius 
      : 0 );
    XRect r;

    if (( x2 - x ) < ( 2 * _this->Appearance->TrackRightCornerRadius ))
      x = x2 - ( 2 * _this->Appearance->TrackRightCornerRadius );

    if ( x < 0 )
      x = 0;

    r = EwNewRect( x, ( EwGetRectH( area ) / 2 ) - ( h / 2 ), x2, (( EwGetRectH( 
    area ) / 2 ) - ( h / 2 )) + h );

    if ( _this->borderView2 != 0 )
      CoreRectView__OnSetBounds( _this->borderView2, r );

    if (((( _this->rectView2 != 0 ) && ( _this->borderView2 != 0 )) && !!_this->borderView2->Width ) 
        && ( _this->borderView2->Color.Alpha == 255 ))
      r = EwInflateRect( r, _Const0008 );

    if ( _this->rectView2 != 0 )
      CoreRectView__OnSetBounds( _this->rectView2, r );
  }
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onUpdatePos()' */
void WidgetSetHorizontalValueBar_onUpdatePos( WidgetSetHorizontalValueBar _this, 
  XObject sender )
{
  XFloat newPos;
  XInt32 swingDuration;
  XFloat ratio;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  swingDuration = 0;

  if ( _this->Appearance != 0 )
    swingDuration = 500;

  if ( _this->setupCurrentPos )
  {
    _this->currentPos = 0.0f;
    _this->setupCurrentPos = 0;
  }

  newPos = (XFloat)WidgetSetHorizontalValueBar_OnGetCurrentValue( _this ) / 100.0f;

  if ( newPos == _this->currentPos )
    return;

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FloatEffect, 0 );

  if ( swingDuration <= 0 )
  {
    _this->currentPos = newPos;
    CoreGroup_InvalidateViewState((CoreGroup)_this );
    return;
  }

  ratio = newPos - _this->currentPos;

  if ( ratio < 0.0f )
    ratio = -ratio;

  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingBack_Out );
  _this->FloatEffect.Value1 = _this->currentPos;
  _this->FloatEffect.Value2 = newPos;
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FloatEffect, ( 10 + ( 
  swingDuration / 2 )) + ((XInt32)((XFloat)swingDuration * ratio ) / 2 ));
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FloatEffect, 1 );
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onEndFloatEffect()' */
void WidgetSetHorizontalValueBar_onEndFloatEffect( WidgetSetHorizontalValueBar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onFloatEffect()' */
void WidgetSetHorizontalValueBar_onFloatEffect( WidgetSetHorizontalValueBar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->currentPos = _this->FloatEffect.Value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onConfigChanged()' */
void WidgetSetHorizontalValueBar_onConfigChanged( WidgetSetHorizontalValueBar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalValueBar_onUpdatePos ), ((XObject)_this ));

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnGetCurrentValue()' */
XInt32 WidgetSetHorizontalValueBar_OnGetCurrentValue( WidgetSetHorizontalValueBar _this )
{
  XInt32 value = _this->CurrentValue;

  if ( value < 0 )
    value = 0;

  if ( value > 100 )
    value = 100;

  return value;
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnSetCurrentValue()' */
void WidgetSetHorizontalValueBar_OnSetCurrentValue( WidgetSetHorizontalValueBar _this, 
  XInt32 value )
{
  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalValueBar_onUpdatePos ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnSetAppearance()' */
void WidgetSetHorizontalValueBar_OnSetAppearance( WidgetSetHorizontalValueBar _this, 
  WidgetSetHorizontalValueBarConfig value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetHorizontalValueBar_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetHorizontalValueBar_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalValueBar_onConfigChanged ), 
    ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalValueBar' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalValueBar )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalValueBar )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalValueBar' */
EW_DEFINE_CLASS( WidgetSetHorizontalValueBar, CoreGroup, FloatEffect, outline2, 
                 currentPos, currentPos, currentPos, currentPos, "WidgetSet::HorizontalValueBar" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetHorizontalValueBar_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_FindCurrentDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetHorizontalValueBar_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetSetHorizontalValueBar )

/* Initializer for the class 'WidgetSet::HorizontalSlider' */
void WidgetSetHorizontalSlider__Init( WidgetSetHorizontalSlider _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetHorizontalSlider );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->RepetitionTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandlerLeft, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandlerRight, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetHorizontalSlider );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0006 );
  CoreTimer_OnSetPeriod( &_this->RepetitionTimer, 0 );
  CoreTimer_OnSetBegin( &_this->RepetitionTimer, 50 );
  _this->KeyHandlerLeft.Filter = CoreKeyCodeLeft;
  _this->KeyHandlerRight.Filter = CoreKeyCodeRight;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, _Const0009 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, _Const000A );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, _Const000B );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, _Const0007 );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  _this->CurrentValue = 50;
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->RepetitionTimer.OnTrigger = EwNewSlot( _this, WidgetSetHorizontalSlider_onRepetitionTimer );
  _this->KeyHandlerLeft.OnRelease = EwNewSlot( _this, WidgetSetHorizontalSlider_onReleaseKey );
  _this->KeyHandlerLeft.OnPress = EwNewSlot( _this, WidgetSetHorizontalSlider_onPressKey );
  _this->KeyHandlerRight.OnRelease = EwNewSlot( _this, WidgetSetHorizontalSlider_onReleaseKey );
  _this->KeyHandlerRight.OnPress = EwNewSlot( _this, WidgetSetHorizontalSlider_onPressKey );
  _this->TouchHandler.OnDrag = EwNewSlot( _this, WidgetSetHorizontalSlider_onDragTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetHorizontalSlider_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetHorizontalSlider_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::HorizontalSlider' */
void WidgetSetHorizontalSlider__ReInit( WidgetSetHorizontalSlider _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->RepetitionTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandlerLeft );
  CoreKeyPressHandler__ReInit( &_this->KeyHandlerRight );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::HorizontalSlider' */
void WidgetSetHorizontalSlider__Done( WidgetSetHorizontalSlider _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->RepetitionTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandlerLeft );
  CoreKeyPressHandler__Done( &_this->KeyHandlerRight );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetBounds()' */
void WidgetSetHorizontalSlider_OnSetBounds( WidgetSetHorizontalSlider _this, XRect 
  value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < 0 )
      ns.X = 0;

    if ( ns.Y < 0 )
      ns.Y = 0;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

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
void WidgetSetHorizontalSlider_UpdateViewState( WidgetSetHorizontalSlider _this, 
  XSet aState )
{
  XBool needsFrame1;
  XBool needsFrame2;
  XBool needsImage;
  XBool needsFrame4;
  XBool needsRect1;
  XBool needsBorder1;
  XBool needsRect2;
  XBool needsBorder2;
  XBool needsShadow;
  XBool needsOutline1;
  XBool needsOutline2;
  XRect area;
  XInt32 trackLeftThickness;
  XInt32 trackLeftCornerRadius;
  XInt32 trackRightThickness;
  XInt32 trackRightCornerRadius;
  XPoint thumbOffset;
  XPoint thumbSize;
  XInt32 thumbCornerRadius;
  XChar isState;
  XInt32 marginLeft;
  XInt32 marginRight;
  XInt32 minPos;
  XInt32 maxPos;
  XInt32 newThumbPos;
  XRect r;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFrame1 = (XBool)(( _this->Appearance != 0 ) && ((( _this->Appearance->FaceBitmapDefault 
  != 0 ) || ( _this->Appearance->FaceBitmapDisabled != 0 )) || ( _this->Appearance->FaceBitmapFocused 
  != 0 )));
  needsFrame2 = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->TrackLeftBitmapFocused 
  != 0 ));
  needsImage = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->ThumbBitmapDefault 
  != 0 ) || ( _this->Appearance->ThumbBitmapDisabled != 0 )) || ( _this->Appearance->ThumbBitmapFocused 
  != 0 )) || ( _this->Appearance->ThumbBitmapActive != 0 )));
  needsFrame4 = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->CoverBitmapDefault 
  != 0 ));
  needsRect1 = (XBool)((( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->TrackLeftColorDefault ) 
  || !EwIsColorNull( _this->Appearance->TrackLeftColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->TrackLeftColorFocused )) || !EwIsColorNull( _this->Appearance->TrackLeftColorActive ))) 
  && ((( !!_this->Appearance->TrackLeftThicknessDefault || !!_this->Appearance->TrackLeftThicknessDisabled ) 
  || !!_this->Appearance->TrackLeftThicknessFocused ) || !!_this->Appearance->TrackLeftThicknessActive ));
  needsBorder1 = (XBool)(((( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->TrackLeftBorderColorDefault ) 
  || !EwIsColorNull( _this->Appearance->TrackLeftBorderColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->TrackLeftBorderColorFocused )) || !EwIsColorNull( _this->Appearance->TrackLeftBorderColorActive ))) 
  && ((( !!_this->Appearance->TrackLeftBorderWidthDefault || !!_this->Appearance->TrackLeftBorderWidthDisabled ) 
  || !!_this->Appearance->TrackLeftBorderWidthFocused ) || !!_this->Appearance->TrackLeftBorderWidthActive )) 
  && ((( !!_this->Appearance->TrackLeftThicknessDefault || !!_this->Appearance->TrackLeftThicknessDisabled ) 
  || !!_this->Appearance->TrackLeftThicknessFocused ) || !!_this->Appearance->TrackLeftThicknessActive ));
  needsRect2 = (XBool)((( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->TrackRightColorDefault ) 
  || !EwIsColorNull( _this->Appearance->TrackRightColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->TrackRightColorFocused )) || !EwIsColorNull( _this->Appearance->TrackRightColorActive ))) 
  && ((( !!_this->Appearance->TrackRightThicknessDefault || !!_this->Appearance->TrackRightThicknessDisabled ) 
  || !!_this->Appearance->TrackRightThicknessFocused ) || !!_this->Appearance->TrackRightThicknessActive ));
  needsBorder2 = (XBool)(((( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->TrackRightBorderColorDefault ) 
  || !EwIsColorNull( _this->Appearance->TrackRightBorderColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->TrackRightBorderColorFocused )) || !EwIsColorNull( _this->Appearance->TrackRightBorderColorActive ))) 
  && ((( !!_this->Appearance->TrackRightBorderWidthDefault || !!_this->Appearance->TrackRightBorderWidthDisabled ) 
  || !!_this->Appearance->TrackRightBorderWidthFocused ) || !!_this->Appearance->TrackRightBorderWidthActive )) 
  && ((( !!_this->Appearance->TrackRightThicknessDefault || !!_this->Appearance->TrackRightThicknessDisabled ) 
  || !!_this->Appearance->TrackRightThicknessFocused ) || !!_this->Appearance->TrackRightThicknessActive ));
  needsShadow = (XBool)((( _this->Appearance != 0 ) && !EwIsColorNull( _this->Appearance->ThumbShadowColorDefault )) 
  && !EwIsPointNull( _this->Appearance->ThumbSizeDefault ));
  needsOutline1 = (XBool)((( needsRect1 || needsBorder1 ) && ( _this->Appearance 
  != 0 )) && ((( !!_this->Appearance->TrackLeftCornerRadiusDefault || !!_this->Appearance->TrackLeftCornerRadiusDisabled ) 
  || !!_this->Appearance->TrackLeftCornerRadiusFocused ) || !!_this->Appearance->TrackLeftCornerRadiusActive ));
  needsOutline2 = (XBool)((( needsRect2 || needsBorder2 ) && ( _this->Appearance 
  != 0 )) && ((( !!_this->Appearance->TrackRightCornerRadiusDefault || !!_this->Appearance->TrackRightCornerRadiusDisabled ) 
  || !!_this->Appearance->TrackRightCornerRadiusFocused ) || !!_this->Appearance->TrackRightCornerRadiusActive ));
  area = EwGetRectORect( _this->Super2.Bounds );
  trackLeftThickness = 0;
  trackLeftCornerRadius = 0;
  trackRightThickness = 0;
  trackRightCornerRadius = 0;
  thumbOffset = _Const0007;
  thumbSize = _Const0007;
  thumbCornerRadius = 0;

  if ( needsFrame1 && !( _this->frameView1 != 0 ))
  {
    _this->frameView1 = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView1 ), 0 );
  }
  else
    if ( !needsFrame1 && ( _this->frameView1 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView1 ));
      _this->frameView1 = 0;
    }

  if ( needsFrame2 && !( _this->frameView2 != 0 ))
  {
    _this->frameView2 = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView2 ), 0 );
  }
  else
    if ( !needsFrame2 && ( _this->frameView2 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView2 ));
      _this->frameView2 = 0;
    }

  if ( needsImage && !( _this->imageView != 0 ))
  {
    _this->imageView = EwNewObject( ViewsImage, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->imageView ), 0 );
  }
  else
    if ( !needsImage && ( _this->imageView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->imageView ));
      _this->imageView = 0;
    }

  if ( needsFrame4 && !( _this->frameView4 != 0 ))
  {
    _this->frameView4 = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView4 ), 0 );
  }
  else
    if ( !needsFrame4 && ( _this->frameView4 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView4 ));
      _this->frameView4 = 0;
    }

  if ( needsRect1 && !( _this->rectView1 != 0 ))
  {
    _this->rectView1 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->rectView1 ), 0 );
  }
  else
    if ( !needsRect1 && ( _this->rectView1 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->rectView1 ));
      _this->rectView1 = 0;
    }

  if ( needsBorder1 && !( _this->borderView1 != 0 ))
  {
    _this->borderView1 = EwNewObject( ViewsBorder, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->borderView1 ), 0 );
  }
  else
    if ( !needsBorder1 && ( _this->borderView1 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->borderView1 ));
      _this->borderView1 = 0;
    }

  if ( needsRect2 && !( _this->rectView2 != 0 ))
  {
    _this->rectView2 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->rectView2 ), 0 );
  }
  else
    if ( !needsRect2 && ( _this->rectView2 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->rectView2 ));
      _this->rectView2 = 0;
    }

  if ( needsBorder2 && !( _this->borderView2 != 0 ))
  {
    _this->borderView2 = EwNewObject( ViewsBorder, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->borderView2 ), 0 );
  }
  else
    if ( !needsBorder2 && ( _this->borderView2 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->borderView2 ));
      _this->borderView2 = 0;
    }

  if ( needsShadow && !( _this->shadowView != 0 ))
  {
    _this->shadowView = EwNewObject( ViewsShadow, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->shadowView ), 0 );
  }
  else
    if ( !needsShadow && ( _this->shadowView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->shadowView ));
      _this->shadowView = 0;
    }

  if ( needsOutline1 && !( _this->outline1 != 0 ))
  {
    _this->outline1 = EwNewObject( CoreOutline, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->outline1 ), 0 );
  }
  else
    if ( !needsOutline1 && ( _this->outline1 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->outline1 ));
      _this->outline1 = 0;
    }

  if ( needsOutline2 && !( _this->outline2 != 0 ))
  {
    _this->outline2 = EwNewObject( CoreOutline, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->outline2 ), 0 );
  }
  else
    if ( !needsOutline2 && ( _this->outline2 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->outline2 ));
      _this->outline2 = 0;
    }

  if ( !(( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
    isState = 'D';
  else
    if (( _this->touchActive || _this->KeyHandlerRight.Down ) || _this->KeyHandlerLeft.Down )
      isState = 'A';
    else
      if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
        isState = 'F';
      else
        isState = 'E';

  _this->prevState = isState;

  if (( _this->rectView1 != 0 ) || ( _this->borderView1 != 0 ))
    switch ( isState )
    {
      case 'D' :
      {
        trackLeftThickness = _this->Appearance->TrackLeftThicknessDisabled;
        trackLeftCornerRadius = _this->Appearance->TrackLeftCornerRadiusDisabled;
      }
      break;

      case 'A' :
      {
        trackLeftThickness = _this->Appearance->TrackLeftThicknessActive;
        trackLeftCornerRadius = _this->Appearance->TrackLeftCornerRadiusActive;
      }
      break;

      case 'F' :
      {
        trackLeftThickness = _this->Appearance->TrackLeftThicknessFocused;
        trackLeftCornerRadius = _this->Appearance->TrackLeftCornerRadiusFocused;
      }
      break;

      default : 
      {
        trackLeftThickness = _this->Appearance->TrackLeftThicknessDefault;
        trackLeftCornerRadius = _this->Appearance->TrackLeftCornerRadiusDefault;
      }
    }

  if (( _this->rectView2 != 0 ) || ( _this->borderView2 != 0 ))
    switch ( isState )
    {
      case 'D' :
      {
        trackRightThickness = _this->Appearance->TrackRightThicknessDisabled;
        trackRightCornerRadius = _this->Appearance->TrackRightCornerRadiusDisabled;
      }
      break;

      case 'A' :
      {
        trackRightThickness = _this->Appearance->TrackRightThicknessActive;
        trackRightCornerRadius = _this->Appearance->TrackRightCornerRadiusActive;
      }
      break;

      case 'F' :
      {
        trackRightThickness = _this->Appearance->TrackRightThicknessFocused;
        trackRightCornerRadius = _this->Appearance->TrackRightCornerRadiusFocused;
      }
      break;

      default : 
      {
        trackRightThickness = _this->Appearance->TrackRightThicknessDefault;
        trackRightCornerRadius = _this->Appearance->TrackRightCornerRadiusDefault;
      }
    }

  if (( _this->imageView != 0 ) || ( _this->shadowView != 0 ))
    switch ( isState )
    {
      case 'D' :
        thumbOffset = _this->Appearance->ThumbOffsetDisabled;
      break;

      case 'A' :
        thumbOffset = _this->Appearance->ThumbOffsetActive;
      break;

      case 'F' :
        thumbOffset = _this->Appearance->ThumbOffsetFocused;
      break;

      default : 
        thumbOffset = _this->Appearance->ThumbOffsetDefault;
    }

  if ( _this->shadowView != 0 )
    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      {
        thumbSize = _Const0007;
        thumbCornerRadius = 0;
      }
      break;

      default : 
      {
        thumbSize = _this->Appearance->ThumbSizeDefault;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusDefault;
      }
    }

  if ( _this->frameView1 != 0 )
  {
    ResourcesBitmap bitmap;

    switch ( isState )
    {
      case 'D' :
        bitmap = _this->Appearance->FaceBitmapDisabled;
      break;

      case 'A' :
        bitmap = 0;
      break;

      case 'F' :
        bitmap = _this->Appearance->FaceBitmapFocused;
      break;

      default : 
        bitmap = _this->Appearance->FaceBitmapDefault;
    }

    ViewsFrame_OnSetAnimated( _this->frameView1, 1 );
    ViewsFrame_OnSetColor( _this->frameView1, _Const0004 );
    ViewsFrame_OnSetFrameNumber( _this->frameView1, 0 );
    ViewsFrame_OnSetBitmap( _this->frameView1, bitmap );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView1, 16 );
  }

  if ( _this->frameView2 != 0 )
  {
    ResourcesBitmap bitmap;

    switch ( isState )
    {
      case 'F' :
        bitmap = _this->Appearance->TrackLeftBitmapFocused;
      break;

      default : 
        bitmap = 0;
    }

    ViewsFrame_OnSetAnimated( _this->frameView2, 1 );
    ViewsFrame_OnSetColor( _this->frameView2, _Const0004 );
    ViewsFrame_OnSetFrameNumber( _this->frameView2, 0 );
    ViewsFrame_OnSetBitmap( _this->frameView2, bitmap );
    ViewsFrame_OnSetEdges( _this->frameView2, GraphicsEdgesBottom | GraphicsEdgesInterior 
    | GraphicsEdgesLeft | GraphicsEdgesTop );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView2, 54 );
  }

  if ( _this->frameView4 != 0 )
  {
    ResourcesBitmap bitmap;

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
        bitmap = 0;
      break;

      default : 
        bitmap = _this->Appearance->CoverBitmapDefault;
    }

    ViewsFrame_OnSetAnimated( _this->frameView4, 1 );
    ViewsFrame_OnSetColor( _this->frameView4, _Const0004 );
    ViewsFrame_OnSetFrameNumber( _this->frameView4, 0 );
    ViewsFrame_OnSetBitmap( _this->frameView4, bitmap );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView4, 111 );
  }

  if ( _this->imageView != 0 )
  {
    ResourcesBitmap bitmap;
    XColor tint;

    switch ( isState )
    {
      case 'D' :
        bitmap = _this->Appearance->ThumbBitmapDisabled;
      break;

      case 'A' :
        bitmap = _this->Appearance->ThumbBitmapActive;
      break;

      case 'F' :
        bitmap = _this->Appearance->ThumbBitmapFocused;
      break;

      default : 
        bitmap = _this->Appearance->ThumbBitmapDefault;
    }

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
        tint = _Const0004;
      break;

      default : 
        tint = _this->Appearance->ThumbTintDefault;
    }

    ViewsImage_OnSetAnimated( _this->imageView, 1 );
    ViewsImage_OnSetColor( _this->imageView, tint );
    ViewsImage_OnSetFrameNumber( _this->imageView, 0 );
    ViewsImage_OnSetBitmap( _this->imageView, bitmap );
    CoreView_OnSetStackingPriority((CoreView)_this->imageView, 74 );
  }

  if ( _this->rectView1 != 0 )
  {
    XColor clr;

    switch ( isState )
    {
      case 'D' :
        clr = _this->Appearance->TrackLeftColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->TrackLeftColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->TrackLeftColorFocused;
      break;

      default : 
        clr = _this->Appearance->TrackLeftColorDefault;
    }

    ViewsRectangle_OnSetRadius( _this->rectView1, trackLeftCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView1, clr );
    ViewsRectangle_OnSetEmbedded( _this->rectView1, _this->outline1 != 0 );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView1, 52 );
  }

  if ( _this->borderView1 != 0 )
  {
    XColor clr;
    XInt32 width;

    switch ( isState )
    {
      case 'D' :
      {
        clr = _this->Appearance->TrackLeftBorderColorDisabled;
        width = _this->Appearance->TrackLeftBorderWidthDisabled;
      }
      break;

      case 'A' :
      {
        clr = _this->Appearance->TrackLeftBorderColorActive;
        width = _this->Appearance->TrackLeftBorderWidthActive;
      }
      break;

      case 'F' :
      {
        clr = _this->Appearance->TrackLeftBorderColorFocused;
        width = _this->Appearance->TrackLeftBorderWidthFocused;
      }
      break;

      default : 
      {
        clr = _this->Appearance->TrackLeftBorderColorDefault;
        width = _this->Appearance->TrackLeftBorderWidthDefault;
      }
    }

    ViewsBorder_OnSetRadius( _this->borderView1, trackLeftCornerRadius );
    ViewsBorder_OnSetColor( _this->borderView1, clr );
    ViewsBorder_OnSetWidth( _this->borderView1, width );
    ViewsBorder_OnSetEmbedded( _this->borderView1, _this->outline1 != 0 );
    CoreView_OnSetStackingPriority((CoreView)_this->borderView1, 53 );
  }

  if ( _this->rectView2 != 0 )
  {
    XColor clr;

    switch ( isState )
    {
      case 'D' :
        clr = _this->Appearance->TrackRightColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->TrackRightColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->TrackRightColorFocused;
      break;

      default : 
        clr = _this->Appearance->TrackRightColorDefault;
    }

    ViewsRectangle_OnSetRadius( _this->rectView2, trackRightCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView2, clr );
    ViewsRectangle_OnSetEmbedded( _this->rectView2, _this->outline2 != 0 );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView2, 33 );
  }

  if ( _this->borderView2 != 0 )
  {
    XColor clr;
    XInt32 width;

    switch ( isState )
    {
      case 'D' :
      {
        clr = _this->Appearance->TrackRightBorderColorDisabled;
        width = _this->Appearance->TrackRightBorderWidthDisabled;
      }
      break;

      case 'A' :
      {
        clr = _this->Appearance->TrackRightBorderColorActive;
        width = _this->Appearance->TrackRightBorderWidthActive;
      }
      break;

      case 'F' :
      {
        clr = _this->Appearance->TrackRightBorderColorFocused;
        width = _this->Appearance->TrackRightBorderWidthFocused;
      }
      break;

      default : 
      {
        clr = _this->Appearance->TrackRightBorderColorDefault;
        width = _this->Appearance->TrackRightBorderWidthDefault;
      }
    }

    ViewsBorder_OnSetRadius( _this->borderView2, trackRightCornerRadius );
    ViewsBorder_OnSetColor( _this->borderView2, clr );
    ViewsBorder_OnSetWidth( _this->borderView2, width );
    ViewsBorder_OnSetEmbedded( _this->borderView2, _this->outline2 != 0 );
    CoreView_OnSetStackingPriority((CoreView)_this->borderView2, 34 );
  }

  if ( _this->shadowView != 0 )
  {
    XColor clr;

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
        clr = _Const000C;
      break;

      default : 
        clr = _this->Appearance->ThumbShadowColorDefault;
    }

    ViewsShadow_OnSetBlurRadius( _this->shadowView, 0 );
    ViewsShadow_OnSetRadius( _this->shadowView, thumbCornerRadius );
    ViewsShadow_OnSetColor( _this->shadowView, clr );
    ViewsShadow_OnSetOffset( _this->shadowView, _Const0007 );
    CoreView_OnSetStackingPriority((CoreView)_this->shadowView, 71 );
  }

  marginLeft = 0;
  marginRight = 0;

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
  {
    XInt32 width = _this->imageView->Bitmap->FrameSize.X;
    marginLeft += ( width / 2 );
    marginRight += ( width - ( width / 2 ));
  }

  minPos = marginLeft;
  maxPos = EwGetRectW( area ) - marginRight;
  newThumbPos = (XInt32)(((XFloat)WidgetSetHorizontalSlider_OnGetCurrentValue( _this ) 
  * (XFloat)( maxPos - minPos )) / 100.0f ) + minPos;

  if ( newThumbPos < marginLeft )
    newThumbPos = marginLeft;

  if ( newThumbPos > ( EwGetRectW( area ) - marginRight ))
    newThumbPos = EwGetRectW( area ) - marginRight;

  if (( _this->frameView1 != 0 ) && ( _this->frameView1->Bitmap != 0 ))
  {
    XInt32 h = _this->frameView1->Bitmap->FrameSize.Y;
    CoreRectView__OnSetBounds( _this->frameView1, EwNewRect( 0, ( EwGetRectH( area ) 
    / 2 ) - ( h / 2 ), EwGetRectW( area ), (( EwGetRectH( area ) / 2 ) - ( h / 2 )) 
    + h ));
  }

  if (( _this->frameView2 != 0 ) && ( _this->frameView2->Bitmap != 0 ))
  {
    XPoint s = _this->frameView2->Bitmap->FrameSize;
    XInt32 x1 = _this->Appearance->TrackLeftMarginLeft;
    XInt32 x2 = EwGetRectW( area );
    XInt32 x = newThumbPos;

    if ( x > x2 )
      x = x2;

    CoreRectView__OnSetBounds( _this->frameView2, EwNewRect( x1, ( EwGetRectH( area ) 
    / 2 ) - ( s.Y / 2 ), x, (( EwGetRectH( area ) / 2 ) - ( s.Y / 2 )) + s.Y ));
    ViewsFrame_OnSetNoEdgesLimit( _this->frameView2, EwSetPointX( _this->frameView2->NoEdgesLimit, 
    ( x2 - x1 ) - ( s.X / 3 )));
    ViewsFrame_OnSetVisible( _this->frameView2, 1 );
  }

  if (( _this->frameView4 != 0 ) && ( _this->frameView4->Bitmap != 0 ))
  {
    XInt32 h = _this->frameView4->Bitmap->FrameSize.Y;
    CoreRectView__OnSetBounds( _this->frameView4, EwNewRect( 0, ( EwGetRectH( area ) 
    / 2 ) - ( h / 2 ), EwGetRectW( area ), (( EwGetRectH( area ) / 2 ) - ( h / 2 )) 
    + h ));
  }

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
  {
    XRect thumbArea = EwNewRect2Point( _Const0007, _this->imageView->Bitmap->FrameSize );
    CoreRectView__OnSetBounds( _this->imageView, EwMoveRectPos( EwMoveRectPos( EwMoveRectNeg( 
    thumbArea, EwGetRectCenter( thumbArea )), EwNewPoint( newThumbPos, EwGetRectH( 
    area ) / 2 )), thumbOffset ));
  }

  if ( _this->outline1 != 0 )
  {
    XInt32 x1 = _this->Appearance->TrackLeftMarginLeft;
    XInt32 x2 = EwGetRectW( area );
    XInt32 x = newThumbPos;

    if ( x > x2 )
      x = x2;

    CoreRectView__OnSetBounds( _this->outline1, EwNewRect( x1, 0, x, EwGetRectH( 
    area )));
    CoreView_OnSetStackingPriority((CoreView)_this->outline1, 51 );
  }

  if ( _this->outline2 != 0 )
  {
    XInt32 x2 = EwGetRectW( area ) - _this->Appearance->TrackRightMarginRight;
    XInt32 x = newThumbPos;

    if ( x < 0 )
      x = 0;

    CoreRectView__OnSetBounds( _this->outline2, EwNewRect( x, 0, x2, EwGetRectH( 
    area )));
    CoreView_OnSetStackingPriority((CoreView)_this->outline2, 32 );
  }

  if (( _this->rectView1 != 0 ) || ( _this->borderView1 != 0 ))
  {
    XInt32 h = trackLeftThickness;
    XInt32 x1 = _this->Appearance->TrackLeftMarginLeft;
    XInt32 x2 = EwGetRectW( area );
    XInt32 x = newThumbPos + ( _this->Appearance->TrackLeftFlattened? trackLeftCornerRadius 
      : 0 );
    XRect r;

    if (( x - x1 ) < ( 2 * trackLeftCornerRadius ))
      x = x1 + ( 2 * trackLeftCornerRadius );

    if ( x > x2 )
      x = x2;

    r = EwNewRect( x1, ( EwGetRectH( area ) / 2 ) - ( h / 2 ), x, (( EwGetRectH( 
    area ) / 2 ) - ( h / 2 )) + h );

    if ( _this->borderView1 != 0 )
      CoreRectView__OnSetBounds( _this->borderView1, r );

    if (((( _this->rectView1 != 0 ) && ( _this->borderView1 != 0 )) && !!_this->borderView1->Width ) 
        && ( _this->borderView1->Color.Alpha == 255 ))
      r = EwInflateRect( r, _Const0008 );

    if ( _this->rectView1 != 0 )
      CoreRectView__OnSetBounds( _this->rectView1, r );
  }

  if (( _this->rectView2 != 0 ) || ( _this->borderView2 != 0 ))
  {
    XInt32 h = trackRightThickness;
    XInt32 x2 = EwGetRectW( area ) - _this->Appearance->TrackRightMarginRight;
    XInt32 x = newThumbPos - ( _this->Appearance->TrackRightFlattened? trackRightCornerRadius 
      : 0 );
    XRect r;

    if (( x2 - x ) < ( 2 * trackRightCornerRadius ))
      x = x2 - ( 2 * trackRightCornerRadius );

    if ( x < 0 )
      x = 0;

    r = EwNewRect( x, ( EwGetRectH( area ) / 2 ) - ( h / 2 ), x2, (( EwGetRectH( 
    area ) / 2 ) - ( h / 2 )) + h );

    if ( _this->borderView2 != 0 )
      CoreRectView__OnSetBounds( _this->borderView2, r );

    if (((( _this->rectView2 != 0 ) && ( _this->borderView2 != 0 )) && !!_this->borderView2->Width ) 
        && ( _this->borderView2->Color.Alpha == 255 ))
      r = EwInflateRect( r, _Const0008 );

    if ( _this->rectView2 != 0 )
      CoreRectView__OnSetBounds( _this->rectView2, r );
  }

  if ( _this->shadowView != 0 )
  {
    XPoint o = EwNewPoint( newThumbPos - ( thumbSize.X / 2 ), ( EwGetRectH( area ) 
      / 2 ) - ( thumbSize.Y / 2 ));
    XRect r = EwMoveRectPos( EwMoveRectPos( EwNewRect2Point( _Const0007, thumbSize ), 
      o ), thumbOffset );

    if ( _this->shadowView != 0 )
      CoreRectView__OnSetBounds( _this->shadowView, r );
  }

  r = _Const000D;

  if ( _this->imageView != 0 )
    r = EwUnionRect( r, _this->imageView->Super1.Bounds );

  if ( _this->shadowView != 0 )
    r = EwUnionRect( r, CoreView__GetClipping( _this->shadowView ));

  CoreGroup_ExtendClipping((CoreGroup)_this, EwGetInt32Max( 2, -r.Point1.X, 0 ), 
  EwGetInt32Max( 2, r.Point2.X - area.Point2.X, 0 ), EwGetInt32Max( 2, -r.Point1.Y, 
  0 ), EwGetInt32Max( 2, r.Point2.Y - area.Point2.Y, 0 ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onConfigChanged()' */
void WidgetSetHorizontalSlider_onConfigChanged( WidgetSetHorizontalSlider _this, 
  XObject sender )
{
  XEnum oldKeyCodeRight;
  XEnum oldKeyCodeLeft;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCodeRight = _this->KeyHandlerRight.Filter;
  oldKeyCodeLeft = _this->KeyHandlerLeft.Filter;
  _this->KeyHandlerRight.Filter = CoreKeyCodeRight;
  _this->KeyHandlerLeft.Filter = CoreKeyCodeLeft;

  if (((( oldKeyCodeRight == CoreKeyCodeNoKey ) || ( oldKeyCodeLeft == CoreKeyCodeNoKey )) 
      && ( _this->KeyHandlerRight.Filter != CoreKeyCodeNoKey )) && ( _this->KeyHandlerLeft.Filter 
      != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if ((( oldKeyCodeRight != CoreKeyCodeNoKey ) && ( oldKeyCodeLeft != CoreKeyCodeNoKey )) 
      && (( _this->KeyHandlerRight.Filter == CoreKeyCodeNoKey ) || ( _this->KeyHandlerLeft.Filter 
      == CoreKeyCodeNoKey )))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  CoreTimer_OnSetBegin( &_this->RepetitionTimer, 0 );
  CoreTimer_OnSetPeriod( &_this->RepetitionTimer, 0 );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onOutlet()' */
void WidgetSetHorizontalSlider_onOutlet( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Outlet.Object != 0 )
    WidgetSetHorizontalSlider_OnSetCurrentValue( _this, EwOnGetInt32( _this->Outlet ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onRepetitionTimer()' */
void WidgetSetHorizontalSlider_onRepetitionTimer( WidgetSetHorizontalSlider _this, 
  XObject sender )
{
  XInt32 oldValue;
  XInt32 newValue;
  XInt32 delta;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;
  delta = 1;

  if ( _this->KeyHandlerLeft.Down )
    delta = -1;

  if ( oldValue < 0 )
  {
    newValue = -newValue;
    delta = -delta;
  }

  if ( delta > 0 )
    newValue = ( newValue + delta ) - (( newValue + delta ) % delta );

  if ( delta < 0 )
  {
    if (( newValue % -delta ) != 0 )
      newValue = ( newValue - delta ) - ( newValue % -delta );

    newValue = newValue + delta;
  }

  if ( oldValue < 0 )
    newValue = -newValue;

  WidgetSetHorizontalSlider_OnSetCurrentValue( _this, newValue );

  if ( oldValue == WidgetSetHorizontalSlider_OnGetCurrentValue( _this ))
    return;

  EwPostSignal( _this->OnChange, ((XObject)_this ));

  if ( _this->Outlet.Object != 0 )
  {
    EwOnSetInt32( _this->Outlet, WidgetSetHorizontalSlider_OnGetCurrentValue( _this ));
    EwNotifyRefObservers( _this->Outlet, 0 );
  }
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onReleaseKey()' */
void WidgetSetHorizontalSlider_onReleaseKey( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreTimer_OnSetEnabled( &_this->RepetitionTimer, 0 );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onPressKey()' */
void WidgetSetHorizontalSlider_onPressKey( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  XInt32 oldValue;
  XInt32 newValue;
  XInt32 delta;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreTimer_OnSetEnabled( &_this->RepetitionTimer, 1 );
  oldValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;
  delta = 1;

  if ( sender == ((XObject)&_this->KeyHandlerLeft ))
    delta = -1;

  if ( oldValue < 0 )
  {
    newValue = -newValue;
    delta = -delta;
  }

  if ( delta > 0 )
    newValue = ( newValue + delta ) - (( newValue + delta ) % delta );

  if ( delta < 0 )
  {
    if (( newValue % -delta ) != 0 )
      newValue = ( newValue - delta ) - ( newValue % -delta );

    newValue = newValue + delta;
  }

  if ( oldValue < 0 )
    newValue = -newValue;

  WidgetSetHorizontalSlider_OnSetCurrentValue( _this, newValue );

  if ( oldValue == WidgetSetHorizontalSlider_OnGetCurrentValue( _this ))
    return;

  EwPostSignal( _this->OnChange, ((XObject)_this ));

  if ( _this->Outlet.Object != 0 )
  {
    EwOnSetInt32( _this->Outlet, WidgetSetHorizontalSlider_OnGetCurrentValue( _this ));
    EwNotifyRefObservers( _this->Outlet, 0 );
  }
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onDragTouch()' */
void WidgetSetHorizontalSlider_onDragTouch( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  XPoint delta;
  XInt32 maxPos;
  XInt32 oldValue;
  XInt32 newValue;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->touchActive )
    return;

  delta = EwMovePointNeg( _this->TouchHandler.CurrentPos, _this->TouchHandler.HittingPos );
  maxPos = EwGetRectW( _this->Super2.Bounds );
  oldValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
    maxPos = maxPos - EwGetRectW( _this->imageView->Super1.Bounds );

  if ( maxPos > 0 )
    newValue = (XInt32)(((XFloat)delta.X * 100.0f ) / (XFloat)maxPos ) + _this->touchStartValue;

  WidgetSetHorizontalSlider_OnSetCurrentValue( _this, newValue );

  if ( oldValue == WidgetSetHorizontalSlider_OnGetCurrentValue( _this ))
    return;

  EwPostSignal( _this->OnChange, ((XObject)_this ));

  if ( _this->Outlet.Object != 0 )
  {
    EwOnSetInt32( _this->Outlet, WidgetSetHorizontalSlider_OnGetCurrentValue( _this ));
    EwNotifyRefObservers( _this->Outlet, 0 );
  }
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onReleaseTouch()' */
void WidgetSetHorizontalSlider_onReleaseTouch( WidgetSetHorizontalSlider _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->touchActive )
    return;

  _this->touchActive = 0;
  _this->KeyHandlerRight.Enabled = 1;
  _this->KeyHandlerLeft.Enabled = 1;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onPressTouch()' */
void WidgetSetHorizontalSlider_onPressTouch( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  XRect touchArea;
  XBool hasThumb;
  XBool insideThumb;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  touchArea = EwMoveRectPos( _Const000E, _this->TouchHandler.CurrentPos );
  hasThumb = 0;
  insideThumb = 0;

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
  {
    hasThumb = 1;
    insideThumb = (XBool)!EwIsRectEmpty( EwIntersectRect( _this->imageView->Super1.Bounds, 
    touchArea ));
  }

  if ( hasThumb && !insideThumb )
  {
    CoreRoot root = CoreView__GetRoot( _this );
    CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
    CoreRoot_RetargetCursor( root, ((CoreView)root ), 0, ((CoreView)_this ));
    CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
    return;
  }

  _this->touchActive = 1;
  _this->KeyHandlerRight.Enabled = 0;
  _this->KeyHandlerLeft.Enabled = 0;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  _this->touchStartValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetOutlet()' */
void WidgetSetHorizontalSlider_OnSetOutlet( WidgetSetHorizontalSlider _this, XRef 
  value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  if ( _this->Outlet.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, WidgetSetHorizontalSlider_onOutlet ), 
      _this->Outlet, 0 );

  _this->Outlet = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, WidgetSetHorizontalSlider_onOutlet ), 
      value, 0 );

  if ( value.Object != 0 )
    EwSignal( EwNewSlot( _this, WidgetSetHorizontalSlider_onOutlet ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnGetCurrentValue()' */
XInt32 WidgetSetHorizontalSlider_OnGetCurrentValue( WidgetSetHorizontalSlider _this )
{
  XInt32 value = _this->CurrentValue;

  if ( value < 0 )
    value = 0;

  if ( value > 100 )
    value = 100;

  return value;
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetCurrentValue()' */
void WidgetSetHorizontalSlider_OnSetCurrentValue( WidgetSetHorizontalSlider _this, 
  XInt32 value )
{
  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetAppearance()' */
void WidgetSetHorizontalSlider_OnSetAppearance( WidgetSetHorizontalSlider _this, 
  WidgetSetHorizontalSliderConfig value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetHorizontalSlider_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetHorizontalSlider_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalSlider_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalSlider' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalSlider )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalSlider )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalSlider' */
EW_DEFINE_CLASS( WidgetSetHorizontalSlider, CoreGroup, RepetitionTimer, outline2, 
                 OnChange, Outlet, touchStartValue, touchStartValue, "WidgetSet::HorizontalSlider" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetHorizontalSlider_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_FindCurrentDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetHorizontalSlider_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetSetHorizontalSlider )

/* Initializer for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__Init( WidgetSetToggleButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetToggleButton );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetToggleButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000F );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, _Const0009 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, _Const0010 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, _Const0011 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, _Const0007 );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, WidgetSetToggleButton_onFlashTimer );
  _this->KeyHandler.OnRelease = EwNewSlot( _this, WidgetSetToggleButton_onReleaseKey );
  _this->KeyHandler.OnPress = EwNewSlot( _this, WidgetSetToggleButton_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, WidgetSetToggleButton_onLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, WidgetSetToggleButton_onEnterTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetToggleButton_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetToggleButton_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__ReInit( WidgetSetToggleButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__Done( WidgetSetToggleButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetBounds()' */
void WidgetSetToggleButton_OnSetBounds( WidgetSetToggleButton _this, XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

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
void WidgetSetToggleButton_UpdateViewState( WidgetSetToggleButton _this, XSet aState )
{
  XBool needsFrame;
  XBool needsText;
  XRect area;
  XChar isState;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFrame = (XBool)(( _this->Appearance != 0 ) && (((((((( _this->Appearance->FaceOffBitmapDefault 
  != 0 ) || ( _this->Appearance->FaceOffBitmapDisabled != 0 )) || ( _this->Appearance->FaceOffBitmapFocused 
  != 0 )) || ( _this->Appearance->FaceOffBitmapActive != 0 )) || ( _this->Appearance->FaceOnBitmapDefault 
  != 0 )) || ( _this->Appearance->FaceOnBitmapDisabled != 0 )) || ( _this->Appearance->FaceOnBitmapFocused 
  != 0 )) || ( _this->Appearance->FaceOnBitmapActive != 0 )));
  needsText = (XBool)(( _this->Appearance != 0 ) && (( !EwIsStringEmpty( _this->LabelOff ) 
  && ( _this->Appearance->LabelOffFont != 0 )) || ( !EwIsStringEmpty( _this->LabelOn ) 
  && ( _this->Appearance->LabelOnFont != 0 ))));
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsFrame && !( _this->frameView != 0 ))
  {
    _this->frameView = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView ), 0 );
  }
  else
    if ( !needsFrame && ( _this->frameView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView ));
      _this->frameView = 0;
    }

  if ( needsText && !( _this->textView != 0 ))
  {
    _this->textView = EwNewObject( ViewsText, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->textView ), 0 );
    ViewsText_OnSetEnableBidiText( _this->textView, 1 );
  }
  else
    if ( !needsText && ( _this->textView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->textView ));
      _this->textView = 0;
    }

  if ( !(( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
    isState = 'D';
  else
    if ((( _this->TouchHandler.Down && _this->TouchHandler.Inside ) || _this->KeyHandler.Down ) 
        || _this->FlashTimer.Enabled )
      isState = 'A';
    else
      if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
        isState = 'F';
      else
        isState = 'E';

  if ( !_this->Checked )
    isState = EwGetCharLower( isState );

  _this->prevState = isState;

  if ( _this->frameView != 0 )
  {
    ResourcesBitmap bitmap;
    XInt32 frameNo;
    XSet layout = _this->Appearance->FaceLayout;
    XRect r = EwNewRect( area.Point1.X, area.Point1.Y, area.Point2.X, area.Point2.Y );

    switch ( isState )
    {
      case 'D' :
      {
        bitmap = _this->Appearance->FaceOnBitmapDisabled;
        frameNo = _this->Appearance->FaceOnFrameDisabled;
      }
      break;

      case 'A' :
      {
        bitmap = _this->Appearance->FaceOnBitmapActive;
        frameNo = _this->Appearance->FaceOnFrameActive;
      }
      break;

      case 'F' :
      {
        bitmap = _this->Appearance->FaceOnBitmapFocused;
        frameNo = _this->Appearance->FaceOnFrameFocused;
      }
      break;

      case 'E' :
      {
        bitmap = _this->Appearance->FaceOnBitmapDefault;
        frameNo = _this->Appearance->FaceOnFrameDefault;
      }
      break;

      case 'd' :
      {
        bitmap = _this->Appearance->FaceOffBitmapDisabled;
        frameNo = _this->Appearance->FaceOffFrameDisabled;
      }
      break;

      case 'a' :
      {
        bitmap = _this->Appearance->FaceOffBitmapActive;
        frameNo = _this->Appearance->FaceOffFrameActive;
      }
      break;

      case 'f' :
      {
        bitmap = _this->Appearance->FaceOffBitmapFocused;
        frameNo = _this->Appearance->FaceOffFrameFocused;
      }
      break;

      default : 
      {
        bitmap = _this->Appearance->FaceOffBitmapDefault;
        frameNo = _this->Appearance->FaceOffFrameDefault;
      }
    }

    ViewsFrame_OnSetAnimated( _this->frameView, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView, _Const0004 );

    if ( frameNo < 0 )
      frameNo = 0;

    if (( bitmap != 0 ) && !(( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz ))
    {
      XBool alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
      XInt32 w = bitmap->FrameSize.X;

      if ( alignToLeft && !alignToRight )
        r.Point2.X = ( r.Point1.X + w );
      else
        if ( !alignToLeft && alignToRight )
          r.Point1.X = ( r.Point2.X - w );
        else
        {
          r.Point1.X = ( r.Point1.X + (( EwGetRectW( r ) / 2 ) - ( w / 2 )));
          r.Point2.X = ( r.Point1.X + w );
        }
    }

    if (( bitmap != 0 ) && !(( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert ))
    {
      XBool alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );
      XInt32 h = bitmap->FrameSize.Y;

      if ( alignToTop && !alignToBottom )
        r.Point2.Y = ( r.Point1.Y + h );
      else
        if ( !alignToTop && alignToBottom )
          r.Point1.Y = ( r.Point2.Y - h );
        else
        {
          r.Point1.Y = ( r.Point1.Y + (( EwGetRectH( r ) / 2 ) - ( h / 2 )));
          r.Point2.Y = ( r.Point1.Y + h );
        }
    }

    ViewsFrame_OnSetFrameNumber( _this->frameView, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView, bitmap );
    CoreRectView__OnSetBounds( _this->frameView, r );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView, 16 );
  }

  if ( _this->textView != 0 )
  {
    XColor clr;
    ResourcesFont font;
    XString label;

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      case 'E' :
      {
        font = _this->Appearance->LabelOnFont;
        label = _this->LabelOn;
      }
      break;

      default : 
      {
        font = _this->Appearance->LabelOffFont;
        label = _this->LabelOff;
      }
    }

    switch ( isState )
    {
      case 'D' :
        clr = _this->Appearance->LabelOnColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->LabelOnColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->LabelOnColorFocused;
      break;

      case 'E' :
        clr = _this->Appearance->LabelOnColorDefault;
      break;

      case 'd' :
        clr = _this->Appearance->LabelOffColorDisabled;
      break;

      case 'a' :
        clr = _this->Appearance->LabelOffColorActive;
      break;

      case 'f' :
        clr = _this->Appearance->LabelOffColorFocused;
      break;

      default : 
        clr = _this->Appearance->LabelOffColorDefault;
    }

    CoreRectView__OnSetBounds( _this->textView, EwNewRect( area.Point1.X, area.Point1.Y, 
    area.Point2.X - _this->Appearance->LabelMarginRight, area.Point2.Y ));
    ViewsText_OnSetAlignment( _this->textView, _this->Appearance->LabelAlignment );
    ViewsText_OnSetFont( _this->textView, font );
    ViewsText_OnSetString( _this->textView, label );
    ViewsText_OnSetColor( _this->textView, clr );
    ViewsText_OnSetWrapText( _this->textView, 1 );
    ViewsText_OnSetEllipsis( _this->textView, 1 );
    CoreView_OnSetStackingPriority((CoreView)_this->textView, 92 );
  }

  CoreGroup_ExtendClipping((CoreGroup)_this, 0, 0, 0, 0 );

  {
    XRect touchArea = area;
    CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, touchArea.Point1 );
    CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, touchArea.Point2 );
    CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, EwNewPoint( touchArea.Point2.X, 
    touchArea.Point1.Y ));
    CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, EwNewPoint( touchArea.Point1.X, 
    touchArea.Point2.Y ));
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onConfigChanged()' */
void WidgetSetToggleButton_onConfigChanged( WidgetSetToggleButton _this, XObject 
  sender )
{
  XEnum oldKeyCode;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCode = _this->KeyHandler.Filter;
  _this->KeyHandler.Filter = CoreKeyCodeEnter;

  if (( oldKeyCode == CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if (( oldKeyCode != CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter == CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onFlashTimer()' */
void WidgetSetToggleButton_onFlashTimer( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onReleaseKey()' */
void WidgetSetToggleButton_onReleaseKey( WidgetSetToggleButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = 50;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ((XInt32)( _this->KeyHandler.Time - _this->onPressKeyTime ) >= pressFeedbackDuration )
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - (XInt32)( 
    _this->KeyHandler.Time - _this->onPressKeyTime ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onPressKey()' */
void WidgetSetToggleButton_onPressKey( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );
  }

  _this->onPressKeyTime = _this->KeyHandler.Time;
  EwPostSignal( _this->OnPress, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onLeaveTouch()' */
void WidgetSetToggleButton_onLeaveTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onEnterTouch()' */
void WidgetSetToggleButton_onEnterTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onReleaseTouch()' */
void WidgetSetToggleButton_onReleaseTouch( WidgetSetToggleButton _this, XObject 
  sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = 50;

  _this->KeyHandler.Enabled = 1;

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= pressFeedbackDuration )
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - _this->TouchHandler.HoldPeriod );
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onPressTouch()' */
void WidgetSetToggleButton_onPressTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->KeyHandler.Enabled = 0;

  if ( _this->FlashTimer.Enabled )
  {
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );
  }

  EwPostSignal( _this->OnPress, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetChecked()' */
void WidgetSetToggleButton_OnSetChecked( WidgetSetToggleButton _this, XBool value )
{
  if ( _this->Checked == value )
    return;

  _this->Checked = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetLabel()' */
void WidgetSetToggleButton_OnSetLabel( WidgetSetToggleButton _this, XString value )
{
  if ( !EwCompString( value, _this->LabelOff ) && !EwCompString( value, _this->LabelOn ))
    return;

  _this->LabelOff = EwShareString( value );
  _this->LabelOn = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetAppearance()' */
void WidgetSetToggleButton_OnSetAppearance( WidgetSetToggleButton _this, WidgetSetToggleButtonConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::ToggleButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetToggleButton )
EW_END_OF_CLASS_VARIANTS( WidgetSetToggleButton )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ToggleButton' */
EW_DEFINE_CLASS( WidgetSetToggleButton, CoreGroup, FlashTimer, textView, OnPress, 
                 LabelOn, LabelOn, onPressKeyTime, "WidgetSet::ToggleButton" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetToggleButton_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_FindCurrentDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetToggleButton_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetSetToggleButton )

/* Initializer for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__Init( WidgetSetPushButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetPushButton );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetPushButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000F );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, _Const0009 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, _Const0010 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, _Const0011 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, _Const0007 );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  _this->IconFrameActive = -1;
  _this->IconFrameFocused = -1;
  _this->IconFrameDisabled = -1;
  _this->IconFrameDefault = -1;
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, WidgetSetPushButton_onFlashTimer );
  _this->KeyHandler.OnRelease = EwNewSlot( _this, WidgetSetPushButton_onReleaseKey );
  _this->KeyHandler.OnPress = EwNewSlot( _this, WidgetSetPushButton_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, WidgetSetPushButton_onLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, WidgetSetPushButton_onEnterTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetPushButton_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetPushButton_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__ReInit( WidgetSetPushButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__Done( WidgetSetPushButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetBounds()' */
void WidgetSetPushButton_OnSetBounds( WidgetSetPushButton _this, XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < 0 )
      ns.X = 0;

    if ( ns.Y < 0 )
      ns.Y = 0;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

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
void WidgetSetPushButton_UpdateViewState( WidgetSetPushButton _this, XSet aState )
{
  XBool needsFrame;
  XBool needsImage;
  XBool needsText;
  XBool needsRect1;
  XBool needsBorder1;
  XBool needsShadow;
  XRect area;
  XRect thumbArea;
  XInt32 thumbCornerRadius;
  XChar isState;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFrame = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->FaceBitmapDefault 
  != 0 ) || ( _this->Appearance->FaceBitmapDisabled != 0 )) || ( _this->Appearance->FaceBitmapFocused 
  != 0 )) || ( _this->Appearance->FaceBitmapActive != 0 )));
  needsImage = _this->Icon != 0;
  needsText = (XBool)((( _this->Appearance != 0 ) && !EwIsStringEmpty( _this->Label )) 
  && ( _this->Appearance->LabelFont != 0 ));
  needsRect1 = (XBool)(( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->ThumbColorDefault ) 
  || !EwIsColorNull( _this->Appearance->ThumbColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->ThumbColorFocused )) || !EwIsColorNull( _this->Appearance->ThumbColorActive )));
  needsBorder1 = (XBool)((( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->ThumbBorderColorDefault ) 
  || !EwIsColorNull( _this->Appearance->ThumbBorderColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->ThumbBorderColorFocused )) || !EwIsColorNull( _this->Appearance->ThumbBorderColorActive ))) 
  && ( !!_this->Appearance->ThumbBorderWidthDefault || !!_this->Appearance->ThumbBorderWidthFocused ));
  needsShadow = (XBool)(( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->ThumbShadowColorDefault ) 
  || !EwIsColorNull( _this->Appearance->ThumbShadowColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->ThumbShadowColorFocused )) || !EwIsColorNull( _this->Appearance->ThumbShadowColorActive )));
  area = EwGetRectORect( _this->Super2.Bounds );
  thumbArea = _Const000D;
  thumbCornerRadius = 0;

  if ( needsFrame && !( _this->frameView != 0 ))
  {
    _this->frameView = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView ), 0 );
  }
  else
    if ( !needsFrame && ( _this->frameView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView ));
      _this->frameView = 0;
    }

  if ( needsImage && !( _this->imageView != 0 ))
  {
    _this->imageView = EwNewObject( ViewsImage, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->imageView ), 0 );
  }
  else
    if ( !needsImage && ( _this->imageView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->imageView ));
      _this->imageView = 0;
    }

  if ( needsText && !( _this->textView != 0 ))
  {
    _this->textView = EwNewObject( ViewsText, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->textView ), 0 );
    ViewsText_OnSetEnableBidiText( _this->textView, 1 );
  }
  else
    if ( !needsText && ( _this->textView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->textView ));
      _this->textView = 0;
    }

  if ( needsRect1 && !( _this->rectView1 != 0 ))
  {
    _this->rectView1 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->rectView1 ), 0 );
  }
  else
    if ( !needsRect1 && ( _this->rectView1 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->rectView1 ));
      _this->rectView1 = 0;
    }

  if ( needsBorder1 && !( _this->borderView1 != 0 ))
  {
    _this->borderView1 = EwNewObject( ViewsBorder, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->borderView1 ), 0 );
  }
  else
    if ( !needsBorder1 && ( _this->borderView1 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->borderView1 ));
      _this->borderView1 = 0;
    }

  if ( needsShadow && !( _this->shadowView != 0 ))
  {
    _this->shadowView = EwNewObject( ViewsShadow, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->shadowView ), 0 );
  }
  else
    if ( !needsShadow && ( _this->shadowView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->shadowView ));
      _this->shadowView = 0;
    }

  if ( !(( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
    isState = 'D';
  else
    if ((( _this->TouchHandler.Down && _this->TouchHandler.Inside ) || _this->KeyHandler.Down ) 
        || _this->FlashTimer.Enabled )
      isState = 'A';
    else
      if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
        isState = 'F';
      else
        isState = 'E';

  _this->prevState = isState;

  if ((( _this->shadowView != 0 ) || ( _this->borderView1 != 0 )) || ( _this->rectView1 
      != 0 ))
  {
    XRect r = area;
    XPoint thumbSize;

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      {
        thumbSize = _Const0007;
        thumbCornerRadius = 0;
      }
      break;

      default : 
      {
        thumbSize = _Const0007;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusDefault;
      }
    }

    thumbSize.X = ( thumbSize.X + EwGetRectW( r ));
    thumbSize.Y = ( thumbSize.Y + EwGetRectH( r ));
    thumbSize = EwGetPointMax( 2, thumbSize, _Const0007 );
    r.Point1.X = (( EwGetRectW( r ) / 2 ) - ( thumbSize.X / 2 ));
    r.Point2.X = ( r.Point1.X + thumbSize.X );
    r.Point1.Y = (( EwGetRectH( r ) / 2 ) - ( thumbSize.Y / 2 ));
    r.Point2.Y = ( r.Point1.Y + thumbSize.Y );
    thumbArea = r;
  }

  if ( _this->shadowView != 0 )
  {
    XInt32 blur;
    XPoint offset;
    XColor clr;

    switch ( isState )
    {
      case 'D' :
      {
        blur = _this->Appearance->ThumbShadowBlurRadiusDisabled;
        clr = _this->Appearance->ThumbShadowColorDisabled;
        offset = _Const0007;
      }
      break;

      case 'A' :
      {
        blur = _this->Appearance->ThumbShadowBlurRadiusActive;
        clr = _this->Appearance->ThumbShadowColorActive;
        offset = _Const0007;
      }
      break;

      case 'F' :
      {
        blur = _this->Appearance->ThumbShadowBlurRadiusFocused;
        clr = _this->Appearance->ThumbShadowColorFocused;
        offset = _this->Appearance->ThumbShadowOffsetFocused;
      }
      break;

      default : 
      {
        blur = _this->Appearance->ThumbShadowBlurRadiusDefault;
        clr = _this->Appearance->ThumbShadowColorDefault;
        offset = _Const0007;
      }
    }

    CoreRectView__OnSetBounds( _this->shadowView, thumbArea );
    ViewsShadow_OnSetBlurRadius( _this->shadowView, blur );
    ViewsShadow_OnSetRadius( _this->shadowView, thumbCornerRadius );
    ViewsShadow_OnSetColor( _this->shadowView, clr );
    ViewsShadow_OnSetOffset( _this->shadowView, offset );
    CoreView_OnSetStackingPriority((CoreView)_this->shadowView, 39 );
  }

  if ( _this->borderView1 != 0 )
  {
    XColor clr;
    XInt32 width;

    switch ( isState )
    {
      case 'D' :
      {
        clr = _this->Appearance->ThumbBorderColorDisabled;
        width = 0;
      }
      break;

      case 'A' :
      {
        clr = _this->Appearance->ThumbBorderColorActive;
        width = 0;
      }
      break;

      case 'F' :
      {
        clr = _this->Appearance->ThumbBorderColorFocused;
        width = _this->Appearance->ThumbBorderWidthFocused;
      }
      break;

      default : 
      {
        clr = _this->Appearance->ThumbBorderColorDefault;
        width = _this->Appearance->ThumbBorderWidthDefault;
      }
    }

    CoreRectView__OnSetBounds( _this->borderView1, thumbArea );
    ViewsBorder_OnSetRadius( _this->borderView1, thumbCornerRadius );
    ViewsBorder_OnSetColor( _this->borderView1, clr );
    ViewsBorder_OnSetWidth( _this->borderView1, width );
    CoreView_OnSetStackingPriority((CoreView)_this->borderView1, 41 );
  }

  if ( _this->rectView1 != 0 )
  {
    XRect r = thumbArea;
    XColor clr;

    switch ( isState )
    {
      case 'D' :
        clr = _this->Appearance->ThumbColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->ThumbColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->ThumbColorFocused;
      break;

      default : 
        clr = _this->Appearance->ThumbColorDefault;
    }

    if ((( _this->borderView1 != 0 ) && !!_this->borderView1->Width ) && ( _this->borderView1->Color.Alpha 
        == 255 ))
      r = EwInflateRect( r, _Const0008 );

    CoreRectView__OnSetBounds( _this->rectView1, r );
    ViewsRectangle_OnSetRadius( _this->rectView1, thumbCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView1, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView1, 40 );
  }

  if ( _this->frameView != 0 )
  {
    ResourcesBitmap bitmap;
    XColor tint;
    XRect r = EwNewRect( area.Point1.X, area.Point1.Y, area.Point2.X, area.Point2.Y );

    switch ( isState )
    {
      case 'D' :
        bitmap = _this->Appearance->FaceBitmapDisabled;
      break;

      case 'A' :
        bitmap = _this->Appearance->FaceBitmapActive;
      break;

      case 'F' :
        bitmap = _this->Appearance->FaceBitmapFocused;
      break;

      default : 
        bitmap = _this->Appearance->FaceBitmapDefault;
    }

    switch ( isState )
    {
      case 'D' :
        tint = _this->Appearance->FaceTintDisabled;
      break;

      case 'A' :
        tint = _this->Appearance->FaceTintActive;
      break;

      case 'F' :
        tint = _this->Appearance->FaceTintFocused;
      break;

      default : 
        tint = _this->Appearance->FaceTintDefault;
    }

    ViewsFrame_OnSetAnimated( _this->frameView, 1 );
    ViewsFrame_OnSetColor( _this->frameView, tint );
    ViewsFrame_OnSetFrameNumber( _this->frameView, 0 );
    ViewsFrame_OnSetBitmap( _this->frameView, bitmap );
    CoreRectView__OnSetBounds( _this->frameView, r );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView, 16 );
  }

  if (( _this->imageView != 0 ) && ( _this->Appearance != 0 ))
  {
    XInt32 frameNo;
    XColor clr;

    switch ( isState )
    {
      case 'D' :
        frameNo = _this->IconFrameDisabled;
      break;

      case 'A' :
        frameNo = _this->IconFrameActive;
      break;

      case 'F' :
        frameNo = _this->IconFrameFocused;
      break;

      default : 
        frameNo = _this->IconFrameDefault;
    }

    switch ( isState )
    {
      case 'D' :
        clr = _this->Appearance->IconTintDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->IconTintActive;
      break;

      case 'F' :
        clr = _this->Appearance->IconTintFocused;
      break;

      default : 
        clr = _this->Appearance->IconTintDefault;
    }

    ViewsImage_OnSetAnimated( _this->imageView, (XBool)( frameNo < 0 ));

    if ( frameNo < 0 )
      frameNo = 0;

    CoreRectView__OnSetBounds( _this->imageView, EwNewRect( area.Point1.X, area.Point1.Y, 
    area.Point2.X, area.Point2.Y ));
    ViewsImage_OnSetAlignment( _this->imageView, ViewsImageAlignmentAlignHorzCenter 
    | ViewsImageAlignmentAlignVertCenter );
    ViewsImage_OnSetBitmap( _this->imageView, _this->Icon );
    ViewsImage_OnSetFrameNumber( _this->imageView, frameNo );
    ViewsImage_OnSetColor( _this->imageView, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->imageView, 59 );
  }
  else
    if ( _this->imageView != 0 )
    {
      XInt32 frameNo;

      switch ( isState )
      {
        case 'D' :
          frameNo = _this->IconFrameDisabled;
        break;

        case 'A' :
          frameNo = _this->IconFrameActive;
        break;

        case 'F' :
          frameNo = _this->IconFrameFocused;
        break;

        default : 
          frameNo = _this->IconFrameDefault;
      }

      CoreRectView__OnSetBounds( _this->imageView, area );
      ViewsImage_OnSetAlignment( _this->imageView, ViewsImageAlignmentAlignHorzCenter 
      | ViewsImageAlignmentAlignVertCenter );
      ViewsImage_OnSetBitmap( _this->imageView, _this->Icon );
      ViewsImage_OnSetFrameNumber( _this->imageView, frameNo );
      ViewsImage_OnSetColor( _this->imageView, _Const0004 );
      CoreView_OnSetStackingPriority((CoreView)_this->imageView, 59 );
    }

  if ( _this->textView != 0 )
  {
    XColor clr;

    switch ( isState )
    {
      case 'D' :
        clr = _this->Appearance->LabelColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->LabelColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->LabelColorFocused;
      break;

      default : 
        clr = _this->Appearance->LabelColorDefault;
    }

    CoreRectView__OnSetBounds( _this->textView, EwNewRect( area.Point1.X, area.Point1.Y, 
    area.Point2.X, area.Point2.Y ));
    ViewsText_OnSetAlignment( _this->textView, ViewsTextAlignmentAlignHorzCenter 
    | ViewsTextAlignmentAlignVertCenter );
    ViewsText_OnSetWrapText( _this->textView, 1 );
    ViewsText_OnSetEllipsis( _this->textView, 1 );
    ViewsText_OnSetFont( _this->textView, _this->Appearance->LabelFont );
    ViewsText_OnSetString( _this->textView, _this->Label );
    ViewsText_OnSetColor( _this->textView, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->textView, 76 );
  }

  if ( !EwIsRectNull( thumbArea ))
  {
    XRect r = thumbArea;

    if ( _this->shadowView != 0 )
      r = EwUnionRect( r, CoreView__GetClipping( _this->shadowView ));

    if ( _this->frameView != 0 )
      r = EwUnionRect( r, CoreView__GetExtent( _this->frameView ));

    CoreGroup_ExtendClipping((CoreGroup)_this, EwGetInt32Max( 2, -r.Point1.X, 0 ), 
    EwGetInt32Max( 2, r.Point2.X - area.Point2.X, 0 ), EwGetInt32Max( 2, -r.Point1.Y, 
    0 ), EwGetInt32Max( 2, r.Point2.Y - area.Point2.Y, 0 ));
  }
  else
    CoreGroup_ExtendClipping((CoreGroup)_this, 0, 0, 0, 0 );
}

/* 'C' function for method : 'WidgetSet::PushButton.onConfigChanged()' */
void WidgetSetPushButton_onConfigChanged( WidgetSetPushButton _this, XObject sender )
{
  XEnum oldKeyCode;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCode = _this->KeyHandler.Filter;
  _this->KeyHandler.Filter = CoreKeyCodeEnter;

  if (( oldKeyCode == CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if (( oldKeyCode != CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter == CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onFlashTimer()' */
void WidgetSetPushButton_onFlashTimer( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onReleaseKey()' */
void WidgetSetPushButton_onReleaseKey( WidgetSetPushButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = 50;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( !((XInt32)( _this->KeyHandler.Time - _this->onPressKeyTime ) >= pressFeedbackDuration ))
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - (XInt32)( 
    _this->KeyHandler.Time - _this->onPressKeyTime ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onPressKey()' */
void WidgetSetPushButton_onPressKey( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

  _this->onPressKeyTime = _this->KeyHandler.Time;
  EwPostSignal( _this->OnPress, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.onLeaveTouch()' */
void WidgetSetPushButton_onLeaveTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onEnterTouch()' */
void WidgetSetPushButton_onEnterTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onReleaseTouch()' */
void WidgetSetPushButton_onReleaseTouch( WidgetSetPushButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = 50;

  _this->KeyHandler.Enabled = 1;

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( !( _this->TouchHandler.HoldPeriod >= pressFeedbackDuration ))
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - _this->TouchHandler.HoldPeriod );
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onPressTouch()' */
void WidgetSetPushButton_onPressTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->KeyHandler.Enabled = 0;

  if ( _this->FlashTimer.Enabled )
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

  EwPostSignal( _this->OnPress, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetIconFrame()' */
void WidgetSetPushButton_OnSetIconFrame( WidgetSetPushButton _this, XInt32 value )
{
  if (((( value == _this->IconFrameDefault ) && ( value == _this->IconFrameDisabled )) 
      && ( value == _this->IconFrameFocused )) && ( value == _this->IconFrameActive ))
    return;

  _this->IconFrameDefault = value;
  _this->IconFrameDisabled = value;
  _this->IconFrameFocused = value;
  _this->IconFrameActive = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetIcon()' */
void WidgetSetPushButton_OnSetIcon( WidgetSetPushButton _this, ResourcesBitmap value )
{
  if ( _this->Icon == value )
    return;

  _this->Icon = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetLabel()' */
void WidgetSetPushButton_OnSetLabel( WidgetSetPushButton _this, XString value )
{
  if ( !EwCompString( _this->Label, value ))
    return;

  _this->Label = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetAppearance()' */
void WidgetSetPushButton_OnSetAppearance( WidgetSetPushButton _this, WidgetSetPushButtonConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::PushButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetPushButton )
EW_END_OF_CLASS_VARIANTS( WidgetSetPushButton )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::PushButton' */
EW_DEFINE_CLASS( WidgetSetPushButton, CoreGroup, FlashTimer, shadowView, OnPress, 
                 Label, Label, onPressKeyTime, "WidgetSet::PushButton" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetPushButton_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_FindCurrentDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetPushButton_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetSetPushButton )

/* Embedded Wizard */
