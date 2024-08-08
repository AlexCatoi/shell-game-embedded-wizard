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
EmWiApp.aci=(function(){var B=EmWiApp;var C={};
var A0=[0,0];var AG="The property \'FrameSize\' is READ ONLY.";
C.Am={bitmap:null,FrameDelay:0,NoOfFrames:1,FrameSize:B.wf,Kk:false,Fl:false,Fp:function(
){if(!this.bitmap)return;var handle=this.bitmap;B._FreeBitmap(handle);this.bitmap=
null;this.FrameSize=A0;this.FrameDelay=0;this.NoOfFrames=1;this.Fl=false;},BC:function(
aArg){if(!aArg)return;var handle=null;var noOfFrames=1;var frameSize=A0;var frameDelay=
0;{var bmp=B.aa3(aArg,this);if(bmp){noOfFrames=bmp.NoOfFrames;frameSize=bmp.FrameSize;
frameDelay=bmp.FrameDelay;}handle=bmp;}this.bitmap=handle;this.NoOfFrames=noOfFrames;
this.FrameSize=frameSize;this.FrameDelay=frameDelay;this.Kk=true;this.Fl=(!!this.
bitmap&&(this.FrameDelay>0))&&(this.NoOfFrames>1);},N$:function(value){throw new
Error(AG);},Update:function(){},_Init:function(aArg){B.Core.HY._Init.call(this,aArg
);this.__proto__=C.Am;this.BC(aArg);},_Done:function(){this.Fp();this.__proto__=
B.Core.HY;B.Core.HY._Done.call(this);},_className:"Resources::Bitmap"};C.Ch={font:
null,Leading:0,Descent:0,Ascent:0,Fp:function(){this.AaH();},BC:function(aArg){this.
AaO(aArg);},AaH:function(){if(!this.font)return;var handle=this.font;B.aal(handle
);this.font=null;this.Ascent=0;this.Descent=0;this.Leading=0;},AaO:function(aFontResource
){if(!aFontResource)return;var handle=null;var ascent=0;var descent=0;var leading=
0;{var font=B.aa5(aFontResource);if(font){ascent=font.Ascent;descent=font.Descent;
leading=font.Leading;}handle=font;}this.font=handle;this.Ascent=ascent;this.Descent=
descent;this.Leading=leading;},SZ:function(aFlowString){if(!this.font)return 0;var
handle=this.font;var advance=0;advance=B.aav(handle,aFlowString);return advance;
},X9:function(aString,aOffset,aWidth,aMaxNoOfRows,aBidi){if(aOffset<0)aOffset=0;
if(!this.font||((aOffset>0)&&(aOffset>=aString.length)))return B.jV;var handle=this.
font;var result=B.jV;result=B.abv(handle,aString,aOffset,aWidth,aMaxNoOfRows,aBidi
);return result;},Lw:function(aString,aOffset,aCount){if(aOffset<0)aOffset=0;if(
!this.font||((aOffset>0)&&(aOffset>=aString.length)))return 0;var handle=this.font;
var advance=0;advance=B.m9(handle,aString,aOffset,aCount);return advance;},_Init:
function(aArg){B.Core.HY._Init.call(this,aArg);this.__proto__=C.Ch;this.BC(aArg);
},_Done:function(){this.Fp();this.__proto__=B.Core.HY;B.Core.HY._Done.call(this);
},_className:"Resources::Font"};C.Lt={_class:function(){return C.Ch;},0:{Data:function(
){return B.aco;},Cache:[],_this:null}};C.LK={_class:function(){return C.Am;},0:{
FileName:"./res/ResourcesNavigationIconsSmall.png",Format:B._PIXEL_FORMAT_ALPHA8
,NoOfFrames:20,FrameSize:[24,24],FrameDelay:0,_this:null}};C.N0={_class:function(
){return C.Am;},0:{FileName:"./res/ResourcesNavigationIconsMedium.png",Format:B.
_PIXEL_FORMAT_ALPHA8,NoOfFrames:20,FrameSize:[36,36],FrameDelay:0,_this:null}};C.
Og={_class:function(){return C.Am;},0:{FileName:"./res/ResourcesPlayerIconsSmall.png"
,Format:B._PIXEL_FORMAT_ALPHA8,NoOfFrames:20,FrameSize:[24,24],FrameDelay:0,_this:
null}};
C._Init=function(){C.Am.__proto__=B.Core.HY;C.Ch.__proto__=B.Core.HY;};C._ReInit=
function(){};C.EN=function(D){var A;if((A=C.Lt[0]._this)&&(A._cycle!=D))A._Done(
C.Lt[0]._this=null);if((A=C.LK[0]._this)&&(A._cycle!=D))A._Done(C.LK[0]._this=null
);if((A=C.N0[0]._this)&&(A._cycle!=D))A._Done(C.N0[0]._this=null);if((A=C.Og[0].
_this)&&(A._cycle!=D))A._Done(C.Og[0]._this=null);};return C;})();

/* Embedded Wizard */