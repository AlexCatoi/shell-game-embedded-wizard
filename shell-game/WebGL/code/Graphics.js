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
* Profile  : WebGL
* Platform : Web.WebGL.RGBA8888
*
*******************************************************************************/

var EmWiApp;if(!EmWiApp)throw new Error("The application file '_project.js' isn't yet loaded!"
);if(EmWiApp.Graphics)throw new Error("The unit file 'Graphics.js' included twice!"
);EmWiApp.Graphics=(function(){var B=EmWiApp;var C={};
var A0=[0,0];var AG="Can not resize explicitly attached graphics engine bitmaps";
var Bu=[0,0,0,0];var BD="No graphics engine bitmap attached to this canvas";var Eo=
"The canvas is already initialized with a graphics engine bitmap";var Hd="ScaleBitmap() operation has been omitted due to the resulting area "+
"being wider or higher than 4069 pixel.";
C.Canvas={AM:null,LB:B.wg,Eg:0,PS:false,MI:false,Fp:function(){if(this.MI)this.DetachBitmap(
);},BC:function(aArg){this.Kk=true;},N$:function(value){if((value[0]<=0)||(value[
1]<=0))value=A0;if(B.aaX(value,this.FrameSize))return;if(this.MI)throw new Error(
AG);this.FrameSize=value;this.Fl=(((this.FrameSize[0]>0)&&(this.FrameSize[1]>0))&&(
this.FrameDelay>0))&&(this.NoOfFrames>1);if(!this.bitmap)return;var handle=this.
bitmap;B._FreeBitmap(handle);this.bitmap=null;},Update:function(){var A;if((!this.
bitmap&&(this.FrameSize[0]>0))&&(this.FrameSize[1]>0)){var frameSize=this.FrameSize;
var noOfFrames=this.NoOfFrames;var frameDelay=this.FrameDelay;var handle=null;{handle=
B._CreateBitmap(B._PIXEL_FORMAT_NATIVE,frameSize,frameDelay,noOfFrames);}this.bitmap=
handle;if(!this.bitmap){this.FrameSize=A0;this.FrameDelay=0;this.NoOfFrames=1;}this.
LB=[].concat(A0,this.FrameSize);if(!!this.bitmap){var dstFrameNr=this.Eg;for(this.
Eg=this.NoOfFrames-1;this.Eg>=0;this.Eg--)this.NM(this.LB,this.LB,0x00000000,0x00000000
,0x00000000,0x00000000,false);this.Eg=dstFrameNr;}}if(!(((A=this.LB)[0]>=A[2])||(
A[1]>=A[3])))this.LB=Bu;},DetachBitmap:function(){if(!this.MI)throw new Error(BD
);this.bitmap=null;this.MI=false;this.FrameSize=A0;this.FrameDelay=0;this.NoOfFrames=
1;this.Fl=false;return this;},AttachBitmap:function(aBitmap){if(!!this.bitmap)throw new
Error(Eo);if(!aBitmap)return this;this.bitmap=aBitmap;this.MI=true;var noOfFrames=
1;var frameSize=A0;var frameDelay=0;{noOfFrames=aBitmap.NoOfFrames;frameSize=aBitmap.
FrameSize;frameDelay=aBitmap.FrameDelay;}this.NoOfFrames=noOfFrames;this.FrameSize=
frameSize;this.FrameDelay=frameDelay;this.Fl=(this.FrameDelay>0)&&(this.NoOfFrames>
1);return this;},V2:function(aClip,aDstRect,aRadiusTL,aRadiusTR,aRadiusBR,aRadiusBL
,aBlurRadius,aColor,aBlend){if(!this.bitmap)this.Update();if(!this.bitmap)return;
var dstBitmap=this.bitmap;var dstFrameNo=this.Eg;{B.aae(dstBitmap,dstFrameNo,aClip
,aDstRect,aRadiusTL,aRadiusTR,aRadiusBR,aRadiusBL,aBlurRadius,aColor,aBlend);}},
V1:function(aClip,aDstRect,aEdgeWidth,aRadiusTL,aRadiusTR,aRadiusBR,aRadiusBL,aColorTL
,aColorTR,aColorBR,aColorBL,aBlend){if(!this.bitmap)this.Update();if(!this.bitmap
)return;var dstBitmap=this.bitmap;var dstFrameNo=this.Eg;{B.aad(dstBitmap,dstFrameNo
,aClip,aDstRect,aEdgeWidth,aRadiusTL,aRadiusTR,aRadiusBR,aRadiusBL,aColorTL,aColorTR
,aColorBR,aColorBL,aBlend);}},V3:function(aClip,aDstRect,aRadiusTL,aRadiusTR,aRadiusBR
,aRadiusBL,aColorTL,aColorTR,aColorBR,aColorBL,aBlend){if(!this.bitmap)this.Update(
);if(!this.bitmap)return;var dstBitmap=this.bitmap;var dstFrameNo=this.Eg;{B.rA(
dstBitmap,dstFrameNo,aClip,aDstRect,aRadiusTL,aRadiusTR,aRadiusBR,aRadiusBL,aColorTL
,aColorTR,aColorBR,aColorBL,aBlend);}},SY:function(aClip,R4,aString,aOffset,aCount
,aDstRect,aSrcPos,aMinWidth,R7,aColorTL,aColorTR,aColorBR,aColorBL,aBlend){if(!this.
bitmap)this.Update();if(!this.bitmap)return;if(aOffset<0)aOffset=0;if((!R4||!R4.
font)||((aOffset>0)&&(aOffset>=aString.length)))return;var orient=0;if(R7===1)orient=
90;else if(R7===2)orient=180;else if(R7===3)orient=270;var dstFrameNo=this.Eg;var
dstBitmap=this.bitmap;var srcFont=R4.font;{B.rz(dstBitmap,srcFont,aString,aOffset
,aCount,dstFrameNo,aClip,aDstRect,aSrcPos,aMinWidth,orient,aColorTL,aColorTR,aColorBR
,aColorBL,aBlend);}},VY:function(aClip,aBitmap,aFrameNr,aDstRect,KQ,aColorTL,aColorTR
,aColorBR,aColorBL,aBlend){var A;if(!this.bitmap)this.Update();if(!this.bitmap)return;
if((((!aBitmap||!aBitmap.bitmap)||!KQ)||(aFrameNr<0))||(aFrameNr>=aBitmap.NoOfFrames
))return;var dstBitmap=this.bitmap;var srcBitmap=aBitmap.bitmap;var dstFrameNo=this.
Eg;var srcRect=[].concat(A0,aBitmap.FrameSize);var left=((KQ&0x1)===0x1);var top=((
KQ&0x2)===0x2);var right=((KQ&0x4)===0x4);var bottom=((KQ&0x8)===0x8);var interior=((
KQ&0x10)===0x10);{B.aab(dstBitmap,srcBitmap,dstFrameNo,aFrameNr,aClip,aDstRect,srcRect
,left,top,right,bottom,interior,aColorTL,aColorTR,aColorBR,aColorBL,aBlend);}},V4:
function(aClip,aBitmap,UV,aDstRect,aSrcPos,aMaskPos,aMaskInverted,aMaskBeforeBlur
,aBlurRadius,aBlurClampToEdges,Aap,aIntensity,aColor,aOpacity,aBlend){var mode;if(
!this.bitmap)this.Update();if(!this.bitmap)return;if(!aBitmap||!aBitmap.bitmap)return;
switch(Aap){case 1:mode=1;break;case 2:mode=2;break;case 3:mode=3;break;default:
mode=0;}var dstBitmap=this.bitmap;var srcBitmap=aBitmap.bitmap;var mskBitmap=(!!
UV?UV.bitmap:null);var dstFrameNr=this.Eg;{B.aag(dstBitmap,srcBitmap,mskBitmap,dstFrameNr
,aClip,aDstRect,aSrcPos,aMaskPos,aMaskInverted,aMaskBeforeBlur,aBlurRadius,aBlurClampToEdges
,mode,aIntensity,aColor,aOpacity,aBlend);}},Yd:function(aClip,aBitmap,aFrameNr,aDstRect
,aSrcRect,aColorTL,aColorTR,aColorBR,aColorBL,aBlend,aFilter){if(!this.bitmap)this.
Update();if(!this.bitmap)return;if(((!aBitmap||!aBitmap.bitmap)||(aFrameNr<0))||(
aFrameNr>=aBitmap.NoOfFrames))return;var top=aDstRect[1];var left=aDstRect[0];var
right=aDstRect[2];var bottom=aDstRect[3];if(((((right-left)>4096)||((right-left)<-
4096))||((bottom-top)>4096))||((bottom-top)<-4096)){B.ab5("%s",Hd);return;}var dstBitmap=
this.bitmap;var srcBitmap=aBitmap.bitmap;var dstFrameNo=this.Eg;{B.ab6(dstBitmap
,srcBitmap,dstFrameNo,aFrameNr,aClip,left,top,1,right,top,1,right,bottom,1,left,
bottom,1,aSrcRect,aColorTL,aColorTR,aColorBR,aColorBL,aBlend,aFilter);}},VW:function(
aClip,aBitmap,aFrameNr,aDstRect,aSrcPos,aColorTL,aColorTR,aColorBR,aColorBL,aBlend
){if(!this.bitmap)this.Update();if(!this.bitmap)return;if(((!aBitmap||!aBitmap.bitmap
)||(aFrameNr<0))||(aFrameNr>=aBitmap.NoOfFrames))return;var dstBitmap=this.bitmap;
var srcBitmap=aBitmap.bitmap;var dstFrameNr=this.Eg;{B.db(dstBitmap,srcBitmap,dstFrameNr
,aFrameNr,aClip,aDstRect,aSrcPos,aColorTL,aColorTR,aColorBR,aColorBL,aBlend);}},
VZ:function(aClip,aDstRect,aEdgeWidth,aColorTL,aColorTR,aColorBR,aColorBL,aBlend
){if(!this.bitmap)this.Update();if(!this.bitmap)return;var dstBitmap=this.bitmap;
var dstFrameNo=this.Eg;{B.m6(dstBitmap,dstFrameNo,aClip,aDstRect,aEdgeWidth,aColorTL
,aColorTR,aColorBR,aColorBL,aBlend);}},NM:function(aClip,aDstRect,aColorTL,aColorTR
,aColorBR,aColorBL,aBlend){if(!this.bitmap)this.Update();if(!this.bitmap)return;
var dstBitmap=this.bitmap;var dstFrameNo=this.Eg;{B.fR(dstBitmap,dstFrameNo,aClip
,aDstRect,aColorTL,aColorTR,aColorBR,aColorBL,aBlend);}},NK:function(aClip,aDstPos1
,aDstPos2,aColor1,aColor2,aBlend){if(!this.bitmap)this.Update();if(!this.bitmap)
return;var dstBitmap=this.bitmap;var dstFrameNo=this.Eg;{B.aac(dstBitmap,dstFrameNo
,aClip,aDstPos1,aDstPos2,aColor1,aColor2,aBlend);}},_Init:function(aArg){B.aci.Am.
_Init.call(this,aArg);this.__proto__=C.Canvas;this.BC(aArg);},_Done:function(){this.
Fp();this.__proto__=B.aci.Am;B.aci.Am._Done.call(this);},_Mark:function(D){var A;
B.aci.Am._Mark.call(this,D);if((A=this.AM)&&(A._cycle!=D))A._Mark(A._cycle=D);},
_className:"Graphics::Canvas"};C.Li={Left:0x1,Yj:0x2,Right:0x4,VP:0x8,Aci:0x10};
C.Hb={Ta:0,Acf:1,AcU:2,AcT:3};
C._Init=function(){C.Canvas.__proto__=B.aci.Am;};C._ReInit=function(){};C.EN=function(
D){};return C;})();

/* Embedded Wizard */