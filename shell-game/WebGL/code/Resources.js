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
);if(EmWiApp.aci)throw new Error("The unit file 'Resources.js' included twice!");
EmWiApp.aci=(function(){var B=EmWiApp;var E={};
var AY=[0,0];var AE="The property \'FrameSize\' is READ ONLY.";
E.An={bitmap:null,FrameDelay:0,NoOfFrames:1,FrameSize:B.wf,Kk:false,Fm:false,EG:function(
){if(!this.bitmap)return;var handle=this.bitmap;B._FreeBitmap(handle);this.bitmap=
null;this.FrameSize=AY;this.FrameDelay=0;this.NoOfFrames=1;this.Fm=false;},Bm:function(
aArg){if(!aArg)return;var handle=null;var noOfFrames=1;var frameSize=AY;var frameDelay=
0;{var bmp=B.aa3(aArg,this);if(bmp){noOfFrames=bmp.NoOfFrames;frameSize=bmp.FrameSize;
frameDelay=bmp.FrameDelay;}handle=bmp;}this.bitmap=handle;this.NoOfFrames=noOfFrames;
this.FrameSize=frameSize;this.FrameDelay=frameDelay;this.Kk=true;this.Fm=(!!this.
bitmap&&(this.FrameDelay>0))&&(this.NoOfFrames>1);},NL:function(C){throw new Error(
AE);},Update:function(){},_Init:function(aArg){B.Core.HY._Init.call(this,aArg);this.
__proto__=E.An;this.Bm(aArg);},_Done:function(){this.EG();this.__proto__=B.Core.
HY;B.Core.HY._Done.call(this);},_className:"Resources::Bitmap"};E.Cg={font:null,
Leading:0,Descent:0,Ascent:0,EG:function(){this.Zy();},Bm:function(aArg){this.ZE(
aArg);},Zy:function(){if(!this.font)return;var handle=this.font;B.aal(handle);this.
font=null;this.Ascent=0;this.Descent=0;this.Leading=0;},ZE:function(aFontResource
){if(!aFontResource)return;var handle=null;var ascent=0;var descent=0;var leading=
0;{var font=B.aa5(aFontResource);if(font){ascent=font.Ascent;descent=font.Descent;
leading=font.Leading;}handle=font;}this.font=handle;this.Ascent=ascent;this.Descent=
descent;this.Leading=leading;},Sv:function(aFlowString){if(!this.font)return 0;var
handle=this.font;var advance=0;advance=B.aav(handle,aFlowString);return advance;
},W3:function(aString,aOffset,aWidth,aMaxNoOfRows,aBidi){if(aOffset<0)aOffset=0;
if(!this.font||((aOffset>0)&&(aOffset>=aString.length)))return B.jV;var handle=this.
font;var result=B.jV;result=B.abv(handle,aString,aOffset,aWidth,aMaxNoOfRows,aBidi
);return result;},Lk:function(aString,aOffset,aCount){if(aOffset<0)aOffset=0;if(
!this.font||((aOffset>0)&&(aOffset>=aString.length)))return 0;var handle=this.font;
var advance=0;advance=B.m9(handle,aString,aOffset,aCount);return advance;},_Init:
function(aArg){B.Core.HY._Init.call(this,aArg);this.__proto__=E.Cg;this.Bm(aArg);
},_Done:function(){this.EG();this.__proto__=B.Core.HY;B.Core.HY._Done.call(this);
},_className:"Resources::Font"};E.Li={_class:function(){return E.Cg;},0:{Data:function(
){return B.aco;},Cache:[],_this:null}};E.Lv={_class:function(){return E.An;},0:{
FileName:"./res/ResourcesNavigationIconsSmall.png",Format:B._PIXEL_FORMAT_ALPHA8
,NoOfFrames:20,FrameSize:[24,24],FrameDelay:0,_this:null}};E.NB={_class:function(
){return E.An;},0:{FileName:"./res/ResourcesNavigationIconsMedium.png",Format:B.
_PIXEL_FORMAT_ALPHA8,NoOfFrames:20,FrameSize:[36,36],FrameDelay:0,_this:null}};E.
NR={_class:function(){return E.An;},0:{FileName:"./res/ResourcesPlayerIconsSmall.png"
,Format:B._PIXEL_FORMAT_ALPHA8,NoOfFrames:20,FrameSize:[24,24],FrameDelay:0,_this:
null}};
E._Init=function(){E.An.__proto__=B.Core.HY;E.Cg.__proto__=B.Core.HY;};E._ReInit=
function(){};E.EQ=function(D){var A;if((A=E.Li[0]._this)&&(A._cycle!=D))A._Done(
E.Li[0]._this=null);if((A=E.Lv[0]._this)&&(A._cycle!=D))A._Done(E.Lv[0]._this=null
);if((A=E.NB[0]._this)&&(A._cycle!=D))A._Done(E.NB[0]._this=null);if((A=E.NR[0].
_this)&&(A._cycle!=D))A._Done(E.NR[0]._this=null);};return E;})();

/* Embedded Wizard */