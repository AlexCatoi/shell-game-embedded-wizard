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
);if(EmWiApp.Core)throw new Error("The unit file 'Core.js' included twice!");EmWiApp.
Core=(function(){var B=EmWiApp;var C={};
var AZ=[0,0];var AD=[0,0,0,0];var Bu="The view does not belong to this group";var
BD=[800,480];var En="The dialog component is already presented";var Hd="The dialog component is actually not presented";
var JG="No fader to perform the fade-in/out operation";var KO="Trying to use the same fader twice";
var Mq="Trying to fade-in/out a group which belongs to another owner";var C7="No view to restack";
var IO="View is not in this group";var JH="No view to remove";var Rn="No view to add";
var Ro="View already in a group";var Rp="Recursive invalidate during active update cycle.";
var Mr=[-8,-8,9,9];var Rq="The method SwitchToDialog() is not available in Core::VerticalList.";
var Rr="The method DismissDialog() is not available in Core::VerticalList.";var Rs=
"The method PresentDialog() is not available in Core::VerticalList.";var Rt="The method FadeGroup() is not available in Core::VerticalList.";
var Ru="The method RestackTop() is not available in Core::VerticalList.";var Rv=
"The method Restack() is not available in Core::VerticalList.";var Rw="The method Remove() is not available in Core::VerticalList.";
var Rx="The method Add() is not available in Core::VerticalList.";var O9="The Slide Touch Handler:";
var O_="is already connected with a view.";var Ms="The Slide Touch Handler is already connected with a view to scroll "+
"its content.";var Mt=[0,0,170,120];var O$="The method SwitchToDialog() is not available in Core::HorizontalList.";
var Pa="The method DismissDialog() is not available in Core::HorizontalList.";var
Pb="The method PresentDialog() is not available in Core::HorizontalList.";var Pc=
"The method FadeGroup() is not available in Core::HorizontalList.";var Ry="The method RestackTop() is not available in Core::HorizontalList.";
var Rz="The method Restack() is not available in Core::HorizontalList.";var RA="The method Remove() is not available in Core::HorizontalList.";
var RB="The method Add() is not available in Core::HorizontalList.";var Pd=[0,0,
1,1];var RC="The KeyPressHandler is embedded within an object not being derived "+
"from Core::Group.";var RD="Trying to cancel a task not belonging to this queue!";
var RE="Trying to enqueue a task twice!";
C.Bh={T:null,U:null,G:null,Bw:null,E:0x103,Fb:0,CI:0x14,MO:function(Aw,Pj){},Ag:function(
value){if(this.Fb===value)return;this.Fb=value;if(!!this.G){var Im=this.T;var Ao=
0;while(!!Im&&(value>Im.Fb)){Im=Im.T;Ao=Ao+1;}Im=this.U;while(!!Im&&(value<Im.Fb
)){Im=Im.U;Ao=Ao-1;}if(!!Ao)this.G.Q3(this,Ao);}},HO:function(value){var A;var Ao=
value^this.CI;if(!Ao)return;this.CI=value;if(!!this.Bw&&!((this.E&0x400)===0x400
)){this.G.E=this.G.E|0x5000;B.pe([A=this.G,A.DR],this);this.G.Ah([0,0,(A=this.G.
I)[2]-A[0],A[3]-A[1]]);}if(!!this.Bw&&((this.E&0x400)===0x400)){this.Bw.J6.E=this.
Bw.J6.E|0x1000;this.G.E=this.G.E|0x4000;B.pe([A=this.G,A.DR],this);}},Kk:function(
){var AA=this.G;while(!!AA){var Ea=(C.Root.isPrototypeOf(AA)?AA:null);if(!!Ea)return Ea;
AA=AA.G;}return null;},DC:function(A2,aClip,aOffset,aOpacity,aBlend){},GetClipping:
function(){return this.GetExtent();},Cv:function(A0){return null;},HB:function(AQ
,Ad,D1,He,F$,H6){return null;},K_:function(AQ){return AQ;},Nt:function(Aw,Fd){return AZ;
},LC:function(aOffset,Pi){},GetExtent:function(){return AD;},AL:function(Ep,Fc){
var A;if(((this.E&0x200)===0x200))Ep=Ep&~0x400;var Sm=(this.E&~Fc)|Ep;var FE=Sm^
this.E;this.E=Sm;if(!!this.G&&!!(FE&0x14)){var UK=((this.E&0x14)===0x14);if(UK&&
!this.G.C4)this.G.CW(this);if(!UK&&(this.G.C4===this))this.G.CW(this.G.NF(this,0x14
));}if(!!this.G&&!!(FE&0x403))this.G.Ah(this.GetClipping());if(((!!this.Bw&&!!this.
G)&&((Sm&0x400)===0x400))&&((FE&0x1)===0x1)){this.E=this.E|0x800;this.G.E=this.G.
E|0x4000;B.pe([A=this.G,A.DR],this);}if(!!this.G&&((FE&0x400)===0x400)){this.Bw=
null;this.E=this.E|0x800;this.G.E=this.G.E|0x4000;B.pe([A=this.G,A.DR],this);}if(((((
FE&0x100000)===0x100000)&&((Fc&0x100000)===0x100000))&&((this.E&0x10)===0x10))&&
!((this.E&0x200080)===0x200080))this.AL(0x0,0x10);if(((((FE&0x100000)===0x100000
)&&((Ep&0x100000)===0x100000))&&!((this.E&0x10)===0x10))&&(!((this.E&0x200000)===
0x200000)||((!((this.E&0x80)===0x80)&&!!this.G)&&((this.G.E&0x10)===0x10))))this.
AL(0x10,0x0);if(((((FE&0x200000)===0x200000)&&((Fc&0x200000)===0x200000))&&!((this.
E&0x10)===0x10))&&((this.E&0x100000)===0x100000))this.AL(0x10,0x0);if((((((FE&0x200000
)===0x200000)&&((Ep&0x200000)===0x200000))&&((this.E&0x100010)===0x100010))&&!((
this.E&0x80)===0x80))&&((!!this.G&&!((this.G.E&0x10)===0x10))||((((this.E&0x10000
)===0x10000)&&!!this.G)&&(this.G.BF.AK!==this))))this.AL(0x0,0x10);},_Init:function(
aArg){this.__proto__=C.Bh;B.h7++;},_Done:function(){this.__proto__=null;B.h7--;}
,_ReInit:function(){},_Mark:function(D){var A;if((A=this.T)&&(A._cycle!=D))A._Mark(
A._cycle=D);if((A=this.U)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.G)&&(A._cycle
!=D))A._Mark(A._cycle=D);if((A=this.Bw)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=
this.M)&&(A._cycle!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:
"Core::View"};C.L0={CZ:B.wf,DE:B.wf,CY:B.wf,DD:B.wf,MO:function(Aw,Pj){var Az=B.
_NewObject(C.NO,0);this.Bw=null;Az.D6=this.GetExtent();Az.AS=Aw;Az.J6=Pj;Az.M8=this.
DD;Az.M9=this.CY;Az.M_=this.DE;Az.M$=this.CZ;this.Bw=Az;},Nt:function(Aw,Fd){var
A;var BX=this.CI;var Az=(C.NO.isPrototypeOf(A=this.Bw)?A:null);var Ae=Az.D6[0];var
Ak=Az.D6[1];var Ac=Az.D6[2];var Ap=Az.D6[3];var D5=[Aw[2]-Aw[0],Aw[3]-Aw[1]];var
Bj=Ac-Ae;var AF=Ap-Ak;if(!Fd){var FN=[(A=Az.AS)[2]-A[0],A[3]-A[1]];Ae=Ae-Az.AS[0
];Ak=Ak-Az.AS[1];if(FN[0]!==D5[0]){var B9=((BX&0x4)===0x4);var B_=((BX&0x8)===0x8
);var GP=((BX&0x1)===0x1);if(!B9&&(GP||!B_))Ae=((Ae*D5[0])/FN[0])|0;if(!B_&&(GP||
!B9)){Ac=Ac-Az.AS[0];Ac=((Ac*D5[0])/FN[0])|0;Ac=Ac-D5[0];}else Ac=Ac-Az.AS[2];Ae=
Ae+Aw[0];Ac=Ac+Aw[2];if(!GP){if(B9&&!B_)Ac=Ae+Bj;else if(!B9&&B_)Ae=Ac-Bj;else{Ae=
Ae+((((Ac-Ae)-Bj)/2)|0);Ac=Ae+Bj;}}}else{Ac=Ac-Az.AS[2];Ae=Ae+Aw[0];Ac=Ac+Aw[2];
}if(FN[1]!==D5[1]){var B$=((BX&0x10)===0x10);var B8=((BX&0x20)===0x20);var GQ=((
BX&0x2)===0x2);if(!B$&&(GQ||!B8))Ak=((Ak*D5[1])/FN[1])|0;if(!B8&&(GQ||!B$)){Ap=Ap-
Az.AS[1];Ap=((Ap*D5[1])/FN[1])|0;Ap=Ap-D5[1];}else Ap=Ap-Az.AS[3];Ak=Ak+Aw[1];Ap=
Ap+Aw[3];if(!GQ){if(B$&&!B8)Ap=Ak+AF;else if(!B$&&B8)Ak=Ap-AF;else{Ak=Ak+((((Ap-
Ak)-AF)/2)|0);Ap=Ak+AF;}}}else{Ap=Ap-Az.AS[3];Ak=Ak+Aw[1];Ap=Ap+Aw[3];}}else{switch(
Fd){case 3:{Ae=Aw[0];Ac=Ae+Bj;}break;case 4:{Ac=Aw[2];Ae=Ac-Bj;}break;case 1:{Ak=
Aw[1];Ap=Ak+AF;}break;case 2:{Ap=Aw[3];Ak=Ap-AF;}break;default:;}if((Fd===3)||(Fd===
4)){var B$=((BX&0x10)===0x10);var B8=((BX&0x20)===0x20);var GQ=((BX&0x2)===0x2);
if(GQ){Ak=Aw[1];Ap=Aw[3];}else if(B$&&!B8){Ak=Aw[1];Ap=Ak+AF;}else if(B8&&!B$){Ap=
Aw[3];Ak=Ap-AF;}else{Ak=Aw[1]+((((Aw[3]-Aw[1])-AF)/2)|0);Ap=Ak+AF;}}if((Fd===1)||(
Fd===2)){var B9=((BX&0x4)===0x4);var B_=((BX&0x8)===0x8);var GP=((BX&0x1)===0x1);
if(GP){Ae=Aw[0];Ac=Aw[2];}else if(B9&&!B_){Ae=Aw[0];Ac=Ae+Bj;}else if(B_&&!B9){Ac=
Aw[2];Ae=Ac-Bj;}else{Ae=Aw[0]+((((Aw[2]-Aw[0])-Bj)/2)|0);Ac=Ae+Bj;}}}Az.isEmpty=(
Ae>=Ac)||(Ak>=Ap);Bj=(Ac-Ae)-1;AF=(Ap-Ak)-1;var H$=Az.D6[0];var Ia=Az.D6[1];var Hk=(
Az.D6[2]-H$)-1;var Hj=(Az.D6[3]-Ia)-1;if(!Hk)Hk=1;if(!Hj)Hj=1;if(((this.E&0x100)===
0x100)){this.DD=[Ae+((((Az.M8[0]-H$)*Bj)/Hk)|0),Ak+((((Az.M8[1]-Ia)*AF)/Hj)|0)];
this.CY=[Ae+((((Az.M9[0]-H$)*Bj)/Hk)|0),Ak+((((Az.M9[1]-Ia)*AF)/Hj)|0)];this.DE=[
Ae+((((Az.M_[0]-H$)*Bj)/Hk)|0),Ak+((((Az.M_[1]-Ia)*AF)/Hj)|0)];this.CZ=[Ae+((((Az.
M$[0]-H$)*Bj)/Hk)|0),Ak+((((Az.M$[1]-Ia)*AF)/Hj)|0)];}else{this.HP([Ae+((((Az.M8[
0]-H$)*Bj)/Hk)|0),Ak+((((Az.M8[1]-Ia)*AF)/Hj)|0)]);this.HQ([Ae+((((Az.M9[0]-H$)*
Bj)/Hk)|0),Ak+((((Az.M9[1]-Ia)*AF)/Hj)|0)]);this.HR([Ae+((((Az.M_[0]-H$)*Bj)/Hk)|
0),Ak+((((Az.M_[1]-Ia)*AF)/Hj)|0)]);this.HS([Ae+((((Az.M$[0]-H$)*Bj)/Hk)|0),Ak+((((
Az.M$[1]-Ia)*AF)/Hj)|0)]);this.Bw=Az;}return[Bj+1,AF+1];},LC:function(aOffset,Pi
){if(Pi){this.DD=B.abf(this.DD,aOffset);this.CY=B.abf(this.CY,aOffset);this.DE=B.
abf(this.DE,aOffset);this.CZ=B.abf(this.CZ,aOffset);}else{this.HP(B.abf(this.DD,
aOffset));this.HQ(B.abf(this.CY,aOffset));this.HR(B.abf(this.DE,aOffset));this.HS(
B.abf(this.CZ,aOffset));}},GetExtent:function(){if(!!this.Bw&&this.Bw.isEmpty)return AD;
var Ae=this.DD[0];var Ak=this.DD[1];var Ac=this.DE[0];var Ap=this.DE[1];if((((this.
CZ[0]!==Ae)||(this.CY[1]!==Ak))||(this.CY[0]!==Ac))||(this.CZ[1]!==Ap)){if(this.
CY[0]<Ae)Ae=this.CY[0];if(this.DE[0]<Ae)Ae=this.DE[0];if(this.CZ[0]<Ae)Ae=this.CZ[
0];if(this.CY[1]<Ak)Ak=this.CY[1];if(this.DE[1]<Ak)Ak=this.DE[1];if(this.CZ[1]<Ak
)Ak=this.CZ[1];if(this.DD[0]>Ac)Ac=this.DD[0];if(this.CY[0]>Ac)Ac=this.CY[0];if(
this.CZ[0]>Ac)Ac=this.CZ[0];if(this.DD[1]>Ap)Ap=this.DD[1];if(this.CY[1]>Ap)Ap=this.
CY[1];if(this.CZ[1]>Ap)Ap=this.CZ[1];}else{var tmp;if(Ac<Ae){tmp=Ae;Ae=Ac;Ac=tmp;
}if(Ap<Ak){tmp=Ak;Ak=Ap;Ap=tmp;}}return[Ae,Ak,Ac+1,Ap+1];},HS:function(value){var
A;if(B.aaX(value,this.CZ))return;if(!!this.G&&((this.E&0x1)===0x1))this.G.Ah(this.
GetClipping());this.Bw=null;this.CZ=value;if(!!this.G&&((this.E&0x1)===0x1))this.
G.Ah(this.GetClipping());if((!!this.G&&((this.E&0x400)===0x400))&&!((this.G.E&0x2000
)===0x2000)){this.E=this.E|0x800;this.G.E=this.G.E|0x4000;B.pe([A=this.G,A.DR],this
);}},HR:function(value){var A;if(B.aaX(value,this.DE))return;if(!!this.G&&((this.
E&0x1)===0x1))this.G.Ah(this.GetClipping());this.Bw=null;this.DE=value;if(!!this.
G&&((this.E&0x1)===0x1))this.G.Ah(this.GetClipping());if((!!this.G&&((this.E&0x400
)===0x400))&&!((this.G.E&0x2000)===0x2000)){this.E=this.E|0x800;this.G.E=this.G.
E|0x4000;B.pe([A=this.G,A.DR],this);}},HQ:function(value){var A;if(B.aaX(value,this.
CY))return;if(!!this.G&&((this.E&0x1)===0x1))this.G.Ah(this.GetClipping());this.
Bw=null;this.CY=value;if(!!this.G&&((this.E&0x1)===0x1))this.G.Ah(this.GetClipping(
));if((!!this.G&&((this.E&0x400)===0x400))&&!((this.G.E&0x2000)===0x2000)){this.
E=this.E|0x800;this.G.E=this.G.E|0x4000;B.pe([A=this.G,A.DR],this);}},HP:function(
value){var A;if(B.aaX(value,this.DD))return;if(!!this.G&&((this.E&0x1)===0x1))this.
G.Ah(this.GetClipping());this.Bw=null;this.DD=value;if(!!this.G&&((this.E&0x1)===
0x1))this.G.Ah(this.GetClipping());if((!!this.G&&((this.E&0x400)===0x400))&&!((this.
G.E&0x2000)===0x2000)){this.E=this.E|0x800;this.G.E=this.G.E|0x4000;B.pe([A=this.
G,A.DR],this);}},Qo:function(GE){var BW=B.abi(4,B.wf,null);var i=0;var B2=3;var Sa=
false;var Sb=false;BW.Set(0,this.DD);BW.Set(1,this.CY);BW.Set(2,this.DE);BW.Set(
3,this.CZ);while(i<4){var Ve=BW.Get(i)[0];var PN=BW.Get(i)[1];var AaT=BW.Get(B2)[
0];var SD=BW.Get(B2)[1];if(((PN>GE[1])!==(SD>GE[1]))||((PN<GE[1])!==(SD<GE[1]))){
var A3=((((AaT-Ve)*(GE[1]-PN))/(SD-PN))|0)+Ve;if(GE[0]>A3)Sa=!Sa;if(GE[0]<A3)Sb=
!Sb;}B2=i;i=i+1;}return Sa||Sb;},VO:function(){return((((this.DD[0]===this.CZ[0]
)&&(this.CY[0]===this.DE[0]))&&(this.DD[1]===this.CY[1]))&&(this.DE[1]===this.CZ[
1]))||((((this.DD[0]===this.CY[0])&&(this.DE[0]===this.CZ[0]))&&(this.DD[1]===this.
CZ[1]))&&(this.CY[1]===this.DE[1]));},_Init:function(aArg){C.Bh._Init.call(this,
aArg);this.__proto__=C.L0;},_className:"Core::QuadView"};C.By={I:B.wg,MO:function(
Aw,Pj){var Az=B._NewObject(C.NN,0);Az.D6=this.I;Az.AS=Aw;Az.J6=Pj;this.Bw=Az;},Nt:
function(Aw,Fd){var A;var BX=this.CI;var Az=this.Bw;var Ae=Az.D6[0];var Ak=Az.D6[
1];var Ac=Az.D6[2];var Ap=Az.D6[3];var D5=[Aw[2]-Aw[0],Aw[3]-Aw[1]];var Bj=Ac-Ae;
var AF=Ap-Ak;if(!Fd){var FN=[(A=Az.AS)[2]-A[0],A[3]-A[1]];Ae=Ae-Az.AS[0];Ak=Ak-Az.
AS[1];if(FN[0]!==D5[0]){var B9=((BX&0x4)===0x4);var B_=((BX&0x8)===0x8);var GP=((
BX&0x1)===0x1);if(!B9&&(GP||!B_))Ae=((Ae*D5[0])/FN[0])|0;if(!B_&&(GP||!B9)){Ac=Ac-
Az.AS[0];Ac=((Ac*D5[0])/FN[0])|0;Ac=Ac-D5[0];}else Ac=Ac-Az.AS[2];Ae=Ae+Aw[0];Ac=
Ac+Aw[2];if(!GP){if(B9&&!B_)Ac=Ae+Bj;else if(!B9&&B_)Ae=Ac-Bj;else{Ae=Ae+((((Ac-
Ae)-Bj)/2)|0);Ac=Ae+Bj;}}}else{Ac=Ac-Az.AS[2];Ae=Ae+Aw[0];Ac=Ac+Aw[2];}if(FN[1]!==
D5[1]){var B$=((BX&0x10)===0x10);var B8=((BX&0x20)===0x20);var GQ=((BX&0x2)===0x2
);if(!B$&&(GQ||!B8))Ak=((Ak*D5[1])/FN[1])|0;if(!B8&&(GQ||!B$)){Ap=Ap-Az.AS[1];Ap=((
Ap*D5[1])/FN[1])|0;Ap=Ap-D5[1];}else Ap=Ap-Az.AS[3];Ak=Ak+Aw[1];Ap=Ap+Aw[3];if(!
GQ){if(B$&&!B8)Ap=Ak+AF;else if(!B$&&B8)Ak=Ap-AF;else{Ak=Ak+((((Ap-Ak)-AF)/2)|0);
Ap=Ak+AF;}}}else{Ap=Ap-Az.AS[3];Ak=Ak+Aw[1];Ap=Ap+Aw[3];}}else{switch(Fd){case 3:{
Ae=Aw[0];Ac=Ae+Bj;}break;case 4:{Ac=Aw[2];Ae=Ac-Bj;}break;case 1:{Ak=Aw[1];Ap=Ak+
AF;}break;case 2:{Ap=Aw[3];Ak=Ap-AF;}break;default:;}if((Fd===3)||(Fd===4)){var B$=((
BX&0x10)===0x10);var B8=((BX&0x20)===0x20);var GQ=((BX&0x2)===0x2);if(GQ){Ak=Aw[
1];Ap=Aw[3];}else if(B$&&!B8){Ak=Aw[1];Ap=Ak+AF;}else if(B8&&!B$){Ap=Aw[3];Ak=Ap-
AF;}else{Ak=Aw[1]+((((Aw[3]-Aw[1])-AF)/2)|0);Ap=Ak+AF;}}if((Fd===1)||(Fd===2)){var
B9=((BX&0x4)===0x4);var B_=((BX&0x8)===0x8);var GP=((BX&0x1)===0x1);if(GP){Ae=Aw[
0];Ac=Aw[2];}else if(B9&&!B_){Ae=Aw[0];Ac=Ae+Bj;}else if(B_&&!B9){Ac=Aw[2];Ae=Ac-
Bj;}else{Ae=Aw[0]+((((Aw[2]-Aw[0])-Bj)/2)|0);Ac=Ae+Bj;}}}Az.isEmpty=(Ae>=Ac)||(Ak>=
Ap);if(((this.E&0x100)===0x100))this.I=[Ae,Ak,Ac,Ap];else{this.R([Ae,Ak,Ac,Ap]);
this.Bw=Az;}return[Ac-Ae,Ap-Ak];},LC:function(aOffset,Pi){if(Pi)this.I=B.abh(this.
I,aOffset);else this.R(B.abh(this.I,aOffset));},GetExtent:function(){return this.
I;},R:function(value){var A;if(B.aaY(value,this.I))return;if(!!this.G&&((this.E&
0x1)===0x1))this.G.Ah(this.GetClipping());this.Bw=null;this.I=value;if(!!this.G&&((
this.E&0x1)===0x1))this.G.Ah(this.GetClipping());if((!!this.G&&((this.E&0x400)===
0x400))&&!((this.G.E&0x2000)===0x2000)){this.E=this.E|0x800;this.G.E=this.G.E|0x4000;
B.pe([A=this.G,A.DR],this);}},An:function(B3){this.R(B3);},Am:function(){return this.
I;},_Init:function(aArg){C.Bh._Init.call(this,aArg);this.__proto__=C.By;},_className:
"Core::RectView"};C.J={Ay:null,AN:null,Px:null,BF:null,FF:null,J8:null,C4:null,FR:
255,MJ:0,MM:0,ML:0,MK:0,BC:function(aArg){this.BH();},DC:function(A2,aClip,aOffset
,aOpacity,aBlend){var A;aOpacity=((aOpacity+1)*this.FR)>>8;aBlend=aBlend&&((this.
E&0x2)===0x2);this.Aad(A2,aClip,B.abf(aOffset,this.I.slice(0,2)),aOpacity,aBlend
);},GetClipping:function(){var A;var H=this.I;H=[].concat(H[0]-this.MK,H.slice(1
,4));H=B.abP(H,H[1]-this.MM);H=B.abN(H,H[2]+this.ML);H=[].concat(H.slice(0,3),H[
3]+this.MJ);if(((this.E&0x80000)===0x80000)){var Kc=AD;var Q;for(Q=this.Ay;!!Q;Q=
Q.T)if(((Q.E&0x1)===0x1))Kc=B.wC(Kc,Q.GetClipping());H=B.wC(H,B.abh(Kc,this.I.slice(
0,2)));}return H;},HB:function(AQ,Ad,D1,He,F$,H6){var A;var Q=this.AN;var JV=null;
var K=AD;var Ew=null;var Sj=!!this.FF&&(!!this.FF.Et||!!this.FF.Ay);if(((A=B.lb(
AQ,this.I))[0]>=A[2])||(A[1]>=A[3]))return null;AQ=B.abg(AQ,this.I.slice(0,2));if(
!!F$){Q=F$;while(!!Q&&(Q.G!==this))Q=Q.G;}while(!!Q){if(((Q.E&0x400)===0x400)&&!
Ew){Ew=Q.U;while(!!Ew&&!((Ew.E&0x200)===0x200))Ew=Ew.U;if(!!Ew)K=B.lb(AQ,Ew.GetExtent(
));else K=AD;}if(Ew===Q){Ew=null;K=AD;}if((!!He&&!!(C.J.isPrototypeOf(Q)?Q:null)
)||((((((Q.E&0x8)===0x8)&&((Q.E&0x10)===0x10))&&!((Q.E&0x40000)===0x40000))&&!((
Q.E&0x20000)===0x20000))&&(!((Q.E&0x10000)===0x10000)||((this.BF.AK===Q)&&!Sj)))
){var D6=Q.GetExtent();var Pr=He;var JR=null;if(Pr===Q)Pr=null;if(((Q.E&0x400)===
0x400)){if(!(((A=B.lb(D6,K))[0]>=A[2])||(A[1]>=A[3])))JR=Q.HB(K,Ad,D1,Pr,F$,H6);
}else if(!(((A=B.lb(D6,AQ))[0]>=A[2])||(A[1]>=A[3]))||(He===Q))JR=Q.HB(AQ,Ad,D1,
Pr,F$,H6);Q=Q.U;if(!!JR){if(!JV||((JR.Lc<JV.Lc)&&(JR.Lc>=0)))JV=JR;if(!JR.Lc)Q=null;
}}else Q=Q.U;F$=null;}return JV;},K_:function(AQ){var A;var A1;var Q=this.Ay;var
JO=AD;var M7=true;var result=(AQ=A1=B.abg(AQ,this.I.slice(0,2)),A1);while(!!Q){if(((
Q.E&0x200)===0x200)){var KX=(C.HX.isPrototypeOf(Q)?Q:null);JO=B.lb(AQ,KX.I);M7=((
KX.E&0x1)===0x1);}if(((Q.E&0x1)===0x1)){if(((Q.E&0x400)===0x400)){if(M7){var K=B.
lb(Q.GetClipping(),JO);if(!((K[0]>=K[2])||(K[1]>=K[3])))result=B.wC(result,Q.K_(
K));}}else{var K=B.lb(Q.GetClipping(),AQ);if(!((K[0]>=K[2])||(K[1]>=K[3])))result=
B.wC(result,Q.K_(K));}}Q=Q.T;}return B.lb(B.abh(result,this.I.slice(0,2)),this.I
);},AL:function(Ep,Fc){var A;var Py=this.E;if((!!this.G&&((this.E&0x80001)===0x80001
))&&((Fc&0x80000)===0x80000))this.G.Ah(this.GetClipping());C.By.AL.call(this,Ep,
Fc);if(((!!this.G&&((this.E&0x1)===0x1))&&((Ep&0x80000)===0x80000))&&!((Py&0x80000
)===0x80000))this.G.Ah(this.GetClipping());var FE=this.E^Py;if(!!this.C4&&((FE&0x40
)===0x40)){if(((this.E&0x40)===0x40))this.C4.AL(0x40,0x0);else this.C4.AL(0x0,0x40
);}if(!!this.BF&&((FE&0x40)===0x40)){if(((this.E&0x40)===0x40)&&((this.BF.AK.E&0x14
)===0x14))this.BF.AK.AL(0x40,0x0);else this.BF.AK.AL(0x0,0x40);}if(((FE&0x10)===
0x10)){var Q;for(Q=this.Ay;!!Q;Q=Q.T)if((((Q.E&0x300000)===0x300000)&&!((Q.E&0x80
)===0x80))&&(!((Q.E&0x10000)===0x10000)||(this.BF.AK===Q)))Q.AL(Ep&0x10,Fc&0x10);
}if(!!FE){this.E=this.E|0x8000;B.pe([this,this.PL],this);}},R:function(value){var
A;if(B.aaY(value,this.I))return;var I0=[(A=this.I)[2]-A[0],A[3]-A[1]];var Sl=[value[
2]-value[0],value[3]-value[1]];var KZ=!B.aaX(I0,Sl);C.By.R.call(this,value);if((
KZ&&(I0[0]>0))&&(I0[1]>0)){var AS=[].concat(AZ,I0);var Q=this.Ay;while(!!Q){if((
!Q.Bw&&(Q.CI!==0x14))&&!((Q.E&0x400)===0x400))Q.MO(AS,null);Q=Q.T;}}if(KZ){this.
E=this.E|0x5000;B.pe([this,this.PL],this);}},U2:function(A0){var UQ=(C.KeyEvent.
isPrototypeOf(A0)?A0:null);var Gb=this.Px;if(!UQ)return null;while(!!Gb&&(!Gb.Bm||
!Gb.Cv(UQ)))Gb=Gb.T;return Gb;},Aad:function(A2,aClip,aOffset,aOpacity,aBlend){var
A;var Q=this.Ay;var JO=AD;var M7=true;this.VC(A2,aClip,aOffset,aOpacity,aBlend);
while(!!Q&&!A2.PH){if(((Q.E&0x200)===0x200)){var KX=(C.HX.isPrototypeOf(Q)?Q:null
);M7=((KX.E&0x1)===0x1);JO=aClip;if(!((KX.E&0x80000)===0x80000))JO=B.lb(JO,B.abh(
KX.I,aOffset));}if(((Q.E&0x1)===0x1)){if(((Q.E&0x400)===0x400)){if(M7){var K=B.lb(
B.abh(Q.GetClipping(),aOffset),JO);if(!((K[0]>=K[2])||(K[1]>=K[3])))Q.DC(A2,K,aOffset
,aOpacity,aBlend);}}else{var K=B.lb(B.abh(Q.GetClipping(),aOffset),aClip);if(!((
K[0]>=K[2])||(K[1]>=K[3])))Q.DC(A2,K,aOffset,aOpacity,aBlend);}}Q=Q.T;}if(!A2.PH
)this.VF(A2,aClip,aOffset,aOpacity,aBlend);},AaF:function(){var A;var R_=((this.
E&0x1000)===0x1000);var Ib=[0,0,(A=this.I)[2]-A[0],A[3]-A[1]];var Hl=false;var KS=
AD;var R7=AD;var Q=this.AN;var Ew=null;while(!!Q){if(((Q.E&0x800)===0x800)){Hl=true;
Q.E=Q.E&~0x800;}if(Hl&&((Q.E&0x200)===0x200))Hl=false;Q=Q.U;}Hl=false;Q=this.Ay;
if(R_){this.E=this.E&~0x1000;R_=!((Ib[0]>=Ib[2])||(Ib[1]>=Ib[3]));}this.E=this.E|
0x2000;while(!!Q){if(((Q.E&0x400)===0x400)){if(!!Q.Bw&&(Q.Bw.J6!==Ew))Q.Bw=null;
if((!Q.Bw&&Hl)&&(Q.CI!==0x14))Q.MO(R7,Ew);}if(!!Q.Bw){if(R_&&!((Q.E&0x400)===0x400
))Q.Nt(Ib,0);if(Hl&&((Q.E&0x400)===0x400))Q.Nt(R7,0);}if(((Q.E&0x200)===0x200)){
Hl=((Q.E&0x1000)===0x1000);Ew=(C.HX.isPrototypeOf(Q)?Q:null);if(Hl){Q.E=Q.E&~0x1000;
KS=Ew.I;R7=KS;Hl=!((KS[0]>=KS[2])||(KS[1]>=KS[3]));}if(Hl)this.Ah(Ew.I);}Q=Q.T;}
this.E=this.E&~0x2000;this.TI([Ib[2]-Ib[0],Ib[3]-Ib[1]]);},DR:function(Ab){B.pe([
this,this.PL],this);},PL:function(Ab){var A;var AaS=((this.E&0x1000)===0x1000);if(((
this.E&0x4000)===0x4000)){this.E=this.E&~0x4000;this.AaF();}if(((this.E&0x8000)===
0x8000)||AaS){this.E=this.E&~0x8000;this.GB(this.E);}},CW:function(value){var A;
if(!!value&&(value.G!==this))throw new Error(Bu);if(!!value&&!((value.E&0x14)===
0x14))value=null;if(!!value&&((value.E&0x10000)===0x10000))value=null;if(value===
this.C4)return;if(!!this.C4)this.C4.AL(0x0,0x60);this.C4=value;if(!!value){if(((
this.E&0x40)===0x40))value.AL(0x60,0x0);else value.AL(0x20,0x0);}},Aq:function(value
){if(value)this.AL(0x100000,0x0);else this.AL(0x0,0x100000);},Jv:function(value){
var A;if(value>255)value=255;if(value<0)value=0;if(value===this.FR)return;this.FR=
value;if(!!this.G&&((this.E&0x1)===0x1))this.G.Ah(this.GetClipping());},Z0:function(
B3){this.Jv(B3);},HJ:function(){var A;return((this.E&0x1)===0x1);},A8:function(value
){if(value)this.AL(0x1,0x0);else this.AL(0x0,0x1);},ExtendClipping:function(JK,JL
,JM,JJ){var A;var MA=this.I;var Er=MA;if(JK<0)JK=0;if(JK>255)JK=255;if(JL<0)JL=0;
if(JL>255)JL=255;if(JM<0)JM=0;if(JM>255)JM=255;if(JJ<0)JJ=0;if(JJ>255)JJ=255;Er=[
].concat(Er[0]-(Math.max(JK,this.MK)&0xFF),Er.slice(1,4));Er=B.abN(Er,Er[2]+(Math.
max(JL,this.ML)&0xFF));Er=B.abP(Er,Er[1]-(Math.max(JM,this.MM)&0xFF));Er=[].concat(
Er.slice(0,3),Er[3]+(Math.max(JJ,this.MJ)&0xFF));if(JK!==this.MK){if((!!this.G&&((
this.E&0x1)===0x1))&&!((this.E&0x80000)===0x80000)){var H=Er;H=B.abN(H,MA[0]);this.
G.Ah(H);}this.MK=JK&0xFF;}if(JL!==this.ML){if((!!this.G&&((this.E&0x1)===0x1))&&
!((this.E&0x80000)===0x80000)){var H=Er;H=[].concat(MA[2],H.slice(1,4));this.G.Ah(
H);}this.ML=JL&0xFF;}if(JM!==this.MM){if((!!this.G&&((this.E&0x1)===0x1))&&!((this.
E&0x80000)===0x80000)){var H=Er;H=[].concat(H.slice(0,3),MA[1]);this.G.Ah(H);}this.
MM=JM&0xFF;}if(JJ!==this.MJ){if((!!this.G&&((this.E&0x1)===0x1))&&!((this.E&0x80000
)===0x80000)){var H=Er;H=B.abP(H,MA[3]);this.G.Ah(H);}this.MJ=JJ&0xFF;}},VF:function(
A2,aClip,aOffset,aOpacity,aBlend){},VC:function(A2,aClip,aOffset,aOpacity,aBlend
){},GetMaximalSize:function(){return BD;},GetMinimalSize:function(){return AZ;},
Jk:function(){var A;if(!!this.BF)return this.BF.AK.Jk();if(!((this.E&0x10000)===
0x10000))return null;return this;},IK:function(B7,Dv,Fx,EO,EP,H5,DJ,Eo,CT,CR,CS){
var A;if(!this.BF){this.LX(B7,Dv,Fx,EO,EP,null,null,CT,CR,CS);return;}var IZ=this.
BF;var Cr=IZ.T;if(((B7.E&0x10000)===0x10000)&&(this.BF.AK!==B7))throw new Error(
En);var GM=B._NewObject(C.PY,0);var Ev=IZ.Ev;var Ez=null;var C0=null;if(!!Cr){Ez=
Cr.Ez;C0=Cr.C0;}if(!!Cr&&!!IZ.J7)Ez=IZ.J7;if(!!Cr&&!!DJ)C0=DJ;if(!!H5)Ev=H5;if(!
Dv)Dv=B._GetAutoObject(B.acg.KD);if(!Fx)Fx=Dv;if(!EP)EP=EO;if(!EO)EO=EP;GM.Ev=Fx;
GM.C0=EO;GM.Ez=EP;GM.J7=Eo;GM.AK=B7;GM.T=this.BF.T;this.BF.T=null;this.BF=GM;if(
this.C4===B7)this.CW(null);IZ.AK.AL(0x0,0x10040);if(((this.E&0x40)===0x40)&&((B7.
E&0x4)===0x4))B7.AL(0x10040,0x0);else B7.AL(0x10000,0x0);if(!!C0){this.Dp(Cr.AK,
C0.Ki(),null,null,CS);this.Dp(IZ.AK,Ev.Hx(),null,null,true);this.Dp(GM.AK,Dv.Hy(
),CT,CR,true);}else if(!!Ez){this.Dp(Cr.AK,Ez.Kj(),null,null,CS);this.Dp(IZ.AK,Ev.
Hx(),null,null,true);this.Dp(GM.AK,Dv.Hy(),CT,CR,true);}else if(!!Ev){this.Dp(IZ.
AK,Ev.Hx(),null,null,CS);this.Dp(GM.AK,Dv.Hy(),CT,CR,true);}else this.Dp(GM.AK,Dv.
Hy(),CT,CR,CS);},Ji:function(B7,H5,DJ,Eo,CT,CR,CS){var A;if(!this.BF)return;if(!
B7)return;var Cf=this.BF;var Cr=this.BF.T;var J_=null;while((!!Cf&&(Cf.AK!==B7))&&
!!Cf.T){J_=Cf;Cf=Cr;Cr=Cf.T;}if(!Cf||(Cf.AK!==B7))throw new Error(Hd);if(!J_){this.
BF=Cr;Cf.T=null;}else{J_.T=Cr;Cf.T=null;}Cf.AK.AL(0x0,0x10040);if(((((this.E&0x10
)===0x10)&&!!Cr)&&!J_)&&((Cr.AK.E&0x200000)===0x200000))Cr.AK.AL(0x10,0x0);if(((((
this.E&0x40)===0x40)&&!!Cr)&&!J_)&&((Cr.AK.E&0x4)===0x4))Cr.AK.AL(0x40,0x0);var Ev=
Cf.Ev;var Ez=null;var C0=null;if(!!Cr)Ez=Cr.Ez;if(!!Cr&&!!Cf.J7)Ez=Cf.J7;if(!!Cr&&
!!Eo)Ez=Eo;if(!!J_&&!!Cr)C0=Cr.C0;if((!!J_&&!!Cr)&&!!DJ)C0=DJ;if(!!H5)Ev=H5;if(!
!C0){this.Dp(Cr.AK,C0.Ki(),null,null,CS);this.Dp(Cf.AK,Ev.Hx(),CT,CR,true);}else
if(!!Ez){this.Dp(Cr.AK,Ez.Kj(),null,null,CS);this.Dp(Cf.AK,Ev.Hx(),CT,CR,true);}
else this.Dp(Cf.AK,Ev.Hx(),CT,CR,CS);},LX:function(B7,Dv,Fx,EO,EP,DJ,Eo,CT,CR,CS
){var A;if(!B7)return;if(!!this.BF&&(this.BF.AK===B7)){this.IK(B7,Dv,Fx,EO,EP,null
,DJ,Eo,CT,CR,CS);return;}if(((B7.E&0x10000)===0x10000))throw new Error(En);var Cf=
B._NewObject(C.PY,0);if(!!this.BF&&!this.BF.C0){if(!Eo)Eo=DJ;if(!DJ)DJ=Eo;}var C0=
null;if(!!this.BF)C0=this.BF.C0;if(!!this.BF&&!!DJ)C0=DJ;if(!Dv)Dv=B._GetAutoObject(
B.acg.KD);if(!Fx)Fx=Dv;if(!EP)EP=EO;if(!EO)EO=EP;Cf.Ev=Fx;Cf.C0=EO;Cf.Ez=EP;Cf.J7=
Eo;if(this.C4===B7)this.CW(null);if(!!this.BF&&((this.BF.AK.E&0x200000)===0x200000
))this.BF.AK.AL(0x0,0x10);if(!!this.BF)this.BF.AK.AL(0x0,0x40);if(((this.E&0x40)===
0x40)&&((B7.E&0x4)===0x4))B7.AL(0x10040,0x0);else B7.AL(0x10000,0x0);Cf.AK=B7;Cf.
T=this.BF;this.BF=Cf;if(!!C0){this.Dp(this.BF.T.AK,C0.Ki(),null,null,CS);this.Dp(
B7,Dv.Hy(),CT,CR,true);}else this.Dp(B7,Dv.Hy(),CT,CR,CS);},VW:function(GE){var tmp=
this;while(!!tmp){GE=B.abe(GE,tmp.I.slice(0,2));tmp=tmp.G;}return GE;},DispatchEvent:
function(A0){var A;var Q=this.C4;var AA=(C.J.isPrototypeOf(Q)?Q:null);var B1=null;
var Sj=!!this.FF&&(!!this.FF.Et||!!this.FF.Ay);if(!!Q&&((((Q.E&0x10000)===0x10000
)||((Q.E&0x40000)===0x40000))||((Q.E&0x20000)===0x20000))){Q=null;AA=null;}if(!!
this.BF&&!Sj)B1=this.BF.AK.DispatchEvent(A0);if(!B1&&!!AA)B1=AA.DispatchEvent(A0
);else if(!B1&&!!Q)B1=Q.Cv(A0);if(!B1)B1=this.Cv(A0);if(!B1)B1=this.U2(A0);return B1;
},BroadcastEventAtPosition:function(A0,UC,aFilter){var A;var Q=this.AN;var B1=null;
while(!!Q&&!B1){if((!aFilter||((A=aFilter)&&((Q.E&A)===A)))&&B.wa(Q.GetExtent(),
UC)){var AA=(C.J.isPrototypeOf(Q)?Q:null);if(!!AA)B1=AA.BroadcastEventAtPosition(
A0,B.abe(UC,AA.I.slice(0,2)),aFilter);else B1=Q.Cv(A0);}Q=Q.U;}if(!B1)B1=this.Cv(
A0);return B1;},BroadcastEvent:function(A0,aFilter){var A;var Q=this.AN;var B1=null;
while(!!Q&&!B1){if(!aFilter||((A=aFilter)&&((Q.E&A)===A))){var AA=(C.J.isPrototypeOf(
Q)?Q:null);if(!!AA)B1=AA.BroadcastEvent(A0,aFilter);else B1=Q.Cv(A0);}Q=Q.U;}if(
!B1)B1=this.Cv(A0);if(!B1)B1=this.U2(A0);return B1;},TI:function(aSize){},GB:function(
Eq){},BH:function(){this.E=this.E|0x8000;B.pe([this,this.PL],this);},Ah:function(
AQ){var A;var AA=this;while(!!AA&&!((AQ[0]>=AQ[2])||(AQ[1]>=AQ[3]))){if(!AA.G&&(
AA!==this)){AA.Ah(AQ);return;}if(!((AA.E&0x1)===0x1))return;var H=AA.I;AQ=B.abh(
AQ,H.slice(0,2));if(!((AA.E&0x80000)===0x80000)){H=[].concat(H[0]-AA.MK,H.slice(
1,4));H=B.abP(H,H[1]-AA.MM);H=B.abN(H,H[2]+AA.ML);H=[].concat(H.slice(0,3),H[3]+
AA.MJ);AQ=B.lb(AQ,H);}AA=AA.G;}},NF:function(P,aFilter){var A;if(!P||(P.G!==this
))return null;var IY=P.T;var I1=P.U;var M2=0x10000;if(((aFilter&0x10000)===0x10000
))M2=0x0;while(!!IY||!!I1){if((!!IY&&(!aFilter||((A=aFilter)&&((IY.E&A)===A))))&&(
!M2||!((A=M2)&&((IY.E&A)===A))))return IY;if((!!I1&&(!aFilter||((A=aFilter)&&((I1.
E&A)===A))))&&(!M2||!((A=M2)&&((I1.E&A)===A))))return I1;if(!!IY)IY=IY.T;if(!!I1
)I1=I1.U;}return null;},Dp:function(F0,Bq,CT,CR,CS){var A;if(!F0)return;if(!Bq)throw new
Error(JG);if((!!Bq.J||!!Bq.G)||!!Bq.Fj)throw new Error(KO);if(!!F0.G&&(F0.G!==this
))throw new Error(Mq);if(!this.FF)this.FF=B._NewObject(C.TG,0);Bq.G=this;Bq.J=F0;
Bq.Pz=CR;Bq.So=CT;if(!!F0.J8)F0.J8.Fj.XP(F0.J8);F0.J8=Bq;F0.E=F0.E|0x20000;if((CS&&
!!this.FF.AN)&&!this.FF.AN.Qm())(B.acg.ND.isPrototypeOf(A=this.FF.AN)?A:null).SI(
Bq);else{var Fj=B._NewObject(B.acg.ND,0);Fj.SI(Bq);this.FF.XV(Fj,false);}},N_:function(
P){var A;if(!P)throw new Error(C7);if(P.G!==this)throw new Error(IO);if(!P.T)return;
var Dj=this.AN;var Il=P.Fb;while(!!Dj&&(Dj.Fb>Il))Dj=Dj.U;if(((Dj===P)||!Dj)||(Dj.
T===P))return;if(((P.E&0x401)===0x401)){if(!!P.U&&!!P.Bw)P.U.E=P.U.E|0x800;P.E=P.
E|0x800;this.E=this.E|0x4000;B.pe([this,this.DR],this);}if(((P.E&0x200)===0x200)
){if(!!P.U)P.U.E=P.U.E|0x800;this.E=this.E|0x4000;B.pe([this,this.DR],this);}if(
!!P.U)P.U.T=P.T;else this.Ay=P.T;P.T.U=P.U;P.U=Dj;P.T=Dj.T;Dj.T=P;if(!!P.T)P.T.U=
P;else this.AN=P;if(((P.E&0x1)===0x1))this.Ah(P.GetClipping());},Q3:function(P,D0
){var A;if(!P)throw new Error(C7);if(P.G!==this)throw new Error(IO);var Dj=P;var
Cp=P;var Il=P.Fb;while(((D0>0)&&!!Dj.T)&&(Dj.T.Fb<=Il)){Dj=Dj.T;D0=D0-1;}while(((
D0<0)&&!!Cp.U)&&(Cp.U.Fb>=Il)){Cp=Cp.U;D0=D0+1;}if((Dj===P)&&(Cp===P))return;if(((
P.E&0x401)===0x401)){if(!!P.U&&!!P.Bw)P.U.E=P.U.E|0x800;P.E=P.E|0x800;this.E=this.
E|0x4000;B.pe([this,this.DR],this);}if(((P.E&0x200)===0x200)){if(!!P.U)P.U.E=P.U.
E|0x800;P.E=P.E|0x800;this.E=this.E|0x4000;B.pe([this,this.DR],this);}if(!!P.U)P.
U.T=P.T;if(!!P.T)P.T.U=P.U;if(this.Ay===P)this.Ay=P.T;if(this.AN===P)this.AN=P.U;
if(Dj!==P){P.T=Dj.T;P.U=Dj;Dj.T=P;if(!!P.T)P.T.U=P;}if(Cp!==P){P.T=Cp;P.U=Cp.U;Cp.
U=P;if(!!P.U)P.U.T=P;}if(!P.T)this.AN=P;if(!P.U)this.Ay=P;if(((P.E&0x1)===0x1))this.
Ah(P.GetClipping());},B5:function(P){var A;if(!P)throw new Error(JH);if(P.G!==this
)throw new Error(IO);if((((P.E&0x401)===0x401)&&!!P.U)&&!!P.Bw){P.U.E=P.U.E|0x800;
this.E=this.E|0x4000;B.pe([this,this.DR],this);}if(((P.E&0x200)===0x200)){if(!!P.
U)P.U.E=P.U.E|0x800;this.E=this.E|0x4000;B.pe([this,this.DR],this);}P.Bw=null;if(
this.C4===P)this.CW(this.NF(P,0x14));if(!!P.U)P.U.T=P.T;if(!!P.T)P.T.U=P.U;if(this.
Ay===P)this.Ay=P.T;if(this.AN===P)this.AN=P.U;P.G=null;P.T=null;P.U=null;if((!((
P.E&0x10)===0x10)&&((P.E&0x100000)===0x100000))&&!((this.E&0x80)===0x80))P.AL(0x10
,0x0);if(((P.E&0x1)===0x1))this.Ah(P.GetClipping());},X:function(P,D0){var A;if(
!P)throw new Error(Rn);if(!!P.G)throw new Error(Ro);var Cp=null;var Il=P.Fb;if(((
D0<0)&&!!this.AN)&&(this.AN.Fb>=Il)){Cp=this.AN;D0=D0+1;}while((((D0<0)&&!!Cp)&&
!!Cp.U)&&(Cp.U.Fb>=Il)){Cp=Cp.U;D0=D0+1;}if((!Cp&&!!this.AN)&&(this.AN.Fb>Il))Cp=
this.AN;while((!!Cp&&!!Cp.U)&&(Cp.U.Fb>Il))Cp=Cp.U;if(!Cp){P.G=this;P.U=this.AN;
if(!!this.AN)this.AN.T=P;if(!this.Ay)this.Ay=P;this.AN=P;}else{P.G=this;P.U=Cp.U;
P.T=Cp;Cp.U=P;if(!!P.U)P.U.T=P;else this.Ay=P;}if(((P.E&0x1)===0x1))this.Ah(P.GetClipping(
));if(((P.E&0x80)===0x80)&&(B.aam().VL()===P))P.AL(0x10,0x0);else if(!((this.E&0x10
)===0x10)&&((P.E&0x200010)===0x200010))P.AL(0x0,0x10);else if((((this.E&0x10)===
0x10)&&!((P.E&0x10)===0x10))&&((P.E&0x100000)===0x100000))P.AL(0x10,0x0);if(((!this.
C4&&((P.E&0x4)===0x4))&&((P.E&0x10)===0x10))&&!((P.E&0x10000)===0x10000))this.CW(
P);if(((P.E&0x401)===0x401)){P.E=P.E|0x800;this.E=this.E|0x4000;B.pe([this,this.
DR],this);}if(((P.E&0x200)===0x200)){P.E=P.E|0x800;this.E=this.E|0x4000;B.pe([this
,this.DR],this);}},V1:function(){return this.FR;},_Init:function(aArg){C.By._Init.
call(this,aArg);this.__proto__=C.J;this.E=0x10001F;this.BC(aArg);},_Mark:function(
D){var A;C.By._Mark.call(this,D);if((A=this.Ay)&&(A._cycle!=D))A._Mark(A._cycle=
D);if((A=this.AN)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.Px)&&(A._cycle!=
D))A._Mark(A._cycle=D);if((A=this.BF)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.
FF)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.J8)&&(A._cycle!=D))A._Mark(A._cycle=
D);if((A=this.C4)&&(A._cycle!=D))A._Mark(A._cycle=D);},_className:"Core::Group"};
C.Root={Ey:null,BT:B.abi(10,null,null),Es:null,H_:null,Nn:0,Ca:0,C9:B.abi(10,0,null
),Pq:B.abi(10,B.wg,null),FD:B.abi(10,0,null),Hi:B.abi(10,B.wf,null),KR:B.abi(10,
0,null),H9:B.abi(10,B.wf,null),FC:B.abi(10,B.wf,null),Eu:B.abi(10,B.wf,null),GH:
B.abi(10,B.wf,null),A_:0,Pt:0,Ps:0,Dz:B.abi(4,0,null),CB:B.abi(4,B.wg,null),CA:0
,MR:0,KT:0,R$:true,BC:function(aArg){if(!!!this.M){var obj=this;B.abD(obj);}},Kk:
function(){return this;},DC:function(A2,aClip,aOffset,aOpacity,aBlend){var fullScreenUpdate=
false;fullScreenUpdate=B.m7;if(!fullScreenUpdate)A2.NE(aClip,B.abh(B.abh(aClip,aOffset
),this.I.slice(0,2)),0x00000000,0x00000000,0x00000000,0x00000000,false);C.J.DC.call(
this,A2,aClip,aOffset,aOpacity,aBlend);},AL:function(Ep,Fc){var A;C.J.AL.call(this
,Ep,Fc);if(!this.G&&(((Ep&0x1)===0x1)||((Fc&0x1)===0x1)))this.Ah([0,0,(A=this.I)[
2]-A[0],A[3]-A[1]]);if(!this.G&&(((Ep&0x2)===0x2)||((Fc&0x2)===0x2)))this.Ah([0,
0,(A=this.I)[2]-A[0],A[3]-A[1]]);},CW:function(value){if((value!==null)||!value)
C.J.CW.call(this,value);},Jv:function(value){var A;var Fh=this.FR;C.J.Jv.call(this
,value);if(((Fh!==this.FR)&&!this.G)&&((this.E&0x1)===0x1))this.Ah([0,0,(A=this.
I)[2]-A[0],A[3]-A[1]]);},DispatchEvent:function(A0){if(!!A0){A0.Lx=!!this.Ca;if(
!!this.Ca)A0.AY=this.Ca;}var B1;B1=C.J.DispatchEvent.call(this,A0);this.Ca=0;return B1;
},BroadcastEvent:function(A0,aFilter){if(!!A0){A0.Lx=!!this.Ca;if(!!this.Ca)A0.AY=
this.Ca;}var B1=C.J.BroadcastEvent.call(this,A0,aFilter);this.Ca=0;return B1;},Ah:
function(AQ){var A;if(this.Nn>0)throw new Error(Rp);var fullScreenUpdate=false;fullScreenUpdate=
B.m7;if(fullScreenUpdate)AQ=[0,0,(A=this.I)[2]-A[0],A[3]-A[1]];if(!!this.G){C.J.
Ah.call(this,AQ);return;}AQ=B.lb(B.abh(AQ,this.I.slice(0,2)),this.I);if((AQ[0]>=
AQ[2])||(AQ[1]>=AQ[3]))return;var i;for(i=0;i<this.CA;i=i+1)if(!(((A=B.lb(this.CB.
Get(i),AQ))[0]>=A[2])||(A[1]>=A[3]))){this.CB.Set(i,B.wC(this.CB.Get(i),AQ));this.
Dz.Set(i,B.aaH(this.CB.Get(i)));return;}if(this.CA<3){this.CB.Set(this.CA,AQ);this.
Dz.Set(this.CA,B.aaH(AQ));this.CA=this.CA+1;return;}var B2;var Ex;var MQ=0;var MS=
0;var UF=2147483647;this.CB.Set(this.CA,AQ);this.Dz.Set(this.CA,B.aaH(AQ));for(B2=
0;B2<=this.CA;B2=B2+1)for(Ex=B2+1;Ex<=this.CA;Ex=Ex+1){var PK=B.aaH(B.wC(this.CB.
Get(B2),this.CB.Get(Ex)));var U0=((PK<<8)/(this.Dz.Get(B2)+this.Dz.Get(Ex)))|0;if(
U0<UF){UF=U0;MQ=B2;MS=Ex;}}this.CB.Set(MQ,B.wC(this.CB.Get(MQ),this.CB.Get(MS)));
this.Dz.Set(MQ,B.aaH(this.CB.Get(MQ)));if(MS!==this.CA){this.CB.Set(MS,this.CB.Get(
this.CA));this.Dz.Set(MS,this.Dz.Get(this.CA));}},Aab:function(){var C$=B._NewObject(
C.Ld,0);C$.Lx=!!this.Ca;if(!!this.Ca)C$.AY=this.Ca;return C$;},JP:function(){var
C$=B._NewObject(C.HA,0);C$.Lx=!!this.Ca;if(!!this.Ca)C$.AY=this.Ca;return C$;},KQ:
function(){var C$=B._NewObject(C.NA,0);C$.Lx=!!this.Ca;if(!!this.Ca)C$.AY=this.Ca;
return C$;},Aac:function(Ab){var i;var JV=false;for(i=0;i<10;i=i+1)if(!!this.BT.
Get(i)){var Z=this.Eu.Get(i);var AA=this.BT.Get(i).G;while(!!AA&&(AA!==this)){Z=
B.abe(Z,AA.I.slice(0,2));AA=AA.G;}if(!AA&&(this.BT.Get(i)!==this)){var tmp=this.
BT.Get(i);this.A_=i;this.BT.Set(i,null);tmp.Cv(this.JP().InitializeUp(i,this.H9.
Get(i),this.Hi.Get(i),this.FD.Get(i),this.C9.Get(i)+1,this.FC.Get(i),false,this.
Eu.Get(i),this.GH.Get(i)));this.BroadcastEvent(this.KQ().InitializeUp(i,this.C9.
Get(i)+1,false,tmp,this.Eu.Get(i)),0x18);}else{this.FD.Set(i,(this.H_.AY-this.KR.
Get(i))|0);if(this.FD.Get(i)<10)this.FD.Set(i,10);this.A_=i;this.BT.Get(i).Cv(this.
JP().InitializeHold(i,Z,this.Hi.Get(i),this.FD.Get(i),this.C9.Get(i)+1,this.FC.Get(
i),this.Eu.Get(i),this.GH.Get(i)));JV=true;}}if(!JV)this.H_.Aq(false);},GetFPS:function(
){var ticksCount=0;var UL=0;ticksCount=((new Date).getTime()-B.v$)|0;if(!!this.Pt&&(
ticksCount>this.Pt))UL=((this.Ps*1000)/((ticksCount-this.Pt)|0))|0;this.Ps=0;this.
Pt=ticksCount;return UL;},Update:function(){var A;if(!this.Es)this.Es=B._NewObject(
B.Graphics.Canvas,0);this.Es.N2([(A=this.I)[2]-A[0],A[3]-A[1]]);this.Es.Update();
return this.UpdateGE20(this.Es);},UpdateGE20:function(A2){if(!this.BeginUpdate()
)return AD;var Hr=this.UpdateCanvas(A2,AZ);this.EndUpdate();return Hr;},EndUpdate:
function(){if(this.CA>0){this.Ps=this.Ps+1;this.CA=0;}},UpdateCanvas:function(A2
,aOffset){var A;var Hr=AD;var Z8=[].concat(aOffset,B.abf(A2.FrameSize,aOffset));
var i;var B2=this.CA;this.Nn=this.Nn+1;A2.AK=this;A2.PH=false;for(i=0;(i<B2)&&(i<
4);i=i+1)if(this.Dz.Get(i)>0){this.DC(A2,B.abg(this.CB.Get(i),aOffset),[-aOffset[
0],-aOffset[1]],255,true);Hr=B.wC(Hr,B.lb(Z8,this.CB.Get(i)));}else B2=B2+1;A2.AK=
null;this.Nn=this.Nn-1;if(!((Hr[0]>=Hr[2])||(Hr[1]>=Hr[3])))return B.abg(Hr,aOffset
);else return Hr;},GetUpdateRegion:function(Pk){var i;var B2=this.CA;if(Pk<0)return AD;
for(i=0;(i<B2)&&(i<4);i=i+1)if(!this.Dz.Get(i)){B2=B2+1;Pk=Pk+1;}else if(i===Pk)
return this.CB.Get(i);return AD;},BeginUpdate:function(){var A;var i;if(!!this.CA&&
!B.aaY(this.CB.Get(0),[0,0,(A=this.I)[2]-A[0],A[3]-A[1]])){var Vb=B.abi(3,B.wg,null
);var Va=this.CA;for(i=0;i<Va;i++)Vb.Set(i,this.CB.Get(i));for(i=0;i<Va;i++){var
U3=B.abh(Vb.Get(i),this.I.slice(0,2));var U4=this.K_(U3);if(!B.aaY(U3,U4))this.Ah(
B.abg(U4,this.I.slice(0,2)));}}var B2;var Ex;for(B2=0;B2<(this.CA-1);B2++)if(this.
Dz.Get(B2)>0)for(Ex=B2+1;Ex<this.CA;Ex++)if(this.Dz.Get(Ex)>0){var PK=B.aaH(B.wC(
this.CB.Get(B2),this.CB.Get(Ex)));if(((PK-this.Dz.Get(B2))-this.Dz.Get(Ex))<0){this.
CB.Set(B2,B.wC(this.CB.Get(B2),this.CB.Get(Ex)));this.Dz.Set(B2,PK);this.Dz.Set(
Ex,0);}}for(i=this.CA-1;i>=0;i--)if(!this.Dz.Get(i))this.CA=this.CA-1;return this.
CA;},DoesNeedUpdate:function(){if(this.CA>0)return true;return false;},Initialize:
function(aSize){this.R([].concat(AZ,aSize));if(this.R$)this.E=this.E|0x60;else this.
E=this.E|0x20;this.Ah(this.I);return this;},SetRootFocus:function(RW){if(RW===this.
R$)return false;this.R$=RW;if(!RW)this.AL(0x0,0x40);else this.AL(0x40,0x0);return true;
},SetUserInputTimestamp:function(Z3){this.Ca=Z3;},DriveKeyboardHitting:function(
CC,Mu,FY){var A;var Sx=!!this.Ey;if(!!this.Ey&&((!FY||(this.MR!==CC))||(this.KT!==
Mu))){var C$=null;var Q=(C.Bh.isPrototypeOf(A=this.Ey)?A:null);var Gb=(C.IA.isPrototypeOf(
A=this.Ey)?A:null);if(!!this.MR)C$=B._NewObject(C.KeyEvent,0).Initialize(this.MR
,false);if(this.KT!==0x00)C$=B._NewObject(C.KeyEvent,0).Initialize2(this.KT,false
);if(!!Gb)Gb.Cv(C$);else if(!!Q)Q.Cv(C$);this.MR=0;this.KT=0x00;this.Ey=null;}if(
!!this.Ey){var C$=null;var Q=(C.Bh.isPrototypeOf(A=this.Ey)?A:null);var Gb=(C.IA.
isPrototypeOf(A=this.Ey)?A:null);if(!!CC)C$=B._NewObject(C.KeyEvent,0).Initialize(
CC,true);if(this.KT!==0x00)C$=B._NewObject(C.KeyEvent,0).Initialize2(Mu,true);if(
!!Gb)Gb.Cv(C$);else if(!!Q)Q.Cv(C$);}if(!this.Ey&&FY){if(!!CC)this.Ey=this.DispatchEvent(
B._NewObject(C.KeyEvent,0).Initialize(CC,true));if(Mu!==0x00)this.Ey=this.DispatchEvent(
B._NewObject(C.KeyEvent,0).Initialize2(Mu,true));if(!(C.IA.isPrototypeOf(A=this.
Ey)?A:null)&&!(C.Bh.isPrototypeOf(A=this.Ey)?A:null))this.Ey=null;this.MR=CC;this.
KT=Mu;Sx=Sx||!!this.Ey;}this.Ca=0;return Sx;},DriveCursorMovement:function(Cz){return this.
DriveMultiTouchMovement(this.A_,Cz);},DriveMultiTouchMovement:function(Ad,Cz){if((
Ad<0)||(Ad>9)){this.Ca=0;return false;}var Be=B.abe(Cz,this.Eu.Get(Ad));this.Eu.
Set(Ad,Cz);if(!this.BT.Get(Ad)||B.aaX(Be,AZ)){this.Ca=0;return false;}var Z=Cz;var
AA=this.BT.Get(Ad).G;while(!!AA&&(AA!==this)){Z=B.abe(Z,AA.I.slice(0,2));AA=AA.G;
}if(!AA&&(this.BT.Get(Ad)!==this)){var tmp=this.BT.Get(Ad);this.A_=Ad;this.BT.Set(
Ad,null);tmp.Cv(this.JP().InitializeUp(Ad,this.H9.Get(Ad),this.Hi.Get(Ad),this.FD.
Get(Ad),this.C9.Get(Ad)+1,this.FC.Get(Ad),false,this.Eu.Get(Ad),this.GH.Get(Ad))
);this.BroadcastEvent(this.KQ().InitializeUp(Ad,this.C9.Get(Ad)+1,false,tmp,Cz),
0x18);}else{this.H9.Set(Ad,Z);this.A_=Ad;this.BT.Get(Ad).Cv(this.Aab().Initialize(
Ad,Z,this.Hi.Get(Ad),Be,this.FD.Get(Ad),this.C9.Get(Ad)+1,this.FC.Get(Ad),Cz,this.
GH.Get(Ad)));}this.Ca=0;return true;},DriveCursorHitting:function(FY,Ad,Cz){return this.
DriveMultiTouchHitting(FY,Ad,Cz);},DriveMultiTouchHitting:function(FY,Ad,Cz){if((
Ad<0)||(Ad>9)){this.Ca=0;return false;}var ticksCount=this.Ca;if(!ticksCount)ticksCount=((
new Date).getTime()-B.v$)|0;var AaK=this.Ca;this.DriveMultiTouchMovement(Ad,Cz);
Cz=this.Eu.Get(Ad);this.Ca=AaK;if(FY)this.GH.Set(Ad,Cz);if(FY&&!this.BT.Get(Ad)){
var CU;var Z=Cz;if(B.wa(this.Pq.Get(Ad),Cz)&&((ticksCount-this.KR.Get(Ad))<=250)
)this.C9.Set(Ad,this.C9.Get(Ad)+1);else this.C9.Set(Ad,0);this.Pq.Set(Ad,B.abh(Mr
,Cz));this.KR.Set(Ad,ticksCount);CU=this.HB(B.abh(Mr,Cz),Ad,this.C9.Get(Ad)+1,null
,null,0x0);if(!!CU){this.BroadcastEvent(this.KQ().InitializeDown(Ad,this.C9.Get(
Ad)+1,false,CU.Bh,Cz),0x18);this.BT.Set(Ad,CU.Bh);this.FC.Set(Ad,CU.AU);}else{this.
BT.Set(Ad,null);this.FC.Set(Ad,AZ);this.Ca=0;return false;}var AA=CU.Bh.G;while(
!!AA&&(AA!==this)){Z=B.abe(Z,AA.I.slice(0,2));AA=AA.G;}this.Hi.Set(Ad,Z);this.H9.
Set(Ad,Z);this.FD.Set(Ad,0);this.H_.Aq(true);this.A_=Ad;this.BT.Get(Ad).Cv(this.
JP().InitializeDown(Ad,Z,this.C9.Get(Ad)+1,this.FC.Get(Ad),false,Cz));this.Ca=0;
return true;}if(!FY&&!!this.BT.Get(Ad)){var Z=Cz;var AA=this.BT.Get(Ad).G;while(
!!AA&&(AA!==this)){Z=B.abe(Z,AA.I.slice(0,2));AA=AA.G;}if(!AA)Z=this.H9.Get(Ad);
this.A_=Ad;var tmp=this.BT.Get(Ad);this.BT.Set(Ad,null);tmp.Cv(this.JP().InitializeUp(
Ad,Z,this.Hi.Get(Ad),this.FD.Get(Ad),this.C9.Get(Ad)+1,this.FC.Get(Ad),false,Cz,
this.GH.Get(Ad)));this.BroadcastEvent(this.KQ().InitializeUp(Ad,this.C9.Get(Ad)+
1,false,tmp,Cz),0x18);this.Ca=0;return true;}this.Ca=0;return false;},Q4:function(
F_,Ph,F$,H6){if(F_===this)F_=null;if(!this.BT.Get(this.A_))return;var CU;CU=this.
HB(B.abh(Mr,this.Eu.Get(this.A_)),this.A_,1,F_,F$,H6);if(!!CU&&(this.BT.Get(this.
A_)!==CU.Bh))this.SM(CU.Bh,CU.AU);if(!CU&&(this.BT.Get(this.A_)!==Ph))this.SM(Ph
,AZ);},XQ:function(F_,Ph,F$){this.Q4(F_,Ph,F$,0x0);},SM:function(F_,Fy){if(!this.
BT.Get(this.A_)||(this.BT.Get(this.A_)===F_))return;var tmp=this.BT.Get(this.A_);
this.BT.Set(this.A_,null);tmp.Cv(this.JP().InitializeUp(this.A_,this.H9.Get(this.
A_),this.Hi.Get(this.A_),this.FD.Get(this.A_),this.C9.Get(this.A_)+1,this.FC.Get(
this.A_),true,this.Eu.Get(this.A_),this.GH.Get(this.A_)));this.BroadcastEvent(this.
KQ().InitializeUp(this.A_,this.C9.Get(this.A_)+1,true,tmp,this.Eu.Get(this.A_)),
0x18);var Z=this.Eu.Get(this.A_);var AA=null;if(!!F_)AA=F_.G;while(!!AA&&(AA!==this
)){Z=B.abe(Z,AA.I.slice(0,2));AA=AA.G;}if(!AA&&(F_!==this)){this.BT.Set(this.A_,
null);return;}this.BroadcastEvent(this.KQ().InitializeDown(this.A_,this.C9.Get(this.
A_)+1,true,F_,this.Eu.Get(this.A_)),0x18);var ticksCount=0;ticksCount=((new Date
).getTime()-B.v$)|0;this.BT.Set(this.A_,F_);this.FC.Set(this.A_,Fy);this.Hi.Set(
this.A_,Z);this.H9.Set(this.A_,Z);this.C9.Set(this.A_,0);this.FD.Set(this.A_,0);
this.KR.Set(this.A_,ticksCount);this.GH.Set(this.A_,this.Eu.Get(this.A_));this.BT.
Get(this.A_).Cv(this.JP().InitializeDown(this.A_,Z,this.C9.Get(this.A_)+1,this.FC.
Get(this.A_),true,this.GH.Get(this.A_)));},VL:function(){return null;},_Init:function(
aArg){C.J._Init.call(this,aArg);C.Timer._Init.call(this.H_={M:this},0);(this.BT=[
]).__proto__=C.Root.BT;(this.C9=[]).__proto__=C.Root.C9;(this.Pq=[]).__proto__=C.
Root.Pq;(this.FD=[]).__proto__=C.Root.FD;(this.Hi=[]).__proto__=C.Root.Hi;(this.
KR=[]).__proto__=C.Root.KR;(this.H9=[]).__proto__=C.Root.H9;(this.FC=[]).__proto__=
C.Root.FC;(this.Eu=[]).__proto__=C.Root.Eu;(this.GH=[]).__proto__=C.Root.GH;(this.
Dz=[]).__proto__=C.Root.Dz;(this.CB=[]).__proto__=C.Root.CB;this.__proto__=C.Root;
this.E=0x10007F;this.H_.El(10);this.H_.G3=[this,this.Aac];this.BC(aArg);},_Done:
function(){this.__proto__=C.J;this.H_._Done();C.J._Done.call(this);},_ReInit:function(
){C.J._ReInit.call(this);this.H_._ReInit();},_Mark:function(D){var A;C.J._Mark.call(
this,D);if((A=this.Ey)&&(A._cycle!=D))A._Mark(A._cycle=D);B.aa6(this.BT,D);if((A=
this.Es)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.H_)._cycle!=D)A._Mark(A._cycle=
D);},_className:"Core::Root"};C.Event={AY:0,Lx:false,BC:function(aArg){this.AY=this.
Lq();},Lq:function(){var ticksCount=0;ticksCount=((new Date).getTime()-B.v$)|0;return ticksCount;
},_Init:function(aArg){this.__proto__=C.Event;this.BC(aArg);B.h7++;},_Done:function(
){this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((
A=this.M)&&(A._cycle!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:
"Core::Event"};C.KeyEvent={Cu:0,Bt:0,Down:false,Initialize2:function(CC,FY){this.
Cu=0;this.Bt=CC;this.Down=FY;if((CC>=0x30)&&(CC<=0x39))this.Cu=(10+CC)-48;if((CC>=
0x41)&&(CC<=0x5A))this.Cu=(105+CC)-65;if((CC>=0x61)&&(CC<=0x7A))this.Cu=(105+CC)-
97;if(CC===0x20)this.Cu=131;if(!this.Cu)switch(CC){case 0x2B:this.Cu=132;break;case
0x2D:this.Cu=133;break;case 0x2A:this.Cu=134;break;case 0x2F:this.Cu=135;break;case
0x3D:this.Cu=136;break;case 0x2E:this.Cu=137;break;case 0x2C:this.Cu=138;break;case
0x3A:this.Cu=139;break;case 0x3B:this.Cu=140;break;default:;}return this;},Initialize:
function(CC,FY){this.Cu=CC;this.Down=FY;this.Bt=0x00;var R2=CC-10;var R1=CC-105;
if((R2>=0)&&(R2<=9))this.Bt=(48+R2)&0xFFFF;if((R1>=0)&&(R1<=25))this.Bt=(65+R1)&
0xFFFF;if(CC===131)this.Bt=0x20;if(this.Bt===0x00)switch(CC){case 132:this.Bt=0x2B;
break;case 133:this.Bt=0x2D;break;case 134:this.Bt=0x2A;break;case 135:this.Bt=0x2F;
break;case 136:this.Bt=0x3D;break;case 137:this.Bt=0x2E;break;case 138:this.Bt=0x2C;
break;case 139:this.Bt=0x3A;break;case 140:this.Bt=0x3B;break;default:;}return this;
},VT:function(UA){switch(UA){case 141:return((this.Bt>=0x41)&&(this.Bt<=0x5A))||((
this.Bt>=0x61)&&(this.Bt<=0x7A));case 142:return(((this.Bt>=0x41)&&(this.Bt<=0x5A
))||((this.Bt>=0x61)&&(this.Bt<=0x7A)))||((this.Bt>=0x30)&&(this.Bt<=0x39));case
143:return(this.Bt>=0x30)&&(this.Bt<=0x39);case 144:return(((this.Bt>=0x41)&&(this.
Bt<=0x46))||((this.Bt>=0x61)&&(this.Bt<=0x66)))||((this.Bt>=0x30)&&(this.Bt<=0x39
));case 145:return this.Bt!==0x00;case 146:return(this.Bt===0x00)&&!!this.Cu;case
147:return(((this.Cu===6)||(this.Cu===7))||(this.Cu===4))||(this.Cu===5);case 148:
return(this.Bt!==0x00)||!!this.Cu;default:;}return UA===this.Cu;},_Init:function(
aArg){C.Event._Init.call(this,aArg);this.__proto__=C.KeyEvent;},_className:"Core::KeyEvent"
};C.NA={Of:null,DT:B.wf,Dt:0,Cc:0,Down:false,Ef:false,InitializeUp:function(Ad,D1
,JI,RZ,FZ){this.Down=false;this.Cc=Ad;this.Dt=D1;this.DT=FZ;this.Of=RZ;this.Ef=JI;
return this;},InitializeDown:function(Ad,D1,JI,RZ,FZ){this.Down=true;this.Cc=Ad;
this.Dt=D1;this.DT=FZ;this.Of=RZ;this.Ef=JI;return this;},_Init:function(aArg){C.
Event._Init.call(this,aArg);this.__proto__=C.NA;},_Mark:function(D){var A;C.Event.
_Mark.call(this,D);if((A=this.Of)&&(A._cycle!=D))A._Mark(A._cycle=D);},_className:
"Core::CursorGrabEvent"};C.HA={Ls:B.wf,DT:B.wf,Dt:0,CV:0,ED:B.wf,C2:B.wf,Cc:0,Down:
false,Ef:false,InitializeHold:function(Ad,IP,Mw,Mx,D1,Fy,FZ,Mv){this.Down=true;this.
Cc=Ad;this.C2=B.abf(IP,Fy);this.ED=B.abf(Mw,Fy);this.CV=Mx;this.Dt=D1;this.DT=FZ;
this.Ls=Mv;return this;},InitializeUp:function(Ad,IP,Mw,Mx,D1,Fy,JI,FZ,Mv){this.
Down=false;this.Cc=Ad;this.C2=B.abf(IP,Fy);this.ED=B.abf(Mw,Fy);this.CV=Mx;this.
Dt=D1;this.Ef=JI;this.DT=FZ;this.Ls=Mv;return this;},InitializeDown:function(Ad,
IP,D1,Fy,JI,FZ){this.Down=true;this.Cc=Ad;this.C2=B.abf(IP,Fy);this.ED=B.abf(IP,
Fy);this.CV=0;this.Dt=D1;this.Ef=JI;this.DT=FZ;this.Ls=FZ;return this;},_Init:function(
aArg){C.Event._Init.call(this,aArg);this.__proto__=C.HA;},_className:"Core::CursorEvent"
};C.Ld={Ls:B.wf,DT:B.wf,Dt:0,CV:0,AU:B.wf,ED:B.wf,C2:B.wf,Cc:0,Initialize:function(
Ad,IP,Mw,aOffset,Mx,Z2,Fy,FZ,Mv){this.Cc=Ad;this.C2=B.abf(IP,Fy);this.ED=B.abf(Mw
,Fy);this.AU=aOffset;this.CV=Mx;this.Dt=Z2;this.DT=FZ;this.Ls=Mv;return this;},_Init:
function(aArg){C.Event._Init.call(this,aArg);this.__proto__=C.Ld;},_className:"Core::DragEvent"
};C.HX={DC:function(A2,aClip,aOffset,aOpacity,aBlend){},GetClipping:function(){var
A;var H=C.By.GetClipping.call(this);if(((this.E&0x80000)===0x80000)){var Kc=AD;var
Q;for(Q=this.T;!!Q&&!((Q.E&0x200)===0x200);Q=Q.T)if(((Q.E&0x1)===0x1))Kc=B.wC(Kc
,Q.GetClipping());H=B.wC(H,Kc);}return H;},AL:function(Ep,Fc){var A;var Py=this.
E;if((!!this.G&&((this.E&0x80001)===0x80001))&&((Fc&0x80000)===0x80000))this.G.Ah(
this.GetClipping());C.By.AL.call(this,Ep,Fc);if(((!!this.G&&((this.E&0x1)===0x1)
)&&((Ep&0x80000)===0x80000))&&!((Py&0x80000)===0x80000))this.G.Ah(this.GetClipping(
));},R:function(value){var A;if(B.aaY(value,this.I))return;var I0=[(A=this.I)[2]-
A[0],A[3]-A[1]];var Sl=[value[2]-value[0],value[3]-value[1]];var KZ=!B.aaX(I0,Sl
);var Be=B.abe(value.slice(0,2),this.I.slice(0,2));if(!B.aaX(Be,AZ)&&!KZ){var Q=
this.T;while(!!Q&&!((Q.E&0x200)===0x200)){if(((Q.E&0x400)===0x400)){var tmp=((Q.
E&0x100)===0x100);Q.LC(Be,tmp);}Q=Q.T;}}if((KZ&&(I0[0]>0))&&(I0[1]>0)){var AS=this.
I;var Q=this.T;while(!!Q&&!((Q.E&0x200)===0x200)){if(((Q.E&0x400)===0x400)){if(!
!Q.Bw&&(Q.Bw.J6!==this))Q.Bw=null;if(!Q.Bw&&(Q.CI!==0x14))Q.MO(AS,this);}Q=Q.T;}
}C.By.R.call(this,value);if(!!this.G&&KZ){this.E=this.E|0x1000;if(!((this.G.E&0x2000
)===0x2000)){this.G.E=this.G.E|0x4000;B.pe([A=this.G,A.DR],this);}}},_Init:function(
aArg){C.By._Init.call(this,aArg);this.__proto__=C.HX;this.E=0x203;},_className:"Core::Outline"
};C.DI={BV:null,Bh:null,C6:null,DV:null,Ct:-1,B4:0,Ic:8,Dy:0,E$:0,GC:B.wf,DU:-1,
Bn:0,Iy:24,Ci:0,Fq:null,MT:false,Jk:function(){return null;},IK:function(B7,Dv,Fx
,EO,EP,H5,DJ,Eo,CT,CR,CS){throw new Error(Rq);},Ji:function(B7,H5,DJ,Eo,CT,CR,CS
){throw new Error(Rr);},LX:function(B7,Dv,Fx,EO,EP,DJ,Eo,CT,CR,CS){throw new Error(
Rs);},DispatchEvent:function(A0){var result;result=C.J.DispatchEvent.call(this,A0
);return result;},GB:function(Eq){var A;if(!this.Fq)return;this.MT=true;var Bv=this.
Na(0-this.Bn,1);var BL=this.Na((((A=this.I)[3]-A[1])-this.Bn)-1,2);var Ga=BL-Bv;
if(Ga<1)Ga=1;var H7=(Ga/2)|0;var H8=(Ga/3)|0;if(!H7)H7=1;if(!H8)H8=1;if(Bv<this.
B4){Bv=Bv-H7;BL=BL+H8;}else if(BL>this.Ct){Bv=Bv-H8;BL=BL+H7;}else{Bv=this.B4;BL=
this.Ct;}if(Bv>=this.Ci){Bv=0;BL=-1;}else if(BL<0){Bv=0;BL=-1;}if(BL>=this.Ci)BL=
this.Ci-1;if(Bv<0)Bv=0;var Ij=this.B4;var Ik=this.Ct;var JY=0;var JZ=-1;if(Bv>Ij
)Ij=Bv;if(BL<Ik)Ik=BL;if(Ij<=Ik){while((this.Ct<BL)&&(this.B4<Ij)){this.Ii();this.
MF();}while((this.B4>Bv)&&(this.Ct>Ik)){this.Nd();this.ME();}}else{this.Ct=(this.
Ct-this.B4)+Bv;this.B4=Bv;JY=this.B4;JZ=this.Ct;}while(this.B4<Bv)this.Ii();while(
this.Ct>BL)this.Nd();while(this.B4>Bv)this.ME();while(this.Ct<BL)this.MF();var N=
this.Ay;var Ck=this.B4;var Z=[0,this.Bn+this.Dx(Ck,0)];var AF=(A=this.I)[3]-A[1];
var MN=null;var Vd=(A=this.I)[2]-A[0];while(!!N){var D9=Ck;var GO=((D9>=0)&&(D9<=-
1))||((Ck>=JY)&&(Ck<=JZ));var JU=N.GetExtent();var Fg=B.abe(Z,JU.slice(0,2));if(
GO)this.E$=this.Iy;else this.E$=JU[3]-JU[1];var Sg=Z[1];var Sh=Z[1]+this.E$;if(!
B.aaX(Fg,AZ))N.LC(Fg,true);if((GO&&(Sg<AF))&&(Sh>0)){this.Bh=N;this.DU=D9;this.GC=[
Vd,this.E$];(A=this.DV)?A[1].call(A[0],this):null;}N=N.T;Ck+=1;Z=[Z[0],Z[1]+this.
E$];}Ck=this.B4;N=this.Ay;Z=[0,this.Bn+this.Dx(Ck,0)];while(!!N){var D9=Ck;var GO=((
D9>=0)&&(D9<=-1))||((Ck>=JY)&&(Ck<=JZ));if(GO)this.E$=this.Iy;else this.E$=(A=N.
GetExtent())[3]-A[1];var Sg=Z[1];var Sh=Z[1]+this.E$;if(GO&&!((Sg<AF)&&(Sh>0))){
this.Bh=N;this.DU=D9;this.GC=[Vd,this.E$];(A=this.DV)?A[1].call(A[0],this):null;
}if(D9===-1)MN=N;N=N.T;Ck+=1;Z=[Z[0],Z[1]+this.E$];}this.Bh=null;this.DU=-1;this.
CW(MN);this.MT=false;},NF:function(P,aFilter){return null;},Dp:function(F0,Bq,CT
,CR,CS){throw new Error(Rt);},N_:function(P){throw new Error(Ru);},Q3:function(P
,D0){throw new Error(Rv);},B5:function(P){throw new Error(Rw);},X:function(P,D0){
throw new Error(Rx);},Dx:function(RX,RU){return RX*this.Iy;},Na:function(Cz,RU){
return(Cz/this.Iy)|0;},Nd:function(){var N=this.AN;if(!N)return null;if(N===this.
C4)this.CW(null);this.Ct=this.Ct-1;if(!!N.U)N.U.T=null;else this.Ay=null;this.AN=
N.U;N.U=null;N.G=null;N.Bw=null;if(this.Dy<this.Ic){if(!!this.BV)this.BV.U=N;N.T=
this.BV;this.BV=N;this.Dy++;}return N;},MF:function(){var A;var N=this.BV;var GJ=
this.Fq;var Np=++this.Ct;while(!!N&&(((A=N)?A.__proto__:null)!==GJ))N=N.T;if(!!N
){if(!!N.T)N.T.U=N.U;if(!!N.U)N.U.T=N.T;if(this.BV===N)this.BV=N.T;N.T=null;N.U=
null;this.Dy--;}else{N=(C.Bh.isPrototypeOf(A=B._NewObject(GJ,0))?A:null);N.HO(0x1D
);if(!!this.Dy)this.Ic++;}this.E$=this.Iy;this.DU=Np;this.GC=[(A=this.I)[2]-A[0]
,this.E$];this.Bh=N;(A=this.DV)?A[1].call(A[0],this):null;this.Bh=null;this.DU=-
1;if(!!this.AN)this.AN.T=N;N.G=this;N.U=this.AN;this.AN=N;if(!this.Ay)this.Ay=N;
if(Np===-1)this.CW(N);return N;},Ii:function(){var N=this.Ay;if(!N)return null;if(
N===this.C4)this.CW(null);this.B4=this.B4+1;if(!!N.T)N.T.U=null;else this.AN=null;
this.Ay=N.T;N.T=null;N.G=null;N.Bw=null;if(this.Dy<this.Ic){if(!!this.BV)this.BV.
U=N;N.T=this.BV;this.BV=N;this.Dy++;}return N;},ME:function(){var A;var N=this.BV;
var GJ=this.Fq;var No=--this.B4;while(!!N&&(((A=N)?A.__proto__:null)!==GJ))N=N.T;
if(!!N){if(!!N.T)N.T.U=N.U;if(!!N.U)N.U.T=N.T;if(this.BV===N)this.BV=N.T;N.T=null;
N.U=null;this.Dy--;}else{N=(C.Bh.isPrototypeOf(A=B._NewObject(GJ,0))?A:null);N.HO(
0x1D);if(!!this.Dy)this.Ic++;}this.E$=this.Iy;this.DU=No;this.GC=[(A=this.I)[2]-
A[0],this.E$];this.Bh=N;(A=this.DV)?A[1].call(A[0],this):null;this.Bh=null;this.
DU=-1;if(!!this.Ay)this.Ay.U=N;N.G=this;N.T=this.Ay;this.Ay=N;if(!this.AN)this.AN=
N;if(No===-1)this.CW(N);return N;},Sv:function(Ab){this.BS(this.C6.AU[1]);},Sw:function(
Ab){var A;{var K=this.Qe(0,this.Ci-1);var Ig=this.I.slice(0,2);if(K[0]>Ig[0])K=[
].concat(Ig[0],K.slice(1,4));if(K[1]>Ig[1])K=B.abP(K,Ig[1]);var Be=K[1]-this.I[1
];var J0=((A=this.I)[3]-A[1])-(K[3]-K[1]);if(J0>0)J0=0;this.C6.AU=[0,this.Bn];this.
C6.BO=[0,(this.Bn+J0)-Be];this.C6.BN=[0,this.Bn-Be];}},QM:function(value){if(value===
this.C6)return;if(!!value&&!!value.Ih){B.ab5("%s%*%s",O9,value,O_);throw new Error(
Ms);}if(!!this.C6){this.C6.KY=null;this.C6.Ih=null;}this.C6=value;if(!!value){value.
KY=[this,this.Sw];value.Ih=[this,this.Sv];}},BS:function(value){var A;if(value===
this.Bn)return;this.Bn=value;this.BH();this.Ah([0,0,(A=this.I)[2]-A[0],A[3]-A[1]
]);},Ww:function(value){var A;if(value<1)value=1;if(value===this.Iy)return;this.
Iy=value;while(!!this.Ii());this.BH();this.Ah([0,0,(A=this.I)[2]-A[0],A[3]-A[1]]
);},Gp:function(value){var A;if(value<0)value=0;if(value===this.Ci)return;var K=[
0,0,(A=this.I)[2]-A[0],A[3]-A[1]];if(value>this.Ci){K=[].concat(K.slice(0,3),this.
Bn+this.Dx(value,3));K=B.abP(K,this.Bn+this.Dx(this.Ci,3));}else{K=B.abP(K,this.
Bn+this.Dx(value,3));K=[].concat(K.slice(0,3),this.Bn+this.Dx(this.Ci,3));}this.
Ci=value;this.BH();this.Ah(K);},QI:function(value){var A;if(value===this.Fq)return;
this.Fq=value;while(!!this.Ii());this.BV=null;this.Dy=0;this.BH();this.Ah([0,0,(
A=this.I)[2]-A[0],A[3]-A[1]]);},Qe:function(DZ,EN){if(DZ<0)DZ=0;if(EN>=this.Ci)EN=
this.Ci-1;if(DZ>EN)return AD;var K=this.I;var Fg=this.Bn;K=[].concat(K.slice(0,3
),(K[1]+Fg)+this.Dx(EN+1,0));K=B.abP(K,(K[1]+Fg)+this.Dx(DZ,0));return K;},_Init:
function(aArg){C.J._Init.call(this,aArg);this.__proto__=C.DI;this.R(Mt);this.Fq=
B.acf.Text;},_Mark:function(D){var A;C.J._Mark.call(this,D);if((A=this.BV)&&(A._cycle
!=D))A._Mark(A._cycle=D);if((A=this.Bh)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=
this.C6)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.DV)&&((A=A[0])._cycle!=D)
)A._Mark(A._cycle=D);},_className:"Core::VerticalList"};C.BB={BV:null,Bh:null,C6:
null,DV:null,JX:-1,JW:0,Ct:-1,B4:0,Ic:8,Dy:0,Fa:0,GC:B.wf,DU:-1,Bn:0,Iz:24,Ci:0,
Fq:null,MT:false,Jk:function(){return null;},IK:function(B7,Dv,Fx,EO,EP,H5,DJ,Eo
,CT,CR,CS){throw new Error(O$);},Ji:function(B7,H5,DJ,Eo,CT,CR,CS){throw new Error(
Pa);},LX:function(B7,Dv,Fx,EO,EP,DJ,Eo,CT,CR,CS){throw new Error(Pb);},DispatchEvent:
function(A0){var result;result=C.J.DispatchEvent.call(this,A0);return result;},GB:
function(Eq){var A;if(!this.Fq)return;this.MT=true;var Bv=this.Na(0-this.Bn,1);var
BL=this.Na((((A=this.I)[2]-A[0])-this.Bn)-1,2);var Ga=BL-Bv;if(Ga<1)Ga=1;var H7=(
Ga/2)|0;var H8=(Ga/3)|0;if(!H7)H7=1;if(!H8)H8=1;if(Bv<this.B4){Bv=Bv-H7;BL=BL+H8;
}else if(BL>this.Ct){Bv=Bv-H8;BL=BL+H7;}else{Bv=this.B4;BL=this.Ct;}if(Bv>=this.
Ci){Bv=0;BL=-1;}else if(BL<0){Bv=0;BL=-1;}if(BL>=this.Ci)BL=this.Ci-1;if(Bv<0)Bv=
0;var Ij=this.B4;var Ik=this.Ct;var JY=0;var JZ=-1;if(Bv>Ij)Ij=Bv;if(BL<Ik)Ik=BL;
if(Ij<=Ik){while((this.Ct<BL)&&(this.B4<Ij)){this.Ii();this.MF();}while((this.B4>
Bv)&&(this.Ct>Ik)){this.Nd();this.ME();}}else{this.Ct=(this.Ct-this.B4)+Bv;this.
B4=Bv;JY=this.B4;JZ=this.Ct;}while(this.B4<Bv)this.Ii();while(this.Ct>BL)this.Nd(
);while(this.B4>Bv)this.ME();while(this.Ct<BL)this.MF();var N=this.Ay;var Ck=this.
B4;var Z=[this.Bn+this.Dx(Ck,0),0];var Bj=(A=this.I)[2]-A[0];var MN=null;var U$=(
A=this.I)[3]-A[1];while(!!N){var D9=Ck;var GO=((D9>=this.JW)&&(D9<=this.JX))||((
Ck>=JY)&&(Ck<=JZ));var JU=N.GetExtent();var Fg=B.abe(Z,JU.slice(0,2));if(GO)this.
Fa=this.Iz;else this.Fa=JU[2]-JU[0];var Se=Z[0];var Sf=Z[0]+this.Fa;if(!B.aaX(Fg
,AZ))N.LC(Fg,true);if((GO&&(Se<Bj))&&(Sf>0)){this.Bh=N;this.DU=D9;this.GC=[this.
Fa,U$];(A=this.DV)?A[1].call(A[0],this):null;}N=N.T;Ck+=1;Z=[Z[0]+this.Fa,Z[1]];
}Ck=this.B4;N=this.Ay;Z=[this.Bn+this.Dx(Ck,0),0];while(!!N){var D9=Ck;var GO=((
D9>=this.JW)&&(D9<=this.JX))||((Ck>=JY)&&(Ck<=JZ));if(GO)this.Fa=this.Iz;else this.
Fa=(A=N.GetExtent())[2]-A[0];var Se=Z[0];var Sf=Z[0]+this.Fa;if(GO&&!((Se<Bj)&&(
Sf>0))){this.Bh=N;this.DU=D9;this.GC=[this.Fa,U$];(A=this.DV)?A[1].call(A[0],this
):null;}if(D9===-1)MN=N;N=N.T;Ck+=1;Z=[Z[0]+this.Fa,Z[1]];}this.JW=0;this.JX=-1;
this.Bh=null;this.DU=-1;this.CW(MN);this.MT=false;},NF:function(P,aFilter){return null;
},Dp:function(F0,Bq,CT,CR,CS){throw new Error(Pc);},N_:function(P){throw new Error(
Ry);},Q3:function(P,D0){throw new Error(Rz);},B5:function(P){throw new Error(RA);
},X:function(P,D0){throw new Error(RB);},Dx:function(RX,RU){return RX*this.Iz;},
Na:function(Cz,RU){return(Cz/this.Iz)|0;},Nd:function(){var N=this.AN;if(!N)return null;
if(N===this.C4)this.CW(null);this.Ct=this.Ct-1;if(!!N.U)N.U.T=null;else this.Ay=
null;this.AN=N.U;N.U=null;N.G=null;N.Bw=null;if(this.Dy<this.Ic){if(!!this.BV)this.
BV.U=N;N.T=this.BV;this.BV=N;this.Dy++;}return N;},MF:function(){var A;var N=this.
BV;var GJ=this.Fq;var Np=++this.Ct;while(!!N&&(((A=N)?A.__proto__:null)!==GJ))N=
N.T;if(!!N){if(!!N.T)N.T.U=N.U;if(!!N.U)N.U.T=N.T;if(this.BV===N)this.BV=N.T;N.T=
null;N.U=null;this.Dy--;}else{N=(C.Bh.isPrototypeOf(A=B._NewObject(GJ,0))?A:null
);N.HO(0x1D);if(!!this.Dy)this.Ic++;}this.Fa=this.Iz;this.DU=Np;this.GC=[this.Fa
,(A=this.I)[3]-A[1]];this.Bh=N;(A=this.DV)?A[1].call(A[0],this):null;this.Bh=null;
this.DU=-1;if(!!this.AN)this.AN.T=N;N.G=this;N.U=this.AN;this.AN=N;if(!this.Ay)this.
Ay=N;if(Np===-1)this.CW(N);return N;},Ii:function(){var N=this.Ay;if(!N)return null;
if(N===this.C4)this.CW(null);this.B4=this.B4+1;if(!!N.T)N.T.U=null;else this.AN=
null;this.Ay=N.T;N.T=null;N.G=null;N.Bw=null;if(this.Dy<this.Ic){if(!!this.BV)this.
BV.U=N;N.T=this.BV;this.BV=N;this.Dy++;}return N;},ME:function(){var A;var N=this.
BV;var GJ=this.Fq;var No=--this.B4;while(!!N&&(((A=N)?A.__proto__:null)!==GJ))N=
N.T;if(!!N){if(!!N.T)N.T.U=N.U;if(!!N.U)N.U.T=N.T;if(this.BV===N)this.BV=N.T;N.T=
null;N.U=null;this.Dy--;}else{N=(C.Bh.isPrototypeOf(A=B._NewObject(GJ,0))?A:null
);N.HO(0x1D);if(!!this.Dy)this.Ic++;}this.Fa=this.Iz;this.DU=No;this.GC=[this.Fa
,(A=this.I)[3]-A[1]];this.Bh=N;(A=this.DV)?A[1].call(A[0],this):null;this.Bh=null;
this.DU=-1;if(!!this.Ay)this.Ay.U=N;N.G=this;N.T=this.Ay;this.Ay=N;if(!this.AN)this.
AN=N;if(No===-1)this.CW(N);return N;},Sv:function(Ab){this.BS(this.C6.AU[0]);},Sw:
function(Ab){var A;{var K=this.Qe(0,this.Ci-1);var Ig=this.I.slice(0,2);if(K[0]>
Ig[0])K=[].concat(Ig[0],K.slice(1,4));if(K[1]>Ig[1])K=B.abP(K,Ig[1]);var Be=K[0]-
this.I[0];var J0=((A=this.I)[2]-A[0])-(K[2]-K[0]);if(J0>0)J0=0;this.C6.AU=[this.
Bn,0];this.C6.BO=[(this.Bn+J0)-Be,0];this.C6.BN=[this.Bn-Be,0];}},QM:function(value
){if(value===this.C6)return;if(!!value&&!!value.Ih){B.ab5("%s%*%s",O9,value,O_);
throw new Error(Ms);}if(!!this.C6){this.C6.KY=null;this.C6.Ih=null;}this.C6=value;
if(!!value){value.KY=[this,this.Sw];value.Ih=[this,this.Sv];}},BS:function(value
){var A;if(value===this.Bn)return;this.Bn=value;this.BH();this.Ah([0,0,(A=this.I
)[2]-A[0],A[3]-A[1]]);},Wx:function(value){var A;if(value<1)value=1;if(value===this.
Iz)return;this.Iz=value;while(!!this.Ii());this.BH();this.Ah([0,0,(A=this.I)[2]-
A[0],A[3]-A[1]]);},Gp:function(value){var A;if(value<0)value=0;if(value===this.Ci
)return;var K=[0,0,(A=this.I)[2]-A[0],A[3]-A[1]];if(value>this.Ci){K=[].concat(this.
Bn+this.Dx(this.Ci,3),K.slice(1,4));K=B.abN(K,this.Bn+this.Dx(value,3));}else{K=
B.abN(K,this.Bn+this.Dx(this.Ci,3));K=[].concat(this.Bn+this.Dx(value,3),K.slice(
1,4));}this.Ci=value;this.BH();this.Ah(K);},QI:function(value){var A;if(value===
this.Fq)return;this.Fq=value;while(!!this.Ii());this.BV=null;this.Dy=0;this.BH();
this.Ah([0,0,(A=this.I)[2]-A[0],A[3]-A[1]]);},Qe:function(DZ,EN){if(DZ<0)DZ=0;if(
EN>=this.Ci)EN=this.Ci-1;if(DZ>EN)return AD;var K=this.I;var Fg=this.Bn;K=B.abN(
K,(K[0]+Fg)+this.Dx(EN+1,0));K=[].concat((K[0]+Fg)+this.Dx(DZ,0),K.slice(1,4));return K;
},Lw:function(DZ,EN){var A;if(DZ<0)DZ=0;if(DZ>EN)return;if(this.JW>this.JX){this.
JW=DZ;this.JX=EN;}else{if(DZ<this.JW)this.JW=DZ;if(EN>this.JX)this.JX=EN;}var K=[
0,0,(A=this.I)[2]-A[0],A[3]-A[1]];K=[].concat(this.Bn+this.Dx(DZ,0),K.slice(1,4)
);K=B.abN(K,this.Bn+this.Dx(EN+1,0));this.BH();this.Ah(K);},_Init:function(aArg){
C.J._Init.call(this,aArg);this.__proto__=C.BB;this.R(Mt);this.Fq=B.acf.Text;},_Mark:
function(D){var A;C.J._Mark.call(this,D);if((A=this.BV)&&(A._cycle!=D))A._Mark(A.
_cycle=D);if((A=this.Bh)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.C6)&&(A._cycle
!=D))A._Mark(A._cycle=D);if((A=this.DV)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D
);},_className:"Core::HorizontalList"};C.H1={QD:null,NW:null,NT:null,FQ:null,Bk:
null,AB:0,Cc:0,AY:0,Dt:0,CV:0,AU:B.wf,ED:B.wf,C2:B.wf,XR:8,S3:1,Down:false,GY:false
,Ef:false,R6:false,MU:0,DC:function(A2,aClip,aOffset,aOpacity,aBlend){},Cv:function(
A0){var A;var Aj=(C.HA.isPrototypeOf(A0)?A0:null);var Cg=(C.Ld.isPrototypeOf(A0)?
A0:null);var Pv=this.GY;var Gd;var Ff;var Nj;var Dm;var MI;if(!Aj&&!Cg)return null;
Gd=(!!Aj&&Aj.Down)&&!Aj.CV;Ff=(!!Aj&&Aj.Down)&&(Aj.CV>0);Nj=(!!Aj&&Aj.Down)&&(Aj.
CV>this.MU);Dm=!!Aj&&!Aj.Down;MI=!!Cg;if(Gd)this.MU=((A=(Aj.Ef?0:50))&0x80)?A|0xFFFFFF00:
A&0xFF;if(Gd){var J3=0;var GI;this.AB=this.AB|(1<<Aj.Cc);for(GI=this.AB&4095;GI>
0;GI=GI>>1)if(!!(GI&1))J3=J3+1;if(J3===1)this.AB=(this.AB|16777216)|(4096<<Aj.Cc
);}if(Dm&&(this.AB<16777216)){var Ea=this.Kk();var CU=null;if(!!Ea){var SB=(!!this.
U?this.U:this.G);CU=Ea.HB(B.abh(Pd,Aj.DT),Aj.Cc,Aj.Dt,null,SB,0x0);}if(!!CU){var
i;for(i=0;i<10;i++)if(!!(this.AB&(1<<i)))CU.Bh.Cv(B._NewObject(C.HA,0).InitializeDown(
i,Aj.C2,Aj.Dt,AZ,true,Aj.DT));for(i=0;i<10;i++)if(!!(this.AB&(1<<i)))CU.Bh.Cv(B.
_NewObject(C.HA,0).InitializeUp(i,Aj.C2,Aj.C2,0,Aj.Dt,AZ,false,Aj.DT,Aj.DT));}}if(
Dm)this.AB=(this.AB&~(1<<Aj.Cc))|33554432;if(Nj&&(this.AB<16777216))this.AB=this.
AB|67108864;if(Dm&&Aj.Ef)this.AB=this.AB|67108864;if(Dm&&!(this.AB&16777215))this.
AB=0;if(Ff&&(this.AB>=67108864)){var Ea=this.Kk();if(!!Ea)Ea.Q4(null,null,this,0x0
);}if((Ff&&!!(this.AB&16777216))&&!!(this.AB&33554432)){Ff=false;Dm=true;}if(!!Aj&&
!(this.AB&(4096<<Aj.Cc)))return this;if(!!Cg&&!(this.AB&(4096<<Cg.Cc)))return this;
if(Dm&&!(this.AB&16777216))return this;if(((Gd||MI)||Ff)&&((this.AB<16777216)||(
this.AB>=33554432)))return this;if(Dm)this.AB=this.AB&3758100479;if(Dm&&!(this.AB&
16777215))this.AB=0;if(!!Aj){this.Down=Gd||Ff;this.GY=this.Qo(Aj.C2);this.ED=Aj.
ED;this.C2=Aj.C2;this.AU=AZ;this.CV=Aj.CV;this.Dt=Aj.Dt;this.Ef=Aj.Ef;this.Cc=Aj.
Cc;this.AY=Aj.AY;if(Aj.Down&&!Aj.CV)Pv=false;}if(!!Cg){this.Down=true;this.GY=this.
Qo(Cg.C2);this.ED=Cg.ED;this.C2=Cg.C2;this.AU=Cg.AU;this.CV=Cg.CV;this.Dt=Cg.Dt;
this.Cc=Cg.Cc;this.Ef=false;this.AY=Cg.AY;}var R4=this.Down;if(!!Cg)(A=this.QD)?
A[1].call(A[0],this):null;if((!!Aj&&this.Down)&&!this.CV)(A=this.Bk)?A[1].call(A[
0],this):null;if((this.Down&&this.GY)&&!Pv){this.R6=true;(A=this.NT)?A[1].call(A[
0],this):null;}if(this.R6&&(((R4&&!this.GY)&&Pv)||((!R4&&this.GY)&&Pv))){this.R6=
false;(A=this.NW)?A[1].call(A[0],this):null;}if(!!Aj&&!R4)(A=this.FQ)?A[1].call(
A[0],this):null;return this;},HB:function(AQ,Ad,D1,He,F$,H6){var A;if(!!He&&(He!==
this))return null;if((D1<1)||(D1>this.S3))return null;if(this.AB>=33554432)return null;
if((this.AB>=16777216)&&!(this.AB&(4096<<Ad)))return null;if(this.VO()){var H=B.
lb(AQ,this.GetExtent());if(!((H[0]>=H[2])||(H[1]>=H[3]))){var D2=B.aaI(AQ);var Be=
AZ;if(D2[0]<H[0])Be=[H[0]-D2[0],Be[1]];if(D2[0]>=H[2])Be=[(H[2]-D2[0])-1,Be[1]];
if(D2[1]<H[1])Be=[Be[0],H[1]-D2[1]];if(D2[1]>=H[3])Be=[Be[0],(H[3]-D2[1])-1];return B.
_NewObject(C.NB,0).Initialize(this,Be);}}else{var BW=B.abi(9,B.wf,null);var i;BW.
Set(0,B.aaI(AQ));BW.Set(1,BW.Get(0));BW.Set(2,BW.Get(0));BW.Set(3,BW.Get(0));BW.
Set(4,BW.Get(0));BW.Set(1,[AQ[0],BW.Get(1)[1]]);BW.Set(2,[BW.Get(2)[0],AQ[1]]);BW.
Set(3,[AQ[2],BW.Get(3)[1]]);BW.Set(4,[BW.Get(4)[0],AQ[3]]);BW.Set(5,AQ.slice(0,2
));BW.Set(6,[AQ[2],AQ[1]]);BW.Set(7,[AQ[0],AQ[3]]);BW.Set(8,AQ.slice(2,4));for(i=
0;i<9;i=i+1)if(this.Qo(BW.Get(i)))return B._NewObject(C.NB,0).Initialize(this,B.
abe(BW.Get(i),BW.Get(0)));}return null;},QL:function(value){if(value<1)value=1;this.
XR=value;},QK:function(value){if(value<1)value=1;this.S3=value;},Aq:function(value
){if(value)this.AL(0x100000,0x0);else this.AL(0x0,0x100000);},_Init:function(aArg
){C.L0._Init.call(this,aArg);this.__proto__=C.H1;this.E=0x10011B;},_Mark:function(
D){var A;C.L0._Mark.call(this,D);if((A=this.QD)&&((A=A[0])._cycle!=D))A._Mark(A.
_cycle=D);if((A=this.NW)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);if((A=this.NT
)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);if((A=this.FQ)&&((A=A[0])._cycle!=D)
)A._Mark(A._cycle=D);if((A=this.Bk)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);},
_className:"Core::SimpleTouchHandler"};C.Cn={timer:null,KY:null,Ih:null,AB:0,Pl:
0,Kb:0,Pu:B.wf,JT:0,Hg:0,Bg:0,I7:0,K2:0,JS:0,Hf:0,Bf:0,I6:0,I5:0,ED:B.wf,SN:B.wf
,BN:B.wf,BO:B.wf,AU:B.wf,L3:B.wf,Fv:B.wf,L2:B.wf,Od:true,Oc:true,KF:false,FG:false
,FH:false,Fz:false,MU:0,DC:function(A2,aClip,aOffset,aOpacity,aBlend){},Cv:function(
A0){var A;var Aj=(C.HA.isPrototypeOf(A0)?A0:null);var Cg=(C.Ld.isPrototypeOf(A0)?
A0:null);var CE=(C.NA.isPrototypeOf(A0)?A0:null);var Gd;var Ff;var Nj;var Dm;var
MI;Gd=(!!Aj&&Aj.Down)&&!Aj.CV;Ff=(!!Aj&&Aj.Down)&&(Aj.CV>0);Nj=(!!Aj&&Aj.Down)&&(
Aj.CV>this.MU);Dm=!!Aj&&!Aj.Down;MI=!!Cg;if(Gd)this.MU=((A=(Aj.Ef?0:50))&0x80)?A|
0xFFFFFF00:A&0xFF;if(Gd){var J3=0;var GI;this.AB=this.AB|(1<<Aj.Cc);for(GI=this.
AB&4095;GI>0;GI=GI>>1)if(!!(GI&1))J3=J3+1;if(J3===1)this.AB=(this.AB|16777216)|(
4096<<Aj.Cc);}if(Dm&&(this.AB<16777216)){var Ea=this.Kk();var CU=null;if(!!Ea){var
SB=(!!this.U?this.U:this.G);CU=Ea.HB(B.abh(Pd,Aj.DT),Aj.Cc,Aj.Dt,null,SB,0x0);}if(
!!CU){var i;for(i=0;i<10;i++)if(!!(this.AB&(1<<i)))CU.Bh.Cv(B._NewObject(C.HA,0).
InitializeDown(i,Aj.C2,Aj.Dt,AZ,true,Aj.DT));for(i=0;i<10;i++)if(!!(this.AB&(1<<
i)))CU.Bh.Cv(B._NewObject(C.HA,0).InitializeUp(i,Aj.C2,Aj.C2,0,Aj.Dt,AZ,false,Aj.
DT,Aj.DT));}}if(Dm)this.AB=(this.AB&~(1<<Aj.Cc))|33554432;if(Nj&&(this.AB<16777216
))this.AB=this.AB|67108864;if(Dm&&Aj.Ef)this.AB=this.AB|67108864;if(Dm&&!(this.AB&
16777215))this.AB=0;if(Ff&&(this.AB>=67108864)){var Ea=this.Kk();if(!!Ea)Ea.Q4(null
,null,this,0x0);}if((Ff&&!!(this.AB&16777216))&&!!(this.AB&33554432)){Ff=false;Dm=
true;}if(!!Aj&&!(this.AB&(4096<<Aj.Cc)))return this;if(!!Cg&&!(this.AB&(4096<<Cg.
Cc)))return this;if(Dm&&!(this.AB&16777216))return this;if(((Gd||MI)||Ff)&&((this.
AB<16777216)||(this.AB>=33554432)))return this;if(Dm)this.AB=this.AB&3758100479;
if(Dm&&!(this.AB&16777215))this.AB=0;if(!!CE&&(CE.Of===this))return null;if((!!CE&&
CE.Down)&&(this.Fz||!this.KF))return null;if((!!CE&&CE.Down)&&!B.wa(this.I,this.
G.VW(CE.DT)))return null;if((!!CE&&!CE.Down)&&(!this.Fz||(this.Pl!==CE.Cc)))return null;
if((!Aj&&!Cg)&&!CE)return null;if(!!Aj){this.Fz=Gd||Ff;this.Pl=Aj.Cc;this.ED=Aj.
ED;}if(!!Cg)this.Pl=Cg.Cc;if(!!CE){this.Fz=CE.Down;this.Pl=CE.Cc;}if(!!CE&&CE.Down
){this.SC();this.Bf=(((CE.AY-this.I5)*0.001)*this.Hf)+this.Bf;this.Bg=(((CE.AY-this.
K2)*0.001)*this.Hg)+this.Bg;if(this.FG)this.Bf=0;if(this.FH)this.Bg=0;this.Hf=0;
this.Hg=0;this.FG=false;this.FH=false;this.Pu=this.AU;this.Kb=CE.AY;return this;
}if(Gd){this.SC();this.Bf=(((Aj.AY-this.I5)*0.001)*this.Hf)+this.Bf;this.Bg=(((Aj.
AY-this.K2)*0.001)*this.Hg)+this.Bg;if(this.FG||!this.KF)this.Bf=0;if(this.FH||!
this.KF)this.Bg=0;this.Hf=0;this.Hg=0;this.FG=false;this.FH=false;if(!this.KF){this.
KF=true;(A=this.KY)?A[1].call(A[0],this):null;}this.Pu=this.AU;this.Kb=Aj.AY;}if(
!!Cg){var Ao=B.abe(Cg.C2,Cg.ED);var AW=this.AU;if(this.Oc)AW=[this.Pu[0]+Ao[0],AW[
1]];if(this.Od)AW=[AW[0],this.Pu[1]+Ao[1]];if(AW[0]<this.BO[0])AW=[this.BO[0]+(((
AW[0]-this.BO[0])/2)|0),AW[1]];else if(AW[0]>this.BN[0])AW=[this.BN[0]+(((AW[0]-
this.BN[0])/2)|0),AW[1]];if(AW[1]<this.BO[1])AW=[AW[0],this.BO[1]+(((AW[1]-this.
BO[1])/2)|0)];else if(AW[1]>this.BN[1])AW=[AW[0],this.BN[1]+(((AW[1]-this.BN[1])
/2)|0)];if(!B.aaX(AW,this.AU)){this.SN=B.abe(AW,this.AU);this.AU=AW;(A=this.Ih)?
A[1].call(A[0],this):null;}}if((!!CE&&!CE.Down)&&((CE.AY-this.Kb)>=200)){this.Bf=
0;this.Bg=0;}if(Ff&&((Aj.AY-this.Kb)>=200)){this.Bf=0;this.Bg=0;}if(!!Cg&&(Cg.AY>
this.Kb)){var Ao=Cg.AU;var UO=1000/(Cg.AY-this.Kb);var Ie=0;var If=0;if(this.Oc)
Ie=Ao[0]*UO;if(this.Od)If=Ao[1]*UO;if((Ie*this.Bf)<0)this.Bf=0;if((If*this.Bg)<0
)this.Bg=0;this.Bf=(this.Bf+Ie)*0.5;this.Bg=(this.Bg+If)*0.5;this.Kb=Cg.AY;}if(!
Dm&&!CE)return this;if(!!Aj&&Aj.Ef){this.Bf=0;this.Bg=0;}if((this.AU[0]<=this.BO[
0])||(this.AU[0]>=this.BN[0]))this.Bf=0;else if(!this.Bf){var Ba=this.AU[0];var Bi=
this.BO[0]+this.L3[0];var A9=this.BN[0]-this.L2[0];if(Ba<Bi)A9=this.BO[0];else if(
Ba>A9)Bi=this.BN[0];else if(this.Fv[0]<=1){Bi=Ba;A9=Ba;}else{var GL=(A9-Ba)%this.
Fv[0];A9=(Ba-this.Fv[0])+GL;Bi=Ba+GL;if(A9<this.BO[0])A9=this.BO[0];if(Bi>this.BN[
0])Bi=this.BN[0];}if((Bi-Ba)<=(Ba-A9))Ba=Bi;else Ba=A9;if(Ba!==this.AU[0]){var C_=
Ba-this.AU[0];if(C_>0)this.Bf=Math.sqrt((C_*2)*5000)+20;if(C_<0)this.Bf=-Math.sqrt((-
C_*2)*5000)-20;this.Hf=(400-(this.Bf*this.Bf))/(2*C_);this.JS=Ba;}}else{var AaL=
this.Bf*this.Bf;var C_=AaL/10000;var Ba=this.AU[0];if(this.Bf>0)Ba=Ba+(C_|0);if(
this.Bf<0)Ba=Ba-(C_|0);if(Ba>this.BN[0])Ba=this.BN[0];else if(Ba<this.BO[0])Ba=this.
BO[0];var U9=Ba;var Bi=this.BO[0]+this.L3[0];var A9=this.BN[0]-this.L2[0];if(Ba<
Bi)A9=this.BO[0];else if(Ba>A9)Bi=this.BN[0];else if(this.Fv[0]<=1){Bi=Ba;A9=Ba;
}else{var GL=(A9-Ba)%this.Fv[0];A9=(Ba-this.Fv[0])+GL;Bi=Ba+GL;if(A9<this.BO[0])
A9=this.BO[0];if(Bi>this.BN[0])Bi=this.BN[0];}if(this.Bf>0){if(A9<=this.AU[0])Ba=
Bi;else if((Ba-A9)<(Bi-Ba))Ba=A9;else Ba=Bi;}else if(Bi>=this.AU[0])Ba=A9;else if((
Ba-A9)>(Bi-Ba))Ba=Bi;else Ba=A9;if(Ba!==this.AU[0]){C_=Ba-this.AU[0];if(Ba!==U9){
var In=Ba-U9;if(In>0)this.Bf=this.Bf+Math.sqrt((In*2)*5000);if(In<0)this.Bf=this.
Bf-Math.sqrt((-In*2)*5000);}if(this.Bf>0)this.Bf=this.Bf+20;if(this.Bf<0)this.Bf=
this.Bf-20;this.Hf=(400-(this.Bf*this.Bf))/(2*C_);this.JS=Ba;}else this.Bf=0;}if((
this.AU[1]<=this.BO[1])||(this.AU[1]>=this.BN[1]))this.Bg=0;else if(!this.Bg){var
Bb=this.AU[1];var Bi=this.BO[1]+this.L3[1];var A9=this.BN[1]-this.L2[1];if(Bb<Bi
)A9=this.BO[1];else if(Bb>A9)Bi=this.BN[1];else if(this.Fv[1]<=1){Bi=Bb;A9=Bb;}else{
var GL=(A9-Bb)%this.Fv[1];A9=(Bb-this.Fv[1])+GL;Bi=Bb+GL;if(A9<this.BO[1])A9=this.
BO[1];if(Bi>this.BN[1])Bi=this.BN[1];}if((Bi-Bb)<=(Bb-A9))Bb=Bi;else Bb=A9;if(Bb
!==this.AU[1]){var C_=Bb-this.AU[1];if(C_>0)this.Bg=Math.sqrt((C_*2)*5000)+20;if(
C_<0)this.Bg=-Math.sqrt((-C_*2)*5000)-20;this.Hg=(400-(this.Bg*this.Bg))/(2*C_);
this.JT=Bb;}}else{var AaM=this.Bg*this.Bg;var C_=AaM/10000;var Bb=this.AU[1];if(
this.Bg>0)Bb=Bb+(C_|0);if(this.Bg<0)Bb=Bb-(C_|0);if(Bb>this.BN[1])Bb=this.BN[1];
else if(Bb<this.BO[1])Bb=this.BO[1];var U_=Bb;var Bi=this.BO[1]+this.L3[1];var A9=
this.BN[1]-this.L2[1];if(Bb<Bi)A9=this.BO[1];else if(Bb>A9)Bi=this.BN[1];else if(
this.Fv[1]<=1){Bi=Bb;A9=Bb;}else{var GL=(A9-Bb)%this.Fv[1];A9=(Bb-this.Fv[1])+GL;
Bi=Bb+GL;if(A9<this.BO[1])A9=this.BO[1];if(Bi>this.BN[1])Bi=this.BN[1];}if(this.
Bg>0){if(A9<=this.AU[1])Bb=Bi;else if((Bb-A9)<(Bi-Bb))Bb=A9;else Bb=Bi;}else if(
Bi>=this.AU[1])Bb=A9;else if((Bb-A9)>(Bi-Bb))Bb=Bi;else Bb=A9;if(Bb!==this.AU[1]
){C_=Bb-this.AU[1];if(Bb!==U_){var In=Bb-U_;if(In>0)this.Bg=this.Bg+Math.sqrt((In
*2)*5000);if(In<0)this.Bg=this.Bg-Math.sqrt((-In*2)*5000);}if(this.Bg>0)this.Bg=
this.Bg+20;if(this.Bg<0)this.Bg=this.Bg-20;this.Hg=(400-(this.Bg*this.Bg))/(2*C_
);this.JT=Bb;}else this.Bg=0;}if(!!Aj)this.I5=Aj.AY;if(!!CE)this.I5=CE.AY;this.K2=
this.I5;this.I6=this.AU[0];this.I7=this.AU[1];this.AaO();return this;},HB:function(
AQ,Ad,D1,He,F$,H6){var A;if(!!He&&(He!==this))return null;if(this.AB>=33554432)return null;
if((this.AB>=16777216)&&!(this.AB&(4096<<Ad)))return null;if(!this.Od&&!!(H6&0x3
))return null;if(!this.Oc&&!!(H6&0xC))return null;var H=B.lb(AQ,this.I);if(!((H[
0]>=H[2])||(H[1]>=H[3]))){var D2=B.aaI(AQ);var Be=AZ;if(D2[0]<H[0])Be=[H[0]-D2[0
],Be[1]];if(D2[0]>=H[2])Be=[(H[2]-D2[0])-1,Be[1]];if(D2[1]<H[1])Be=[Be[0],H[1]-D2[
1]];if(D2[1]>=H[3])Be=[Be[0],(H[3]-D2[1])-1];return B._NewObject(C.NB,0).Initialize(
this,Be);}return null;},SC:function(){if(!!this.timer){B.z9([this,this.EA],this.
timer,0);this.timer=null;}},AaO:function(){this.timer=B._GetAutoObject(B.acg.Ix);
B.zV([this,this.EA],this.timer,0);},EA:function(Ab){var A;if(!this.timer)return;
var K4=(this.timer.AY-this.I5)*0.001;var K5=(this.timer.AY-this.K2)*0.001;var AaQ=
K4*K4;var AaR=K5*K5;var Ie=(this.Hf*K4)+this.Bf;var If=(this.Hg*K5)+this.Bg;var AW=[((((
this.Hf*0.5)*AaQ)+(this.Bf*K4))+this.I6)|0,((((this.Hg*0.5)*AaR)+(this.Bg*K5))+this.
I7)|0];if(this.FG&&(K4>=0.5)){AW=[this.JS,AW[1]];this.Bf=0;this.Hf=0;this.I6=AW[
0];this.FG=false;}else if(this.FG){var DM=1-Math.pow(1-(K4/0.5),5);AW=[(this.I6+((
this.JS-this.I6)*DM))|0,AW[1]];}if(this.FH&&(K5>=0.5)){AW=[AW[0],this.JT];this.Bg=
0;this.Hg=0;this.I7=AW[1];this.FH=false;}else if(this.FH){var DM=1-Math.pow(1-(K5
/0.5),5);AW=[AW[0],(this.I7+((this.JT-this.I7)*DM))|0];}if(((this.Bf>0)&&(Ie<0))||((
this.Bf<0)&&(Ie>0))){Ie=0;AW=[this.AU[0],AW[1]];}if(((this.Bg>0)&&(If<0))||((this.
Bg<0)&&(If>0))){If=0;AW=[AW[0],this.AU[1]];}if(!this.FG&&(AW[0]<this.BO[0])){this.
I6=AW[0];this.JS=this.BO[0];this.I5=this.timer.AY;this.FG=true;}else if(!this.FG&&(
AW[0]>this.BN[0])){this.I6=AW[0];this.JS=this.BN[0];this.I5=this.timer.AY;this.FG=
true;}if(!this.FH&&(AW[1]<this.BO[1])){this.I7=AW[1];this.JT=this.BO[1];this.K2=
this.timer.AY;this.FH=true;}else if(!this.FH&&(AW[1]>this.BN[1])){this.I7=AW[1];
this.JT=this.BN[1];this.K2=this.timer.AY;this.FH=true;}if(((!this.FG&&!!this.Bf)&&(
Ie>-20))&&(Ie<20)){AW=[this.JS,AW[1]];this.Bf=0;this.Hf=0;this.I6=AW[0];}if(((!this.
FH&&!!this.Bg)&&(If>-20))&&(If<20)){AW=[AW[0],this.JT];this.Bg=0;this.Hg=0;this.
I7=AW[1];}if(!B.aaX(AW,this.AU)){this.SN=B.abe(AW,this.AU);this.AU=AW;(A=this.Ih
)?A[1].call(A[0],this):null;}if(((!this.Bf&&!this.Bg)&&!this.FG)&&!this.FH){this.
SC();this.KF=false;}},WS:function(value){if(value[0]<0)value=[0,value[1]];if(value[
1]<0)value=[value[0],0];this.L3=value;},Tr:function(value){if(value[0]<0)value=[
0,value[1]];if(value[1]<0)value=[value[0],0];this.Fv=value;},WR:function(value){
if(value[0]<0)value=[0,value[1]];if(value[1]<0)value=[value[0],0];this.L2=value;
},_Init:function(aArg){C.By._Init.call(this,aArg);this.__proto__=C.Cn;this.E=0x10011B;
},_Mark:function(D){var A;C.By._Mark.call(this,D);if((A=this.timer)&&(A._cycle!=
D))A._Mark(A._cycle=D);if((A=this.KY)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);
if((A=this.Ih)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);},_className:"Core::SlideTouchHandler"
};C.IA={T:null,FQ:null,Bk:null,J9:0,AY:0,TE:0,C3:148,Cu:0,Bt:0,Bm:true,Down:false
,Q2:false,BC:function(aArg){var A;var AK=(C.J.isPrototypeOf(A=this.M)?A:null);if(
!AK)throw new Error(RC);this.T=AK.Px;AK.Px=this;},Cv:function(A0){var A;if(!!A0&&
A0.VT(this.C3)){this.Down=A0.Down;this.Cu=A0.Cu;this.Bt=A0.Bt;this.AY=A0.AY;if(A0.
Down){this.TE=this.J9;this.Q2=this.J9>0;if(!this.Q2)(A=this.Bk)?A[1].call(A[0],this
):null;this.J9=this.J9+1;return true;}if(!A0.Down){this.Q2=this.J9>1;this.TE=this.
J9-1;this.J9=0;(A=this.FQ)?A[1].call(A[0],this):null;return true;}}return false;
},_Init:function(aArg){this.__proto__=C.IA;this.BC(aArg);B.h7++;},_Done:function(
){this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((
A=this.T)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.FQ)&&((A=A[0])._cycle!=D
))A._Mark(A._cycle=D);if((A=this.Bk)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);if((
A=this.M)&&(A._cycle!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:
"Core::KeyPressHandler"};C.NB={Bh:null,Lc:0,AU:B.wf,Initialize:function(P,aOffset
){this.Bh=P;this.AU=aOffset;this.Lc=(aOffset[0]*aOffset[0])+(aOffset[1]*aOffset[
1]);return this;},_Init:function(aArg){this.__proto__=C.NB;B.h7++;},_Done:function(
){this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((
A=this.Bh)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.M)&&(A._cycle!=D))A._Mark(
A._cycle=D);},M:null,_cycle:0,_observers:null,_className:"Core::CursorHit"};C.NN={
J6:null,D6:B.wg,AS:B.wg,isEmpty:false,_Init:function(aArg){this.__proto__=C.NN;B.
h7++;},_Done:function(){this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:
function(D){var A;if((A=this.J6)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.M
)&&(A._cycle!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:
"Core::LayoutContext"};C.NO={M$:B.wf,M_:B.wf,M9:B.wf,M8:B.wf,_Init:function(aArg
){C.NN._Init.call(this,aArg);this.__proto__=C.NO;},_className:"Core::LayoutQuadContext"
};C.PY={AK:null,T:null,Ev:null,Ez:null,C0:null,J7:null,_Init:function(aArg){this.
__proto__=C.PY;B.h7++;},_Done:function(){this.__proto__=null;B.h7--;},_ReInit:function(
){},_Mark:function(D){var A;if((A=this.AK)&&(A._cycle!=D))A._Mark(A._cycle=D);if((
A=this.T)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.Ev)&&(A._cycle!=D))A._Mark(
A._cycle=D);if((A=this.Ez)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.C0)&&(A.
_cycle!=D))A._Mark(A._cycle=D);if((A=this.J7)&&(A._cycle!=D))A._Mark(A._cycle=D);
if((A=this.M)&&(A._cycle!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null
,_className:"Core::DialogContext"};C.TG={Et:null,AN:null,Ay:null,UP:false,Z$:function(
){if(!this.Et)return;var Fj=this.Et;this.Et.Fi=null;this.Et=null;B.pe([this,this.
Su],this);Fj.S6(this);},Aar:function(Ab){if(!!this.Et)return;if(!this.Ay)return;
this.Et=this.Ay;this.Ay=this.Ay.T;if(!!this.Ay)this.Ay.U=null;else this.AN=null;
this.Et.T=null;this.UP=true;this.Et.Kz(this);this.UP=false;},Aax:function(Ab){B.
pe([this,this.Aar],this);},Aaw:function(Ab){B.pe([this,this.Aax],this);},Su:function(
Ab){B.pe([this,this.Aaw],this);},Vy:function(Cj){if(!Cj||!Cj.Fi)return;if(Cj.Fi!==
this)throw new Error(RD);var Vf=false;if(this.Et===Cj){this.Et=null;Vf=true;B.pe([
this,this.Su],this);}else{if(!!Cj.T)Cj.T.U=Cj.U;else this.AN=Cj.U;if(!!Cj.U)Cj.U.
T=Cj.T;else this.Ay=Cj.T;Cj.U=null;Cj.T=null;}Cj.Fi=null;if(Vf)Cj.S5(this);},XV:
function(Cj,Z4){if(!Cj)return;if(!!Cj.Fi)throw new Error(RE);Cj.Fi=this;if(Z4){Cj.
T=this.Ay;if(!!this.Ay)this.Ay.U=Cj;else this.AN=Cj;this.Ay=Cj;}else{Cj.U=this.AN;
if(!!this.AN)this.AN.T=Cj;else this.Ay=Cj;this.AN=Cj;}if(!this.Et)B.pe([this,this.
Su],this);},_Init:function(aArg){this.__proto__=C.TG;B.h7++;},_Done:function(){this.
__proto__=null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((A=this.
Et)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.AN)&&(A._cycle!=D))A._Mark(A._cycle=
D);if((A=this.Ay)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.M)&&(A._cycle!=D
))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:"Core::TaskQueue"
};C.L6={Fi:null,U:null,T:null,S6:function(My){},S5:function(My){},Kz:function(My
){this.SL();},Gh:function(){if(!!this.Fi&&(this.Fi.Et===this))this.Fi.Z$();},SL:
function(){if(!!this.Fi)this.Fi.Vy(this);},Qm:function(){return!!this.Fi&&(this.
Fi.Et===this);},_Init:function(aArg){this.__proto__=C.L6;B.h7++;},_Done:function(
){this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((
A=this.Fi)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.U)&&(A._cycle!=D))A._Mark(
A._cycle=D);if((A=this.T)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.M)&&(A._cycle
!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:"Core::Task"
};C.HZ={resource:null,Fo:function(){this.resource=null;},BC:function(aArg){this.
resource=aArg;},_Init:function(aArg){this.__proto__=C.HZ;this.BC(aArg);B.h7++;},
_Done:function(){this.Fo();this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:
function(D){var A;if((A=this.M)&&(A._cycle!=D))A._Mark(A._cycle=D);},M:null,_cycle:
0,_observers:null,_className:"Core::Resource"};C.Timer={G3:null,timer:null,AY:0,
Period:1000,Nv:0,Bm:false,Fo:function(){var tmp=this.timer;if(!!tmp)tmp.DestroyTimer(
);this.timer=null;},PC:function(aBegin,aPeriod){if(aBegin<0)aBegin=0;if(aPeriod<
0)aPeriod=0;var tmp=this.timer;if(!tmp&&((aBegin>0)||(aPeriod>0)))tmp=B.z8(this,
this.Trigger);if(!!tmp){tmp.ResetTimer();tmp.StartTimer(aBegin,aPeriod);}this.timer=
tmp;},El:function(value){if(value<0)value=0;if(value===this.Period)return;this.Period=
value;if(this.Bm)this.PC(this.Nv,value);},IE:function(value){if(value<0)value=0;
if(value===this.Nv)return;this.Nv=value;if(this.Bm)this.PC(value,this.Period);},
Aq:function(value){if(value===this.Bm)return;this.Bm=value;if(value)this.PC(this.
Nv,this.Period);else this.PC(0,0);this.AY=this.Lq();},Lq:function(){var ticksCount=
0;ticksCount=((new Date).getTime()-B.v$)|0;return ticksCount;},Trigger:function(
){var A;this.AY=this.Lq();if(!this.Period)this.Aq(false);(A=this.G3)?A[1].call(A[
0],this):null;},_Init:function(aArg){this.__proto__=C.Timer;B.h7++;},_Done:function(
){this.Fo();this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:function(D){
var A;if((A=this.G3)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);if((A=this.M)&&(A.
_cycle!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:"Core::Timer"
};C.Acx={Cy:0x1,Abd:0x2,AbI:0x4,Acv:0x8,Bm:0x10,Ach:0x20,AbJ:0x40,AbV:0x80,AbH:0x100
,AbQ:0x200,AbB:0x400,Ab5:0x800,TI:0x1000,Acw:0x2000,AbZ:0x4000,Ab0:0x8000,Abu:0x10000
,AbY:0x20000,Acd:0x40000,Abv:0x80000,Ab4:0x100000,Abt:0x200000};C.CI={Ab6:0x1,Ab7:
0x2,Aa$:0x4,Aba:0x8,Abb:0x10,Aa_:0x20};C.AbL={S4:0,Acs:1,Abj:2,E5:3,Ab9:4,Act:5,
Acu:6,Abk:7,Abl:8,AbS:9,AbR:10,Ab$:11,Ab_:12};C.Jh={S4:0,Acq:1,Left:2,Abh:3,X0:4
,Vu:5,Acr:6,Right:7,Abi:8};C.KeyCode={NoKey:0,Ok:1,Exit:2,Menu:3,Up:4,Down:5,Left:
6,Right:7,PageUp:8,PageDown:9,Key0:10,Key1:11,Key2:12,Key3:13,Key4:14,Key5:15,Key6:
16,Key7:17,Key8:18,Key9:19,Red:20,Green:21,Blue:22,Yellow:23,White:24,Magenta:25
,F1:26,F2:27,F3:28,F4:29,F5:30,F6:31,F7:32,F8:33,F9:34,F10:35,ChannelUp:36,ChannelDown:
37,Display:38,SkipPrev:39,SkipNext:40,Home:41,End:42,Insert:43,Delete:44,Clear:45
,VolumeUp:46,VolumeDown:47,Show:48,Hide:49,Play:50,Pause:51,Record:52,Stop:53,Rev:
54,Fwd:55,SlowRev:56,SlowFwd:57,SkipBwd:58,SkipFwd:59,Repeat:60,Eject:61,Help:62
,TV:63,DVD:64,VCR:65,EPG:66,OSD:67,Text:68,PIP:69,Audio:70,Clock:71,Timer:72,Navigation:
73,Karaoke:74,Game:75,Subtitle:76,Zoom:77,Index:78,Info:79,Power:80,Setup:81,Angle:
82,Mode:83,Mute:84,User0:85,User1:86,User2:87,User3:88,User4:89,User5:90,User6:91
,User7:92,User8:93,User9:94,User10:95,User11:96,User12:97,User13:98,User14:99,User15:
100,User16:101,User17:102,User18:103,User19:104,KeyA:105,KeyB:106,KeyC:107,KeyD:
108,KeyE:109,KeyF:110,KeyG:111,KeyH:112,KeyI:113,KeyJ:114,KeyK:115,KeyL:116,KeyM:
117,KeyN:118,KeyO:119,KeyP:120,KeyQ:121,KeyR:122,KeyS:123,KeyT:124,KeyU:125,KeyV:
126,KeyW:127,KeyX:128,KeyY:129,KeyZ:130,Space:131,Plus:132,Minus:133,Multiply:134
,Divide:135,Equals:136,Period:137,Comma:138,Colon:139,Semicolon:140,AlphaKeys:141
,AlphaOrDigitKeys:142,DigitKeys:143,HexDigitKeys:144,CharacterKeys:145,ControlKeys:
146,CursorKeys:147,AnyKey:148,Enter:149,Escape:150,Backspace:151,Tab:152,CtrlKeyA:
153,CtrlKeyB:154,CtrlKeyC:155,CtrlKeyD:156,CtrlKeyE:157,CtrlKeyF:158,CtrlKeyG:159
,CtrlKeyH:160,CtrlKeyI:161,CtrlKeyJ:162,CtrlKeyK:163,CtrlKeyL:164,CtrlKeyM:165,CtrlKeyN:
166,CtrlKeyO:167,CtrlKeyP:168,CtrlKeyQ:169,CtrlKeyR:170,CtrlKeyS:171,CtrlKeyT:172
,CtrlKeyU:173,CtrlKeyV:174,CtrlKeyW:175,CtrlKeyX:176,CtrlKeyY:177,CtrlKeyZ:178,CtrlSpace:
179,CtrlKey0:180,CtrlKey1:181,CtrlKey2:182,CtrlKey3:183,CtrlKey4:184,CtrlKey5:185
,CtrlKey6:186,CtrlKey7:187,CtrlKey8:188,CtrlKey9:189,CtrlF1:190,CtrlF2:191,CtrlF3:
192,CtrlF4:193,CtrlF5:194,CtrlF6:195,CtrlF7:196,CtrlF8:197,CtrlF9:198,CtrlF10:199
,CtrlEnter:200,CtrlEscape:201,CtrlUp:202,CtrlDown:203,CtrlLeft:204,CtrlRight:205
,CtrlPageUp:206,CtrlPageDown:207,CtrlBackspace:208,CtrlInsert:209,CtrlDelete:210
,CtrlHome:211,CtrlEnd:212,CtrlTab:213,CtrlShiftKeyA:214,CtrlShiftKeyB:215,CtrlShiftKeyC:
216,CtrlShiftKeyD:217,CtrlShiftKeyE:218,CtrlShiftKeyF:219,CtrlShiftKeyG:220,CtrlShiftKeyH:
221,CtrlShiftKeyI:222,CtrlShiftKeyJ:223,CtrlShiftKeyK:224,CtrlShiftKeyL:225,CtrlShiftKeyM:
226,CtrlShiftKeyN:227,CtrlShiftKeyO:228,CtrlShiftKeyP:229,CtrlShiftKeyQ:230,CtrlShiftKeyR:
231,CtrlShiftKeyS:232,CtrlShiftKeyT:233,CtrlShiftKeyU:234,CtrlShiftKeyV:235,CtrlShiftKeyW:
236,CtrlShiftKeyX:237,CtrlShiftKeyY:238,CtrlShiftKeyZ:239,CtrlShiftSpace:240,CtrlShiftKey0:
241,CtrlShiftKey1:242,CtrlShiftKey2:243,CtrlShiftKey3:244,CtrlShiftKey4:245,CtrlShiftKey5:
246,CtrlShiftKey6:247,CtrlShiftKey7:248,CtrlShiftKey8:249,CtrlShiftKey9:250,CtrlShiftF1:
251,CtrlShiftF2:252,CtrlShiftF3:253,CtrlShiftF4:254,CtrlShiftF5:255,CtrlShiftF6:
256,CtrlShiftF7:257,CtrlShiftF8:258,CtrlShiftF9:259,CtrlShiftF10:260,CtrlShiftEnter:
261,CtrlShiftEscape:262,CtrlShiftUp:263,CtrlShiftDown:264,CtrlShiftLeft:265,CtrlShiftRight:
266,CtrlShiftPageUp:267,CtrlShiftPageDown:268,CtrlShiftBackspace:269,CtrlShiftInsert:
270,CtrlShiftDelete:271,CtrlShiftHome:272,CtrlShiftEnd:273,CtrlShiftTab:274,AltF1:
275,AltF2:276,AltF3:277,AltF4:278,AltF5:279,AltF6:280,AltF7:281,AltF8:282,AltF9:
283,AltF10:284,AltEnter:285,AltEscape:286,AltUp:287,AltDown:288,AltLeft:289,AltRight:
290,AltPageUp:291,AltPageDown:292,AltBackspace:293,AltInsert:294,AltDelete:295,AltHome:
296,AltEnd:297,AltTab:298,AltShiftF1:299,AltShiftF2:300,AltShiftF3:301,AltShiftF4:
302,AltShiftF5:303,AltShiftF6:304,AltShiftF7:305,AltShiftF8:306,AltShiftF9:307,AltShiftF10:
308,AltShiftEnter:309,AltShiftEscape:310,AltShiftUp:311,AltShiftDown:312,AltShiftLeft:
313,AltShiftRight:314,AltShiftPageUp:315,AltShiftPageDown:316,AltShiftBackspace:
317,AltShiftInsert:318,AltShiftDelete:319,AltShiftHome:320,AltShiftEnd:321,AltShiftTab:
322,ShiftF1:323,ShiftF2:324,ShiftF3:325,ShiftF4:326,ShiftF5:327,ShiftF6:328,ShiftF7:
329,ShiftF8:330,ShiftF9:331,ShiftF10:332,ShiftEnter:333,ShiftEscape:334,ShiftUp:
335,ShiftDown:336,ShiftLeft:337,ShiftRight:338,ShiftPageUp:339,ShiftPageDown:340
,ShiftBackspace:341,ShiftInsert:342,ShiftDelete:343,ShiftHome:344,ShiftEnd:345,ShiftTab:
346};C.Ab8={AcB:0x1,Acy:0x2,Acz:0x4,AcA:0x8,AbU:0x10,AbK:0x20};
C._Init=function(){C.L0.__proto__=C.Bh;C.By.__proto__=C.Bh;C.J.__proto__=C.By;C.Root.
__proto__=C.J;C.KeyEvent.__proto__=C.Event;C.NA.__proto__=C.Event;C.HA.__proto__=
C.Event;C.Ld.__proto__=C.Event;C.HX.__proto__=C.By;C.DI.__proto__=C.J;C.BB.__proto__=
C.J;C.H1.__proto__=C.L0;C.Cn.__proto__=C.By;C.NO.__proto__=C.NN;};C._ReInit=function(
){};C.EM=function(D){};return C;})();

/* Embedded Wizard */