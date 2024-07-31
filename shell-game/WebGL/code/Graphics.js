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
);EmWiApp.Graphics=(function(){var B=EmWiApp;var E={};
var AY=[0,0];var AE="Can not resize explicitly attached graphics engine bitmaps";
var Bv=[0,0,0,0];var BD="No graphics engine bitmap attached to this canvas";var Eq=
"The canvas is already initialized with a graphics engine bitmap";var He="ScaleBitmap() operation has been omitted due to the resulting area "+
"being wider or higher than 4069 pixel.";
E.Canvas={AK:null,Lm:B.wg,Ek:0,Po:false,Ml:false,EG:function(){if(this.Ml)this.DetachBitmap(
);},Bm:function(aArg){this.Kk=true;},NL:function(C){if((C[0]<=0)||(C[1]<=0))C=AY;
if(B.aaX(C,this.FrameSize))return;if(this.Ml)throw new Error(AE);this.FrameSize=
C;this.Fm=(((this.FrameSize[0]>0)&&(this.FrameSize[1]>0))&&(this.FrameDelay>0))&&(
this.NoOfFrames>1);if(!this.bitmap)return;var handle=this.bitmap;B._FreeBitmap(handle
);this.bitmap=null;},Update:function(){var A;if((!this.bitmap&&(this.FrameSize[0
]>0))&&(this.FrameSize[1]>0)){var frameSize=this.FrameSize;var noOfFrames=this.NoOfFrames;
var frameDelay=this.FrameDelay;var handle=null;{handle=B._CreateBitmap(B._PIXEL_FORMAT_NATIVE
,frameSize,frameDelay,noOfFrames);}this.bitmap=handle;if(!this.bitmap){this.FrameSize=
AY;this.FrameDelay=0;this.NoOfFrames=1;}this.Lm=[].concat(AY,this.FrameSize);if(
!!this.bitmap){var dstFrameNr=this.Ek;for(this.Ek=this.NoOfFrames-1;this.Ek>=0;this.
Ek--)this.No(this.Lm,this.Lm,0x00000000,0x00000000,0x00000000,0x00000000,false);
this.Ek=dstFrameNr;}}if(!(((A=this.Lm)[0]>=A[2])||(A[1]>=A[3])))this.Lm=Bv;},DetachBitmap:
function(){if(!this.Ml)throw new Error(BD);this.bitmap=null;this.Ml=false;this.FrameSize=
AY;this.FrameDelay=0;this.NoOfFrames=1;this.Fm=false;return this;},AttachBitmap:
function(aBitmap){if(!!this.bitmap)throw new Error(Eq);if(!aBitmap)return this;this.
bitmap=aBitmap;this.Ml=true;var noOfFrames=1;var frameSize=AY;var frameDelay=0;{
noOfFrames=aBitmap.NoOfFrames;frameSize=aBitmap.FrameSize;frameDelay=aBitmap.FrameDelay;
}this.NoOfFrames=noOfFrames;this.FrameSize=frameSize;this.FrameDelay=frameDelay;
this.Fm=(this.FrameDelay>0)&&(this.NoOfFrames>1);return this;},UT:function(aClip
,aDstRect,aRadiusTL,aRadiusTR,aRadiusBR,aRadiusBL,aBlurRadius,aColor,aBlend){if(
!this.bitmap)this.Update();if(!this.bitmap)return;var dstBitmap=this.bitmap;var dstFrameNo=
this.Ek;{B.aae(dstBitmap,dstFrameNo,aClip,aDstRect,aRadiusTL,aRadiusTR,aRadiusBR
,aRadiusBL,aBlurRadius,aColor,aBlend);}},US:function(aClip,aDstRect,aEdgeWidth,aRadiusTL
,aRadiusTR,aRadiusBR,aRadiusBL,aColorTL,aColorTR,aColorBR,aColorBL,aBlend){if(!this.
bitmap)this.Update();if(!this.bitmap)return;var dstBitmap=this.bitmap;var dstFrameNo=
this.Ek;{B.aad(dstBitmap,dstFrameNo,aClip,aDstRect,aEdgeWidth,aRadiusTL,aRadiusTR
,aRadiusBR,aRadiusBL,aColorTL,aColorTR,aColorBR,aColorBL,aBlend);}},UU:function(
aClip,aDstRect,aRadiusTL,aRadiusTR,aRadiusBR,aRadiusBL,aColorTL,aColorTR,aColorBR
,aColorBL,aBlend){if(!this.bitmap)this.Update();if(!this.bitmap)return;var dstBitmap=
this.bitmap;var dstFrameNo=this.Ek;{B.rA(dstBitmap,dstFrameNo,aClip,aDstRect,aRadiusTL
,aRadiusTR,aRadiusBR,aRadiusBL,aColorTL,aColorTR,aColorBR,aColorBL,aBlend);}},Su:
function(aClip,Ry,aString,aOffset,aCount,aDstRect,aSrcPos,aMinWidth,RB,aColorTL,
aColorTR,aColorBR,aColorBL,aBlend){if(!this.bitmap)this.Update();if(!this.bitmap
)return;if(aOffset<0)aOffset=0;if((!Ry||!Ry.font)||((aOffset>0)&&(aOffset>=aString.
length)))return;var orient=0;if(RB===1)orient=90;else if(RB===2)orient=180;else if(
RB===3)orient=270;var dstFrameNo=this.Ek;var dstBitmap=this.bitmap;var srcFont=Ry.
font;{B.rz(dstBitmap,srcFont,aString,aOffset,aCount,dstFrameNo,aClip,aDstRect,aSrcPos
,aMinWidth,orient,aColorTL,aColorTR,aColorBR,aColorBL,aBlend);}},UP:function(aClip
,aBitmap,aFrameNr,aDstRect,KM,aColorTL,aColorTR,aColorBR,aColorBL,aBlend){var A;
if(!this.bitmap)this.Update();if(!this.bitmap)return;if((((!aBitmap||!aBitmap.bitmap
)||!KM)||(aFrameNr<0))||(aFrameNr>=aBitmap.NoOfFrames))return;var dstBitmap=this.
bitmap;var srcBitmap=aBitmap.bitmap;var dstFrameNo=this.Ek;var srcRect=[].concat(
AY,aBitmap.FrameSize);var left=((KM&0x1)===0x1);var top=((KM&0x2)===0x2);var right=((
KM&0x4)===0x4);var bottom=((KM&0x8)===0x8);var interior=((KM&0x10)===0x10);{B.aab(
dstBitmap,srcBitmap,dstFrameNo,aFrameNr,aClip,aDstRect,srcRect,left,top,right,bottom
,interior,aColorTL,aColorTR,aColorBR,aColorBL,aBlend);}},UV:function(aClip,aBitmap
,TL,aDstRect,aSrcPos,aMaskPos,aMaskInverted,aMaskBeforeBlur,aBlurRadius,aBlurClampToEdges
,Zi,aIntensity,aColor,aOpacity,aBlend){var mode;if(!this.bitmap)this.Update();if(
!this.bitmap)return;if(!aBitmap||!aBitmap.bitmap)return;switch(Zi){case 1:mode=1;
break;case 2:mode=2;break;case 3:mode=3;break;default:mode=0;}var dstBitmap=this.
bitmap;var srcBitmap=aBitmap.bitmap;var mskBitmap=(!!TL?TL.bitmap:null);var dstFrameNr=
this.Ek;{B.aag(dstBitmap,srcBitmap,mskBitmap,dstFrameNr,aClip,aDstRect,aSrcPos,aMaskPos
,aMaskInverted,aMaskBeforeBlur,aBlurRadius,aBlurClampToEdges,mode,aIntensity,aColor
,aOpacity,aBlend);}},W$:function(aClip,aBitmap,aFrameNr,aDstRect,aSrcRect,aColorTL
,aColorTR,aColorBR,aColorBL,aBlend,aFilter){if(!this.bitmap)this.Update();if(!this.
bitmap)return;if(((!aBitmap||!aBitmap.bitmap)||(aFrameNr<0))||(aFrameNr>=aBitmap.
NoOfFrames))return;var top=aDstRect[1];var left=aDstRect[0];var right=aDstRect[2
];var bottom=aDstRect[3];if(((((right-left)>4096)||((right-left)<-4096))||((bottom-
top)>4096))||((bottom-top)<-4096)){B.ab5("%s",He);return;}var dstBitmap=this.bitmap;
var srcBitmap=aBitmap.bitmap;var dstFrameNo=this.Ek;{B.ab6(dstBitmap,srcBitmap,dstFrameNo
,aFrameNr,aClip,left,top,1,right,top,1,right,bottom,1,left,bottom,1,aSrcRect,aColorTL
,aColorTR,aColorBR,aColorBL,aBlend,aFilter);}},UN:function(aClip,aBitmap,aFrameNr
,aDstRect,aSrcPos,aColorTL,aColorTR,aColorBR,aColorBL,aBlend){if(!this.bitmap)this.
Update();if(!this.bitmap)return;if(((!aBitmap||!aBitmap.bitmap)||(aFrameNr<0))||(
aFrameNr>=aBitmap.NoOfFrames))return;var dstBitmap=this.bitmap;var srcBitmap=aBitmap.
bitmap;var dstFrameNr=this.Ek;{B.db(dstBitmap,srcBitmap,dstFrameNr,aFrameNr,aClip
,aDstRect,aSrcPos,aColorTL,aColorTR,aColorBR,aColorBL,aBlend);}},UQ:function(aClip
,aDstRect,aEdgeWidth,aColorTL,aColorTR,aColorBR,aColorBL,aBlend){if(!this.bitmap
)this.Update();if(!this.bitmap)return;var dstBitmap=this.bitmap;var dstFrameNo=this.
Ek;{B.m6(dstBitmap,dstFrameNo,aClip,aDstRect,aEdgeWidth,aColorTL,aColorTR,aColorBR
,aColorBL,aBlend);}},No:function(aClip,aDstRect,aColorTL,aColorTR,aColorBR,aColorBL
,aBlend){if(!this.bitmap)this.Update();if(!this.bitmap)return;var dstBitmap=this.
bitmap;var dstFrameNo=this.Ek;{B.fR(dstBitmap,dstFrameNo,aClip,aDstRect,aColorTL
,aColorTR,aColorBR,aColorBL,aBlend);}},Nm:function(aClip,aDstPos1,aDstPos2,aColor1
,aColor2,aBlend){if(!this.bitmap)this.Update();if(!this.bitmap)return;var dstBitmap=
this.bitmap;var dstFrameNo=this.Ek;{B.aac(dstBitmap,dstFrameNo,aClip,aDstPos1,aDstPos2
,aColor1,aColor2,aBlend);}},_Init:function(aArg){B.aci.An._Init.call(this,aArg);
this.__proto__=E.Canvas;this.Bm(aArg);},_Done:function(){this.EG();this.__proto__=
B.aci.An;B.aci.An._Done.call(this);},_Mark:function(D){var A;B.aci.An._Mark.call(
this,D);if((A=this.AK)&&(A._cycle!=D))A._Mark(A._cycle=D);},_className:"Graphics::Canvas"
};E.K9={Left:0x1,Xf:0x2,Right:0x4,UG:0x8,Aa6:0x10};E.Hd={SI:0,Aa3:1,AbG:2,AbF:3};
E._Init=function(){E.Canvas.__proto__=B.aci.An;};E._ReInit=function(){};E.EQ=function(
D){};return E;})();

/* Embedded Wizard */