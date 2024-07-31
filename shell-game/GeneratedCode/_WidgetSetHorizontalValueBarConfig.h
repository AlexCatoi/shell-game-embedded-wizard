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

#ifndef _WidgetSetHorizontalValueBarConfig_H
#define _WidgetSetHorizontalValueBarConfig_H

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

#include "_WidgetSetWidgetConfig.h"

/* Forward declaration of the class Resources::Bitmap */
#ifndef _ResourcesBitmap_
  EW_DECLARE_CLASS( ResourcesBitmap )
#define _ResourcesBitmap_
#endif

/* Forward declaration of the class WidgetSet::HorizontalValueBarConfig */
#ifndef _WidgetSetHorizontalValueBarConfig_
  EW_DECLARE_CLASS( WidgetSetHorizontalValueBarConfig )
#define _WidgetSetHorizontalValueBarConfig_
#endif


/* This class implements the functionality permitting you to simply customize the 
   look and feel of a 'horizontal value bar' widget (WidgetSet::HorizontalValueBar). 
   In the practice, you will create an instance of this class, configure its properties 
   with bitmaps, colors and other relevant attributes according to your design expectations 
   and assign such prepared configuration object to the property 'Appearance' of 
   every affected horizontal value bar widget. Thereupon the widgets will use the 
   configuration information provided in the object.
   Since with the configuration object you determine the appearance of the value 
   bar widget you should know from which views the widget is composed of:
   - 'FaceImage' is a bitmap frame view (Views::Frame) filling vertically centered 
   the entire width in the background of the widget. In the configuration object 
   you can specify the desired bitmap (@FaceBitmap), the frame number within the 
   bitmap (@FaceFrame) and opacity or color to tint the bitmap (@FaceTint). The 
   value bar widget can automatically play animated bitmaps if the specified frame 
   number is -1.
   - 'TrackLeftRectangle' is a rectangle view (Views::Rectangle) filling per default 
   vertically centered the background of the value bar widget between its left edge 
   and the actual position of the needle. The height and an additional vertical 
   displacement of the track are determined by the properties @TrackLeftThickness 
   and @TrackLeftOffset. The area destined for the track can be limited by configuring 
   the properties @TrackLeftMarginLeft and @TrackLeftMarginRight. With the property 
   @TrackLeftStatic the track can be configured to not depend on the actual needle 
   position. Normally, the track has rectangular shape with sharp corners. If desired 
   the corners can be rounded (@TrackLeftCornerRadius) whereby the rounding at the 
   needle position can be controlled by the property @TrackLeftFlattened. The track 
   can be filled with a solid color @TrackLeftColor.
   - 'TrackLeftBorder' is a border view (Views::Border) surrounding the above described 
   'TrackLeftRectangle' and lying in front of it. Its size, position and corner 
   radius correspond thus to the of the 'TrackLeftRectangle'. The thickness of the 
   border (@TrackLeftBorderWidth) and its color (@TrackLeftBorderColor) can be specified.
   - 'TrackLeftImage' is a bitmap frame view (Views::Frame) filling per default 
   vertically centered the background of the value bar widget between its left edge 
   and the actual position of the needle. The area destined for the track can be 
   limited by configuring the properties @TrackLeftMarginLeft and @TrackLeftMarginRight. 
   With the property @TrackLeftStatic the track can be configured to not depend 
   on the actual needle position. An additional vertical displacement of the track 
   is determined by the property @TrackLeftOffset. In the configuration object you 
   can specify the desired bitmap (@TrackLeftBitmap), the frame number within the 
   bitmap (@TrackLeftFrame) and opacity or color to tint the bitmap (@TrackLeftTint). 
   With the property @TrackLeftWithEdge you can configure how the right edge of 
   the track (the edge at the needle position) should appear. The value bar can 
   automatically play animated bitmaps if the specified frame number is -1.
   - 'TrackRightRectangle' is a rectangle view (Views::Rectangle) filling per default 
   vertically centered the background of the value bar widget between the actual 
   position of the needle and the right edge of the widget. The height and an additional 
   vertical displacement of the track are determined by the properties @TrackRightThickness 
   and @TrackRightOffset. The area destined for the track can be limited by configuring 
   the properties @TrackRightMarginLeft and @TrackRightMarginRight. With the property 
   @TrackRightStatic the track can be configured to not depend on the actual needle 
   position. Normally, the track has rectangular shape with sharp corners. If desired 
   the corners can be rounded (@TrackRightCornerRadius) whereby the rounding at 
   the needle position can be controlled by the property @TrackRightFlattened. The 
   track can be filled with a solid color (@TrackRightColor).
   - 'TrackRightBorder' is a border view (Views::Border) surrounding the above described 
   'TrackRightRectangle' and lying in front of it. Its size, position and corner 
   radius correspond thus to the of the 'TrackRightRectangle'. The thickness of 
   the border (@TrackRightBorderWidth) and its color (@TrackRightBorderColor) can 
   be specified.
   - 'TrackRightImage' is a bitmap frame view (Views::Frame) filling per default 
   vertically centered the background of the value bar widget between the actual 
   position of the needle and the right edge of the widget. The area destined for 
   the track can be limited by configuring the properties @TrackRightMarginLeft 
   and @TrackRightMarginRight. With the property @TrackRightStatic the track can 
   be configured to not depend on the actual needle position. An additional vertical 
   displacement of the track is determined by the property @TrackRightOffset. In 
   the configuration object you can specify the desired bitmap (@TrackRightBitmap), 
   the frame number within the bitmap (@TrackRightFrame) and opacity or color to 
   tint the bitmap (@TrackRightTint). With the property @TrackRightWithEdge you 
   can configure how the left edge of the track (the edge at the needle position) 
   should appear. The value bar can automatically play animated bitmaps if the specified 
   frame number is -1.
   - 'NeedleImage' is an image view (Views::Image) displayed centered at the actual 
   needle position. In the configuration object you can specify the desired bitmap 
   (@NeedleBitmap), the frame number within the bitmap (@NeedleFrame) and opacity 
   or color to tint the bitmap (@NeedleTint). If necessary, additional margins on 
   the left and on the right of the needle can be specified by using the properties 
   @NeedleMarginLeft and @NeedleMarginRight. An additional displacement (@NeedleOffset) 
   can be configured. The value bar can automatically play animated bitmaps if the 
   specified frame number is -1.
   - 'CoverImage' is a bitmap frame view (Views::Frame) filling vertically centered 
   the entire width of the widget and covering so eventually the needle and track. 
   In the configuration object you can specify the desired bitmap (@CoverBitmap), 
   the frame number within the bitmap (@CoverFrame) and opacity or color to tint 
   the bitmap (@CoverTint). The value bar widget can automatically play animated 
   bitmaps if the specified frame number is -1.
   All above mentioned views are arranged one above the other whereby the resulting 
   stacking order can be configured by using the properties @FaceStackingPriority, 
   @TrackLeftStackingPriority, @TrackRightStackingPriority, @NeedleStackingPriority 
   and @CoverStackingPriority. The view with higher priority will appear in front 
   of other views with lower priority.
   The value bar widget can move the needle with a smooth animation. This can be 
   configured in the properties @SwingDuration and @SwingElastic.
   To further enhance the widgets, a slot method can be assigned to the property 
   @OnUpdate. Within the slot method new decoration views can be added to the widgets 
   and updated according to the current state of the widget. 
   With the properties @WidgetMinSize and @WidgetMaxSize you can configure size 
   constraints for the widget itself. You can, for example, limit the value bar 
   widget to not shrink below a specified width or height. */
