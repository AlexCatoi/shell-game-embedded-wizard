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
var A0=[0,0];var AG=[0,0,0,0];var Bu="The view does not belong to this group";var
BD=[800,480];var Eo="The dialog component is already presented";var Hd="The dialog component is actually not presented";
var JB="No fader to perform the fade-in/out operation";var KP="Trying to use the same fader twice";
var Mz="Trying to fade-in/out a group which belongs to another owner";var C7="No view to restack";
var IO="View is not in this group";var JC="No view to remove";var Rw="No view to add";
var Rx="View already in a group";var Ry="Recursive invalidate during active update cycle.";
var MA=[-8,-8,9,9];var Rz="The method SwitchToDialog() is not available in Core::VerticalList.";
var RA="The method DismissDialog() is not available in Core::VerticalList.";var RB=
"The method PresentDialog() is not available in Core::VerticalList.";var RC="The method FadeGroup() is not available in Core::VerticalList.";
var RD="The method RestackTop() is not available in Core::VerticalList.";var RE=
"The method Restack() is not available in Core::VerticalList.";var RF="The method Remove() is not available in Core::VerticalList.";
var RG="The method Add() is not available in Core::VerticalList.";var Ph="The Slide Touch Handler:";
var Pi="is already connected with a view.";var MB="The Slide Touch Handler is already connected with a view to scroll "+
"its content.";var MC=[0,0,170,120];var Pj="The method SwitchToDialog() is not available in Core::HorizontalList.";
var Pk="The method DismissDialog() is not available in Core::HorizontalList.";var
Pl="The method PresentDialog() is not available in Core::HorizontalList.";var Pm=
"The method FadeGroup() is not available in Core::HorizontalList.";var RH="The method RestackTop() is not available in Core::HorizontalList.";
var RI="The method Restack() is not available in Core::HorizontalList.";var RJ="The method Remove() is not available in Core::HorizontalList.";
var RK="The method Add() is not available in Core::HorizontalList.";var Pn=[0,0,
1,1];var RL="The KeyPressHandler is embedded within an object not being derived "+
"from Core::Group.";var RM="Trying to cancel a task not belonging to this queue!";
var RN="Trying to enqueue a task twice!";
C.Bh={T:null,U:null,G:null,Bw:null,E:0x103,Fc:0,CI:0x14,MX:function(Az,Pt){},Ah:function(
value){if(this.Fc===value)return;this.Fc=value;if(!!this.G){var Il=this.T;var Ap=
0;while(!!Il&&(value>Il.Fc)){Il=Il.T;Ap=Ap+1;}Il=this.U;while(!!Il&&(value<Il.Fc
)){Il=Il.U;Ap=Ap-1;}if(!!Ap)this.G.Ra(this,Ap);}},HN:function(value){var A;var Ap=
value^this.CI;if(!Ap)return;this.CI=value;if(!!this.Bw&&!((this.E&0x400)===0x400
)){this.G.E=this.G.E|0x5000;B.pe([A=this.G,A.DQ],this);this.G.Ai([0,0,(A=this.G.
I)[2]-A[0],A[3]-A[1]]);}if(!!this.Bw&&((this.E&0x400)===0x400)){this.Bw.J1.E=this.
Bw.J1.E|0x1000;this.G.E=this.G.E|0x4000;B.pe([A=this.G,A.DQ],this);}},Kg:function(
){var AD=this.G;while(!!AD){var Eb=(C.Root.isPrototypeOf(AD)?AD:null);if(!!Eb)return Eb;
AD=AD.G;}return null;},DB:function(A2,aClip,aOffset,aOpacity,aBlend){},GetClipping:
function(){return this.GetExtent();},Cv:function(A1){return null;},HB:function(AS
,Ae,D2,He,Ga,H5){return null;},Lb:function(AS){return AS;},NA:function(Az,Fe){return A0;
},LI:function(aOffset,Ps){},GetExtent:function(){return AG;},AN:function(Eq,Fd){
var A;if(((this.E&0x200)===0x200))Eq=Eq&~0x400;var Sv=(this.E&~Fd)|Eq;var FF=Sv^
this.E;this.E=Sv;if(!!this.G&&!!(FF&0x14)){var U4=((this.E&0x14)===0x14);if(U4&&
!this.G.C4)this.G.CW(this);if(!U4&&(this.G.C4===this))this.G.CW(this.G.NN(this,0x14
));}if(!!this.G&&!!(FF&0x403))this.G.Ai(this.GetClipping());if(((!!this.Bw&&!!this.
G)&&((Sv&0x400)===0x400))&&((FF&0x1)===0x1)){this.E=this.E|0x800;this.G.E=this.G.
E|0x4000;B.pe([A=this.G,A.DQ],this);}if(!!this.G&&((FF&0x400)===0x400)){this.Bw=
null;this.E=this.E|0x800;this.G.E=this.G.E|0x4000;B.pe([A=this.G,A.DQ],this);}if(((((
FF&0x100000)===0x100000)&&((Fd&0x100000)===0x100000))&&((this.E&0x10)===0x10))&&
!((this.E&0x200080)===0x200080))this.AN(0x0,0x10);if(((((FF&0x100000)===0x100000
)&&((Eq&0x100000)===0x100000))&&!((this.E&0x10)===0x10))&&(!((this.E&0x200000)===
0x200000)||((!((this.E&0x80)===0x80)&&!!this.G)&&((this.G.E&0x10)===0x10))))this.
AN(0x10,0x0);if(((((FF&0x200000)===0x200000)&&((Fd&0x200000)===0x200000))&&!((this.
E&0x10)===0x10))&&((this.E&0x100000)===0x100000))this.AN(0x10,0x0);if((((((FF&0x200000
)===0x200000)&&((Eq&0x200000)===0x200000))&&((this.E&0x100010)===0x100010))&&!((
this.E&0x80)===0x80))&&((!!this.G&&!((this.G.E&0x10)===0x10))||((((this.E&0x10000
)===0x10000)&&!!this.G)&&(this.G.BF.AM!==this))))this.AN(0x0,0x10);},_Init:function(
aArg){this.__proto__=C.Bh;B.h7++;},_Done:function(){this.__proto__=null;B.h7--;}
,_ReInit:function(){},_Mark:function(D){var A;if((A=this.T)&&(A._cycle!=D))A._Mark(
A._cycle=D);if((A=this.U)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.G)&&(A._cycle
!=D))A._Mark(A._cycle=D);if((A=this.Bw)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=
this.M)&&(A._cycle!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:
"Core::View"};C.L8={CZ:B.wf,DD:B.wf,CY:B.wf,DC:B.wf,MX:function(Az,Pt){var AC=B.
_NewObject(C.NX,0);this.Bw=null;AC.D7=this.GetExtent();AC.AU=Az;AC.J1=Pt;AC.Nf=this.
DC;AC.Ng=this.CY;AC.Nh=this.DD;AC.Ni=this.CZ;this.Bw=AC;},NA:function(Az,Fe){var
A;var BY=this.CI;var AC=(C.NX.isPrototypeOf(A=this.Bw)?A:null);var Af=AC.D7[0];var
Al=AC.D7[1];var Ac=AC.D7[2];var Aq=AC.D7[3];var D6=[Az[2]-Az[0],Az[3]-Az[1]];var
Bj=Ac-Af;var AI=Aq-Al;if(!Fe){var FO=[(A=AC.AU)[2]-A[0],A[3]-A[1]];Af=Af-AC.AU[0
];Al=Al-AC.AU[1];if(FO[0]!==D6[0]){var B9=((BY&0x4)===0x4);var B_=((BY&0x8)===0x8
);var GP=((BY&0x1)===0x1);if(!B9&&(GP||!B_))Af=((Af*D6[0])/FO[0])|0;if(!B_&&(GP||
!B9)){Ac=Ac-AC.AU[0];Ac=((Ac*D6[0])/FO[0])|0;Ac=Ac-D6[0];}else Ac=Ac-AC.AU[2];Af=
Af+Az[0];Ac=Ac+Az[2];if(!GP){if(B9&&!B_)Ac=Af+Bj;else if(!B9&&B_)Af=Ac-Bj;else{Af=
Af+((((Ac-Af)-Bj)/2)|0);Ac=Af+Bj;}}}else{Ac=Ac-AC.AU[2];Af=Af+Az[0];Ac=Ac+Az[2];
}if(FO[1]!==D6[1]){var B$=((BY&0x10)===0x10);var B8=((BY&0x20)===0x20);var GQ=((
BY&0x2)===0x2);if(!B$&&(GQ||!B8))Al=((Al*D6[1])/FO[1])|0;if(!B8&&(GQ||!B$)){Aq=Aq-
AC.AU[1];Aq=((Aq*D6[1])/FO[1])|0;Aq=Aq-D6[1];}else Aq=Aq-AC.AU[3];Al=Al+Az[1];Aq=
Aq+Az[3];if(!GQ){if(B$&&!B8)Aq=Al+AI;else if(!B$&&B8)Al=Aq-AI;else{Al=Al+((((Aq-
Al)-AI)/2)|0);Aq=Al+AI;}}}else{Aq=Aq-AC.AU[3];Al=Al+Az[1];Aq=Aq+Az[3];}}else{switch(
Fe){case 3:{Af=Az[0];Ac=Af+Bj;}break;case 4:{Ac=Az[2];Af=Ac-Bj;}break;case 1:{Al=
Az[1];Aq=Al+AI;}break;case 2:{Aq=Az[3];Al=Aq-AI;}break;default:;}if((Fe===3)||(Fe===
4)){var B$=((BY&0x10)===0x10);var B8=((BY&0x20)===0x20);var GQ=((BY&0x2)===0x2);
if(GQ){Al=Az[1];Aq=Az[3];}else if(B$&&!B8){Al=Az[1];Aq=Al+AI;}else if(B8&&!B$){Aq=
Az[3];Al=Aq-AI;}else{Al=Az[1]+((((Az[3]-Az[1])-AI)/2)|0);Aq=Al+AI;}}if((Fe===1)||(
Fe===2)){var B9=((BY&0x4)===0x4);var B_=((BY&0x8)===0x8);var GP=((BY&0x1)===0x1);
if(GP){Af=Az[0];Ac=Az[2];}else if(B9&&!B_){Af=Az[0];Ac=Af+Bj;}else if(B_&&!B9){Ac=
Az[2];Af=Ac-Bj;}else{Af=Az[0]+((((Az[2]-Az[0])-Bj)/2)|0);Ac=Af+Bj;}}}AC.isEmpty=(
Af>=Ac)||(Al>=Aq);Bj=(Ac-Af)-1;AI=(Aq-Al)-1;var H_=AC.D7[0];var H$=AC.D7[1];var Hk=(
AC.D7[2]-H_)-1;var Hj=(AC.D7[3]-H$)-1;if(!Hk)Hk=1;if(!Hj)Hj=1;if(((this.E&0x100)===
0x100)){this.DC=[Af+((((AC.Nf[0]-H_)*Bj)/Hk)|0),Al+((((AC.Nf[1]-H$)*AI)/Hj)|0)];
this.CY=[Af+((((AC.Ng[0]-H_)*Bj)/Hk)|0),Al+((((AC.Ng[1]-H$)*AI)/Hj)|0)];this.DD=[
Af+((((AC.Nh[0]-H_)*Bj)/Hk)|0),Al+((((AC.Nh[1]-H$)*AI)/Hj)|0)];this.CZ=[Af+((((AC.
Ni[0]-H_)*Bj)/Hk)|0),Al+((((AC.Ni[1]-H$)*AI)/Hj)|0)];}else{this.HO([Af+((((AC.Nf[
0]-H_)*Bj)/Hk)|0),Al+((((AC.Nf[1]-H$)*AI)/Hj)|0)]);this.HP([Af+((((AC.Ng[0]-H_)*
Bj)/Hk)|0),Al+((((AC.Ng[1]-H$)*AI)/Hj)|0)]);this.HQ([Af+((((AC.Nh[0]-H_)*Bj)/Hk)|
0),Al+((((AC.Nh[1]-H$)*AI)/Hj)|0)]);this.HR([Af+((((AC.Ni[0]-H_)*Bj)/Hk)|0),Al+((((
AC.Ni[1]-H$)*AI)/Hj)|0)]);this.Bw=AC;}return[Bj+1,AI+1];},LI:function(aOffset,Ps
){if(Ps){this.DC=B.abf(this.DC,aOffset);this.CY=B.abf(this.CY,aOffset);this.DD=B.
abf(this.DD,aOffset);this.CZ=B.abf(this.CZ,aOffset);}else{this.HO(B.abf(this.DC,
aOffset));this.HP(B.abf(this.CY,aOffset));this.HQ(B.abf(this.DD,aOffset));this.HR(
B.abf(this.CZ,aOffset));}},GetExtent:function(){if(!!this.Bw&&this.Bw.isEmpty)return AG;
var Af=this.DC[0];var Al=this.DC[1];var Ac=this.DD[0];var Aq=this.DD[1];if((((this.
CZ[0]!==Af)||(this.CY[1]!==Al))||(this.CY[0]!==Ac))||(this.CZ[1]!==Aq)){if(this.
CY[0]<Af)Af=this.CY[0];if(this.DD[0]<Af)Af=this.DD[0];if(this.CZ[0]<Af)Af=this.CZ[
0];if(this.CY[1]<Al)Al=this.CY[1];if(this.DD[1]<Al)Al=this.DD[1];if(this.CZ[1]<Al
)Al=this.CZ[1];if(this.DC[0]>Ac)Ac=this.DC[0];if(this.CY[0]>Ac)Ac=this.CY[0];if(
this.CZ[0]>Ac)Ac=this.CZ[0];if(this.DC[1]>Aq)Aq=this.DC[1];if(this.CY[1]>Aq)Aq=this.
CY[1];if(this.CZ[1]>Aq)Aq=this.CZ[1];}else{var tmp;if(Ac<Af){tmp=Af;Af=Ac;Ac=tmp;
}if(Aq<Al){tmp=Al;Al=Aq;Aq=tmp;}}return[Af,Al,Ac+1,Aq+1];},HR:function(value){var
A;if(B.aaX(value,this.CZ))return;if(!!this.G&&((this.E&0x1)===0x1))this.G.Ai(this.
GetClipping());this.Bw=null;this.CZ=value;if(!!this.G&&((this.E&0x1)===0x1))this.
G.Ai(this.GetClipping());if((!!this.G&&((this.E&0x400)===0x400))&&!((this.G.E&0x2000
)===0x2000)){this.E=this.E|0x800;this.G.E=this.G.E|0x4000;B.pe([A=this.G,A.DQ],this
);}},HQ:function(value){var A;if(B.aaX(value,this.DD))return;if(!!this.G&&((this.
E&0x1)===0x1))this.G.Ai(this.GetClipping());this.Bw=null;this.DD=value;if(!!this.
G&&((this.E&0x1)===0x1))this.G.Ai(this.GetClipping());if((!!this.G&&((this.E&0x400
)===0x400))&&!((this.G.E&0x2000)===0x2000)){this.E=this.E|0x800;this.G.E=this.G.
E|0x4000;B.pe([A=this.G,A.DQ],this);}},HP:function(value){var A;if(B.aaX(value,this.
CY))return;if(!!this.G&&((this.E&0x1)===0x1))this.G.Ai(this.GetClipping());this.
Bw=null;this.CY=value;if(!!this.G&&((this.E&0x1)===0x1))this.G.Ai(this.GetClipping(
));if((!!this.G&&((this.E&0x400)===0x400))&&!((this.G.E&0x2000)===0x2000)){this.
E=this.E|0x800;this.G.E=this.G.E|0x4000;B.pe([A=this.G,A.DQ],this);}},HO:function(
value){var A;if(B.aaX(value,this.DC))return;if(!!this.G&&((this.E&0x1)===0x1))this.
G.Ai(this.GetClipping());this.Bw=null;this.DC=value;if(!!this.G&&((this.E&0x1)===
0x1))this.G.Ai(this.GetClipping());if((!!this.G&&((this.E&0x400)===0x400))&&!((this.
G.E&0x2000)===0x2000)){this.E=this.E|0x800;this.G.E=this.G.E|0x4000;B.pe([A=this.
G,A.DQ],this);}},Qz:function(GE){var BW=B.abi(4,B.wf,null);var i=0;var B3=3;var Sj=
false;var Sk=false;BW.Set(0,this.DC);BW.Set(1,this.CY);BW.Set(2,this.DD);BW.Set(
3,this.CZ);while(i<4){var Vz=BW.Get(i)[0];var PX=BW.Get(i)[1];var Abm=BW.Get(B3)[
0];var SM=BW.Get(B3)[1];if(((PX>GE[1])!==(SM>GE[1]))||((PX<GE[1])!==(SM<GE[1]))){
var A3=((((Abm-Vz)*(GE[1]-PX))/(SM-PX))|0)+Vz;if(GE[0]>A3)Sj=!Sj;if(GE[0]<A3)Sk=
!Sk;}B3=i;i=i+1;}return Sj||Sk;},V9:function(){return((((this.DC[0]===this.CZ[0]
)&&(this.CY[0]===this.DD[0]))&&(this.DC[1]===this.CY[1]))&&(this.DD[1]===this.CZ[
1]))||((((this.DC[0]===this.CY[0])&&(this.DD[0]===this.CZ[0]))&&(this.DC[1]===this.
CZ[1]))&&(this.CY[1]===this.DD[1]));},_Init:function(aArg){C.Bh._Init.call(this,
aArg);this.__proto__=C.L8;},_className:"Core::QuadView"};C.By={I:B.wg,MX:function(
Az,Pt){var AC=B._NewObject(C.NW,0);AC.D7=this.I;AC.AU=Az;AC.J1=Pt;this.Bw=AC;},NA:
function(Az,Fe){var A;var BY=this.CI;var AC=this.Bw;var Af=AC.D7[0];var Al=AC.D7[
1];var Ac=AC.D7[2];var Aq=AC.D7[3];var D6=[Az[2]-Az[0],Az[3]-Az[1]];var Bj=Ac-Af;
var AI=Aq-Al;if(!Fe){var FO=[(A=AC.AU)[2]-A[0],A[3]-A[1]];Af=Af-AC.AU[0];Al=Al-AC.
AU[1];if(FO[0]!==D6[0]){var B9=((BY&0x4)===0x4);var B_=((BY&0x8)===0x8);var GP=((
BY&0x1)===0x1);if(!B9&&(GP||!B_))Af=((Af*D6[0])/FO[0])|0;if(!B_&&(GP||!B9)){Ac=Ac-
AC.AU[0];Ac=((Ac*D6[0])/FO[0])|0;Ac=Ac-D6[0];}else Ac=Ac-AC.AU[2];Af=Af+Az[0];Ac=
Ac+Az[2];if(!GP){if(B9&&!B_)Ac=Af+Bj;else if(!B9&&B_)Af=Ac-Bj;else{Af=Af+((((Ac-
Af)-Bj)/2)|0);Ac=Af+Bj;}}}else{Ac=Ac-AC.AU[2];Af=Af+Az[0];Ac=Ac+Az[2];}if(FO[1]!==
D6[1]){var B$=((BY&0x10)===0x10);var B8=((BY&0x20)===0x20);var GQ=((BY&0x2)===0x2
);if(!B$&&(GQ||!B8))Al=((Al*D6[1])/FO[1])|0;if(!B8&&(GQ||!B$)){Aq=Aq-AC.AU[1];Aq=((
Aq*D6[1])/FO[1])|0;Aq=Aq-D6[1];}else Aq=Aq-AC.AU[3];Al=Al+Az[1];Aq=Aq+Az[3];if(!
GQ){if(B$&&!B8)Aq=Al+AI;else if(!B$&&B8)Al=Aq-AI;else{Al=Al+((((Aq-Al)-AI)/2)|0);
Aq=Al+AI;}}}else{Aq=Aq-AC.AU[3];Al=Al+Az[1];Aq=Aq+Az[3];}}else{switch(Fe){case 3:{
Af=Az[0];Ac=Af+Bj;}break;case 4:{Ac=Az[2];Af=Ac-Bj;}break;case 1:{Al=Az[1];Aq=Al+
AI;}break;case 2:{Aq=Az[3];Al=Aq-AI;}break;default:;}if((Fe===3)||(Fe===4)){var B$=((
BY&0x10)===0x10);var B8=((BY&0x20)===0x20);var GQ=((BY&0x2)===0x2);if(GQ){Al=Az[
1];Aq=Az[3];}else if(B$&&!B8){Al=Az[1];Aq=Al+AI;}else if(B8&&!B$){Aq=Az[3];Al=Aq-
AI;}else{Al=Az[1]+((((Az[3]-Az[1])-AI)/2)|0);Aq=Al+AI;}}if((Fe===1)||(Fe===2)){var
B9=((BY&0x4)===0x4);var B_=((BY&0x8)===0x8);var GP=((BY&0x1)===0x1);if(GP){Af=Az[
0];Ac=Az[2];}else if(B9&&!B_){Af=Az[0];Ac=Af+Bj;}else if(B_&&!B9){Ac=Az[2];Af=Ac-
Bj;}else{Af=Az[0]+((((Az[2]-Az[0])-Bj)/2)|0);Ac=Af+Bj;}}}AC.isEmpty=(Af>=Ac)||(Al>=
Aq);if(((this.E&0x100)===0x100))this.I=[Af,Al,Ac,Aq];else{this.R([Af,Al,Ac,Aq]);
this.Bw=AC;}return[Ac-Af,Aq-Al];},LI:function(aOffset,Ps){if(Ps)this.I=B.abh(this.
I,aOffset);else this.R(B.abh(this.I,aOffset));},GetExtent:function(){return this.
I;},R:function(value){var A;if(B.aaY(value,this.I))return;if(!!this.G&&((this.E&
0x1)===0x1))this.G.Ai(this.GetClipping());this.Bw=null;this.I=value;if(!!this.G&&((
this.E&0x1)===0x1))this.G.Ai(this.GetClipping());if((!!this.G&&((this.E&0x400)===
0x400))&&!((this.G.E&0x2000)===0x2000)){this.E=this.E|0x800;this.G.E=this.G.E|0x4000;
B.pe([A=this.G,A.DQ],this);}},Ao:function(BX){this.R(BX);},An:function(){return this.
I;},_Init:function(aArg){C.Bh._Init.call(this,aArg);this.__proto__=C.By;},_className:
"Core::RectView"};C.J={AB:null,AP:null,PH:null,BF:null,FG:null,J3:null,C4:null,FS:
255,MS:0,MV:0,MU:0,MT:0,BC:function(aArg){this.BH();},DB:function(A2,aClip,aOffset
,aOpacity,aBlend){var A;aOpacity=((aOpacity+1)*this.FS)>>8;aBlend=aBlend&&((this.
E&0x2)===0x2);this.AaF(A2,aClip,B.abf(aOffset,this.I.slice(0,2)),aOpacity,aBlend
);},GetClipping:function(){var A;var H=this.I;H=[].concat(H[0]-this.MT,H.slice(1
,4));H=B.abP(H,H[1]-this.MV);H=B.abN(H,H[2]+this.MU);H=[].concat(H.slice(0,3),H[
3]+this.MS);if(((this.E&0x80000)===0x80000)){var J9=AG;var Q;for(Q=this.AB;!!Q;Q=
Q.T)if(((Q.E&0x1)===0x1))J9=B.wC(J9,Q.GetClipping());H=B.wC(H,B.abh(J9,this.I.slice(
0,2)));}return H;},HB:function(AS,Ae,D2,He,Ga,H5){var A;var Q=this.AP;var JQ=null;
var K=AG;var Ex=null;var Ss=!!this.FG&&(!!this.FG.Eu||!!this.FG.AB);if(((A=B.lb(
AS,this.I))[0]>=A[2])||(A[1]>=A[3]))return null;AS=B.abg(AS,this.I.slice(0,2));if(
!!Ga){Q=Ga;while(!!Q&&(Q.G!==this))Q=Q.G;}while(!!Q){if(((Q.E&0x400)===0x400)&&!
Ex){Ex=Q.U;while(!!Ex&&!((Ex.E&0x200)===0x200))Ex=Ex.U;if(!!Ex)K=B.lb(AS,Ex.GetExtent(
));else K=AG;}if(Ex===Q){Ex=null;K=AG;}if((!!He&&!!(C.J.isPrototypeOf(Q)?Q:null)
)||((((((Q.E&0x8)===0x8)&&((Q.E&0x10)===0x10))&&!((Q.E&0x40000)===0x40000))&&!((
Q.E&0x20000)===0x20000))&&(!((Q.E&0x10000)===0x10000)||((this.BF.AM===Q)&&!Ss)))
){var D7=Q.GetExtent();var PB=He;var JM=null;if(PB===Q)PB=null;if(((Q.E&0x400)===
0x400)){if(!(((A=B.lb(D7,K))[0]>=A[2])||(A[1]>=A[3])))JM=Q.HB(K,Ae,D2,PB,Ga,H5);
}else if(!(((A=B.lb(D7,AS))[0]>=A[2])||(A[1]>=A[3]))||(He===Q))JM=Q.HB(AS,Ae,D2,
PB,Ga,H5);Q=Q.U;if(!!JM){if(!JQ||((JM.Lg<JQ.Lg)&&(JM.Lg>=0)))JQ=JM;if(!JM.Lg)Q=null;
}}else Q=Q.U;Ga=null;}return JQ;},Lb:function(AS){var A;var Ax;var Q=this.AB;var
JJ=AG;var Ne=true;var result=(AS=Ax=B.abg(AS,this.I.slice(0,2)),Ax);while(!!Q){if(((
Q.E&0x200)===0x200)){var KY=(C.HW.isPrototypeOf(Q)?Q:null);JJ=B.lb(AS,KY.I);Ne=((
KY.E&0x1)===0x1);}if(((Q.E&0x1)===0x1)){if(((Q.E&0x400)===0x400)){if(Ne){var K=B.
lb(Q.GetClipping(),JJ);if(!((K[0]>=K[2])||(K[1]>=K[3])))result=B.wC(result,Q.Lb(
K));}}else{var K=B.lb(Q.GetClipping(),AS);if(!((K[0]>=K[2])||(K[1]>=K[3])))result=
B.wC(result,Q.Lb(K));}}Q=Q.T;}return B.lb(B.abh(result,this.I.slice(0,2)),this.I
);},AN:function(Eq,Fd){var A;var PJ=this.E;if((!!this.G&&((this.E&0x80001)===0x80001
))&&((Fd&0x80000)===0x80000))this.G.Ai(this.GetClipping());C.By.AN.call(this,Eq,
Fd);if(((!!this.G&&((this.E&0x1)===0x1))&&((Eq&0x80000)===0x80000))&&!((PJ&0x80000
)===0x80000))this.G.Ai(this.GetClipping());var FF=this.E^PJ;if(!!this.C4&&((FF&0x40
)===0x40)){if(((this.E&0x40)===0x40))this.C4.AN(0x40,0x0);else this.C4.AN(0x0,0x40
);}if(!!this.BF&&((FF&0x40)===0x40)){if(((this.E&0x40)===0x40)&&((this.BF.AM.E&0x14
)===0x14))this.BF.AM.AN(0x40,0x0);else this.BF.AM.AN(0x0,0x40);}if(((FF&0x10)===
0x10)){var Q;for(Q=this.AB;!!Q;Q=Q.T)if((((Q.E&0x300000)===0x300000)&&!((Q.E&0x80
)===0x80))&&(!((Q.E&0x10000)===0x10000)||(this.BF.AM===Q)))Q.AN(Eq&0x10,Fd&0x10);
}if(!!FF){this.E=this.E|0x8000;B.pe([this,this.PV],this);}},R:function(value){var
A;if(B.aaY(value,this.I))return;var I0=[(A=this.I)[2]-A[0],A[3]-A[1]];var Su=[value[
2]-value[0],value[3]-value[1]];var K0=!B.aaX(I0,Su);C.By.R.call(this,value);if((
K0&&(I0[0]>0))&&(I0[1]>0)){var AU=[].concat(A0,I0);var Q=this.AB;while(!!Q){if((
!Q.Bw&&(Q.CI!==0x14))&&!((Q.E&0x400)===0x400))Q.MX(AU,null);Q=Q.T;}}if(K0){this.
E=this.E|0x5000;B.pe([this,this.PV],this);}},Vk:function(A1){var U_=(C.KeyEvent.
isPrototypeOf(A1)?A1:null);var Gc=this.PH;if(!U_)return null;while(!!Gc&&(!Gc.Bm||
!Gc.Cv(U_)))Gc=Gc.T;return Gc;},AaF:function(A2,aClip,aOffset,aOpacity,aBlend){var
A;var Q=this.AB;var JJ=AG;var Ne=true;this.VX(A2,aClip,aOffset,aOpacity,aBlend);
while(!!Q&&!A2.PS){if(((Q.E&0x200)===0x200)){var KY=(C.HW.isPrototypeOf(Q)?Q:null
);Ne=((KY.E&0x1)===0x1);JJ=aClip;if(!((KY.E&0x80000)===0x80000))JJ=B.lb(JJ,B.abh(
KY.I,aOffset));}if(((Q.E&0x1)===0x1)){if(((Q.E&0x400)===0x400)){if(Ne){var K=B.lb(
B.abh(Q.GetClipping(),aOffset),JJ);if(!((K[0]>=K[2])||(K[1]>=K[3])))Q.DB(A2,K,aOffset
,aOpacity,aBlend);}}else{var K=B.lb(B.abh(Q.GetClipping(),aOffset),aClip);if(!((
K[0]>=K[2])||(K[1]>=K[3])))Q.DB(A2,K,aOffset,aOpacity,aBlend);}}Q=Q.T;}if(!A2.PS
)this.V0(A2,aClip,aOffset,aOpacity,aBlend);},Aa9:function(){var A;var Sh=((this.
E&0x1000)===0x1000);var Ia=[0,0,(A=this.I)[2]-A[0],A[3]-A[1]];var Hl=false;var KT=
AG;var Se=AG;var Q=this.AP;var Ex=null;while(!!Q){if(((Q.E&0x800)===0x800)){Hl=true;
Q.E=Q.E&~0x800;}if(Hl&&((Q.E&0x200)===0x200))Hl=false;Q=Q.U;}Hl=false;Q=this.AB;
if(Sh){this.E=this.E&~0x1000;Sh=!((Ia[0]>=Ia[2])||(Ia[1]>=Ia[3]));}this.E=this.E|
0x2000;while(!!Q){if(((Q.E&0x400)===0x400)){if(!!Q.Bw&&(Q.Bw.J1!==Ex))Q.Bw=null;
if((!Q.Bw&&Hl)&&(Q.CI!==0x14))Q.MX(Se,Ex);}if(!!Q.Bw){if(Sh&&!((Q.E&0x400)===0x400
))Q.NA(Ia,0);if(Hl&&((Q.E&0x400)===0x400))Q.NA(Se,0);}if(((Q.E&0x200)===0x200)){
Hl=((Q.E&0x1000)===0x1000);Ex=(C.HW.isPrototypeOf(Q)?Q:null);if(Hl){Q.E=Q.E&~0x1000;
KT=Ex.I;Se=KT;Hl=!((KT[0]>=KT[2])||(KT[1]>=KT[3]));}if(Hl)this.Ai(Ex.I);}Q=Q.T;}
this.E=this.E&~0x2000;this.TQ([Ia[2]-Ia[0],Ia[3]-Ia[1]]);},DQ:function(Ab){B.pe([
this,this.PV],this);},PV:function(Ab){var A;var Abl=((this.E&0x1000)===0x1000);if(((
this.E&0x4000)===0x4000)){this.E=this.E&~0x4000;this.Aa9();}if(((this.E&0x8000)===
0x8000)||Abl){this.E=this.E&~0x8000;this.GB(this.E);}},CW:function(value){var A;
if(!!value&&(value.G!==this))throw new Error(Bu);if(!!value&&!((value.E&0x14)===
0x14))value=null;if(!!value&&((value.E&0x10000)===0x10000))value=null;if(value===
this.C4)return;if(!!this.C4)this.C4.AN(0x0,0x60);this.C4=value;if(!!value){if(((
this.E&0x40)===0x40))value.AN(0x60,0x0);else value.AN(0x20,0x0);}},Ar:function(value
){if(value)this.AN(0x100000,0x0);else this.AN(0x0,0x100000);},Jr:function(value){
var A;if(value>255)value=255;if(value<0)value=0;if(value===this.FS)return;this.FS=
value;if(!!this.G&&((this.E&0x1)===0x1))this.G.Ai(this.GetClipping());},Aao:function(
BX){this.Jr(BX);},HI:function(){var A;return((this.E&0x1)===0x1);},A8:function(value
){if(value)this.AN(0x1,0x0);else this.AN(0x0,0x1);},ExtendClipping:function(JF,JG
,JH,JE){var A;var MJ=this.I;var Es=MJ;if(JF<0)JF=0;if(JF>255)JF=255;if(JG<0)JG=0;
if(JG>255)JG=255;if(JH<0)JH=0;if(JH>255)JH=255;if(JE<0)JE=0;if(JE>255)JE=255;Es=[
].concat(Es[0]-(Math.max(JF,this.MT)&0xFF),Es.slice(1,4));Es=B.abN(Es,Es[2]+(Math.
max(JG,this.MU)&0xFF));Es=B.abP(Es,Es[1]-(Math.max(JH,this.MV)&0xFF));Es=[].concat(
Es.slice(0,3),Es[3]+(Math.max(JE,this.MS)&0xFF));if(JF!==this.MT){if((!!this.G&&((
this.E&0x1)===0x1))&&!((this.E&0x80000)===0x80000)){var H=Es;H=B.abN(H,MJ[0]);this.
G.Ai(H);}this.MT=JF&0xFF;}if(JG!==this.MU){if((!!this.G&&((this.E&0x1)===0x1))&&
!((this.E&0x80000)===0x80000)){var H=Es;H=[].concat(MJ[2],H.slice(1,4));this.G.Ai(
H);}this.MU=JG&0xFF;}if(JH!==this.MV){if((!!this.G&&((this.E&0x1)===0x1))&&!((this.
E&0x80000)===0x80000)){var H=Es;H=[].concat(H.slice(0,3),MJ[1]);this.G.Ai(H);}this.
MV=JH&0xFF;}if(JE!==this.MS){if((!!this.G&&((this.E&0x1)===0x1))&&!((this.E&0x80000
)===0x80000)){var H=Es;H=B.abP(H,MJ[3]);this.G.Ai(H);}this.MS=JE&0xFF;}},V0:function(
A2,aClip,aOffset,aOpacity,aBlend){},VX:function(A2,aClip,aOffset,aOpacity,aBlend
){},GetMaximalSize:function(){return BD;},GetMinimalSize:function(){return A0;},
Ji:function(){var A;if(!!this.BF)return this.BF.AM.Ji();if(!((this.E&0x10000)===
0x10000))return null;return this;},IK:function(B7,Du,Fy,EP,EQ,H4,DI,Ep,CT,CR,CS){
var A;if(!this.BF){this.KD(B7,Du,Fy,EP,EQ,null,null,CT,CR,CS);return;}var IZ=this.
BF;var Cr=IZ.T;if(((B7.E&0x10000)===0x10000)&&(this.BF.AM!==B7))throw new Error(
Eo);var GM=B._NewObject(C.P9,0);var Ew=IZ.Ew;var EA=null;var C0=null;if(!!Cr){EA=
Cr.EA;C0=Cr.C0;}if(!!Cr&&!!IZ.J2)EA=IZ.J2;if(!!Cr&&!!DI)C0=DI;if(!!H4)Ew=H4;if(!
Du)Du=B._GetAutoObject(B.acg.KF);if(!Fy)Fy=Du;if(!EQ)EQ=EP;if(!EP)EP=EQ;GM.Ew=Fy;
GM.C0=EP;GM.EA=EQ;GM.J2=Ep;GM.AM=B7;GM.T=this.BF.T;this.BF.T=null;this.BF=GM;if(
this.C4===B7)this.CW(null);IZ.AM.AN(0x0,0x10040);if(((this.E&0x40)===0x40)&&((B7.
E&0x4)===0x4))B7.AN(0x10040,0x0);else B7.AN(0x10000,0x0);if(!!C0){this.Dp(Cr.AM,
C0.Kc(),null,null,CS);this.Dp(IZ.AM,Ew.Hx(),null,null,true);this.Dp(GM.AM,Du.Hy(
),CT,CR,true);}else if(!!EA){this.Dp(Cr.AM,EA.Kd(),null,null,CS);this.Dp(IZ.AM,Ew.
Hx(),null,null,true);this.Dp(GM.AM,Du.Hy(),CT,CR,true);}else if(!!Ew){this.Dp(IZ.
AM,Ew.Hx(),null,null,CS);this.Dp(GM.AM,Du.Hy(),CT,CR,true);}else this.Dp(GM.AM,Du.
Hy(),CT,CR,CS);},Jg:function(B7,H4,DI,Ep,CT,CR,CS){var A;if(!this.BF)return;if(!
B7)return;var Cf=this.BF;var Cr=this.BF.T;var J5=null;while((!!Cf&&(Cf.AM!==B7))&&
!!Cf.T){J5=Cf;Cf=Cr;Cr=Cf.T;}if(!Cf||(Cf.AM!==B7))throw new Error(Hd);if(!J5){this.
BF=Cr;Cf.T=null;}else{J5.T=Cr;Cf.T=null;}Cf.AM.AN(0x0,0x10040);if(((((this.E&0x10
)===0x10)&&!!Cr)&&!J5)&&((Cr.AM.E&0x200000)===0x200000))Cr.AM.AN(0x10,0x0);if(((((
this.E&0x40)===0x40)&&!!Cr)&&!J5)&&((Cr.AM.E&0x4)===0x4))Cr.AM.AN(0x40,0x0);var Ew=
Cf.Ew;var EA=null;var C0=null;if(!!Cr)EA=Cr.EA;if(!!Cr&&!!Cf.J2)EA=Cf.J2;if(!!Cr&&
!!Ep)EA=Ep;if(!!J5&&!!Cr)C0=Cr.C0;if((!!J5&&!!Cr)&&!!DI)C0=DI;if(!!H4)Ew=H4;if(!
!C0){this.Dp(Cr.AM,C0.Kc(),null,null,CS);this.Dp(Cf.AM,Ew.Hx(),CT,CR,true);}else
if(!!EA){this.Dp(Cr.AM,EA.Kd(),null,null,CS);this.Dp(Cf.AM,Ew.Hx(),CT,CR,true);}
else this.Dp(Cf.AM,Ew.Hx(),CT,CR,CS);},KD:function(B7,Du,Fy,EP,EQ,DI,Ep,CT,CR,CS
){var A;if(!B7)return;if(!!this.BF&&(this.BF.AM===B7)){this.IK(B7,Du,Fy,EP,EQ,null
,DI,Ep,CT,CR,CS);return;}if(((B7.E&0x10000)===0x10000))throw new Error(Eo);var Cf=
B._NewObject(C.P9,0);if(!!this.BF&&!this.BF.C0){if(!Ep)Ep=DI;if(!DI)DI=Ep;}var C0=
null;if(!!this.BF)C0=this.BF.C0;if(!!this.BF&&!!DI)C0=DI;if(!Du)Du=B._GetAutoObject(
B.acg.KF);if(!Fy)Fy=Du;if(!EQ)EQ=EP;if(!EP)EP=EQ;Cf.Ew=Fy;Cf.C0=EP;Cf.EA=EQ;Cf.J2=
Ep;if(this.C4===B7)this.CW(null);if(!!this.BF&&((this.BF.AM.E&0x200000)===0x200000
))this.BF.AM.AN(0x0,0x10);if(!!this.BF)this.BF.AM.AN(0x0,0x40);if(((this.E&0x40)===
0x40)&&((B7.E&0x4)===0x4))B7.AN(0x10040,0x0);else B7.AN(0x10000,0x0);Cf.AM=B7;Cf.
T=this.BF;this.BF=Cf;if(!!C0){this.Dp(this.BF.T.AM,C0.Kc(),null,null,CS);this.Dp(
B7,Du.Hy(),CT,CR,true);}else this.Dp(B7,Du.Hy(),CT,CR,CS);},Wf:function(GE){var tmp=
this;while(!!tmp){GE=B.abe(GE,tmp.I.slice(0,2));tmp=tmp.G;}return GE;},DispatchEvent:
function(A1){var A;var Q=this.C4;var AD=(C.J.isPrototypeOf(Q)?Q:null);var B2=null;
var Ss=!!this.FG&&(!!this.FG.Eu||!!this.FG.AB);if(!!Q&&((((Q.E&0x10000)===0x10000
)||((Q.E&0x40000)===0x40000))||((Q.E&0x20000)===0x20000))){Q=null;AD=null;}if(!!
this.BF&&!Ss)B2=this.BF.AM.DispatchEvent(A1);if(!B2&&!!AD)B2=AD.DispatchEvent(A1
);else if(!B2&&!!Q)B2=Q.Cv(A1);if(!B2)B2=this.Cv(A1);if(!B2)B2=this.Vk(A1);return B2;
},BroadcastEventAtPosition:function(A1,UW,aFilter){var A;var Q=this.AP;var B2=null;
while(!!Q&&!B2){if((!aFilter||((A=aFilter)&&((Q.E&A)===A)))&&B.wa(Q.GetExtent(),
UW)){var AD=(C.J.isPrototypeOf(Q)?Q:null);if(!!AD)B2=AD.BroadcastEventAtPosition(
A1,B.abe(UW,AD.I.slice(0,2)),aFilter);else B2=Q.Cv(A1);}Q=Q.U;}if(!B2)B2=this.Cv(
A1);return B2;},BroadcastEvent:function(A1,aFilter){var A;var Q=this.AP;var B2=null;
while(!!Q&&!B2){if(!aFilter||((A=aFilter)&&((Q.E&A)===A))){var AD=(C.J.isPrototypeOf(
Q)?Q:null);if(!!AD)B2=AD.BroadcastEvent(A1,aFilter);else B2=Q.Cv(A1);}Q=Q.U;}if(
!B2)B2=this.Cv(A1);if(!B2)B2=this.Vk(A1);return B2;},TQ:function(aSize){},GB:function(
Er){},BH:function(){this.E=this.E|0x8000;B.pe([this,this.PV],this);},Ai:function(
AS){var A;var AD=this;while(!!AD&&!((AS[0]>=AS[2])||(AS[1]>=AS[3]))){if(!AD.G&&(
AD!==this)){AD.Ai(AS);return;}if(!((AD.E&0x1)===0x1))return;var H=AD.I;AS=B.abh(
AS,H.slice(0,2));if(!((AD.E&0x80000)===0x80000)){H=[].concat(H[0]-AD.MT,H.slice(
1,4));H=B.abP(H,H[1]-AD.MV);H=B.abN(H,H[2]+AD.MU);H=[].concat(H.slice(0,3),H[3]+
AD.MS);AS=B.lb(AS,H);}AD=AD.G;}},NN:function(P,aFilter){var A;if(!P||(P.G!==this
))return null;var IY=P.T;var I1=P.U;var M$=0x10000;if(((aFilter&0x10000)===0x10000
))M$=0x0;while(!!IY||!!I1){if((!!IY&&(!aFilter||((A=aFilter)&&((IY.E&A)===A))))&&(
!M$||!((A=M$)&&((IY.E&A)===A))))return IY;if((!!I1&&(!aFilter||((A=aFilter)&&((I1.
E&A)===A))))&&(!M$||!((A=M$)&&((I1.E&A)===A))))return I1;if(!!IY)IY=IY.T;if(!!I1
)I1=I1.U;}return null;},Dp:function(F_,Bq,CT,CR,CS){var A;if(!F_)return;if(!Bq)throw new
Error(JB);if((!!Bq.J||!!Bq.G)||!!Bq.Fk)throw new Error(KP);if(!!F_.G&&(F_.G!==this
))throw new Error(Mz);if(!this.FG)this.FG=B._NewObject(C.TO,0);Bq.G=this;Bq.J=F_;
Bq.PK=CR;Bq.Sx=CT;if(!!F_.J3)F_.J3.Fk.X_(F_.J3);F_.J3=Bq;F_.E=F_.E|0x20000;if((CS&&
!!this.FG.AP)&&!this.FG.AP.Qx())(B.acg.NL.isPrototypeOf(A=this.FG.AP)?A:null).SR(
Bq);else{var Fk=B._NewObject(B.acg.NL,0);Fk.SR(Bq);this.FG.Ye(Fk,false);}},Oh:function(
P){var A;if(!P)throw new Error(C7);if(P.G!==this)throw new Error(IO);if(!P.T)return;
var Dj=this.AP;var Ik=P.Fc;while(!!Dj&&(Dj.Fc>Ik))Dj=Dj.U;if(((Dj===P)||!Dj)||(Dj.
T===P))return;if(((P.E&0x401)===0x401)){if(!!P.U&&!!P.Bw)P.U.E=P.U.E|0x800;P.E=P.
E|0x800;this.E=this.E|0x4000;B.pe([this,this.DQ],this);}if(((P.E&0x200)===0x200)
){if(!!P.U)P.U.E=P.U.E|0x800;this.E=this.E|0x4000;B.pe([this,this.DQ],this);}if(
!!P.U)P.U.T=P.T;else this.AB=P.T;P.T.U=P.U;P.U=Dj;P.T=Dj.T;Dj.T=P;if(!!P.T)P.T.U=
P;else this.AP=P;if(((P.E&0x1)===0x1))this.Ai(P.GetClipping());},Ra:function(P,D1
){var A;if(!P)throw new Error(C7);if(P.G!==this)throw new Error(IO);var Dj=P;var
Cp=P;var Ik=P.Fc;while(((D1>0)&&!!Dj.T)&&(Dj.T.Fc<=Ik)){Dj=Dj.T;D1=D1-1;}while(((
D1<0)&&!!Cp.U)&&(Cp.U.Fc>=Ik)){Cp=Cp.U;D1=D1+1;}if((Dj===P)&&(Cp===P))return;if(((
P.E&0x401)===0x401)){if(!!P.U&&!!P.Bw)P.U.E=P.U.E|0x800;P.E=P.E|0x800;this.E=this.
E|0x4000;B.pe([this,this.DQ],this);}if(((P.E&0x200)===0x200)){if(!!P.U)P.U.E=P.U.
E|0x800;P.E=P.E|0x800;this.E=this.E|0x4000;B.pe([this,this.DQ],this);}if(!!P.U)P.
U.T=P.T;if(!!P.T)P.T.U=P.U;if(this.AB===P)this.AB=P.T;if(this.AP===P)this.AP=P.U;
if(Dj!==P){P.T=Dj.T;P.U=Dj;Dj.T=P;if(!!P.T)P.T.U=P;}if(Cp!==P){P.T=Cp;P.U=Cp.U;Cp.
U=P;if(!!P.U)P.U.T=P;}if(!P.T)this.AP=P;if(!P.U)this.AB=P;if(((P.E&0x1)===0x1))this.
Ai(P.GetClipping());},B5:function(P){var A;if(!P)throw new Error(JC);if(P.G!==this
)throw new Error(IO);if((((P.E&0x401)===0x401)&&!!P.U)&&!!P.Bw){P.U.E=P.U.E|0x800;
this.E=this.E|0x4000;B.pe([this,this.DQ],this);}if(((P.E&0x200)===0x200)){if(!!P.
U)P.U.E=P.U.E|0x800;this.E=this.E|0x4000;B.pe([this,this.DQ],this);}P.Bw=null;if(
this.C4===P)this.CW(this.NN(P,0x14));if(!!P.U)P.U.T=P.T;if(!!P.T)P.T.U=P.U;if(this.
AB===P)this.AB=P.T;if(this.AP===P)this.AP=P.U;P.G=null;P.T=null;P.U=null;if((!((
P.E&0x10)===0x10)&&((P.E&0x100000)===0x100000))&&!((this.E&0x80)===0x80))P.AN(0x10
,0x0);if(((P.E&0x1)===0x1))this.Ai(P.GetClipping());},X:function(P,D1){var A;if(
!P)throw new Error(Rw);if(!!P.G)throw new Error(Rx);var Cp=null;var Ik=P.Fc;if(((
D1<0)&&!!this.AP)&&(this.AP.Fc>=Ik)){Cp=this.AP;D1=D1+1;}while((((D1<0)&&!!Cp)&&
!!Cp.U)&&(Cp.U.Fc>=Ik)){Cp=Cp.U;D1=D1+1;}if((!Cp&&!!this.AP)&&(this.AP.Fc>Ik))Cp=
this.AP;while((!!Cp&&!!Cp.U)&&(Cp.U.Fc>Ik))Cp=Cp.U;if(!Cp){P.G=this;P.U=this.AP;
if(!!this.AP)this.AP.T=P;if(!this.AB)this.AB=P;this.AP=P;}else{P.G=this;P.U=Cp.U;
P.T=Cp;Cp.U=P;if(!!P.U)P.U.T=P;else this.AB=P;}if(((P.E&0x1)===0x1))this.Ai(P.GetClipping(
));if(((P.E&0x80)===0x80)&&(B.aam().V6()===P))P.AN(0x10,0x0);else if(!((this.E&0x10
)===0x10)&&((P.E&0x200010)===0x200010))P.AN(0x0,0x10);else if((((this.E&0x10)===
0x10)&&!((P.E&0x10)===0x10))&&((P.E&0x100000)===0x100000))P.AN(0x10,0x0);if(((!this.
C4&&((P.E&0x4)===0x4))&&((P.E&0x10)===0x10))&&!((P.E&0x10000)===0x10000))this.CW(
P);if(((P.E&0x401)===0x401)){P.E=P.E|0x800;this.E=this.E|0x4000;B.pe([this,this.
DQ],this);}if(((P.E&0x200)===0x200)){P.E=P.E|0x800;this.E=this.E|0x4000;B.pe([this
,this.DQ],this);}},Wk:function(){return this.FS;},_Init:function(aArg){C.By._Init.
call(this,aArg);this.__proto__=C.J;this.E=0x10001F;this.BC(aArg);},_Mark:function(
D){var A;C.By._Mark.call(this,D);if((A=this.AB)&&(A._cycle!=D))A._Mark(A._cycle=
D);if((A=this.AP)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.PH)&&(A._cycle!=
D))A._Mark(A._cycle=D);if((A=this.BF)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.
FG)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.J3)&&(A._cycle!=D))A._Mark(A._cycle=
D);if((A=this.C4)&&(A._cycle!=D))A._Mark(A._cycle=D);},_className:"Core::Group"};
C.Root={Ez:null,BT:B.abi(10,null,null),Et:null,H9:null,Nv:0,Ca:0,C9:B.abi(10,0,null
),PA:B.abi(10,B.wg,null),FE:B.abi(10,0,null),Hi:B.abi(10,B.wf,null),KS:B.abi(10,
0,null),H8:B.abi(10,B.wf,null),FD:B.abi(10,B.wf,null),Ev:B.abi(10,B.wf,null),GH:
B.abi(10,B.wf,null),A_:0,PD:0,PC:0,Dy:B.abi(4,0,null),CB:B.abi(4,B.wg,null),CA:0
,M0:0,KU:0,Si:true,BC:function(aArg){if(!!!this.M){var obj=this;B.abD(obj);}},Kg:
function(){return this;},DB:function(A2,aClip,aOffset,aOpacity,aBlend){var fullScreenUpdate=
false;fullScreenUpdate=B.m7;if(!fullScreenUpdate)A2.NM(aClip,B.abh(B.abh(aClip,aOffset
),this.I.slice(0,2)),0x00000000,0x00000000,0x00000000,0x00000000,false);C.J.DB.call(
this,A2,aClip,aOffset,aOpacity,aBlend);},AN:function(Eq,Fd){var A;C.J.AN.call(this
,Eq,Fd);if(!this.G&&(((Eq&0x1)===0x1)||((Fd&0x1)===0x1)))this.Ai([0,0,(A=this.I)[
2]-A[0],A[3]-A[1]]);if(!this.G&&(((Eq&0x2)===0x2)||((Fd&0x2)===0x2)))this.Ai([0,
0,(A=this.I)[2]-A[0],A[3]-A[1]]);},CW:function(value){if((value!==null)||!value)
C.J.CW.call(this,value);},Jr:function(value){var A;var Fi=this.FS;C.J.Jr.call(this
,value);if(((Fi!==this.FS)&&!this.G)&&((this.E&0x1)===0x1))this.Ai([0,0,(A=this.
I)[2]-A[0],A[3]-A[1]]);},DispatchEvent:function(A1){if(!!A1){A1.LD=!!this.Ca;if(
!!this.Ca)A1.AZ=this.Ca;}var B2;B2=C.J.DispatchEvent.call(this,A1);this.Ca=0;return B2;
},BroadcastEvent:function(A1,aFilter){if(!!A1){A1.LD=!!this.Ca;if(!!this.Ca)A1.AZ=
this.Ca;}var B2=C.J.BroadcastEvent.call(this,A1,aFilter);this.Ca=0;return B2;},Ai:
function(AS){var A;if(this.Nv>0)throw new Error(Ry);var fullScreenUpdate=false;fullScreenUpdate=
B.m7;if(fullScreenUpdate)AS=[0,0,(A=this.I)[2]-A[0],A[3]-A[1]];if(!!this.G){C.J.
Ai.call(this,AS);return;}AS=B.lb(B.abh(AS,this.I.slice(0,2)),this.I);if((AS[0]>=
AS[2])||(AS[1]>=AS[3]))return;var i;for(i=0;i<this.CA;i=i+1)if(!(((A=B.lb(this.CB.
Get(i),AS))[0]>=A[2])||(A[1]>=A[3]))){this.CB.Set(i,B.wC(this.CB.Get(i),AS));this.
Dy.Set(i,B.aaH(this.CB.Get(i)));return;}if(this.CA<3){this.CB.Set(this.CA,AS);this.
Dy.Set(this.CA,B.aaH(AS));this.CA=this.CA+1;return;}var B3;var Ey;var MZ=0;var M1=
0;var UZ=2147483647;this.CB.Set(this.CA,AS);this.Dy.Set(this.CA,B.aaH(AS));for(B3=
0;B3<=this.CA;B3=B3+1)for(Ey=B3+1;Ey<=this.CA;Ey=Ey+1){var PU=B.aaH(B.wC(this.CB.
Get(B3),this.CB.Get(Ey)));var Vi=((PU<<8)/(this.Dy.Get(B3)+this.Dy.Get(Ey)))|0;if(
Vi<UZ){UZ=Vi;MZ=B3;M1=Ey;}}this.CB.Set(MZ,B.wC(this.CB.Get(MZ),this.CB.Get(M1)));
this.Dy.Set(MZ,B.aaH(this.CB.Get(MZ)));if(M1!==this.CA){this.CB.Set(M1,this.CB.Get(
this.CA));this.Dy.Set(M1,this.Dy.Get(this.CA));}},AaC:function(){var C$=B._NewObject(
C.Lh,0);C$.LD=!!this.Ca;if(!!this.Ca)C$.AZ=this.Ca;return C$;},JK:function(){var
C$=B._NewObject(C.HA,0);C$.LD=!!this.Ca;if(!!this.Ca)C$.AZ=this.Ca;return C$;},KR:
function(){var C$=B._NewObject(C.NI,0);C$.LD=!!this.Ca;if(!!this.Ca)C$.AZ=this.Ca;
return C$;},AaD:function(Ab){var i;var JQ=false;for(i=0;i<10;i=i+1)if(!!this.BT.
Get(i)){var Z=this.Ev.Get(i);var AD=this.BT.Get(i).G;while(!!AD&&(AD!==this)){Z=
B.abe(Z,AD.I.slice(0,2));AD=AD.G;}if(!AD&&(this.BT.Get(i)!==this)){var tmp=this.
BT.Get(i);this.A_=i;this.BT.Set(i,null);tmp.Cv(this.JK().InitializeUp(i,this.H8.
Get(i),this.Hi.Get(i),this.FE.Get(i),this.C9.Get(i)+1,this.FD.Get(i),false,this.
Ev.Get(i),this.GH.Get(i)));this.BroadcastEvent(this.KR().InitializeUp(i,this.C9.
Get(i)+1,false,tmp,this.Ev.Get(i)),0x18);}else{this.FE.Set(i,(this.H9.AZ-this.KS.
Get(i))|0);if(this.FE.Get(i)<10)this.FE.Set(i,10);this.A_=i;this.BT.Get(i).Cv(this.
JK().InitializeHold(i,Z,this.Hi.Get(i),this.FE.Get(i),this.C9.Get(i)+1,this.FD.Get(
i),this.Ev.Get(i),this.GH.Get(i)));JQ=true;}}if(!JQ)this.H9.Ar(false);},GetFPS:function(
){var ticksCount=0;var U5=0;ticksCount=((new Date).getTime()-B.v$)|0;if(!!this.PD&&(
ticksCount>this.PD))U5=((this.PC*1000)/((ticksCount-this.PD)|0))|0;this.PC=0;this.
PD=ticksCount;return U5;},Update:function(){var A;if(!this.Et)this.Et=B._NewObject(
B.Graphics.Canvas,0);this.Et.N$([(A=this.I)[2]-A[0],A[3]-A[1]]);this.Et.Update();
return this.UpdateGE20(this.Et);},UpdateGE20:function(A2){if(!this.BeginUpdate()
)return AG;var Hr=this.UpdateCanvas(A2,A0);this.EndUpdate();return Hr;},EndUpdate:
function(){if(this.CA>0){this.PC=this.PC+1;this.CA=0;}},UpdateCanvas:function(A2
,aOffset){var A;var Hr=AG;var Aaw=[].concat(aOffset,B.abf(A2.FrameSize,aOffset));
var i;var B3=this.CA;this.Nv=this.Nv+1;A2.AM=this;A2.PS=false;for(i=0;(i<B3)&&(i<
4);i=i+1)if(this.Dy.Get(i)>0){this.DB(A2,B.abg(this.CB.Get(i),aOffset),[-aOffset[
0],-aOffset[1]],255,true);Hr=B.wC(Hr,B.lb(Aaw,this.CB.Get(i)));}else B3=B3+1;A2.
AM=null;this.Nv=this.Nv-1;if(!((Hr[0]>=Hr[2])||(Hr[1]>=Hr[3])))return B.abg(Hr,aOffset
);else return Hr;},GetUpdateRegion:function(Pu){var i;var B3=this.CA;if(Pu<0)return AG;
for(i=0;(i<B3)&&(i<4);i=i+1)if(!this.Dy.Get(i)){B3=B3+1;Pu=Pu+1;}else if(i===Pu)
return this.CB.Get(i);return AG;},BeginUpdate:function(){var A;var i;if(!!this.CA&&
!B.aaY(this.CB.Get(0),[0,0,(A=this.I)[2]-A[0],A[3]-A[1]])){var Vw=B.abi(3,B.wg,null
);var Vv=this.CA;for(i=0;i<Vv;i++)Vw.Set(i,this.CB.Get(i));for(i=0;i<Vv;i++){var
Vl=B.abh(Vw.Get(i),this.I.slice(0,2));var Vm=this.Lb(Vl);if(!B.aaY(Vl,Vm))this.Ai(
B.abg(Vm,this.I.slice(0,2)));}}var B3;var Ey;for(B3=0;B3<(this.CA-1);B3++)if(this.
Dy.Get(B3)>0)for(Ey=B3+1;Ey<this.CA;Ey++)if(this.Dy.Get(Ey)>0){var PU=B.aaH(B.wC(
this.CB.Get(B3),this.CB.Get(Ey)));if(((PU-this.Dy.Get(B3))-this.Dy.Get(Ey))<0){this.
CB.Set(B3,B.wC(this.CB.Get(B3),this.CB.Get(Ey)));this.Dy.Set(B3,PU);this.Dy.Set(
Ey,0);}}for(i=this.CA-1;i>=0;i--)if(!this.Dy.Get(i))this.CA=this.CA-1;return this.
CA;},DoesNeedUpdate:function(){if(this.CA>0)return true;return false;},Initialize:
function(aSize){this.R([].concat(A0,aSize));if(this.Si)this.E=this.E|0x60;else this.
E=this.E|0x20;this.Ai(this.I);return this;},SetRootFocus:function(R5){if(R5===this.
Si)return false;this.Si=R5;if(!R5)this.AN(0x0,0x40);else this.AN(0x40,0x0);return true;
},SetUserInputTimestamp:function(Aar){this.Ca=Aar;},DriveKeyboardHitting:function(
CC,MD,FZ){var A;var SG=!!this.Ez;if(!!this.Ez&&((!FZ||(this.M0!==CC))||(this.KU!==
MD))){var C$=null;var Q=(C.Bh.isPrototypeOf(A=this.Ez)?A:null);var Gc=(C.Iz.isPrototypeOf(
A=this.Ez)?A:null);if(!!this.M0)C$=B._NewObject(C.KeyEvent,0).Initialize(this.M0
,false);if(this.KU!==0x00)C$=B._NewObject(C.KeyEvent,0).Initialize2(this.KU,false
);if(!!Gc)Gc.Cv(C$);else if(!!Q)Q.Cv(C$);this.M0=0;this.KU=0x00;this.Ez=null;}if(
!!this.Ez){var C$=null;var Q=(C.Bh.isPrototypeOf(A=this.Ez)?A:null);var Gc=(C.Iz.
isPrototypeOf(A=this.Ez)?A:null);if(!!CC)C$=B._NewObject(C.KeyEvent,0).Initialize(
CC,true);if(this.KU!==0x00)C$=B._NewObject(C.KeyEvent,0).Initialize2(MD,true);if(
!!Gc)Gc.Cv(C$);else if(!!Q)Q.Cv(C$);}if(!this.Ez&&FZ){if(!!CC)this.Ez=this.DispatchEvent(
B._NewObject(C.KeyEvent,0).Initialize(CC,true));if(MD!==0x00)this.Ez=this.DispatchEvent(
B._NewObject(C.KeyEvent,0).Initialize2(MD,true));if(!(C.Iz.isPrototypeOf(A=this.
Ez)?A:null)&&!(C.Bh.isPrototypeOf(A=this.Ez)?A:null))this.Ez=null;this.M0=CC;this.
KU=MD;SG=SG||!!this.Ez;}this.Ca=0;return SG;},DriveCursorMovement:function(Cz){return this.
DriveMultiTouchMovement(this.A_,Cz);},DriveMultiTouchMovement:function(Ae,Cz){if((
Ae<0)||(Ae>9)){this.Ca=0;return false;}var Be=B.abe(Cz,this.Ev.Get(Ae));this.Ev.
Set(Ae,Cz);if(!this.BT.Get(Ae)||B.aaX(Be,A0)){this.Ca=0;return false;}var Z=Cz;var
AD=this.BT.Get(Ae).G;while(!!AD&&(AD!==this)){Z=B.abe(Z,AD.I.slice(0,2));AD=AD.G;
}if(!AD&&(this.BT.Get(Ae)!==this)){var tmp=this.BT.Get(Ae);this.A_=Ae;this.BT.Set(
Ae,null);tmp.Cv(this.JK().InitializeUp(Ae,this.H8.Get(Ae),this.Hi.Get(Ae),this.FE.
Get(Ae),this.C9.Get(Ae)+1,this.FD.Get(Ae),false,this.Ev.Get(Ae),this.GH.Get(Ae))
);this.BroadcastEvent(this.KR().InitializeUp(Ae,this.C9.Get(Ae)+1,false,tmp,Cz),
0x18);}else{this.H8.Set(Ae,Z);this.A_=Ae;this.BT.Get(Ae).Cv(this.AaC().Initialize(
Ae,Z,this.Hi.Get(Ae),Be,this.FE.Get(Ae),this.C9.Get(Ae)+1,this.FD.Get(Ae),Cz,this.
GH.Get(Ae)));}this.Ca=0;return true;},DriveCursorHitting:function(FZ,Ae,Cz){return this.
DriveMultiTouchHitting(FZ,Ae,Cz);},DriveMultiTouchHitting:function(FZ,Ae,Cz){if((
Ae<0)||(Ae>9)){this.Ca=0;return false;}var ticksCount=this.Ca;if(!ticksCount)ticksCount=((
new Date).getTime()-B.v$)|0;var Abc=this.Ca;this.DriveMultiTouchMovement(Ae,Cz);
Cz=this.Ev.Get(Ae);this.Ca=Abc;if(FZ)this.GH.Set(Ae,Cz);if(FZ&&!this.BT.Get(Ae)){
var CU;var Z=Cz;if(B.wa(this.PA.Get(Ae),Cz)&&((ticksCount-this.KS.Get(Ae))<=250)
)this.C9.Set(Ae,this.C9.Get(Ae)+1);else this.C9.Set(Ae,0);this.PA.Set(Ae,B.abh(MA
,Cz));this.KS.Set(Ae,ticksCount);CU=this.HB(B.abh(MA,Cz),Ae,this.C9.Get(Ae)+1,null
,null,0x0);if(!!CU){this.BroadcastEvent(this.KR().InitializeDown(Ae,this.C9.Get(
Ae)+1,false,CU.Bh,Cz),0x18);this.BT.Set(Ae,CU.Bh);this.FD.Set(Ae,CU.AW);}else{this.
BT.Set(Ae,null);this.FD.Set(Ae,A0);this.Ca=0;return false;}var AD=CU.Bh.G;while(
!!AD&&(AD!==this)){Z=B.abe(Z,AD.I.slice(0,2));AD=AD.G;}this.Hi.Set(Ae,Z);this.H8.
Set(Ae,Z);this.FE.Set(Ae,0);this.H9.Ar(true);this.A_=Ae;this.BT.Get(Ae).Cv(this.
JK().InitializeDown(Ae,Z,this.C9.Get(Ae)+1,this.FD.Get(Ae),false,Cz));this.Ca=0;
return true;}if(!FZ&&!!this.BT.Get(Ae)){var Z=Cz;var AD=this.BT.Get(Ae).G;while(
!!AD&&(AD!==this)){Z=B.abe(Z,AD.I.slice(0,2));AD=AD.G;}if(!AD)Z=this.H8.Get(Ae);
this.A_=Ae;var tmp=this.BT.Get(Ae);this.BT.Set(Ae,null);tmp.Cv(this.JK().InitializeUp(
Ae,Z,this.Hi.Get(Ae),this.FE.Get(Ae),this.C9.Get(Ae)+1,this.FD.Get(Ae),false,Cz,
this.GH.Get(Ae)));this.BroadcastEvent(this.KR().InitializeUp(Ae,this.C9.Get(Ae)+
1,false,tmp,Cz),0x18);this.Ca=0;return true;}this.Ca=0;return false;},Rb:function(
F$,Pr,Ga,H5){if(F$===this)F$=null;if(!this.BT.Get(this.A_))return;var CU;CU=this.
HB(B.abh(MA,this.Ev.Get(this.A_)),this.A_,1,F$,Ga,H5);if(!!CU&&(this.BT.Get(this.
A_)!==CU.Bh))this.SV(CU.Bh,CU.AW);if(!CU&&(this.BT.Get(this.A_)!==Pr))this.SV(Pr
,A0);},X$:function(F$,Pr,Ga){this.Rb(F$,Pr,Ga,0x0);},SV:function(F$,Fz){if(!this.
BT.Get(this.A_)||(this.BT.Get(this.A_)===F$))return;var tmp=this.BT.Get(this.A_);
this.BT.Set(this.A_,null);tmp.Cv(this.JK().InitializeUp(this.A_,this.H8.Get(this.
A_),this.Hi.Get(this.A_),this.FE.Get(this.A_),this.C9.Get(this.A_)+1,this.FD.Get(
this.A_),true,this.Ev.Get(this.A_),this.GH.Get(this.A_)));this.BroadcastEvent(this.
KR().InitializeUp(this.A_,this.C9.Get(this.A_)+1,true,tmp,this.Ev.Get(this.A_)),
0x18);var Z=this.Ev.Get(this.A_);var AD=null;if(!!F$)AD=F$.G;while(!!AD&&(AD!==this
)){Z=B.abe(Z,AD.I.slice(0,2));AD=AD.G;}if(!AD&&(F$!==this)){this.BT.Set(this.A_,
null);return;}this.BroadcastEvent(this.KR().InitializeDown(this.A_,this.C9.Get(this.
A_)+1,true,F$,this.Ev.Get(this.A_)),0x18);var ticksCount=0;ticksCount=((new Date
).getTime()-B.v$)|0;this.BT.Set(this.A_,F$);this.FD.Set(this.A_,Fz);this.Hi.Set(
this.A_,Z);this.H8.Set(this.A_,Z);this.C9.Set(this.A_,0);this.FE.Set(this.A_,0);
this.KS.Set(this.A_,ticksCount);this.GH.Set(this.A_,this.Ev.Get(this.A_));this.BT.
Get(this.A_).Cv(this.JK().InitializeDown(this.A_,Z,this.C9.Get(this.A_)+1,this.FD.
Get(this.A_),true,this.GH.Get(this.A_)));},V6:function(){return null;},_Init:function(
aArg){C.J._Init.call(this,aArg);C.Timer._Init.call(this.H9={M:this},0);(this.BT=[
]).__proto__=C.Root.BT;(this.C9=[]).__proto__=C.Root.C9;(this.PA=[]).__proto__=C.
Root.PA;(this.FE=[]).__proto__=C.Root.FE;(this.Hi=[]).__proto__=C.Root.Hi;(this.
KS=[]).__proto__=C.Root.KS;(this.H8=[]).__proto__=C.Root.H8;(this.FD=[]).__proto__=
C.Root.FD;(this.Ev=[]).__proto__=C.Root.Ev;(this.GH=[]).__proto__=C.Root.GH;(this.
Dy=[]).__proto__=C.Root.Dy;(this.CB=[]).__proto__=C.Root.CB;this.__proto__=C.Root;
this.E=0x10007F;this.H9.Em(10);this.H9.G3=[this,this.AaD];this.BC(aArg);},_Done:
function(){this.__proto__=C.J;this.H9._Done();C.J._Done.call(this);},_ReInit:function(
){C.J._ReInit.call(this);this.H9._ReInit();},_Mark:function(D){var A;C.J._Mark.call(
this,D);if((A=this.Ez)&&(A._cycle!=D))A._Mark(A._cycle=D);B.aa6(this.BT,D);if((A=
this.Et)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.H9)._cycle!=D)A._Mark(A._cycle=
D);},_className:"Core::Root"};C.Event={AZ:0,LD:false,BC:function(aArg){this.AZ=this.
Lu();},Lu:function(){var ticksCount=0;ticksCount=((new Date).getTime()-B.v$)|0;return ticksCount;
},_Init:function(aArg){this.__proto__=C.Event;this.BC(aArg);B.h7++;},_Done:function(
){this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((
A=this.M)&&(A._cycle!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:
"Core::Event"};C.KeyEvent={Cu:0,Bt:0,Down:false,Initialize2:function(CC,FZ){this.
Cu=0;this.Bt=CC;this.Down=FZ;if((CC>=0x30)&&(CC<=0x39))this.Cu=(10+CC)-48;if((CC>=
0x41)&&(CC<=0x5A))this.Cu=(105+CC)-65;if((CC>=0x61)&&(CC<=0x7A))this.Cu=(105+CC)-
97;if(CC===0x20)this.Cu=131;if(!this.Cu)switch(CC){case 0x2B:this.Cu=132;break;case
0x2D:this.Cu=133;break;case 0x2A:this.Cu=134;break;case 0x2F:this.Cu=135;break;case
0x3D:this.Cu=136;break;case 0x2E:this.Cu=137;break;case 0x2C:this.Cu=138;break;case
0x3A:this.Cu=139;break;case 0x3B:this.Cu=140;break;default:;}return this;},Initialize:
function(CC,FZ){this.Cu=CC;this.Down=FZ;this.Bt=0x00;var R$=CC-10;var R_=CC-105;
if((R$>=0)&&(R$<=9))this.Bt=(48+R$)&0xFFFF;if((R_>=0)&&(R_<=25))this.Bt=(65+R_)&
0xFFFF;if(CC===131)this.Bt=0x20;if(this.Bt===0x00)switch(CC){case 132:this.Bt=0x2B;
break;case 133:this.Bt=0x2D;break;case 134:this.Bt=0x2A;break;case 135:this.Bt=0x2F;
break;case 136:this.Bt=0x3D;break;case 137:this.Bt=0x2E;break;case 138:this.Bt=0x2C;
break;case 139:this.Bt=0x3A;break;case 140:this.Bt=0x3B;break;default:;}return this;
},Wc:function(UU){switch(UU){case 141:return((this.Bt>=0x41)&&(this.Bt<=0x5A))||((
this.Bt>=0x61)&&(this.Bt<=0x7A));case 142:return(((this.Bt>=0x41)&&(this.Bt<=0x5A
))||((this.Bt>=0x61)&&(this.Bt<=0x7A)))||((this.Bt>=0x30)&&(this.Bt<=0x39));case
143:return(this.Bt>=0x30)&&(this.Bt<=0x39);case 144:return(((this.Bt>=0x41)&&(this.
Bt<=0x46))||((this.Bt>=0x61)&&(this.Bt<=0x66)))||((this.Bt>=0x30)&&(this.Bt<=0x39
));case 145:return this.Bt!==0x00;case 146:return(this.Bt===0x00)&&!!this.Cu;case
147:return(((this.Cu===6)||(this.Cu===7))||(this.Cu===4))||(this.Cu===5);case 148:
return(this.Bt!==0x00)||!!this.Cu;default:;}return UU===this.Cu;},_Init:function(
aArg){C.Event._Init.call(this,aArg);this.__proto__=C.KeyEvent;},_className:"Core::KeyEvent"
};C.NI={Op:null,DU:B.wf,Ds:0,Cc:0,Down:false,Ef:false,InitializeUp:function(Ae,D2
,JD,R8,F0){this.Down=false;this.Cc=Ae;this.Ds=D2;this.DU=F0;this.Op=R8;this.Ef=JD;
return this;},InitializeDown:function(Ae,D2,JD,R8,F0){this.Down=true;this.Cc=Ae;
this.Ds=D2;this.DU=F0;this.Op=R8;this.Ef=JD;return this;},_Init:function(aArg){C.
Event._Init.call(this,aArg);this.__proto__=C.NI;},_Mark:function(D){var A;C.Event.
_Mark.call(this,D);if((A=this.Op)&&(A._cycle!=D))A._Mark(A._cycle=D);},_className:
"Core::CursorGrabEvent"};C.HA={Lx:B.wf,DU:B.wf,Ds:0,CV:0,EE:B.wf,C2:B.wf,Cc:0,Down:
false,Ef:false,InitializeHold:function(Ae,IP,MF,MG,D2,Fz,F0,ME){this.Down=true;this.
Cc=Ae;this.C2=B.abf(IP,Fz);this.EE=B.abf(MF,Fz);this.CV=MG;this.Ds=D2;this.DU=F0;
this.Lx=ME;return this;},InitializeUp:function(Ae,IP,MF,MG,D2,Fz,JD,F0,ME){this.
Down=false;this.Cc=Ae;this.C2=B.abf(IP,Fz);this.EE=B.abf(MF,Fz);this.CV=MG;this.
Ds=D2;this.Ef=JD;this.DU=F0;this.Lx=ME;return this;},InitializeDown:function(Ae,
IP,D2,Fz,JD,F0){this.Down=true;this.Cc=Ae;this.C2=B.abf(IP,Fz);this.EE=B.abf(IP,
Fz);this.CV=0;this.Ds=D2;this.Ef=JD;this.DU=F0;this.Lx=F0;return this;},_Init:function(
aArg){C.Event._Init.call(this,aArg);this.__proto__=C.HA;},_className:"Core::CursorEvent"
};C.Lh={Lx:B.wf,DU:B.wf,Ds:0,CV:0,AW:B.wf,EE:B.wf,C2:B.wf,Cc:0,Initialize:function(
Ae,IP,MF,aOffset,MG,Aaq,Fz,F0,ME){this.Cc=Ae;this.C2=B.abf(IP,Fz);this.EE=B.abf(
MF,Fz);this.AW=aOffset;this.CV=MG;this.Ds=Aaq;this.DU=F0;this.Lx=ME;return this;
},_Init:function(aArg){C.Event._Init.call(this,aArg);this.__proto__=C.Lh;},_className:
"Core::DragEvent"};C.HW={DB:function(A2,aClip,aOffset,aOpacity,aBlend){},GetClipping:
function(){var A;var H=C.By.GetClipping.call(this);if(((this.E&0x80000)===0x80000
)){var J9=AG;var Q;for(Q=this.T;!!Q&&!((Q.E&0x200)===0x200);Q=Q.T)if(((Q.E&0x1)===
0x1))J9=B.wC(J9,Q.GetClipping());H=B.wC(H,J9);}return H;},AN:function(Eq,Fd){var
A;var PJ=this.E;if((!!this.G&&((this.E&0x80001)===0x80001))&&((Fd&0x80000)===0x80000
))this.G.Ai(this.GetClipping());C.By.AN.call(this,Eq,Fd);if(((!!this.G&&((this.E&
0x1)===0x1))&&((Eq&0x80000)===0x80000))&&!((PJ&0x80000)===0x80000))this.G.Ai(this.
GetClipping());},R:function(value){var A;if(B.aaY(value,this.I))return;var I0=[(
A=this.I)[2]-A[0],A[3]-A[1]];var Su=[value[2]-value[0],value[3]-value[1]];var K0=
!B.aaX(I0,Su);var Be=B.abe(value.slice(0,2),this.I.slice(0,2));if(!B.aaX(Be,A0)&&
!K0){var Q=this.T;while(!!Q&&!((Q.E&0x200)===0x200)){if(((Q.E&0x400)===0x400)){var
tmp=((Q.E&0x100)===0x100);Q.LI(Be,tmp);}Q=Q.T;}}if((K0&&(I0[0]>0))&&(I0[1]>0)){var
AU=this.I;var Q=this.T;while(!!Q&&!((Q.E&0x200)===0x200)){if(((Q.E&0x400)===0x400
)){if(!!Q.Bw&&(Q.Bw.J1!==this))Q.Bw=null;if(!Q.Bw&&(Q.CI!==0x14))Q.MX(AU,this);}
Q=Q.T;}}C.By.R.call(this,value);if(!!this.G&&K0){this.E=this.E|0x1000;if(!((this.
G.E&0x2000)===0x2000)){this.G.E=this.G.E|0x4000;B.pe([A=this.G,A.DQ],this);}}},_Init:
function(aArg){C.By._Init.call(this,aArg);this.__proto__=C.HW;this.E=0x203;},_className:
"Core::Outline"};C.DH={BV:null,Bh:null,C6:null,DW:null,Ct:-1,B4:0,Ib:8,Dx:0,Fa:0
,GC:B.wf,DV:-1,Bn:0,Ix:24,Ci:0,Fr:null,M2:false,Ji:function(){return null;},IK:function(
B7,Du,Fy,EP,EQ,H4,DI,Ep,CT,CR,CS){throw new Error(Rz);},Jg:function(B7,H4,DI,Ep,
CT,CR,CS){throw new Error(RA);},KD:function(B7,Du,Fy,EP,EQ,DI,Ep,CT,CR,CS){throw new
Error(RB);},DispatchEvent:function(A1){var result;result=C.J.DispatchEvent.call(
this,A1);return result;},GB:function(Er){var A;if(!this.Fr)return;this.M2=true;var
Bv=this.Nj(0-this.Bn,1);var BL=this.Nj((((A=this.I)[3]-A[1])-this.Bn)-1,2);var Gb=
BL-Bv;if(Gb<1)Gb=1;var H6=(Gb/2)|0;var H7=(Gb/3)|0;if(!H6)H6=1;if(!H7)H7=1;if(Bv<
this.B4){Bv=Bv-H6;BL=BL+H7;}else if(BL>this.Ct){Bv=Bv-H7;BL=BL+H6;}else{Bv=this.
B4;BL=this.Ct;}if(Bv>=this.Ci){Bv=0;BL=-1;}else if(BL<0){Bv=0;BL=-1;}if(BL>=this.
Ci)BL=this.Ci-1;if(Bv<0)Bv=0;var Ii=this.B4;var Ij=this.Ct;var JT=0;var JU=-1;if(
Bv>Ii)Ii=Bv;if(BL<Ij)Ij=BL;if(Ii<=Ij){while((this.Ct<BL)&&(this.B4<Ii)){this.Ih(
);this.MO();}while((this.B4>Bv)&&(this.Ct>Ij)){this.Nm();this.MN();}}else{this.Ct=(
this.Ct-this.B4)+Bv;this.B4=Bv;JT=this.B4;JU=this.Ct;}while(this.B4<Bv)this.Ih();
while(this.Ct>BL)this.Nm();while(this.B4>Bv)this.MN();while(this.Ct<BL)this.MO();
var N=this.AB;var Ck=this.B4;var Z=[0,this.Bn+this.Dw(Ck,0)];var AI=(A=this.I)[3
]-A[1];var MW=null;var Vy=(A=this.I)[2]-A[0];while(!!N){var D_=Ck;var GO=((D_>=0
)&&(D_<=-1))||((Ck>=JT)&&(Ck<=JU));var JP=N.GetExtent();var Fh=B.abe(Z,JP.slice(
0,2));if(GO)this.Fa=this.Ix;else this.Fa=JP[3]-JP[1];var Sp=Z[1];var Sq=Z[1]+this.
Fa;if(!B.aaX(Fh,A0))N.LI(Fh,true);if((GO&&(Sp<AI))&&(Sq>0)){this.Bh=N;this.DV=D_;
this.GC=[Vy,this.Fa];(A=this.DW)?A[1].call(A[0],this):null;}N=N.T;Ck+=1;Z=[Z[0],
Z[1]+this.Fa];}Ck=this.B4;N=this.AB;Z=[0,this.Bn+this.Dw(Ck,0)];while(!!N){var D_=
Ck;var GO=((D_>=0)&&(D_<=-1))||((Ck>=JT)&&(Ck<=JU));if(GO)this.Fa=this.Ix;else this.
Fa=(A=N.GetExtent())[3]-A[1];var Sp=Z[1];var Sq=Z[1]+this.Fa;if(GO&&!((Sp<AI)&&(
Sq>0))){this.Bh=N;this.DV=D_;this.GC=[Vy,this.Fa];(A=this.DW)?A[1].call(A[0],this
):null;}if(D_===-1)MW=N;N=N.T;Ck+=1;Z=[Z[0],Z[1]+this.Fa];}this.Bh=null;this.DV=-
1;this.CW(MW);this.M2=false;},NN:function(P,aFilter){return null;},Dp:function(F_
,Bq,CT,CR,CS){throw new Error(RC);},Oh:function(P){throw new Error(RD);},Ra:function(
P,D1){throw new Error(RE);},B5:function(P){throw new Error(RF);},X:function(P,D1
){throw new Error(RG);},Dw:function(R6,R3){return R6*this.Ix;},Nj:function(Cz,R3
){return(Cz/this.Ix)|0;},Nm:function(){var N=this.AP;if(!N)return null;if(N===this.
C4)this.CW(null);this.Ct=this.Ct-1;if(!!N.U)N.U.T=null;else this.AB=null;this.AP=
N.U;N.U=null;N.G=null;N.Bw=null;if(this.Dx<this.Ib){if(!!this.BV)this.BV.U=N;N.T=
this.BV;this.BV=N;this.Dx++;}return N;},MO:function(){var A;var N=this.BV;var GJ=
this.Fr;var Nx=++this.Ct;while(!!N&&(((A=N)?A.__proto__:null)!==GJ))N=N.T;if(!!N
){if(!!N.T)N.T.U=N.U;if(!!N.U)N.U.T=N.T;if(this.BV===N)this.BV=N.T;N.T=null;N.U=
null;this.Dx--;}else{N=(C.Bh.isPrototypeOf(A=B._NewObject(GJ,0))?A:null);N.HN(0x1D
);if(!!this.Dx)this.Ib++;}this.Fa=this.Ix;this.DV=Nx;this.GC=[(A=this.I)[2]-A[0]
,this.Fa];this.Bh=N;(A=this.DW)?A[1].call(A[0],this):null;this.Bh=null;this.DV=-
1;if(!!this.AP)this.AP.T=N;N.G=this;N.U=this.AP;this.AP=N;if(!this.AB)this.AB=N;
if(Nx===-1)this.CW(N);return N;},Ih:function(){var N=this.AB;if(!N)return null;if(
N===this.C4)this.CW(null);this.B4=this.B4+1;if(!!N.T)N.T.U=null;else this.AP=null;
this.AB=N.T;N.T=null;N.G=null;N.Bw=null;if(this.Dx<this.Ib){if(!!this.BV)this.BV.
U=N;N.T=this.BV;this.BV=N;this.Dx++;}return N;},MN:function(){var A;var N=this.BV;
var GJ=this.Fr;var Nw=--this.B4;while(!!N&&(((A=N)?A.__proto__:null)!==GJ))N=N.T;
if(!!N){if(!!N.T)N.T.U=N.U;if(!!N.U)N.U.T=N.T;if(this.BV===N)this.BV=N.T;N.T=null;
N.U=null;this.Dx--;}else{N=(C.Bh.isPrototypeOf(A=B._NewObject(GJ,0))?A:null);N.HN(
0x1D);if(!!this.Dx)this.Ib++;}this.Fa=this.Ix;this.DV=Nw;this.GC=[(A=this.I)[2]-
A[0],this.Fa];this.Bh=N;(A=this.DW)?A[1].call(A[0],this):null;this.Bh=null;this.
DV=-1;if(!!this.AB)this.AB.U=N;N.G=this;N.T=this.AB;this.AB=N;if(!this.AP)this.AP=
N;if(Nw===-1)this.CW(N);return N;},SE:function(Ab){this.BS(this.C6.AW[1]);},SF:function(
Ab){var A;{var K=this.Qp(0,this.Ci-1);var If=this.I.slice(0,2);if(K[0]>If[0])K=[
].concat(If[0],K.slice(1,4));if(K[1]>If[1])K=B.abP(K,If[1]);var Be=K[1]-this.I[1
];var JV=((A=this.I)[3]-A[1])-(K[3]-K[1]);if(JV>0)JV=0;this.C6.AW=[0,this.Bn];this.
C6.BO=[0,(this.Bn+JV)-Be];this.C6.BN=[0,this.Bn-Be];}},QV:function(value){if(value===
this.C6)return;if(!!value&&!!value.Ig){B.ab5("%s%*%s",Ph,value,Pi);throw new Error(
MB);}if(!!this.C6){this.C6.KZ=null;this.C6.Ig=null;}this.C6=value;if(!!value){value.
KZ=[this,this.SF];value.Ig=[this,this.SE];}},BS:function(value){var A;if(value===
this.Bn)return;this.Bn=value;this.BH();this.Ai([0,0,(A=this.I)[2]-A[0],A[3]-A[1]
]);},WR:function(value){var A;if(value<1)value=1;if(value===this.Ix)return;this.
Ix=value;while(!!this.Ih());this.BH();this.Ai([0,0,(A=this.I)[2]-A[0],A[3]-A[1]]
);},Gq:function(value){var A;if(value<0)value=0;if(value===this.Ci)return;var K=[
0,0,(A=this.I)[2]-A[0],A[3]-A[1]];if(value>this.Ci){K=[].concat(K.slice(0,3),this.
Bn+this.Dw(value,3));K=B.abP(K,this.Bn+this.Dw(this.Ci,3));}else{K=B.abP(K,this.
Bn+this.Dw(value,3));K=[].concat(K.slice(0,3),this.Bn+this.Dw(this.Ci,3));}this.
Ci=value;this.BH();this.Ai(K);},QR:function(value){var A;if(value===this.Fr)return;
this.Fr=value;while(!!this.Ih());this.BV=null;this.Dx=0;this.BH();this.Ai([0,0,(
A=this.I)[2]-A[0],A[3]-A[1]]);},Qp:function(D0,EO){if(D0<0)D0=0;if(EO>=this.Ci)EO=
this.Ci-1;if(D0>EO)return AG;var K=this.I;var Fh=this.Bn;K=[].concat(K.slice(0,3
),(K[1]+Fh)+this.Dw(EO+1,0));K=B.abP(K,(K[1]+Fh)+this.Dw(D0,0));return K;},_Init:
function(aArg){C.J._Init.call(this,aArg);this.__proto__=C.DH;this.R(MC);this.Fr=
B.acf.Text;},_Mark:function(D){var A;C.J._Mark.call(this,D);if((A=this.BV)&&(A._cycle
!=D))A._Mark(A._cycle=D);if((A=this.Bh)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=
this.C6)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.DW)&&((A=A[0])._cycle!=D)
)A._Mark(A._cycle=D);},_className:"Core::VerticalList"};C.BB={BV:null,Bh:null,C6:
null,DW:null,JS:-1,JR:0,Ct:-1,B4:0,Ib:8,Dx:0,Fb:0,GC:B.wf,DV:-1,Bn:0,Iy:24,Ci:0,
Fr:null,M2:false,Ji:function(){return null;},IK:function(B7,Du,Fy,EP,EQ,H4,DI,Ep
,CT,CR,CS){throw new Error(Pj);},Jg:function(B7,H4,DI,Ep,CT,CR,CS){throw new Error(
Pk);},KD:function(B7,Du,Fy,EP,EQ,DI,Ep,CT,CR,CS){throw new Error(Pl);},DispatchEvent:
function(A1){var result;result=C.J.DispatchEvent.call(this,A1);return result;},GB:
function(Er){var A;if(!this.Fr)return;this.M2=true;var Bv=this.Nj(0-this.Bn,1);var
BL=this.Nj((((A=this.I)[2]-A[0])-this.Bn)-1,2);var Gb=BL-Bv;if(Gb<1)Gb=1;var H6=(
Gb/2)|0;var H7=(Gb/3)|0;if(!H6)H6=1;if(!H7)H7=1;if(Bv<this.B4){Bv=Bv-H6;BL=BL+H7;
}else if(BL>this.Ct){Bv=Bv-H7;BL=BL+H6;}else{Bv=this.B4;BL=this.Ct;}if(Bv>=this.
Ci){Bv=0;BL=-1;}else if(BL<0){Bv=0;BL=-1;}if(BL>=this.Ci)BL=this.Ci-1;if(Bv<0)Bv=
0;var Ii=this.B4;var Ij=this.Ct;var JT=0;var JU=-1;if(Bv>Ii)Ii=Bv;if(BL<Ij)Ij=BL;
if(Ii<=Ij){while((this.Ct<BL)&&(this.B4<Ii)){this.Ih();this.MO();}while((this.B4>
Bv)&&(this.Ct>Ij)){this.Nm();this.MN();}}else{this.Ct=(this.Ct-this.B4)+Bv;this.
B4=Bv;JT=this.B4;JU=this.Ct;}while(this.B4<Bv)this.Ih();while(this.Ct>BL)this.Nm(
);while(this.B4>Bv)this.MN();while(this.Ct<BL)this.MO();var N=this.AB;var Ck=this.
B4;var Z=[this.Bn+this.Dw(Ck,0),0];var Bj=(A=this.I)[2]-A[0];var MW=null;var Vu=(
A=this.I)[3]-A[1];while(!!N){var D_=Ck;var GO=((D_>=this.JR)&&(D_<=this.JS))||((
Ck>=JT)&&(Ck<=JU));var JP=N.GetExtent();var Fh=B.abe(Z,JP.slice(0,2));if(GO)this.
Fb=this.Iy;else this.Fb=JP[2]-JP[0];var Sn=Z[0];var So=Z[0]+this.Fb;if(!B.aaX(Fh
,A0))N.LI(Fh,true);if((GO&&(Sn<Bj))&&(So>0)){this.Bh=N;this.DV=D_;this.GC=[this.
Fb,Vu];(A=this.DW)?A[1].call(A[0],this):null;}N=N.T;Ck+=1;Z=[Z[0]+this.Fb,Z[1]];
}Ck=this.B4;N=this.AB;Z=[this.Bn+this.Dw(Ck,0),0];while(!!N){var D_=Ck;var GO=((
D_>=this.JR)&&(D_<=this.JS))||((Ck>=JT)&&(Ck<=JU));if(GO)this.Fb=this.Iy;else this.
Fb=(A=N.GetExtent())[2]-A[0];var Sn=Z[0];var So=Z[0]+this.Fb;if(GO&&!((Sn<Bj)&&(
So>0))){this.Bh=N;this.DV=D_;this.GC=[this.Fb,Vu];(A=this.DW)?A[1].call(A[0],this
):null;}if(D_===-1)MW=N;N=N.T;Ck+=1;Z=[Z[0]+this.Fb,Z[1]];}this.JR=0;this.JS=-1;
this.Bh=null;this.DV=-1;this.CW(MW);this.M2=false;},NN:function(P,aFilter){return null;
},Dp:function(F_,Bq,CT,CR,CS){throw new Error(Pm);},Oh:function(P){throw new Error(
RH);},Ra:function(P,D1){throw new Error(RI);},B5:function(P){throw new Error(RJ);
},X:function(P,D1){throw new Error(RK);},Dw:function(R6,R3){return R6*this.Iy;},
Nj:function(Cz,R3){return(Cz/this.Iy)|0;},Nm:function(){var N=this.AP;if(!N)return null;
if(N===this.C4)this.CW(null);this.Ct=this.Ct-1;if(!!N.U)N.U.T=null;else this.AB=
null;this.AP=N.U;N.U=null;N.G=null;N.Bw=null;if(this.Dx<this.Ib){if(!!this.BV)this.
BV.U=N;N.T=this.BV;this.BV=N;this.Dx++;}return N;},MO:function(){var A;var N=this.
BV;var GJ=this.Fr;var Nx=++this.Ct;while(!!N&&(((A=N)?A.__proto__:null)!==GJ))N=
N.T;if(!!N){if(!!N.T)N.T.U=N.U;if(!!N.U)N.U.T=N.T;if(this.BV===N)this.BV=N.T;N.T=
null;N.U=null;this.Dx--;}else{N=(C.Bh.isPrototypeOf(A=B._NewObject(GJ,0))?A:null
);N.HN(0x1D);if(!!this.Dx)this.Ib++;}this.Fb=this.Iy;this.DV=Nx;this.GC=[this.Fb
,(A=this.I)[3]-A[1]];this.Bh=N;(A=this.DW)?A[1].call(A[0],this):null;this.Bh=null;
this.DV=-1;if(!!this.AP)this.AP.T=N;N.G=this;N.U=this.AP;this.AP=N;if(!this.AB)this.
AB=N;if(Nx===-1)this.CW(N);return N;},Ih:function(){var N=this.AB;if(!N)return null;
if(N===this.C4)this.CW(null);this.B4=this.B4+1;if(!!N.T)N.T.U=null;else this.AP=
null;this.AB=N.T;N.T=null;N.G=null;N.Bw=null;if(this.Dx<this.Ib){if(!!this.BV)this.
BV.U=N;N.T=this.BV;this.BV=N;this.Dx++;}return N;},MN:function(){var A;var N=this.
BV;var GJ=this.Fr;var Nw=--this.B4;while(!!N&&(((A=N)?A.__proto__:null)!==GJ))N=
N.T;if(!!N){if(!!N.T)N.T.U=N.U;if(!!N.U)N.U.T=N.T;if(this.BV===N)this.BV=N.T;N.T=
null;N.U=null;this.Dx--;}else{N=(C.Bh.isPrototypeOf(A=B._NewObject(GJ,0))?A:null
);N.HN(0x1D);if(!!this.Dx)this.Ib++;}this.Fb=this.Iy;this.DV=Nw;this.GC=[this.Fb
,(A=this.I)[3]-A[1]];this.Bh=N;(A=this.DW)?A[1].call(A[0],this):null;this.Bh=null;
this.DV=-1;if(!!this.AB)this.AB.U=N;N.G=this;N.T=this.AB;this.AB=N;if(!this.AP)this.
AP=N;if(Nw===-1)this.CW(N);return N;},SE:function(Ab){this.BS(this.C6.AW[0]);},SF:
function(Ab){var A;{var K=this.Qp(0,this.Ci-1);var If=this.I.slice(0,2);if(K[0]>
If[0])K=[].concat(If[0],K.slice(1,4));if(K[1]>If[1])K=B.abP(K,If[1]);var Be=K[0]-
this.I[0];var JV=((A=this.I)[2]-A[0])-(K[2]-K[0]);if(JV>0)JV=0;this.C6.AW=[this.
Bn,0];this.C6.BO=[(this.Bn+JV)-Be,0];this.C6.BN=[this.Bn-Be,0];}},QV:function(value
){if(value===this.C6)return;if(!!value&&!!value.Ig){B.ab5("%s%*%s",Ph,value,Pi);
throw new Error(MB);}if(!!this.C6){this.C6.KZ=null;this.C6.Ig=null;}this.C6=value;
if(!!value){value.KZ=[this,this.SF];value.Ig=[this,this.SE];}},BS:function(value
){var A;if(value===this.Bn)return;this.Bn=value;this.BH();this.Ai([0,0,(A=this.I
)[2]-A[0],A[3]-A[1]]);},WS:function(value){var A;if(value<1)value=1;if(value===this.
Iy)return;this.Iy=value;while(!!this.Ih());this.BH();this.Ai([0,0,(A=this.I)[2]-
A[0],A[3]-A[1]]);},Gq:function(value){var A;if(value<0)value=0;if(value===this.Ci
)return;var K=[0,0,(A=this.I)[2]-A[0],A[3]-A[1]];if(value>this.Ci){K=[].concat(this.
Bn+this.Dw(this.Ci,3),K.slice(1,4));K=B.abN(K,this.Bn+this.Dw(value,3));}else{K=
B.abN(K,this.Bn+this.Dw(this.Ci,3));K=[].concat(this.Bn+this.Dw(value,3),K.slice(
1,4));}this.Ci=value;this.BH();this.Ai(K);},QR:function(value){var A;if(value===
this.Fr)return;this.Fr=value;while(!!this.Ih());this.BV=null;this.Dx=0;this.BH();
this.Ai([0,0,(A=this.I)[2]-A[0],A[3]-A[1]]);},Qp:function(D0,EO){if(D0<0)D0=0;if(
EO>=this.Ci)EO=this.Ci-1;if(D0>EO)return AG;var K=this.I;var Fh=this.Bn;K=B.abN(
K,(K[0]+Fh)+this.Dw(EO+1,0));K=[].concat((K[0]+Fh)+this.Dw(D0,0),K.slice(1,4));return K;
},LC:function(D0,EO){var A;if(D0<0)D0=0;if(D0>EO)return;if(this.JR>this.JS){this.
JR=D0;this.JS=EO;}else{if(D0<this.JR)this.JR=D0;if(EO>this.JS)this.JS=EO;}var K=[
0,0,(A=this.I)[2]-A[0],A[3]-A[1]];K=[].concat(this.Bn+this.Dw(D0,0),K.slice(1,4)
);K=B.abN(K,this.Bn+this.Dw(EO+1,0));this.BH();this.Ai(K);},_Init:function(aArg){
C.J._Init.call(this,aArg);this.__proto__=C.BB;this.R(MC);this.Fr=B.acf.Text;},_Mark:
function(D){var A;C.J._Mark.call(this,D);if((A=this.BV)&&(A._cycle!=D))A._Mark(A.
_cycle=D);if((A=this.Bh)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.C6)&&(A._cycle
!=D))A._Mark(A._cycle=D);if((A=this.DW)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D
);},_className:"Core::HorizontalList"};C.H0={QO:null,N4:null,N1:null,FR:null,Bk:
null,AE:0,Cc:0,AZ:0,Ds:0,CV:0,AW:B.wf,EE:B.wf,C2:B.wf,Ya:8,S$:1,Down:false,GY:false
,Ef:false,Sd:false,M3:0,DB:function(A2,aClip,aOffset,aOpacity,aBlend){},Cv:function(
A1){var A;var Ak=(C.HA.isPrototypeOf(A1)?A1:null);var Cg=(C.Lh.isPrototypeOf(A1)?
A1:null);var PF=this.GY;var Ge;var Fg;var Nr;var Dm;var MR;if(!Ak&&!Cg)return null;
Ge=(!!Ak&&Ak.Down)&&!Ak.CV;Fg=(!!Ak&&Ak.Down)&&(Ak.CV>0);Nr=(!!Ak&&Ak.Down)&&(Ak.
CV>this.M3);Dm=!!Ak&&!Ak.Down;MR=!!Cg;if(Ge)this.M3=((A=(Ak.Ef?0:50))&0x80)?A|0xFFFFFF00:
A&0xFF;if(Ge){var JY=0;var GI;this.AE=this.AE|(1<<Ak.Cc);for(GI=this.AE&4095;GI>
0;GI=GI>>1)if(!!(GI&1))JY=JY+1;if(JY===1)this.AE=(this.AE|16777216)|(4096<<Ak.Cc
);}if(Dm&&(this.AE<16777216)){var Eb=this.Kg();var CU=null;if(!!Eb){var SK=(!!this.
U?this.U:this.G);CU=Eb.HB(B.abh(Pn,Ak.DU),Ak.Cc,Ak.Ds,null,SK,0x0);}if(!!CU){var
i;for(i=0;i<10;i++)if(!!(this.AE&(1<<i)))CU.Bh.Cv(B._NewObject(C.HA,0).InitializeDown(
i,Ak.C2,Ak.Ds,A0,true,Ak.DU));for(i=0;i<10;i++)if(!!(this.AE&(1<<i)))CU.Bh.Cv(B.
_NewObject(C.HA,0).InitializeUp(i,Ak.C2,Ak.C2,0,Ak.Ds,A0,false,Ak.DU,Ak.DU));}}if(
Dm)this.AE=(this.AE&~(1<<Ak.Cc))|33554432;if(Nr&&(this.AE<16777216))this.AE=this.
AE|67108864;if(Dm&&Ak.Ef)this.AE=this.AE|67108864;if(Dm&&!(this.AE&16777215))this.
AE=0;if(Fg&&(this.AE>=67108864)){var Eb=this.Kg();if(!!Eb)Eb.Rb(null,null,this,0x0
);}if((Fg&&!!(this.AE&16777216))&&!!(this.AE&33554432)){Fg=false;Dm=true;}if(!!Ak&&
!(this.AE&(4096<<Ak.Cc)))return this;if(!!Cg&&!(this.AE&(4096<<Cg.Cc)))return this;
if(Dm&&!(this.AE&16777216))return this;if(((Ge||MR)||Fg)&&((this.AE<16777216)||(
this.AE>=33554432)))return this;if(Dm)this.AE=this.AE&3758100479;if(Dm&&!(this.AE&
16777215))this.AE=0;if(!!Ak){this.Down=Ge||Fg;this.GY=this.Qz(Ak.C2);this.EE=Ak.
EE;this.C2=Ak.C2;this.AW=A0;this.CV=Ak.CV;this.Ds=Ak.Ds;this.Ef=Ak.Ef;this.Cc=Ak.
Cc;this.AZ=Ak.AZ;if(Ak.Down&&!Ak.CV)PF=false;}if(!!Cg){this.Down=true;this.GY=this.
Qz(Cg.C2);this.EE=Cg.EE;this.C2=Cg.C2;this.AW=Cg.AW;this.CV=Cg.CV;this.Ds=Cg.Ds;
this.Cc=Cg.Cc;this.Ef=false;this.AZ=Cg.AZ;}var Sb=this.Down;if(!!Cg)(A=this.QO)?
A[1].call(A[0],this):null;if((!!Ak&&this.Down)&&!this.CV)(A=this.Bk)?A[1].call(A[
0],this):null;if((this.Down&&this.GY)&&!PF){this.Sd=true;(A=this.N1)?A[1].call(A[
0],this):null;}if(this.Sd&&(((Sb&&!this.GY)&&PF)||((!Sb&&this.GY)&&PF))){this.Sd=
false;(A=this.N4)?A[1].call(A[0],this):null;}if(!!Ak&&!Sb)(A=this.FR)?A[1].call(
A[0],this):null;return this;},HB:function(AS,Ae,D2,He,Ga,H5){var A;if(!!He&&(He!==
this))return null;if((D2<1)||(D2>this.S$))return null;if(this.AE>=33554432)return null;
if((this.AE>=16777216)&&!(this.AE&(4096<<Ae)))return null;if(this.V9()){var H=B.
lb(AS,this.GetExtent());if(!((H[0]>=H[2])||(H[1]>=H[3]))){var D3=B.aaI(AS);var Be=
A0;if(D3[0]<H[0])Be=[H[0]-D3[0],Be[1]];if(D3[0]>=H[2])Be=[(H[2]-D3[0])-1,Be[1]];
if(D3[1]<H[1])Be=[Be[0],H[1]-D3[1]];if(D3[1]>=H[3])Be=[Be[0],(H[3]-D3[1])-1];return B.
_NewObject(C.NJ,0).Initialize(this,Be);}}else{var BW=B.abi(9,B.wf,null);var i;BW.
Set(0,B.aaI(AS));BW.Set(1,BW.Get(0));BW.Set(2,BW.Get(0));BW.Set(3,BW.Get(0));BW.
Set(4,BW.Get(0));BW.Set(1,[AS[0],BW.Get(1)[1]]);BW.Set(2,[BW.Get(2)[0],AS[1]]);BW.
Set(3,[AS[2],BW.Get(3)[1]]);BW.Set(4,[BW.Get(4)[0],AS[3]]);BW.Set(5,AS.slice(0,2
));BW.Set(6,[AS[2],AS[1]]);BW.Set(7,[AS[0],AS[3]]);BW.Set(8,AS.slice(2,4));for(i=
0;i<9;i=i+1)if(this.Qz(BW.Get(i)))return B._NewObject(C.NJ,0).Initialize(this,B.
abe(BW.Get(i),BW.Get(0)));}return null;},QU:function(value){if(value<1)value=1;this.
Ya=value;},QT:function(value){if(value<1)value=1;this.S$=value;},Ar:function(value
){if(value)this.AN(0x100000,0x0);else this.AN(0x0,0x100000);},_Init:function(aArg
){C.L8._Init.call(this,aArg);this.__proto__=C.H0;this.E=0x10011B;},_Mark:function(
D){var A;C.L8._Mark.call(this,D);if((A=this.QO)&&((A=A[0])._cycle!=D))A._Mark(A.
_cycle=D);if((A=this.N4)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);if((A=this.N1
)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);if((A=this.FR)&&((A=A[0])._cycle!=D)
)A._Mark(A._cycle=D);if((A=this.Bk)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);},
_className:"Core::SimpleTouchHandler"};C.Cn={timer:null,KZ:null,Ig:null,AE:0,Pv:
0,J8:0,PE:B.wf,JO:0,Hg:0,Bg:0,I7:0,K3:0,JN:0,Hf:0,Bf:0,I6:0,I5:0,EE:B.wf,SW:B.wf
,BN:B.wf,BO:B.wf,AW:B.wf,L$:B.wf,Fw:B.wf,L_:B.wf,On:true,Om:true,KH:false,FH:false
,FI:false,FA:false,M3:0,DB:function(A2,aClip,aOffset,aOpacity,aBlend){},Cv:function(
A1){var A;var Ak=(C.HA.isPrototypeOf(A1)?A1:null);var Cg=(C.Lh.isPrototypeOf(A1)?
A1:null);var CE=(C.NI.isPrototypeOf(A1)?A1:null);var Ge;var Fg;var Nr;var Dm;var
MR;Ge=(!!Ak&&Ak.Down)&&!Ak.CV;Fg=(!!Ak&&Ak.Down)&&(Ak.CV>0);Nr=(!!Ak&&Ak.Down)&&(
Ak.CV>this.M3);Dm=!!Ak&&!Ak.Down;MR=!!Cg;if(Ge)this.M3=((A=(Ak.Ef?0:50))&0x80)?A|
0xFFFFFF00:A&0xFF;if(Ge){var JY=0;var GI;this.AE=this.AE|(1<<Ak.Cc);for(GI=this.
AE&4095;GI>0;GI=GI>>1)if(!!(GI&1))JY=JY+1;if(JY===1)this.AE=(this.AE|16777216)|(
4096<<Ak.Cc);}if(Dm&&(this.AE<16777216)){var Eb=this.Kg();var CU=null;if(!!Eb){var
SK=(!!this.U?this.U:this.G);CU=Eb.HB(B.abh(Pn,Ak.DU),Ak.Cc,Ak.Ds,null,SK,0x0);}if(
!!CU){var i;for(i=0;i<10;i++)if(!!(this.AE&(1<<i)))CU.Bh.Cv(B._NewObject(C.HA,0).
InitializeDown(i,Ak.C2,Ak.Ds,A0,true,Ak.DU));for(i=0;i<10;i++)if(!!(this.AE&(1<<
i)))CU.Bh.Cv(B._NewObject(C.HA,0).InitializeUp(i,Ak.C2,Ak.C2,0,Ak.Ds,A0,false,Ak.
DU,Ak.DU));}}if(Dm)this.AE=(this.AE&~(1<<Ak.Cc))|33554432;if(Nr&&(this.AE<16777216
))this.AE=this.AE|67108864;if(Dm&&Ak.Ef)this.AE=this.AE|67108864;if(Dm&&!(this.AE&
16777215))this.AE=0;if(Fg&&(this.AE>=67108864)){var Eb=this.Kg();if(!!Eb)Eb.Rb(null
,null,this,0x0);}if((Fg&&!!(this.AE&16777216))&&!!(this.AE&33554432)){Fg=false;Dm=
true;}if(!!Ak&&!(this.AE&(4096<<Ak.Cc)))return this;if(!!Cg&&!(this.AE&(4096<<Cg.
Cc)))return this;if(Dm&&!(this.AE&16777216))return this;if(((Ge||MR)||Fg)&&((this.
AE<16777216)||(this.AE>=33554432)))return this;if(Dm)this.AE=this.AE&3758100479;
if(Dm&&!(this.AE&16777215))this.AE=0;if(!!CE&&(CE.Op===this))return null;if((!!CE&&
CE.Down)&&(this.FA||!this.KH))return null;if((!!CE&&CE.Down)&&!B.wa(this.I,this.
G.Wf(CE.DU)))return null;if((!!CE&&!CE.Down)&&(!this.FA||(this.Pv!==CE.Cc)))return null;
if((!Ak&&!Cg)&&!CE)return null;if(!!Ak){this.FA=Ge||Fg;this.Pv=Ak.Cc;this.EE=Ak.
EE;}if(!!Cg)this.Pv=Cg.Cc;if(!!CE){this.FA=CE.Down;this.Pv=CE.Cc;}if(!!CE&&CE.Down
){this.SL();this.Bf=(((CE.AZ-this.I5)*0.001)*this.Hf)+this.Bf;this.Bg=(((CE.AZ-this.
K3)*0.001)*this.Hg)+this.Bg;if(this.FH)this.Bf=0;if(this.FI)this.Bg=0;this.Hf=0;
this.Hg=0;this.FH=false;this.FI=false;this.PE=this.AW;this.J8=CE.AZ;return this;
}if(Ge){this.SL();this.Bf=(((Ak.AZ-this.I5)*0.001)*this.Hf)+this.Bf;this.Bg=(((Ak.
AZ-this.K3)*0.001)*this.Hg)+this.Bg;if(this.FH||!this.KH)this.Bf=0;if(this.FI||!
this.KH)this.Bg=0;this.Hf=0;this.Hg=0;this.FH=false;this.FI=false;if(!this.KH){this.
KH=true;(A=this.KZ)?A[1].call(A[0],this):null;}this.PE=this.AW;this.J8=Ak.AZ;}if(
!!Cg){var Ap=B.abe(Cg.C2,Cg.EE);var AY=this.AW;if(this.Om)AY=[this.PE[0]+Ap[0],AY[
1]];if(this.On)AY=[AY[0],this.PE[1]+Ap[1]];if(AY[0]<this.BO[0])AY=[this.BO[0]+(((
AY[0]-this.BO[0])/2)|0),AY[1]];else if(AY[0]>this.BN[0])AY=[this.BN[0]+(((AY[0]-
this.BN[0])/2)|0),AY[1]];if(AY[1]<this.BO[1])AY=[AY[0],this.BO[1]+(((AY[1]-this.
BO[1])/2)|0)];else if(AY[1]>this.BN[1])AY=[AY[0],this.BN[1]+(((AY[1]-this.BN[1])
/2)|0)];if(!B.aaX(AY,this.AW)){this.SW=B.abe(AY,this.AW);this.AW=AY;(A=this.Ig)?
A[1].call(A[0],this):null;}}if((!!CE&&!CE.Down)&&((CE.AZ-this.J8)>=200)){this.Bf=
0;this.Bg=0;}if(Fg&&((Ak.AZ-this.J8)>=200)){this.Bf=0;this.Bg=0;}if(!!Cg&&(Cg.AZ>
this.J8)){var Ap=Cg.AW;var U8=1000/(Cg.AZ-this.J8);var Id=0;var Ie=0;if(this.Om)
Id=Ap[0]*U8;if(this.On)Ie=Ap[1]*U8;if((Id*this.Bf)<0)this.Bf=0;if((Ie*this.Bg)<0
)this.Bg=0;this.Bf=(this.Bf+Id)*0.5;this.Bg=(this.Bg+Ie)*0.5;this.J8=Cg.AZ;}if(!
Dm&&!CE)return this;if(!!Ak&&Ak.Ef){this.Bf=0;this.Bg=0;}if((this.AW[0]<=this.BO[
0])||(this.AW[0]>=this.BN[0]))this.Bf=0;else if(!this.Bf){var Ba=this.AW[0];var Bi=
this.BO[0]+this.L$[0];var A9=this.BN[0]-this.L_[0];if(Ba<Bi)A9=this.BO[0];else if(
Ba>A9)Bi=this.BN[0];else if(this.Fw[0]<=1){Bi=Ba;A9=Ba;}else{var GL=(A9-Ba)%this.
Fw[0];A9=(Ba-this.Fw[0])+GL;Bi=Ba+GL;if(A9<this.BO[0])A9=this.BO[0];if(Bi>this.BN[
0])Bi=this.BN[0];}if((Bi-Ba)<=(Ba-A9))Ba=Bi;else Ba=A9;if(Ba!==this.AW[0]){var C_=
Ba-this.AW[0];if(C_>0)this.Bf=Math.sqrt((C_*2)*5000)+20;if(C_<0)this.Bf=-Math.sqrt((-
C_*2)*5000)-20;this.Hf=(400-(this.Bf*this.Bf))/(2*C_);this.JN=Ba;}}else{var Abd=
this.Bf*this.Bf;var C_=Abd/10000;var Ba=this.AW[0];if(this.Bf>0)Ba=Ba+(C_|0);if(
this.Bf<0)Ba=Ba-(C_|0);if(Ba>this.BN[0])Ba=this.BN[0];else if(Ba<this.BO[0])Ba=this.
BO[0];var Vs=Ba;var Bi=this.BO[0]+this.L$[0];var A9=this.BN[0]-this.L_[0];if(Ba<
Bi)A9=this.BO[0];else if(Ba>A9)Bi=this.BN[0];else if(this.Fw[0]<=1){Bi=Ba;A9=Ba;
}else{var GL=(A9-Ba)%this.Fw[0];A9=(Ba-this.Fw[0])+GL;Bi=Ba+GL;if(A9<this.BO[0])
A9=this.BO[0];if(Bi>this.BN[0])Bi=this.BN[0];}if(this.Bf>0){if(A9<=this.AW[0])Ba=
Bi;else if((Ba-A9)<(Bi-Ba))Ba=A9;else Ba=Bi;}else if(Bi>=this.AW[0])Ba=A9;else if((
Ba-A9)>(Bi-Ba))Ba=Bi;else Ba=A9;if(Ba!==this.AW[0]){C_=Ba-this.AW[0];if(Ba!==Vs){
var Im=Ba-Vs;if(Im>0)this.Bf=this.Bf+Math.sqrt((Im*2)*5000);if(Im<0)this.Bf=this.
Bf-Math.sqrt((-Im*2)*5000);}if(this.Bf>0)this.Bf=this.Bf+20;if(this.Bf<0)this.Bf=
this.Bf-20;this.Hf=(400-(this.Bf*this.Bf))/(2*C_);this.JN=Ba;}else this.Bf=0;}if((
this.AW[1]<=this.BO[1])||(this.AW[1]>=this.BN[1]))this.Bg=0;else if(!this.Bg){var
Bb=this.AW[1];var Bi=this.BO[1]+this.L$[1];var A9=this.BN[1]-this.L_[1];if(Bb<Bi
)A9=this.BO[1];else if(Bb>A9)Bi=this.BN[1];else if(this.Fw[1]<=1){Bi=Bb;A9=Bb;}else{
var GL=(A9-Bb)%this.Fw[1];A9=(Bb-this.Fw[1])+GL;Bi=Bb+GL;if(A9<this.BO[1])A9=this.
BO[1];if(Bi>this.BN[1])Bi=this.BN[1];}if((Bi-Bb)<=(Bb-A9))Bb=Bi;else Bb=A9;if(Bb
!==this.AW[1]){var C_=Bb-this.AW[1];if(C_>0)this.Bg=Math.sqrt((C_*2)*5000)+20;if(
C_<0)this.Bg=-Math.sqrt((-C_*2)*5000)-20;this.Hg=(400-(this.Bg*this.Bg))/(2*C_);
this.JO=Bb;}}else{var Abe=this.Bg*this.Bg;var C_=Abe/10000;var Bb=this.AW[1];if(
this.Bg>0)Bb=Bb+(C_|0);if(this.Bg<0)Bb=Bb-(C_|0);if(Bb>this.BN[1])Bb=this.BN[1];
else if(Bb<this.BO[1])Bb=this.BO[1];var Vt=Bb;var Bi=this.BO[1]+this.L$[1];var A9=
this.BN[1]-this.L_[1];if(Bb<Bi)A9=this.BO[1];else if(Bb>A9)Bi=this.BN[1];else if(
this.Fw[1]<=1){Bi=Bb;A9=Bb;}else{var GL=(A9-Bb)%this.Fw[1];A9=(Bb-this.Fw[1])+GL;
Bi=Bb+GL;if(A9<this.BO[1])A9=this.BO[1];if(Bi>this.BN[1])Bi=this.BN[1];}if(this.
Bg>0){if(A9<=this.AW[1])Bb=Bi;else if((Bb-A9)<(Bi-Bb))Bb=A9;else Bb=Bi;}else if(
Bi>=this.AW[1])Bb=A9;else if((Bb-A9)>(Bi-Bb))Bb=Bi;else Bb=A9;if(Bb!==this.AW[1]
){C_=Bb-this.AW[1];if(Bb!==Vt){var Im=Bb-Vt;if(Im>0)this.Bg=this.Bg+Math.sqrt((Im
*2)*5000);if(Im<0)this.Bg=this.Bg-Math.sqrt((-Im*2)*5000);}if(this.Bg>0)this.Bg=
this.Bg+20;if(this.Bg<0)this.Bg=this.Bg-20;this.Hg=(400-(this.Bg*this.Bg))/(2*C_
);this.JO=Bb;}else this.Bg=0;}if(!!Ak)this.I5=Ak.AZ;if(!!CE)this.I5=CE.AZ;this.K3=
this.I5;this.I6=this.AW[0];this.I7=this.AW[1];this.Abg();return this;},HB:function(
AS,Ae,D2,He,Ga,H5){var A;if(!!He&&(He!==this))return null;if(this.AE>=33554432)return null;
if((this.AE>=16777216)&&!(this.AE&(4096<<Ae)))return null;if(!this.On&&!!(H5&0x3
))return null;if(!this.Om&&!!(H5&0xC))return null;var H=B.lb(AS,this.I);if(!((H[
0]>=H[2])||(H[1]>=H[3]))){var D3=B.aaI(AS);var Be=A0;if(D3[0]<H[0])Be=[H[0]-D3[0
],Be[1]];if(D3[0]>=H[2])Be=[(H[2]-D3[0])-1,Be[1]];if(D3[1]<H[1])Be=[Be[0],H[1]-D3[
1]];if(D3[1]>=H[3])Be=[Be[0],(H[3]-D3[1])-1];return B._NewObject(C.NJ,0).Initialize(
this,Be);}return null;},SL:function(){if(!!this.timer){B.z9([this,this.EB],this.
timer,0);this.timer=null;}},Abg:function(){this.timer=B._GetAutoObject(B.acg.Iw);
B.zV([this,this.EB],this.timer,0);},EB:function(Ab){var A;if(!this.timer)return;
var K5=(this.timer.AZ-this.I5)*0.001;var K6=(this.timer.AZ-this.K3)*0.001;var Abi=
K5*K5;var Abj=K6*K6;var Id=(this.Hf*K5)+this.Bf;var Ie=(this.Hg*K6)+this.Bg;var AY=[((((
this.Hf*0.5)*Abi)+(this.Bf*K5))+this.I6)|0,((((this.Hg*0.5)*Abj)+(this.Bg*K6))+this.
I7)|0];if(this.FH&&(K5>=0.5)){AY=[this.JN,AY[1]];this.Bf=0;this.Hf=0;this.I6=AY[
0];this.FH=false;}else if(this.FH){var DL=1-Math.pow(1-(K5/0.5),5);AY=[(this.I6+((
this.JN-this.I6)*DL))|0,AY[1]];}if(this.FI&&(K6>=0.5)){AY=[AY[0],this.JO];this.Bg=
0;this.Hg=0;this.I7=AY[1];this.FI=false;}else if(this.FI){var DL=1-Math.pow(1-(K6
/0.5),5);AY=[AY[0],(this.I7+((this.JO-this.I7)*DL))|0];}if(((this.Bf>0)&&(Id<0))||((
this.Bf<0)&&(Id>0))){Id=0;AY=[this.AW[0],AY[1]];}if(((this.Bg>0)&&(Ie<0))||((this.
Bg<0)&&(Ie>0))){Ie=0;AY=[AY[0],this.AW[1]];}if(!this.FH&&(AY[0]<this.BO[0])){this.
I6=AY[0];this.JN=this.BO[0];this.I5=this.timer.AZ;this.FH=true;}else if(!this.FH&&(
AY[0]>this.BN[0])){this.I6=AY[0];this.JN=this.BN[0];this.I5=this.timer.AZ;this.FH=
true;}if(!this.FI&&(AY[1]<this.BO[1])){this.I7=AY[1];this.JO=this.BO[1];this.K3=
this.timer.AZ;this.FI=true;}else if(!this.FI&&(AY[1]>this.BN[1])){this.I7=AY[1];
this.JO=this.BN[1];this.K3=this.timer.AZ;this.FI=true;}if(((!this.FH&&!!this.Bf)&&(
Id>-20))&&(Id<20)){AY=[this.JN,AY[1]];this.Bf=0;this.Hf=0;this.I6=AY[0];}if(((!this.
FI&&!!this.Bg)&&(Ie>-20))&&(Ie<20)){AY=[AY[0],this.JO];this.Bg=0;this.Hg=0;this.
I7=AY[1];}if(!B.aaX(AY,this.AW)){this.SW=B.abe(AY,this.AW);this.AW=AY;(A=this.Ig
)?A[1].call(A[0],this):null;}if(((!this.Bf&&!this.Bg)&&!this.FH)&&!this.FI){this.
SL();this.KH=false;}},Xb:function(value){if(value[0]<0)value=[0,value[1]];if(value[
1]<0)value=[value[0],0];this.L$=value;},Tz:function(value){if(value[0]<0)value=[
0,value[1]];if(value[1]<0)value=[value[0],0];this.Fw=value;},Xa:function(value){
if(value[0]<0)value=[0,value[1]];if(value[1]<0)value=[value[0],0];this.L_=value;
},_Init:function(aArg){C.By._Init.call(this,aArg);this.__proto__=C.Cn;this.E=0x10011B;
},_Mark:function(D){var A;C.By._Mark.call(this,D);if((A=this.timer)&&(A._cycle!=
D))A._Mark(A._cycle=D);if((A=this.KZ)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);
if((A=this.Ig)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);},_className:"Core::SlideTouchHandler"
};C.Iz={T:null,FR:null,Bk:null,J4:0,AZ:0,TM:0,C3:148,Cu:0,Bt:0,Bm:true,Down:false
,Q$:false,BC:function(aArg){var A;var AM=(C.J.isPrototypeOf(A=this.M)?A:null);if(
!AM)throw new Error(RL);this.T=AM.PH;AM.PH=this;},Cv:function(A1){var A;if(!!A1&&
A1.Wc(this.C3)){this.Down=A1.Down;this.Cu=A1.Cu;this.Bt=A1.Bt;this.AZ=A1.AZ;if(A1.
Down){this.TM=this.J4;this.Q$=this.J4>0;if(!this.Q$)(A=this.Bk)?A[1].call(A[0],this
):null;this.J4=this.J4+1;return true;}if(!A1.Down){this.Q$=this.J4>1;this.TM=this.
J4-1;this.J4=0;(A=this.FR)?A[1].call(A[0],this):null;return true;}}return false;
},_Init:function(aArg){this.__proto__=C.Iz;this.BC(aArg);B.h7++;},_Done:function(
){this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((
A=this.T)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.FR)&&((A=A[0])._cycle!=D
))A._Mark(A._cycle=D);if((A=this.Bk)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);if((
A=this.M)&&(A._cycle!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:
"Core::KeyPressHandler"};C.NJ={Bh:null,Lg:0,AW:B.wf,Initialize:function(P,aOffset
){this.Bh=P;this.AW=aOffset;this.Lg=(aOffset[0]*aOffset[0])+(aOffset[1]*aOffset[
1]);return this;},_Init:function(aArg){this.__proto__=C.NJ;B.h7++;},_Done:function(
){this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((
A=this.Bh)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.M)&&(A._cycle!=D))A._Mark(
A._cycle=D);},M:null,_cycle:0,_observers:null,_className:"Core::CursorHit"};C.NW={
J1:null,D7:B.wg,AU:B.wg,isEmpty:false,_Init:function(aArg){this.__proto__=C.NW;B.
h7++;},_Done:function(){this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:
function(D){var A;if((A=this.J1)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.M
)&&(A._cycle!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:
"Core::LayoutContext"};C.NX={Ni:B.wf,Nh:B.wf,Ng:B.wf,Nf:B.wf,_Init:function(aArg
){C.NW._Init.call(this,aArg);this.__proto__=C.NX;},_className:"Core::LayoutQuadContext"
};C.P9={AM:null,T:null,Ew:null,EA:null,C0:null,J2:null,_Init:function(aArg){this.
__proto__=C.P9;B.h7++;},_Done:function(){this.__proto__=null;B.h7--;},_ReInit:function(
){},_Mark:function(D){var A;if((A=this.AM)&&(A._cycle!=D))A._Mark(A._cycle=D);if((
A=this.T)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.Ew)&&(A._cycle!=D))A._Mark(
A._cycle=D);if((A=this.EA)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.C0)&&(A.
_cycle!=D))A._Mark(A._cycle=D);if((A=this.J2)&&(A._cycle!=D))A._Mark(A._cycle=D);
if((A=this.M)&&(A._cycle!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null
,_className:"Core::DialogContext"};C.TO={Eu:null,AP:null,AB:null,U9:false,Aaz:function(
){if(!this.Eu)return;var Fk=this.Eu;this.Eu.Fj=null;this.Eu=null;B.pe([this,this.
SD],this);Fk.Td(this);},AaU:function(Ab){if(!!this.Eu)return;if(!this.AB)return;
this.Eu=this.AB;this.AB=this.AB.T;if(!!this.AB)this.AB.U=null;else this.AP=null;
this.Eu.T=null;this.U9=true;this.Eu.KA(this);this.U9=false;},Aa0:function(Ab){B.
pe([this,this.AaU],this);},AaZ:function(Ab){B.pe([this,this.Aa0],this);},SD:function(
Ab){B.pe([this,this.AaZ],this);},VT:function(Cj){if(!Cj||!Cj.Fj)return;if(Cj.Fj!==
this)throw new Error(RM);var VA=false;if(this.Eu===Cj){this.Eu=null;VA=true;B.pe([
this,this.SD],this);}else{if(!!Cj.T)Cj.T.U=Cj.U;else this.AP=Cj.U;if(!!Cj.U)Cj.U.
T=Cj.T;else this.AB=Cj.T;Cj.U=null;Cj.T=null;}Cj.Fj=null;if(VA)Cj.Tc(this);},Ye:
function(Cj,Aas){if(!Cj)return;if(!!Cj.Fj)throw new Error(RN);Cj.Fj=this;if(Aas){
Cj.T=this.AB;if(!!this.AB)this.AB.U=Cj;else this.AP=Cj;this.AB=Cj;}else{Cj.U=this.
AP;if(!!this.AP)this.AP.T=Cj;else this.AB=Cj;this.AP=Cj;}if(!this.Eu)B.pe([this,
this.SD],this);},_Init:function(aArg){this.__proto__=C.TO;B.h7++;},_Done:function(
){this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((
A=this.Eu)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.AP)&&(A._cycle!=D))A._Mark(
A._cycle=D);if((A=this.AB)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.M)&&(A.
_cycle!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:"Core::TaskQueue"
};C.Mc={Fj:null,U:null,T:null,Td:function(MH){},Tc:function(MH){},KA:function(MH
){this.SU();},Gi:function(){if(!!this.Fj&&(this.Fj.Eu===this))this.Fj.Aaz();},SU:
function(){if(!!this.Fj)this.Fj.VT(this);},Qx:function(){return!!this.Fj&&(this.
Fj.Eu===this);},_Init:function(aArg){this.__proto__=C.Mc;B.h7++;},_Done:function(
){this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((
A=this.Fj)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.U)&&(A._cycle!=D))A._Mark(
A._cycle=D);if((A=this.T)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.M)&&(A._cycle
!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:"Core::Task"
};C.HY={resource:null,Fp:function(){this.resource=null;},BC:function(aArg){this.
resource=aArg;},_Init:function(aArg){this.__proto__=C.HY;this.BC(aArg);B.h7++;},
_Done:function(){this.Fp();this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:
function(D){var A;if((A=this.M)&&(A._cycle!=D))A._Mark(A._cycle=D);},M:null,_cycle:
0,_observers:null,_className:"Core::Resource"};C.Timer={G3:null,timer:null,AZ:0,
Period:1000,NC:0,Bm:false,Fp:function(){var tmp=this.timer;if(!!tmp)tmp.DestroyTimer(
);this.timer=null;},PN:function(aBegin,aPeriod){if(aBegin<0)aBegin=0;if(aPeriod<
0)aPeriod=0;var tmp=this.timer;if(!tmp&&((aBegin>0)||(aPeriod>0)))tmp=B.z8(this,
this.Trigger);if(!!tmp){tmp.ResetTimer();tmp.StartTimer(aBegin,aPeriod);}this.timer=
tmp;},Em:function(value){if(value<0)value=0;if(value===this.Period)return;this.Period=
value;if(this.Bm)this.PN(this.NC,value);},ID:function(value){if(value<0)value=0;
if(value===this.NC)return;this.NC=value;if(this.Bm)this.PN(value,this.Period);},
Ar:function(value){if(value===this.Bm)return;this.Bm=value;if(value)this.PN(this.
NC,this.Period);else this.PN(0,0);this.AZ=this.Lu();},Lu:function(){var ticksCount=
0;ticksCount=((new Date).getTime()-B.v$)|0;return ticksCount;},Trigger:function(
){var A;this.AZ=this.Lu();if(!this.Period)this.Ar(false);(A=this.G3)?A[1].call(A[
0],this):null;},_Init:function(aArg){this.__proto__=C.Timer;B.h7++;},_Done:function(
){this.Fp();this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:function(D){
var A;if((A=this.G3)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);if((A=this.M)&&(A.
_cycle!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:"Core::Timer"
};C.Ac2={Cy:0x1,AbI:0x2,Acb:0x4,Ac0:0x8,Bm:0x10,AcM:0x20,Acc:0x40,Aco:0x80,Aca:0x100
,Acj:0x200,Ab6:0x400,Acy:0x800,TQ:0x1000,Ac1:0x2000,Acs:0x4000,Act:0x8000,AbZ:0x10000
,Acr:0x20000,AcI:0x40000,Ab0:0x80000,Acx:0x100000,AbY:0x200000};C.CI={Acz:0x1,AcA:
0x2,AbE:0x4,AbF:0x8,AbG:0x10,AbD:0x20};C.Ace={Ta:0,AcX:1,AbO:2,E5:3,AcC:4,AcY:5,
AcZ:6,AbP:7,AbQ:8,Acl:9,Ack:10,AcE:11,AcD:12};C.Jf={Ta:0,AcV:1,Left:2,AbM:3,Yj:4
,VP:5,AcW:6,Right:7,AbN:8};C.KeyCode={NoKey:0,Ok:1,Exit:2,Menu:3,Up:4,Down:5,Left:
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
346};C.AcB={Ac6:0x1,Ac3:0x2,Ac4:0x4,Ac5:0x8,Acn:0x10,Acd:0x20};
C._Init=function(){C.L8.__proto__=C.Bh;C.By.__proto__=C.Bh;C.J.__proto__=C.By;C.Root.
__proto__=C.J;C.KeyEvent.__proto__=C.Event;C.NI.__proto__=C.Event;C.HA.__proto__=
C.Event;C.Lh.__proto__=C.Event;C.HW.__proto__=C.By;C.DH.__proto__=C.J;C.BB.__proto__=
C.J;C.H0.__proto__=C.L8;C.Cn.__proto__=C.By;C.NX.__proto__=C.NW;};C._ReInit=function(
){};C.EN=function(D){};return C;})();

/* Embedded Wizard */