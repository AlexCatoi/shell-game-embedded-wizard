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

#ifndef _ViewsFilterScreen_H
#define _ViewsFilterScreen_H

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

#include "_CoreRectView.h"

/* Forward declaration of the class Core::Group */
#ifndef _CoreGroup_
  EW_DECLARE_CLASS( CoreGroup )
#define _CoreGroup_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif

/* Forward declaration of the class Views::FilterScreen */
#ifndef _ViewsFilterScreen_
  EW_DECLARE_CLASS( ViewsFilterScreen )
#define _ViewsFilterScreen_
#endif


/* The class Views::FilterScreen provides a kind of view specialized to perform 
   visual filter operations on the screen contents lying behind this view's area. 
   For this purpose the view renders this area to an off-screen image and uses this 
   image as source for the filter operations. This view implements following three 
   filters, which can be used individually or combined together to achieve more 
   sophisticated effects:

   - Mask: The property @MaskBitmap allows an optional ALPHA8 bitmap to be used 
   as mask for filter operation. During the filter operation is performed, the pixel 
   found in the mask bitmap are used to modulate the opacity of the pixel involved 
   in or resulting from other filter operation. The mask can thus be used to clip 
   the original image contents by any non-rectangular shape. The position of the 
   mask bitmap within the filter view is controlled by the property @MaskOrigin. 
   The mask effect can additionally be inverted by using the property @MaskInverted. 
   Please note, the filter effect does not support multi-frame bitmaps. The mask 
   bitmap has to contain exact one frame. Trying to use a multi-frame bitmaps will 
   cause the Graphics Engine to report a runtime error.
   - Blur: It is controlled by the properties @BlurRadius and @BlurClampToEdges. 
   If 'Blur' is used together with the 'Mask' filter, the order in which blur and 
   mask operations are performed is significant. Per default the mask affects the 
   pixel 'after' the preceding blur filter operation is done. This order can be 
   changed by using the property @MaskBeforeBlur.
   - Tint: This filter modifies the original color values. This includes effects 
   like grayscale color conversion and color modulation by opacity or luminance. 
   To control this filter use the properties @TintMode, @TintIntensity and @TintColor.

   Please note, the view performs the filter operations on the screen area lying 
   behind the view but still enclosed within the exposed area of the view. The exposed 
   area can be smaller than the area of the view if the view has been moved beyond 
   the borders of its owner component. In particular cases it can be reasonable 
   to perform the filter operation of a smaller area. If this desired, the properties 
   @Margin, @MarginLeft, @MarginTop, @MarginRight and @MarginBottom can be used 
   to configure a gap at the edges of the view. 
   The opacity of the final pixel can additionally be modulated by the property 
   @Opacity. In this way, the entire effect of the filter can be faded-in/out.
   The position and the size of the view are determined by the property @Bounds. 
   The visibility of the view is controlled by the properties @Visible, @AlphaBlended 
   and @Embedded. In particular the property @Embedded can determine whether the 
   corresponding view is limited (== embedded) to the boundary of a sibling Core::Outline 
   view or not. The embedding of views within a Core::Outline allows a kind of sub-groups 
   within the GUI component itself. Very useful for any kind of scrollable lists, 
   menus, etc. */
EW_DEFINE_FIELDS( ViewsFilterScreen, CoreRectView )
  EW_PROPERTY( TintColor,       XColor )
  EW_PROPERTY( TintMode,        XEnum )
  EW_VARIABLE( drawing,         XBool )
  EW_PROPERTY( BlurClampToEdges, XBool )
EW_END_OF_FIELDS( ViewsFilterScreen )

/* Virtual Method Table (VMT) for the class : 'Views::FilterScreen' */
EW_DEFINE_METHODS( ViewsFilterScreen, CoreRectView )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( ViewsFilterScreen _this, GraphicsCanvas 
    aCanvas, XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( GetClipping,       XRect )( CoreView _this )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreView _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, CoreView aStartView, 
    XSet aRetargetReason )
  EW_METHOD( AdjustDrawingArea, XRect )( ViewsFilterScreen _this, XRect aArea )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreView _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreRectView _this, XRect value )
EW_END_OF_METHODS( ViewsFilterScreen )

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you will never need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ViewsFilterScreen_Draw( ViewsFilterScreen _this, GraphicsCanvas aCanvas, XRect 
  aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend );

/* The method AdjustDrawingArea() is invoked before the update (drawing) of a screen 
   area has begun. The view can thereupon evaluate the affected area and eventually 
   enlarge it. AdjustDrawingArea() is invoked automatically by the framework, you 
   will never need to invoke this method directly.
   Enlarging the update area is necessary if parts of the view surrounding this 
   area are affected by the content within this area. For example, the contents 
   are blurred. As consequence the surrounding area has to be taken in account during 
   the screen update too.
   The original area is passed in the parameter aArea and it is expressed in coordinates 
   relative to the top-left corner of the view's @Owner. If necessary, the view 
   can enlarge this area and return it in this method. If the view doesn't want 
   to enlarge the area (what is the most usual case), it returns aArea unchanged. */
XRect ViewsFilterScreen_AdjustDrawingArea( ViewsFilterScreen _this, XRect aArea );

/* 'C' function for method : 'Views::FilterScreen.OnSetTintColor()' */
void ViewsFilterScreen_OnSetTintColor( ViewsFilterScreen _this, XColor value );

/* 'C' function for method : 'Views::FilterScreen.OnSetTintMode()' */
void ViewsFilterScreen_OnSetTintMode( ViewsFilterScreen _this, XEnum value );

/* 'C' function for method : 'Views::FilterScreen.OnSetBlurClampToEdges()' */
void ViewsFilterScreen_OnSetBlurClampToEdges( ViewsFilterScreen _this, XBool value );

/* 'C' function for method : 'Views::FilterScreen.OnSetVisible()' */
void ViewsFilterScreen_OnSetVisible( ViewsFilterScreen _this, XBool value );

/* The method AdjustBlurRadius() returns the real blur radius based on the radius 
   provided in the parameter aBlurRadius. In practice, the Graphics Engine may support 
   only few discrete intensity values for the blur filter. The method helps to find 
   out which blur radius will be used effectively according to the desired blur 
   radius value. */
XInt32 ViewsFilterScreen_AdjustBlurRadius( ViewsFilterScreen _this, XInt32 aBlurRadius );

#ifdef __cplusplus
  }
#endif

#endif /* _ViewsFilterScreen_H */

/* Embedded Wizard */