EW_DEFINE_FIELDS( WidgetSetHorizontalValueBarConfig, WidgetSetWidgetConfig )
  EW_PROPERTY( NeedleBitmap,    ResourcesBitmap )
  EW_PROPERTY( TrackRightBorderColor, XColor )
  EW_PROPERTY( TrackRightBorderWidth, XInt32 )
  EW_PROPERTY( TrackRightColor, XColor )
  EW_PROPERTY( TrackRightCornerRadius, XInt32 )
  EW_PROPERTY( TrackRightThickness, XInt32 )
  EW_PROPERTY( TrackRightMarginRight, XInt32 )
  EW_PROPERTY( TrackLeftBorderColor, XColor )
  EW_PROPERTY( TrackLeftBorderWidth, XInt32 )
  EW_PROPERTY( TrackLeftColor,  XColor )
  EW_PROPERTY( TrackLeftCornerRadius, XInt32 )
  EW_PROPERTY( TrackLeftThickness, XInt32 )
  EW_PROPERTY( TrackRightFlattened, XBool )
  EW_PROPERTY( TrackRightWithEdge, XBool )
  EW_PROPERTY( TrackLeftFlattened, XBool )
EW_END_OF_FIELDS( WidgetSetHorizontalValueBarConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalValueBarConfig' */
EW_DEFINE_METHODS( WidgetSetHorizontalValueBarConfig, WidgetSetWidgetConfig )
EW_END_OF_METHODS( WidgetSetHorizontalValueBarConfig )

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetNeedleBitmap()' */
void WidgetSetHorizontalValueBarConfig_OnSetNeedleBitmap( WidgetSetHorizontalValueBarConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightBorderColor()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightBorderColor( WidgetSetHorizontalValueBarConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightBorderWidth()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightBorderWidth( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightColor()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightColor( WidgetSetHorizontalValueBarConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightFlattened()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightFlattened( WidgetSetHorizontalValueBarConfig _this, 
  XBool value );

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightCornerRadius()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightCornerRadius( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightThickness()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightThickness( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightWithEdge()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightWithEdge( WidgetSetHorizontalValueBarConfig _this, 
  XBool value );

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightMarginRight()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightMarginRight( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackLeftBorderColor()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackLeftBorderColor( WidgetSetHorizontalValueBarConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackLeftBorderWidth()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackLeftBorderWidth( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackLeftColor()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackLeftColor( WidgetSetHorizontalValueBarConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackLeftFlattened()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackLeftFlattened( WidgetSetHorizontalValueBarConfig _this, 
  XBool value );

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackLeftCornerRadius()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackLeftCornerRadius( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackLeftThickness()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackLeftThickness( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value );

#ifdef __cplusplus
  }
#endif

#endif /* _WidgetSetHorizontalValueBarConfig_H */

/* Embedded Wizard */
