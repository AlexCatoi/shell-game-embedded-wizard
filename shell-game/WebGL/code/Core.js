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
Core=(function(){var B=EmWiApp;var E={};
var AY=[0,0];var AE=[0,0,0,0];var Bv="The view does not belong to this group";var
BD=[800,480];var Eq="The dialog component is already presented";var He="The dialog component is actually not presented";
var JD="No fader to perform the fade-in/out operation";var KL="Trying to use the same fader twice";
var Mc="Trying to fade-in/out a group which belongs to another owner";var C7="No view to restack";
var IM="View is not in this group";var JE="No view to remove";var Ra="No view to add";
var Rb="View already in a group";var Rc="Recursive invalidate during active update cycle.";
var Md=[-8,-8,9,9];var Rd="The method SwitchToDialog() is not available in Core::VerticalList.";
var Re="The method DismissDialog() is not available in Core::VerticalList.";var Rf=
"The method PresentDialog() is not available in Core::VerticalList.";var Rg="The method FadeGroup() is not available in Core::VerticalList.";
var Rh="The method RestackTop() is not available in Core::VerticalList.";var Ri=
"The method Restack() is not available in Core::VerticalList.";var Rj="The method Remove() is not available in Core::VerticalList.";
var Rk="The method Add() is not available in Core::VerticalList.";var OR="The Slide Touch Handler:";
var OS="is already connected with a view.";var Me="The Slide Touch Handler is already connected with a view to scroll "+
"its content.";var Mf=[0,0,170,120];var OT="The method SwitchToDialog() is not available in Core::HorizontalList.";
var OU="The method DismissDialog() is not available in Core::HorizontalList.";var
OV="The method PresentDialog() is not available in Core::HorizontalList.";var OW=
"The method FadeGroup() is not available in Core::HorizontalList.";var Rl="The method RestackTop() is not available in Core::HorizontalList.";
var Rm="The method Restack() is not available in Core::HorizontalList.";var Rn="The method Remove() is not available in Core::HorizontalList.";
var Ro="The method Add() is not available in Core::HorizontalList.";var OX=[0,0,
1,1];var Rp="The KeyPressHandler is embedded within an object not being derived "+
"from Core::Group.";var Rq="Trying to cancel a task not belonging to this queue!";
var Rr="Trying to enqueue a task twice!";
E.Bf={U:null,V:null,H:null,Bx:null,F:0x103,Fc:0,CH:0x14,Mz:function(Ax,O2){},Ah:function(
C){if(this.Fc===C)return;this.Fc=C;if(!!this.H){var Il=this.U;var Ar=0;while(!!Il&&(
C>Il.Fc)){Il=Il.U;Ar=Ar+1;}Il=this.V;while(!!Il&&(C<Il.Fc)){Il=Il.V;Ar=Ar-1;}if(
!!Ar)this.H.QQ(this,Ar);}},HO:function(C){var A;var Ar=C^this.CH;if(!Ar)return;this.
CH=C;if(!!this.Bx&&!((this.F&0x400)===0x400)){this.H.F=this.H.F|0x5000;B.pe([A=this.
H,A.DS],this);this.H.Ai([0,0,(A=this.H.J)[2]-A[0],A[3]-A[1]]);}if(!!this.Bx&&((this.
F&0x400)===0x400)){this.Bx.J3.F=this.Bx.J3.F|0x1000;this.H.F=this.H.F|0x4000;B.pe([
A=this.H,A.DS],this);}},Kh:function(){var AB=this.H;while(!!AB){var Ef=(E.Root.isPrototypeOf(
AB)?AB:null);if(!!Ef)return Ef;AB=AB.H;}return null;},DD:function(A0,aClip,aOffset
,aOpacity,aBlend){},GetClipping:function(){return this.GetExtent();},Cu:function(
AZ){return null;},HD:function(AQ,Ae,D6,Hf,Ga,H5){return null;},K4:function(AQ){return AQ;
},Nd:function(Ax,Fe){return AY;},Lt:function(aOffset,O1){},GetExtent:function(){
return AE;},AL:function(Et,Fd){var A;if(((this.F&0x200)===0x200))Et=Et&~0x400;var
R1=(this.F&~Fd)|Et;var FE=R1^this.F;this.F=R1;if(!!this.H&&!!(FE&0x14)){var TU=((
this.F&0x14)===0x14);if(TU&&!this.H.C3)this.H.CV(this);if(!TU&&(this.H.C3===this
))this.H.CV(this.H.Np(this,0x14));}if(!!this.H&&!!(FE&0x403))this.H.Ai(this.GetClipping(
));if(((!!this.Bx&&!!this.H)&&((R1&0x400)===0x400))&&((FE&0x1)===0x1)){this.F=this.
F|0x800;this.H.F=this.H.F|0x4000;B.pe([A=this.H,A.DS],this);}if(!!this.H&&((FE&0x400
)===0x400)){this.Bx=null;this.F=this.F|0x800;this.H.F=this.H.F|0x4000;B.pe([A=this.
H,A.DS],this);}if(((((FE&0x100000)===0x100000)&&((Fd&0x100000)===0x100000))&&((this.
F&0x10)===0x10))&&!((this.F&0x200080)===0x200080))this.AL(0x0,0x10);if(((((FE&0x100000
)===0x100000)&&((Et&0x100000)===0x100000))&&!((this.F&0x10)===0x10))&&(!((this.F&
0x200000)===0x200000)||((!((this.F&0x80)===0x80)&&!!this.H)&&((this.H.F&0x10)===
0x10))))this.AL(0x10,0x0);if(((((FE&0x200000)===0x200000)&&((Fd&0x200000)===0x200000
))&&!((this.F&0x10)===0x10))&&((this.F&0x100000)===0x100000))this.AL(0x10,0x0);if((((((
FE&0x200000)===0x200000)&&((Et&0x200000)===0x200000))&&((this.F&0x100010)===0x100010
))&&!((this.F&0x80)===0x80))&&((!!this.H&&!((this.H.F&0x10)===0x10))||((((this.F&
0x10000)===0x10000)&&!!this.H)&&(this.H.BF.AK!==this))))this.AL(0x0,0x10);},_Init:
function(aArg){this.__proto__=E.Bf;B.h7++;},_Done:function(){this.__proto__=null;
B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((A=this.U)&&(A._cycle!=
D))A._Mark(A._cycle=D);if((A=this.V)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.
H)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.Bx)&&(A._cycle!=D))A._Mark(A._cycle=
D);if((A=this.N)&&(A._cycle!=D))A._Mark(A._cycle=D);},N:null,_cycle:0,_observers:
null,_className:"Core::View"};E.LN={CY:B.wf,DF:B.wf,CX:B.wf,DE:B.wf,Mz:function(
Ax,O2){var AA=B._NewObject(E.Ny,0);this.Bx=null;AA.D$=this.GetExtent();AA.AS=Ax;
AA.J3=O2;AA.MT=this.DE;AA.MU=this.CX;AA.MV=this.DF;AA.MW=this.CY;this.Bx=AA;},Nd:
function(Ax,Fe){var A;var BX=this.CH;var AA=(E.Ny.isPrototypeOf(A=this.Bx)?A:null
);var Af=AA.D$[0];var Am=AA.D$[1];var Ad=AA.D$[2];var As=AA.D$[3];var D_=[Ax[2]-
Ax[0],Ax[3]-Ax[1]];var Bi=Ad-Af;var AG=As-Am;if(!Fe){var FN=[(A=AA.AS)[2]-A[0],A[
3]-A[1]];Af=Af-AA.AS[0];Am=Am-AA.AS[1];if(FN[0]!==D_[0]){var B8=((BX&0x4)===0x4);
var B9=((BX&0x8)===0x8);var GU=((BX&0x1)===0x1);if(!B8&&(GU||!B9))Af=((Af*D_[0])
/FN[0])|0;if(!B9&&(GU||!B8)){Ad=Ad-AA.AS[0];Ad=((Ad*D_[0])/FN[0])|0;Ad=Ad-D_[0];
}else Ad=Ad-AA.AS[2];Af=Af+Ax[0];Ad=Ad+Ax[2];if(!GU){if(B8&&!B9)Ad=Af+Bi;else if(
!B8&&B9)Af=Ad-Bi;else{Af=Af+((((Ad-Af)-Bi)/2)|0);Ad=Af+Bi;}}}else{Ad=Ad-AA.AS[2];
Af=Af+Ax[0];Ad=Ad+Ax[2];}if(FN[1]!==D_[1]){var B_=((BX&0x10)===0x10);var B7=((BX&
0x20)===0x20);var GV=((BX&0x2)===0x2);if(!B_&&(GV||!B7))Am=((Am*D_[1])/FN[1])|0;
if(!B7&&(GV||!B_)){As=As-AA.AS[1];As=((As*D_[1])/FN[1])|0;As=As-D_[1];}else As=As-
AA.AS[3];Am=Am+Ax[1];As=As+Ax[3];if(!GV){if(B_&&!B7)As=Am+AG;else if(!B_&&B7)Am=
As-AG;else{Am=Am+((((As-Am)-AG)/2)|0);As=Am+AG;}}}else{As=As-AA.AS[3];Am=Am+Ax[1
];As=As+Ax[3];}}else{switch(Fe){case 3:{Af=Ax[0];Ad=Af+Bi;}break;case 4:{Ad=Ax[2
];Af=Ad-Bi;}break;case 1:{Am=Ax[1];As=Am+AG;}break;case 2:{As=Ax[3];Am=As-AG;}break;
default:;}if((Fe===3)||(Fe===4)){var B_=((BX&0x10)===0x10);var B7=((BX&0x20)===0x20
);var GV=((BX&0x2)===0x2);if(GV){Am=Ax[1];As=Ax[3];}else if(B_&&!B7){Am=Ax[1];As=
Am+AG;}else if(B7&&!B_){As=Ax[3];Am=As-AG;}else{Am=Ax[1]+((((Ax[3]-Ax[1])-AG)/2)|
0);As=Am+AG;}}if((Fe===1)||(Fe===2)){var B8=((BX&0x4)===0x4);var B9=((BX&0x8)===
0x8);var GU=((BX&0x1)===0x1);if(GU){Af=Ax[0];Ad=Ax[2];}else if(B8&&!B9){Af=Ax[0];
Ad=Af+Bi;}else if(B9&&!B8){Ad=Ax[2];Af=Ad-Bi;}else{Af=Ax[0]+((((Ax[2]-Ax[0])-Bi)
/2)|0);Ad=Af+Bi;}}}AA.isEmpty=(Af>=Ad)||(Am>=As);Bi=(Ad-Af)-1;AG=(As-Am)-1;var H_=
AA.D$[0];var H$=AA.D$[1];var Hl=(AA.D$[2]-H_)-1;var Hk=(AA.D$[3]-H$)-1;if(!Hl)Hl=
1;if(!Hk)Hk=1;if(((this.F&0x100)===0x100)){this.DE=[Af+((((AA.MT[0]-H_)*Bi)/Hl)|
0),Am+((((AA.MT[1]-H$)*AG)/Hk)|0)];this.CX=[Af+((((AA.MU[0]-H_)*Bi)/Hl)|0),Am+((((
AA.MU[1]-H$)*AG)/Hk)|0)];this.DF=[Af+((((AA.MV[0]-H_)*Bi)/Hl)|0),Am+((((AA.MV[1]-
H$)*AG)/Hk)|0)];this.CY=[Af+((((AA.MW[0]-H_)*Bi)/Hl)|0),Am+((((AA.MW[1]-H$)*AG)/
Hk)|0)];}else{this.HP([Af+((((AA.MT[0]-H_)*Bi)/Hl)|0),Am+((((AA.MT[1]-H$)*AG)/Hk
)|0)]);this.HQ([Af+((((AA.MU[0]-H_)*Bi)/Hl)|0),Am+((((AA.MU[1]-H$)*AG)/Hk)|0)]);
this.HR([Af+((((AA.MV[0]-H_)*Bi)/Hl)|0),Am+((((AA.MV[1]-H$)*AG)/Hk)|0)]);this.HS([
Af+((((AA.MW[0]-H_)*Bi)/Hl)|0),Am+((((AA.MW[1]-H$)*AG)/Hk)|0)]);this.Bx=AA;}return[
Bi+1,AG+1];},Lt:function(aOffset,O1){if(O1){this.DE=B.abf(this.DE,aOffset);this.
CX=B.abf(this.CX,aOffset);this.DF=B.abf(this.DF,aOffset);this.CY=B.abf(this.CY,aOffset
);}else{this.HP(B.abf(this.DE,aOffset));this.HQ(B.abf(this.CX,aOffset));this.HR(
B.abf(this.DF,aOffset));this.HS(B.abf(this.CY,aOffset));}},GetExtent:function(){
if(!!this.Bx&&this.Bx.isEmpty)return AE;var Af=this.DE[0];var Am=this.DE[1];var Ad=
this.DF[0];var As=this.DF[1];if((((this.CY[0]!==Af)||(this.CX[1]!==Am))||(this.CX[
0]!==Ad))||(this.CY[1]!==As)){if(this.CX[0]<Af)Af=this.CX[0];if(this.DF[0]<Af)Af=
this.DF[0];if(this.CY[0]<Af)Af=this.CY[0];if(this.CX[1]<Am)Am=this.CX[1];if(this.
DF[1]<Am)Am=this.DF[1];if(this.CY[1]<Am)Am=this.CY[1];if(this.DE[0]>Ad)Ad=this.DE[
0];if(this.CX[0]>Ad)Ad=this.CX[0];if(this.CY[0]>Ad)Ad=this.CY[0];if(this.DE[1]>As
)As=this.DE[1];if(this.CX[1]>As)As=this.CX[1];if(this.CY[1]>As)As=this.CY[1];}else{
var tmp;if(Ad<Af){tmp=Af;Af=Ad;Ad=tmp;}if(As<Am){tmp=Am;Am=As;As=tmp;}}return[Af
,Am,Ad+1,As+1];},HS:function(C){var A;if(B.aaX(C,this.CY))return;if(!!this.H&&((
this.F&0x1)===0x1))this.H.Ai(this.GetClipping());this.Bx=null;this.CY=C;if(!!this.
H&&((this.F&0x1)===0x1))this.H.Ai(this.GetClipping());if((!!this.H&&((this.F&0x400
)===0x400))&&!((this.H.F&0x2000)===0x2000)){this.F=this.F|0x800;this.H.F=this.H.
F|0x4000;B.pe([A=this.H,A.DS],this);}},HR:function(C){var A;if(B.aaX(C,this.DF))
return;if(!!this.H&&((this.F&0x1)===0x1))this.H.Ai(this.GetClipping());this.Bx=null;
this.DF=C;if(!!this.H&&((this.F&0x1)===0x1))this.H.Ai(this.GetClipping());if((!!
this.H&&((this.F&0x400)===0x400))&&!((this.H.F&0x2000)===0x2000)){this.F=this.F|
0x800;this.H.F=this.H.F|0x4000;B.pe([A=this.H,A.DS],this);}},HQ:function(C){var A;
if(B.aaX(C,this.CX))return;if(!!this.H&&((this.F&0x1)===0x1))this.H.Ai(this.GetClipping(
));this.Bx=null;this.CX=C;if(!!this.H&&((this.F&0x1)===0x1))this.H.Ai(this.GetClipping(
));if((!!this.H&&((this.F&0x400)===0x400))&&!((this.H.F&0x2000)===0x2000)){this.
F=this.F|0x800;this.H.F=this.H.F|0x4000;B.pe([A=this.H,A.DS],this);}},HP:function(
C){var A;if(B.aaX(C,this.DE))return;if(!!this.H&&((this.F&0x1)===0x1))this.H.Ai(
this.GetClipping());this.Bx=null;this.DE=C;if(!!this.H&&((this.F&0x1)===0x1))this.
H.Ai(this.GetClipping());if((!!this.H&&((this.F&0x400)===0x400))&&!((this.H.F&0x2000
)===0x2000)){this.F=this.F|0x800;this.H.F=this.H.F|0x4000;B.pe([A=this.H,A.DS],this
);}},P8:function(GJ){var BW=B.abi(4,B.wf,null);var i=0;var B2=3;var RP=false;var
RQ=false;BW.Set(0,this.DE);BW.Set(1,this.CX);BW.Set(2,this.DF);BW.Set(3,this.CY);
while(i<4){var Uq=BW.Get(i)[0];var Pt=BW.Get(i)[1];var Z_=BW.Get(B2)[0];var Sh=BW.
Get(B2)[1];if(((Pt>GJ[1])!==(Sh>GJ[1]))||((Pt<GJ[1])!==(Sh<GJ[1]))){var A1=((((Z_-
Uq)*(GJ[1]-Pt))/(Sh-Pt))|0)+Uq;if(GJ[0]>A1)RP=!RP;if(GJ[0]<A1)RQ=!RQ;}B2=i;i=i+1;
}return RP||RQ;},U2:function(){return((((this.DE[0]===this.CY[0])&&(this.CX[0]===
this.DF[0]))&&(this.DE[1]===this.CX[1]))&&(this.DF[1]===this.CY[1]))||((((this.DE[
0]===this.CX[0])&&(this.DF[0]===this.CY[0]))&&(this.DE[1]===this.CY[1]))&&(this.
CX[1]===this.DF[1]));},_Init:function(aArg){E.Bf._Init.call(this,aArg);this.__proto__=
E.LN;},_className:"Core::QuadView"};E.Bz={J:B.wg,Mz:function(Ax,O2){var AA=B._NewObject(
E.Nx,0);AA.D$=this.J;AA.AS=Ax;AA.J3=O2;this.Bx=AA;},Nd:function(Ax,Fe){var A;var
BX=this.CH;var AA=this.Bx;var Af=AA.D$[0];var Am=AA.D$[1];var Ad=AA.D$[2];var As=
AA.D$[3];var D_=[Ax[2]-Ax[0],Ax[3]-Ax[1]];var Bi=Ad-Af;var AG=As-Am;if(!Fe){var FN=[(
A=AA.AS)[2]-A[0],A[3]-A[1]];Af=Af-AA.AS[0];Am=Am-AA.AS[1];if(FN[0]!==D_[0]){var B8=((
BX&0x4)===0x4);var B9=((BX&0x8)===0x8);var GU=((BX&0x1)===0x1);if(!B8&&(GU||!B9)
)Af=((Af*D_[0])/FN[0])|0;if(!B9&&(GU||!B8)){Ad=Ad-AA.AS[0];Ad=((Ad*D_[0])/FN[0])|
0;Ad=Ad-D_[0];}else Ad=Ad-AA.AS[2];Af=Af+Ax[0];Ad=Ad+Ax[2];if(!GU){if(B8&&!B9)Ad=
Af+Bi;else if(!B8&&B9)Af=Ad-Bi;else{Af=Af+((((Ad-Af)-Bi)/2)|0);Ad=Af+Bi;}}}else{
Ad=Ad-AA.AS[2];Af=Af+Ax[0];Ad=Ad+Ax[2];}if(FN[1]!==D_[1]){var B_=((BX&0x10)===0x10
);var B7=((BX&0x20)===0x20);var GV=((BX&0x2)===0x2);if(!B_&&(GV||!B7))Am=((Am*D_[
1])/FN[1])|0;if(!B7&&(GV||!B_)){As=As-AA.AS[1];As=((As*D_[1])/FN[1])|0;As=As-D_[
1];}else As=As-AA.AS[3];Am=Am+Ax[1];As=As+Ax[3];if(!GV){if(B_&&!B7)As=Am+AG;else
if(!B_&&B7)Am=As-AG;else{Am=Am+((((As-Am)-AG)/2)|0);As=Am+AG;}}}else{As=As-AA.AS[
3];Am=Am+Ax[1];As=As+Ax[3];}}else{switch(Fe){case 3:{Af=Ax[0];Ad=Af+Bi;}break;case
4:{Ad=Ax[2];Af=Ad-Bi;}break;case 1:{Am=Ax[1];As=Am+AG;}break;case 2:{As=Ax[3];Am=
As-AG;}break;default:;}if((Fe===3)||(Fe===4)){var B_=((BX&0x10)===0x10);var B7=((
BX&0x20)===0x20);var GV=((BX&0x2)===0x2);if(GV){Am=Ax[1];As=Ax[3];}else if(B_&&!
B7){Am=Ax[1];As=Am+AG;}else if(B7&&!B_){As=Ax[3];Am=As-AG;}else{Am=Ax[1]+((((Ax[
3]-Ax[1])-AG)/2)|0);As=Am+AG;}}if((Fe===1)||(Fe===2)){var B8=((BX&0x4)===0x4);var
B9=((BX&0x8)===0x8);var GU=((BX&0x1)===0x1);if(GU){Af=Ax[0];Ad=Ax[2];}else if(B8&&
!B9){Af=Ax[0];Ad=Af+Bi;}else if(B9&&!B8){Ad=Ax[2];Af=Ad-Bi;}else{Af=Ax[0]+((((Ax[
2]-Ax[0])-Bi)/2)|0);Ad=Af+Bi;}}}AA.isEmpty=(Af>=Ad)||(Am>=As);if(((this.F&0x100)===
0x100))this.J=[Af,Am,Ad,As];else{this.S([Af,Am,Ad,As]);this.Bx=AA;}return[Ad-Af,
As-Am];},Lt:function(aOffset,O1){if(O1)this.J=B.abh(this.J,aOffset);else this.S(
B.abh(this.J,aOffset));},GetExtent:function(){return this.J;},S:function(C){var A;
if(B.aaY(C,this.J))return;if(!!this.H&&((this.F&0x1)===0x1))this.H.Ai(this.GetClipping(
));this.Bx=null;this.J=C;if(!!this.H&&((this.F&0x1)===0x1))this.H.Ai(this.GetClipping(
));if((!!this.H&&((this.F&0x400)===0x400))&&!((this.H.F&0x2000)===0x2000)){this.
F=this.F|0x800;this.H.F=this.H.F|0x4000;B.pe([A=this.H,A.DS],this);}},Ap:function(
M_){this.S(M_);},Ao:function(){return this.J;},_Init:function(aArg){E.Bf._Init.call(
this,aArg);this.__proto__=E.Bz;},_className:"Core::RectView"};E.K={Az:null,AN:null
,Pe:null,BF:null,FF:null,J5:null,C3:null,FS:255,Mu:0,Mx:0,Mw:0,Mv:0,Bm:function(
aArg){this.BH();},DD:function(A0,aClip,aOffset,aOpacity,aBlend){var A;aOpacity=((
aOpacity+1)*this.FS)>>8;aBlend=aBlend&&((this.F&0x2)===0x2);this.Zw(A0,aClip,B.abf(
aOffset,this.J.slice(0,2)),aOpacity,aBlend);},GetClipping:function(){var A;var I=
this.J;I=[].concat(I[0]-this.Mv,I.slice(1,4));I=B.abP(I,I[1]-this.Mx);I=B.abN(I,
I[2]+this.Mw);I=[].concat(I.slice(0,3),I[3]+this.Mu);if(((this.F&0x80000)===0x80000
)){var J$=AE;var R;for(R=this.Az;!!R;R=R.U)if(((R.F&0x1)===0x1))J$=B.wC(J$,R.GetClipping(
));I=B.wC(I,B.abh(J$,this.J.slice(0,2)));}return I;},HD:function(AQ,Ae,D6,Hf,Ga,
H5){var A;var R=this.AN;var JS=null;var L=AE;var EA=null;var RY=!!this.FF&&(!!this.
FF.Ex||!!this.FF.Az);if(((A=B.lb(AQ,this.J))[0]>=A[2])||(A[1]>=A[3]))return null;
AQ=B.abg(AQ,this.J.slice(0,2));if(!!Ga){R=Ga;while(!!R&&(R.H!==this))R=R.H;}while(
!!R){if(((R.F&0x400)===0x400)&&!EA){EA=R.V;while(!!EA&&!((EA.F&0x200)===0x200))EA=
EA.V;if(!!EA)L=B.lb(AQ,EA.GetExtent());else L=AE;}if(EA===R){EA=null;L=AE;}if((!
!Hf&&!!(E.K.isPrototypeOf(R)?R:null))||((((((R.F&0x8)===0x8)&&((R.F&0x10)===0x10
))&&!((R.F&0x40000)===0x40000))&&!((R.F&0x20000)===0x20000))&&(!((R.F&0x10000)===
0x10000)||((this.BF.AK===R)&&!RY)))){var D$=R.GetExtent();var O_=Hf;var JO=null;
if(O_===R)O_=null;if(((R.F&0x400)===0x400)){if(!(((A=B.lb(D$,L))[0]>=A[2])||(A[1
]>=A[3])))JO=R.HD(L,Ae,D6,O_,Ga,H5);}else if(!(((A=B.lb(D$,AQ))[0]>=A[2])||(A[1]>=
A[3]))||(Hf===R))JO=R.HD(AQ,Ae,D6,O_,Ga,H5);R=R.V;if(!!JO){if(!JS||((JO.K7<JS.K7
)&&(JO.K7>=0)))JS=JO;if(!JO.K7)R=null;}}else R=R.V;Ga=null;}return JS;},K4:function(
AQ){var A;var Bo;var R=this.Az;var JL=AE;var MS=true;var result=(AQ=Bo=B.abg(AQ,
this.J.slice(0,2)),Bo);while(!!R){if(((R.F&0x200)===0x200)){var KU=(E.HX.isPrototypeOf(
R)?R:null);JL=B.lb(AQ,KU.J);MS=((KU.F&0x1)===0x1);}if(((R.F&0x1)===0x1)){if(((R.
F&0x400)===0x400)){if(MS){var L=B.lb(R.GetClipping(),JL);if(!((L[0]>=L[2])||(L[1
]>=L[3])))result=B.wC(result,R.K4(L));}}else{var L=B.lb(R.GetClipping(),AQ);if(!((
L[0]>=L[2])||(L[1]>=L[3])))result=B.wC(result,R.K4(L));}}R=R.U;}return B.lb(B.abh(
result,this.J.slice(0,2)),this.J);},AL:function(Et,Fd){var A;var Pf=this.F;if((!
!this.H&&((this.F&0x80001)===0x80001))&&((Fd&0x80000)===0x80000))this.H.Ai(this.
GetClipping());E.Bz.AL.call(this,Et,Fd);if(((!!this.H&&((this.F&0x1)===0x1))&&((
Et&0x80000)===0x80000))&&!((Pf&0x80000)===0x80000))this.H.Ai(this.GetClipping());
var FE=this.F^Pf;if(!!this.C3&&((FE&0x40)===0x40)){if(((this.F&0x40)===0x40))this.
C3.AL(0x40,0x0);else this.C3.AL(0x0,0x40);}if(!!this.BF&&((FE&0x40)===0x40)){if(((
this.F&0x40)===0x40)&&((this.BF.AK.F&0x14)===0x14))this.BF.AK.AL(0x40,0x0);else this.
BF.AK.AL(0x0,0x40);}if(((FE&0x10)===0x10)){var R;for(R=this.Az;!!R;R=R.U)if((((R.
F&0x300000)===0x300000)&&!((R.F&0x80)===0x80))&&(!((R.F&0x10000)===0x10000)||(this.
BF.AK===R)))R.AL(Et&0x10,Fd&0x10);}if(!!FE){this.F=this.F|0x8000;B.pe([this,this.
Pr],this);}},S:function(C){var A;if(B.aaY(C,this.J))return;var IY=[(A=this.J)[2]-
A[0],A[3]-A[1]];var R0=[C[2]-C[0],C[3]-C[1]];var KW=!B.aaX(IY,R0);E.Bz.S.call(this
,C);if((KW&&(IY[0]>0))&&(IY[1]>0)){var AS=[].concat(AY,IY);var R=this.Az;while(!
!R){if((!R.Bx&&(R.CH!==0x14))&&!((R.F&0x400)===0x400))R.Mz(AS,null);R=R.U;}}if(KW
){this.F=this.F|0x5000;B.pe([this,this.Pr],this);}},Ub:function(AZ){var T1=(E.KeyEvent.
isPrototypeOf(AZ)?AZ:null);var Gd=this.Pe;if(!T1)return null;while(!!Gd&&(!Gd.Bl||
!Gd.Cu(T1)))Gd=Gd.U;return Gd;},Zw:function(A0,aClip,aOffset,aOpacity,aBlend){var
A;var R=this.Az;var JL=AE;var MS=true;this.UO(A0,aClip,aOffset,aOpacity,aBlend);
while(!!R&&!A0.Po){if(((R.F&0x200)===0x200)){var KU=(E.HX.isPrototypeOf(R)?R:null
);MS=((KU.F&0x1)===0x1);JL=aClip;if(!((KU.F&0x80000)===0x80000))JL=B.lb(JL,B.abh(
KU.J,aOffset));}if(((R.F&0x1)===0x1)){if(((R.F&0x400)===0x400)){if(MS){var L=B.lb(
B.abh(R.GetClipping(),aOffset),JL);if(!((L[0]>=L[2])||(L[1]>=L[3])))R.DD(A0,L,aOffset
,aOpacity,aBlend);}}else{var L=B.lb(B.abh(R.GetClipping(),aOffset),aClip);if(!((
L[0]>=L[2])||(L[1]>=L[3])))R.DD(A0,L,aOffset,aOpacity,aBlend);}}R=R.U;}if(!A0.Po
)this.UR(A0,aClip,aOffset,aOpacity,aBlend);},ZX:function(){var A;var RN=((this.F&
0x1000)===0x1000);var Ia=[0,0,(A=this.J)[2]-A[0],A[3]-A[1]];var Hm=false;var KP=
AE;var RK=AE;var R=this.AN;var EA=null;while(!!R){if(((R.F&0x800)===0x800)){Hm=true;
R.F=R.F&~0x800;}if(Hm&&((R.F&0x200)===0x200))Hm=false;R=R.V;}Hm=false;R=this.Az;
if(RN){this.F=this.F&~0x1000;RN=!((Ia[0]>=Ia[2])||(Ia[1]>=Ia[3]));}this.F=this.F|
0x2000;while(!!R){if(((R.F&0x400)===0x400)){if(!!R.Bx&&(R.Bx.J3!==EA))R.Bx=null;
if((!R.Bx&&Hm)&&(R.CH!==0x14))R.Mz(RK,EA);}if(!!R.Bx){if(RN&&!((R.F&0x400)===0x400
))R.Nd(Ia,0);if(Hm&&((R.F&0x400)===0x400))R.Nd(RK,0);}if(((R.F&0x200)===0x200)){
Hm=((R.F&0x1000)===0x1000);EA=(E.HX.isPrototypeOf(R)?R:null);if(Hm){R.F=R.F&~0x1000;
KP=EA.J;RK=KP;Hm=!((KP[0]>=KP[2])||(KP[1]>=KP[3]));}if(Hm)this.Ai(EA.J);}R=R.U;}
this.F=this.F&~0x2000;this.Tj([Ia[2]-Ia[0],Ia[3]-Ia[1]]);},DS:function(Ac){B.pe([
this,this.Pr],this);},Pr:function(Ac){var A;var Z9=((this.F&0x1000)===0x1000);if(((
this.F&0x4000)===0x4000)){this.F=this.F&~0x4000;this.ZX();}if(((this.F&0x8000)===
0x8000)||Z9){this.F=this.F&~0x8000;this.GG(this.F);}},CV:function(C){var A;if(!!
C&&(C.H!==this))throw new Error(Bv);if(!!C&&!((C.F&0x14)===0x14))C=null;if(!!C&&((
C.F&0x10000)===0x10000))C=null;if(C===this.C3)return;if(!!this.C3)this.C3.AL(0x0
,0x60);this.C3=C;if(!!C){if(((this.F&0x40)===0x40))C.AL(0x60,0x0);else C.AL(0x20
,0x0);}},Aq:function(C){if(C)this.AL(0x100000,0x0);else this.AL(0x0,0x100000);},
Jt:function(C){var A;if(C>255)C=255;if(C<0)C=0;if(C===this.FS)return;this.FS=C;if(
!!this.H&&((this.F&0x1)===0x1))this.H.Ai(this.GetClipping());},Zh:function(M_){this.
Jt(M_);},HJ:function(){var A;return((this.F&0x1)===0x1);},A6:function(C){if(C)this.
AL(0x1,0x0);else this.AL(0x0,0x1);},ExtendClipping:function(JH,JI,JJ,JG){var A;var
Mm=this.J;var Ev=Mm;if(JH<0)JH=0;if(JH>255)JH=255;if(JI<0)JI=0;if(JI>255)JI=255;
if(JJ<0)JJ=0;if(JJ>255)JJ=255;if(JG<0)JG=0;if(JG>255)JG=255;Ev=[].concat(Ev[0]-(
Math.max(JH,this.Mv)&0xFF),Ev.slice(1,4));Ev=B.abN(Ev,Ev[2]+(Math.max(JI,this.Mw
)&0xFF));Ev=B.abP(Ev,Ev[1]-(Math.max(JJ,this.Mx)&0xFF));Ev=[].concat(Ev.slice(0,
3),Ev[3]+(Math.max(JG,this.Mu)&0xFF));if(JH!==this.Mv){if((!!this.H&&((this.F&0x1
)===0x1))&&!((this.F&0x80000)===0x80000)){var I=Ev;I=B.abN(I,Mm[0]);this.H.Ai(I);
}this.Mv=JH&0xFF;}if(JI!==this.Mw){if((!!this.H&&((this.F&0x1)===0x1))&&!((this.
F&0x80000)===0x80000)){var I=Ev;I=[].concat(Mm[2],I.slice(1,4));this.H.Ai(I);}this.
Mw=JI&0xFF;}if(JJ!==this.Mx){if((!!this.H&&((this.F&0x1)===0x1))&&!((this.F&0x80000
)===0x80000)){var I=Ev;I=[].concat(I.slice(0,3),Mm[1]);this.H.Ai(I);}this.Mx=JJ&
0xFF;}if(JG!==this.Mu){if((!!this.H&&((this.F&0x1)===0x1))&&!((this.F&0x80000)===
0x80000)){var I=Ev;I=B.abP(I,Mm[3]);this.H.Ai(I);}this.Mu=JG&0xFF;}},UR:function(
A0,aClip,aOffset,aOpacity,aBlend){},UO:function(A0,aClip,aOffset,aOpacity,aBlend
){},GetMaximalSize:function(){return BD;},GetMinimalSize:function(){return AY;},
Ji:function(){var A;if(!!this.BF)return this.BF.AK.Ji();if(!((this.F&0x10000)===
0x10000))return null;return this;},II:function(B6,Dw,Fy,ES,ET,H4,DK,Es,CS,CQ,CR){
var A;if(!this.BF){this.Kx(B6,Dw,Fy,ES,ET,null,null,CS,CQ,CR);return;}var IX=this.
BF;var Cq=IX.U;if(((B6.F&0x10000)===0x10000)&&(this.BF.AK!==B6))throw new Error(
Eq);var GR=B._NewObject(E.PF,0);var Ez=IX.Ez;var ED=null;var CZ=null;if(!!Cq){ED=
Cq.ED;CZ=Cq.CZ;}if(!!Cq&&!!IX.J4)ED=IX.J4;if(!!Cq&&!!DK)CZ=DK;if(!!H4)Ez=H4;if(!
Dw)Dw=B._GetAutoObject(B.acg.KA);if(!Fy)Fy=Dw;if(!ET)ET=ES;if(!ES)ES=ET;GR.Ez=Fy;
GR.CZ=ES;GR.ED=ET;GR.J4=Es;GR.AK=B6;GR.U=this.BF.U;this.BF.U=null;this.BF=GR;if(
this.C3===B6)this.CV(null);IX.AK.AL(0x0,0x10040);if(((this.F&0x40)===0x40)&&((B6.
F&0x4)===0x4))B6.AL(0x10040,0x0);else B6.AL(0x10000,0x0);if(!!CZ){this.Dq(Cq.AK,
CZ.Kf(),null,null,CR);this.Dq(IX.AK,Ez.Hz(),null,null,true);this.Dq(GR.AK,Dw.HA(
),CS,CQ,true);}else if(!!ED){this.Dq(Cq.AK,ED.Kg(),null,null,CR);this.Dq(IX.AK,Ez.
Hz(),null,null,true);this.Dq(GR.AK,Dw.HA(),CS,CQ,true);}else if(!!Ez){this.Dq(IX.
AK,Ez.Hz(),null,null,CR);this.Dq(GR.AK,Dw.HA(),CS,CQ,true);}else this.Dq(GR.AK,Dw.
HA(),CS,CQ,CR);},Jg:function(B6,H4,DK,Es,CS,CQ,CR){var A;if(!this.BF)return;if(!
B6)return;var Ce=this.BF;var Cq=this.BF.U;var J7=null;while((!!Ce&&(Ce.AK!==B6))&&
!!Ce.U){J7=Ce;Ce=Cq;Cq=Ce.U;}if(!Ce||(Ce.AK!==B6))throw new Error(He);if(!J7){this.
BF=Cq;Ce.U=null;}else{J7.U=Cq;Ce.U=null;}Ce.AK.AL(0x0,0x10040);if(((((this.F&0x10
)===0x10)&&!!Cq)&&!J7)&&((Cq.AK.F&0x200000)===0x200000))Cq.AK.AL(0x10,0x0);if(((((
this.F&0x40)===0x40)&&!!Cq)&&!J7)&&((Cq.AK.F&0x4)===0x4))Cq.AK.AL(0x40,0x0);var Ez=
Ce.Ez;var ED=null;var CZ=null;if(!!Cq)ED=Cq.ED;if(!!Cq&&!!Ce.J4)ED=Ce.J4;if(!!Cq&&
!!Es)ED=Es;if(!!J7&&!!Cq)CZ=Cq.CZ;if((!!J7&&!!Cq)&&!!DK)CZ=DK;if(!!H4)Ez=H4;if(!
!CZ){this.Dq(Cq.AK,CZ.Kf(),null,null,CR);this.Dq(Ce.AK,Ez.Hz(),CS,CQ,true);}else
if(!!ED){this.Dq(Cq.AK,ED.Kg(),null,null,CR);this.Dq(Ce.AK,Ez.Hz(),CS,CQ,true);}
else this.Dq(Ce.AK,Ez.Hz(),CS,CQ,CR);},Kx:function(B6,Dw,Fy,ES,ET,DK,Es,CS,CQ,CR
){var A;if(!B6)return;if(!!this.BF&&(this.BF.AK===B6)){this.II(B6,Dw,Fy,ES,ET,null
,DK,Es,CS,CQ,CR);return;}if(((B6.F&0x10000)===0x10000))throw new Error(Eq);var Ce=
B._NewObject(E.PF,0);if(!!this.BF&&!this.BF.CZ){if(!Es)Es=DK;if(!DK)DK=Es;}var CZ=
null;if(!!this.BF)CZ=this.BF.CZ;if(!!this.BF&&!!DK)CZ=DK;if(!Dw)Dw=B._GetAutoObject(
B.acg.KA);if(!Fy)Fy=Dw;if(!ET)ET=ES;if(!ES)ES=ET;Ce.Ez=Fy;Ce.CZ=ES;Ce.ED=ET;Ce.J4=
Es;if(this.C3===B6)this.CV(null);if(!!this.BF&&((this.BF.AK.F&0x200000)===0x200000
))this.BF.AK.AL(0x0,0x10);if(!!this.BF)this.BF.AK.AL(0x0,0x40);if(((this.F&0x40)===
0x40)&&((B6.F&0x4)===0x4))B6.AL(0x10040,0x0);else B6.AL(0x10000,0x0);Ce.AK=B6;Ce.
U=this.BF;this.BF=Ce;if(!!CZ){this.Dq(this.BF.U.AK,CZ.Kf(),null,null,CR);this.Dq(
B6,Dw.HA(),CS,CQ,true);}else this.Dq(B6,Dw.HA(),CS,CQ,CR);},U_:function(GJ){var tmp=
this;while(!!tmp){GJ=B.abe(GJ,tmp.J.slice(0,2));tmp=tmp.H;}return GJ;},DispatchEvent:
function(AZ){var A;var R=this.C3;var AB=(E.K.isPrototypeOf(R)?R:null);var B1=null;
var RY=!!this.FF&&(!!this.FF.Ex||!!this.FF.Az);if(!!R&&((((R.F&0x10000)===0x10000
)||((R.F&0x40000)===0x40000))||((R.F&0x20000)===0x20000))){R=null;AB=null;}if(!!
this.BF&&!RY)B1=this.BF.AK.DispatchEvent(AZ);if(!B1&&!!AB)B1=AB.DispatchEvent(AZ
);else if(!B1&&!!R)B1=R.Cu(AZ);if(!B1)B1=this.Cu(AZ);if(!B1)B1=this.Ub(AZ);return B1;
},BroadcastEventAtPosition:function(AZ,TM,aFilter){var A;var R=this.AN;var B1=null;
while(!!R&&!B1){if((!aFilter||((A=aFilter)&&((R.F&A)===A)))&&B.wa(R.GetExtent(),
TM)){var AB=(E.K.isPrototypeOf(R)?R:null);if(!!AB)B1=AB.BroadcastEventAtPosition(
AZ,B.abe(TM,AB.J.slice(0,2)),aFilter);else B1=R.Cu(AZ);}R=R.V;}if(!B1)B1=this.Cu(
AZ);return B1;},BroadcastEvent:function(AZ,aFilter){var A;var R=this.AN;var B1=null;
while(!!R&&!B1){if(!aFilter||((A=aFilter)&&((R.F&A)===A))){var AB=(E.K.isPrototypeOf(
R)?R:null);if(!!AB)B1=AB.BroadcastEvent(AZ,aFilter);else B1=R.Cu(AZ);}R=R.V;}if(
!B1)B1=this.Cu(AZ);if(!B1)B1=this.Ub(AZ);return B1;},Tj:function(aSize){},GG:function(
Eu){},BH:function(){this.F=this.F|0x8000;B.pe([this,this.Pr],this);},Ai:function(
AQ){var A;var AB=this;while(!!AB&&!((AQ[0]>=AQ[2])||(AQ[1]>=AQ[3]))){if(!AB.H&&(
AB!==this)){AB.Ai(AQ);return;}if(!((AB.F&0x1)===0x1))return;var I=AB.J;AQ=B.abh(
AQ,I.slice(0,2));if(!((AB.F&0x80000)===0x80000)){I=[].concat(I[0]-AB.Mv,I.slice(
1,4));I=B.abP(I,I[1]-AB.Mx);I=B.abN(I,I[2]+AB.Mw);I=[].concat(I.slice(0,3),I[3]+
AB.Mu);AQ=B.lb(AQ,I);}AB=AB.H;}},Np:function(Q,aFilter){var A;if(!Q||(Q.H!==this
))return null;var IW=Q.U;var IZ=Q.V;var MN=0x10000;if(((aFilter&0x10000)===0x10000
))MN=0x0;while(!!IW||!!IZ){if((!!IW&&(!aFilter||((A=aFilter)&&((IW.F&A)===A))))&&(
!MN||!((A=MN)&&((IW.F&A)===A))))return IW;if((!!IZ&&(!aFilter||((A=aFilter)&&((IZ.
F&A)===A))))&&(!MN||!((A=MN)&&((IZ.F&A)===A))))return IZ;if(!!IW)IW=IW.U;if(!!IZ
)IZ=IZ.V;}return null;},Dq:function(F_,Br,CS,CQ,CR){var A;if(!F_)return;if(!Br)throw new
Error(JD);if((!!Br.K||!!Br.H)||!!Br.Fk)throw new Error(KL);if(!!F_.H&&(F_.H!==this
))throw new Error(Mc);if(!this.FF)this.FF=B._NewObject(E.Tg,0);Br.H=this;Br.K=F_;
Br.Pg=CQ;Br.R3=CS;if(!!F_.J5)F_.J5.Fk.W5(F_.J5);F_.J5=Br;F_.F=F_.F|0x20000;if((CR&&
!!this.FF.AN)&&!this.FF.AN.P6())(B.acg.Nn.isPrototypeOf(A=this.FF.AN)?A:null).Sm(
Br);else{var Fk=B._NewObject(B.acg.Nn,0);Fk.Sm(Br);this.FF.Xa(Fk,false);}},NS:function(
Q){var A;if(!Q)throw new Error(C7);if(Q.H!==this)throw new Error(IM);if(!Q.U)return;
var Dk=this.AN;var Ik=Q.Fc;while(!!Dk&&(Dk.Fc>Ik))Dk=Dk.V;if(((Dk===Q)||!Dk)||(Dk.
U===Q))return;if(((Q.F&0x401)===0x401)){if(!!Q.V&&!!Q.Bx)Q.V.F=Q.V.F|0x800;Q.F=Q.
F|0x800;this.F=this.F|0x4000;B.pe([this,this.DS],this);}if(((Q.F&0x200)===0x200)
){if(!!Q.V)Q.V.F=Q.V.F|0x800;this.F=this.F|0x4000;B.pe([this,this.DS],this);}if(
!!Q.V)Q.V.U=Q.U;else this.Az=Q.U;Q.U.V=Q.V;Q.V=Dk;Q.U=Dk.U;Dk.U=Q;if(!!Q.U)Q.U.V=
Q;else this.AN=Q;if(((Q.F&0x1)===0x1))this.Ai(Q.GetClipping());},QQ:function(Q,D5
){var A;if(!Q)throw new Error(C7);if(Q.H!==this)throw new Error(IM);var Dk=Q;var
Co=Q;var Ik=Q.Fc;while(((D5>0)&&!!Dk.U)&&(Dk.U.Fc<=Ik)){Dk=Dk.U;D5=D5-1;}while(((
D5<0)&&!!Co.V)&&(Co.V.Fc>=Ik)){Co=Co.V;D5=D5+1;}if((Dk===Q)&&(Co===Q))return;if(((
Q.F&0x401)===0x401)){if(!!Q.V&&!!Q.Bx)Q.V.F=Q.V.F|0x800;Q.F=Q.F|0x800;this.F=this.
F|0x4000;B.pe([this,this.DS],this);}if(((Q.F&0x200)===0x200)){if(!!Q.V)Q.V.F=Q.V.
F|0x800;Q.F=Q.F|0x800;this.F=this.F|0x4000;B.pe([this,this.DS],this);}if(!!Q.V)Q.
V.U=Q.U;if(!!Q.U)Q.U.V=Q.V;if(this.Az===Q)this.Az=Q.U;if(this.AN===Q)this.AN=Q.V;
if(Dk!==Q){Q.U=Dk.U;Q.V=Dk;Dk.U=Q;if(!!Q.U)Q.U.V=Q;}if(Co!==Q){Q.U=Co;Q.V=Co.V;Co.
V=Q;if(!!Q.V)Q.V.U=Q;}if(!Q.U)this.AN=Q;if(!Q.V)this.Az=Q;if(((Q.F&0x1)===0x1))this.
Ai(Q.GetClipping());},B4:function(Q){var A;if(!Q)throw new Error(JE);if(Q.H!==this
)throw new Error(IM);if((((Q.F&0x401)===0x401)&&!!Q.V)&&!!Q.Bx){Q.V.F=Q.V.F|0x800;
this.F=this.F|0x4000;B.pe([this,this.DS],this);}if(((Q.F&0x200)===0x200)){if(!!Q.
V)Q.V.F=Q.V.F|0x800;this.F=this.F|0x4000;B.pe([this,this.DS],this);}Q.Bx=null;if(
this.C3===Q)this.CV(this.Np(Q,0x14));if(!!Q.V)Q.V.U=Q.U;if(!!Q.U)Q.U.V=Q.V;if(this.
Az===Q)this.Az=Q.U;if(this.AN===Q)this.AN=Q.V;Q.H=null;Q.U=null;Q.V=null;if((!((
Q.F&0x10)===0x10)&&((Q.F&0x100000)===0x100000))&&!((this.F&0x80)===0x80))Q.AL(0x10
,0x0);if(((Q.F&0x1)===0x1))this.Ai(Q.GetClipping());},Y:function(Q,D5){var A;if(
!Q)throw new Error(Ra);if(!!Q.H)throw new Error(Rb);var Co=null;var Ik=Q.Fc;if(((
D5<0)&&!!this.AN)&&(this.AN.Fc>=Ik)){Co=this.AN;D5=D5+1;}while((((D5<0)&&!!Co)&&
!!Co.V)&&(Co.V.Fc>=Ik)){Co=Co.V;D5=D5+1;}if((!Co&&!!this.AN)&&(this.AN.Fc>Ik))Co=
this.AN;while((!!Co&&!!Co.V)&&(Co.V.Fc>Ik))Co=Co.V;if(!Co){Q.H=this;Q.V=this.AN;
if(!!this.AN)this.AN.U=Q;if(!this.Az)this.Az=Q;this.AN=Q;}else{Q.H=this;Q.V=Co.V;
Q.U=Co;Co.V=Q;if(!!Q.V)Q.V.U=Q;else this.Az=Q;}if(((Q.F&0x1)===0x1))this.Ai(Q.GetClipping(
));if(((Q.F&0x80)===0x80)&&(B.aam().UZ()===Q))Q.AL(0x10,0x0);else if(!((this.F&0x10
)===0x10)&&((Q.F&0x200010)===0x200010))Q.AL(0x0,0x10);else if((((this.F&0x10)===
0x10)&&!((Q.F&0x10)===0x10))&&((Q.F&0x100000)===0x100000))Q.AL(0x10,0x0);if(((!this.
C3&&((Q.F&0x4)===0x4))&&((Q.F&0x10)===0x10))&&!((Q.F&0x10000)===0x10000))this.CV(
Q);if(((Q.F&0x401)===0x401)){Q.F=Q.F|0x800;this.F=this.F|0x4000;B.pe([this,this.
DS],this);}if(((Q.F&0x200)===0x200)){Q.F=Q.F|0x800;this.F=this.F|0x4000;B.pe([this
,this.DS],this);}},Ve:function(){return this.FS;},_Init:function(aArg){E.Bz._Init.
call(this,aArg);this.__proto__=E.K;this.F=0x10001F;this.Bm(aArg);},_Mark:function(
D){var A;E.Bz._Mark.call(this,D);if((A=this.Az)&&(A._cycle!=D))A._Mark(A._cycle=
D);if((A=this.AN)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.Pe)&&(A._cycle!=
D))A._Mark(A._cycle=D);if((A=this.BF)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.
FF)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.J5)&&(A._cycle!=D))A._Mark(A._cycle=
D);if((A=this.C3)&&(A._cycle!=D))A._Mark(A._cycle=D);},_className:"Core::Group"};
E.Root={EC:null,BT:B.abi(10,null,null),Ew:null,H9:null,M9:0,B$:0,C9:B.abi(10,0,null
),O9:B.abi(10,B.wg,null),FD:B.abi(10,0,null),Hj:B.abi(10,B.wf,null),KO:B.abi(10,
0,null),H8:B.abi(10,B.wf,null),FC:B.abi(10,B.wf,null),Ey:B.abi(10,B.wf,null),GM:
B.abi(10,B.wf,null),A8:0,Pa:0,O$:0,DA:B.abi(4,0,null),CA:B.abi(4,B.wg,null),Cz:0
,MC:0,KQ:0,RO:true,Bm:function(aArg){if(!!!this.N){var obj=this;B.abD(obj);}},Kh:
function(){return this;},DD:function(A0,aClip,aOffset,aOpacity,aBlend){var fullScreenUpdate=
false;fullScreenUpdate=B.m7;if(!fullScreenUpdate)A0.No(aClip,B.abh(B.abh(aClip,aOffset
),this.J.slice(0,2)),0x00000000,0x00000000,0x00000000,0x00000000,false);E.K.DD.call(
this,A0,aClip,aOffset,aOpacity,aBlend);},AL:function(Et,Fd){var A;E.K.AL.call(this
,Et,Fd);if(!this.H&&(((Et&0x1)===0x1)||((Fd&0x1)===0x1)))this.Ai([0,0,(A=this.J)[
2]-A[0],A[3]-A[1]]);if(!this.H&&(((Et&0x2)===0x2)||((Fd&0x2)===0x2)))this.Ai([0,
0,(A=this.J)[2]-A[0],A[3]-A[1]]);},CV:function(C){if((C!==null)||!C)E.K.CV.call(
this,C);},Jt:function(C){var A;var Fi=this.FS;E.K.Jt.call(this,C);if(((Fi!==this.
FS)&&!this.H)&&((this.F&0x1)===0x1))this.Ai([0,0,(A=this.J)[2]-A[0],A[3]-A[1]]);
},DispatchEvent:function(AZ){if(!!AZ){AZ.Lo=!!this.B$;if(!!this.B$)AZ.AX=this.B$;
}var B1;B1=E.K.DispatchEvent.call(this,AZ);this.B$=0;return B1;},BroadcastEvent:
function(AZ,aFilter){if(!!AZ){AZ.Lo=!!this.B$;if(!!this.B$)AZ.AX=this.B$;}var B1=
E.K.BroadcastEvent.call(this,AZ,aFilter);this.B$=0;return B1;},Ai:function(AQ){var
A;if(this.M9>0)throw new Error(Rc);var fullScreenUpdate=false;fullScreenUpdate=B.
m7;if(fullScreenUpdate)AQ=[0,0,(A=this.J)[2]-A[0],A[3]-A[1]];if(!!this.H){E.K.Ai.
call(this,AQ);return;}AQ=B.lb(B.abh(AQ,this.J.slice(0,2)),this.J);if((AQ[0]>=AQ[
2])||(AQ[1]>=AQ[3]))return;var i;for(i=0;i<this.Cz;i=i+1)if(!(((A=B.lb(this.CA.Get(
i),AQ))[0]>=A[2])||(A[1]>=A[3]))){this.CA.Set(i,B.wC(this.CA.Get(i),AQ));this.DA.
Set(i,B.aaH(this.CA.Get(i)));return;}if(this.Cz<3){this.CA.Set(this.Cz,AQ);this.
DA.Set(this.Cz,B.aaH(AQ));this.Cz=this.Cz+1;return;}var B2;var EB;var MB=0;var MD=
0;var TP=2147483647;this.CA.Set(this.Cz,AQ);this.DA.Set(this.Cz,B.aaH(AQ));for(B2=
0;B2<=this.Cz;B2=B2+1)for(EB=B2+1;EB<=this.Cz;EB=EB+1){var Pq=B.aaH(B.wC(this.CA.
Get(B2),this.CA.Get(EB)));var T$=((Pq<<8)/(this.DA.Get(B2)+this.DA.Get(EB)))|0;if(
T$<TP){TP=T$;MB=B2;MD=EB;}}this.CA.Set(MB,B.wC(this.CA.Get(MB),this.CA.Get(MD)));
this.DA.Set(MB,B.aaH(this.CA.Get(MB)));if(MD!==this.Cz){this.CA.Set(MD,this.CA.Get(
this.Cz));this.DA.Set(MD,this.DA.Get(this.Cz));}},Zu:function(){var C$=B._NewObject(
E.K8,0);C$.Lo=!!this.B$;if(!!this.B$)C$.AX=this.B$;return C$;},JM:function(){var
C$=B._NewObject(E.HC,0);C$.Lo=!!this.B$;if(!!this.B$)C$.AX=this.B$;return C$;},KN:
function(){var C$=B._NewObject(E.Nk,0);C$.Lo=!!this.B$;if(!!this.B$)C$.AX=this.B$;
return C$;},Zv:function(Ac){var i;var JS=false;for(i=0;i<10;i=i+1)if(!!this.BT.Get(
i)){var Aa=this.Ey.Get(i);var AB=this.BT.Get(i).H;while(!!AB&&(AB!==this)){Aa=B.
abe(Aa,AB.J.slice(0,2));AB=AB.H;}if(!AB&&(this.BT.Get(i)!==this)){var tmp=this.BT.
Get(i);this.A8=i;this.BT.Set(i,null);tmp.Cu(this.JM().InitializeUp(i,this.H8.Get(
i),this.Hj.Get(i),this.FD.Get(i),this.C9.Get(i)+1,this.FC.Get(i),false,this.Ey.Get(
i),this.GM.Get(i)));this.BroadcastEvent(this.KN().InitializeUp(i,this.C9.Get(i)+
1,false,tmp,this.Ey.Get(i)),0x18);}else{this.FD.Set(i,(this.H9.AX-this.KO.Get(i)
)|0);if(this.FD.Get(i)<10)this.FD.Set(i,10);this.A8=i;this.BT.Get(i).Cu(this.JM(
).InitializeHold(i,Aa,this.Hj.Get(i),this.FD.Get(i),this.C9.Get(i)+1,this.FC.Get(
i),this.Ey.Get(i),this.GM.Get(i)));JS=true;}}if(!JS)this.H9.Aq(false);},GetFPS:function(
){var ticksCount=0;var TW=0;ticksCount=((new Date).getTime()-B.v$)|0;if(!!this.Pa&&(
ticksCount>this.Pa))TW=((this.O$*1000)/((ticksCount-this.Pa)|0))|0;this.O$=0;this.
Pa=ticksCount;return TW;},Update:function(){var A;if(!this.Ew)this.Ew=B._NewObject(
B.Graphics.Canvas,0);this.Ew.NL([(A=this.J)[2]-A[0],A[3]-A[1]]);this.Ew.Update();
return this.UpdateGE20(this.Ew);},UpdateGE20:function(A0){if(!this.BeginUpdate()
)return AE;var Hs=this.UpdateCanvas(A0,AY);this.EndUpdate();return Hs;},EndUpdate:
function(){if(this.Cz>0){this.O$=this.O$+1;this.Cz=0;}},UpdateCanvas:function(A0
,aOffset){var A;var Hs=AE;var Zp=[].concat(aOffset,B.abf(A0.FrameSize,aOffset));
var i;var B2=this.Cz;this.M9=this.M9+1;A0.AK=this;A0.Po=false;for(i=0;(i<B2)&&(i<
4);i=i+1)if(this.DA.Get(i)>0){this.DD(A0,B.abg(this.CA.Get(i),aOffset),[-aOffset[
0],-aOffset[1]],255,true);Hs=B.wC(Hs,B.lb(Zp,this.CA.Get(i)));}else B2=B2+1;A0.AK=
null;this.M9=this.M9-1;if(!((Hs[0]>=Hs[2])||(Hs[1]>=Hs[3])))return B.abg(Hs,aOffset
);else return Hs;},GetUpdateRegion:function(O3){var i;var B2=this.Cz;if(O3<0)return AE;
for(i=0;(i<B2)&&(i<4);i=i+1)if(!this.DA.Get(i)){B2=B2+1;O3=O3+1;}else if(i===O3)
return this.CA.Get(i);return AE;},BeginUpdate:function(){var A;var i;if(!!this.Cz&&
!B.aaY(this.CA.Get(0),[0,0,(A=this.J)[2]-A[0],A[3]-A[1]])){var Um=B.abi(3,B.wg,null
);var Ul=this.Cz;for(i=0;i<Ul;i++)Um.Set(i,this.CA.Get(i));for(i=0;i<Ul;i++){var
Uc=B.abh(Um.Get(i),this.J.slice(0,2));var Ud=this.K4(Uc);if(!B.aaY(Uc,Ud))this.Ai(
B.abg(Ud,this.J.slice(0,2)));}}var B2;var EB;for(B2=0;B2<(this.Cz-1);B2++)if(this.
DA.Get(B2)>0)for(EB=B2+1;EB<this.Cz;EB++)if(this.DA.Get(EB)>0){var Pq=B.aaH(B.wC(
this.CA.Get(B2),this.CA.Get(EB)));if(((Pq-this.DA.Get(B2))-this.DA.Get(EB))<0){this.
CA.Set(B2,B.wC(this.CA.Get(B2),this.CA.Get(EB)));this.DA.Set(B2,Pq);this.DA.Set(
EB,0);}}for(i=this.Cz-1;i>=0;i--)if(!this.DA.Get(i))this.Cz=this.Cz-1;return this.
Cz;},DoesNeedUpdate:function(){if(this.Cz>0)return true;return false;},Initialize:
function(aSize){this.S([].concat(AY,aSize));if(this.RO)this.F=this.F|0x60;else this.
F=this.F|0x20;this.Ai(this.J);return this;},SetRootFocus:function(Rz){if(Rz===this.
RO)return false;this.RO=Rz;if(!Rz)this.AL(0x0,0x40);else this.AL(0x40,0x0);return true;
},SetUserInputTimestamp:function(Zk){this.B$=Zk;},DriveKeyboardHitting:function(
CB,Mg,FZ){var A;var Sa=!!this.EC;if(!!this.EC&&((!FZ||(this.MC!==CB))||(this.KQ!==
Mg))){var C$=null;var R=(E.Bf.isPrototypeOf(A=this.EC)?A:null);var Gd=(E.Iz.isPrototypeOf(
A=this.EC)?A:null);if(!!this.MC)C$=B._NewObject(E.KeyEvent,0).Initialize(this.MC
,false);if(this.KQ!==0x00)C$=B._NewObject(E.KeyEvent,0).Initialize2(this.KQ,false
);if(!!Gd)Gd.Cu(C$);else if(!!R)R.Cu(C$);this.MC=0;this.KQ=0x00;this.EC=null;}if(
!!this.EC){var C$=null;var R=(E.Bf.isPrototypeOf(A=this.EC)?A:null);var Gd=(E.Iz.
isPrototypeOf(A=this.EC)?A:null);if(!!CB)C$=B._NewObject(E.KeyEvent,0).Initialize(
CB,true);if(this.KQ!==0x00)C$=B._NewObject(E.KeyEvent,0).Initialize2(Mg,true);if(
!!Gd)Gd.Cu(C$);else if(!!R)R.Cu(C$);}if(!this.EC&&FZ){if(!!CB)this.EC=this.DispatchEvent(
B._NewObject(E.KeyEvent,0).Initialize(CB,true));if(Mg!==0x00)this.EC=this.DispatchEvent(
B._NewObject(E.KeyEvent,0).Initialize2(Mg,true));if(!(E.Iz.isPrototypeOf(A=this.
EC)?A:null)&&!(E.Bf.isPrototypeOf(A=this.EC)?A:null))this.EC=null;this.MC=CB;this.
KQ=Mg;Sa=Sa||!!this.EC;}this.B$=0;return Sa;},DriveCursorMovement:function(Cy){return this.
DriveMultiTouchMovement(this.A8,Cy);},DriveMultiTouchMovement:function(Ae,Cy){if((
Ae<0)||(Ae>9)){this.B$=0;return false;}var Bc=B.abe(Cy,this.Ey.Get(Ae));this.Ey.
Set(Ae,Cy);if(!this.BT.Get(Ae)||B.aaX(Bc,AY)){this.B$=0;return false;}var Aa=Cy;
var AB=this.BT.Get(Ae).H;while(!!AB&&(AB!==this)){Aa=B.abe(Aa,AB.J.slice(0,2));AB=
AB.H;}if(!AB&&(this.BT.Get(Ae)!==this)){var tmp=this.BT.Get(Ae);this.A8=Ae;this.
BT.Set(Ae,null);tmp.Cu(this.JM().InitializeUp(Ae,this.H8.Get(Ae),this.Hj.Get(Ae)
,this.FD.Get(Ae),this.C9.Get(Ae)+1,this.FC.Get(Ae),false,this.Ey.Get(Ae),this.GM.
Get(Ae)));this.BroadcastEvent(this.KN().InitializeUp(Ae,this.C9.Get(Ae)+1,false,
tmp,Cy),0x18);}else{this.H8.Set(Ae,Aa);this.A8=Ae;this.BT.Get(Ae).Cu(this.Zu().Initialize(
Ae,Aa,this.Hj.Get(Ae),Bc,this.FD.Get(Ae),this.C9.Get(Ae)+1,this.FC.Get(Ae),Cy,this.
GM.Get(Ae)));}this.B$=0;return true;},DriveCursorHitting:function(FZ,Ae,Cy){return this.
DriveMultiTouchHitting(FZ,Ae,Cy);},DriveMultiTouchHitting:function(FZ,Ae,Cy){if((
Ae<0)||(Ae>9)){this.B$=0;return false;}var ticksCount=this.B$;if(!ticksCount)ticksCount=((
new Date).getTime()-B.v$)|0;var Z2=this.B$;this.DriveMultiTouchMovement(Ae,Cy);Cy=
this.Ey.Get(Ae);this.B$=Z2;if(FZ)this.GM.Set(Ae,Cy);if(FZ&&!this.BT.Get(Ae)){var
CT;var Aa=Cy;if(B.wa(this.O9.Get(Ae),Cy)&&((ticksCount-this.KO.Get(Ae))<=250))this.
C9.Set(Ae,this.C9.Get(Ae)+1);else this.C9.Set(Ae,0);this.O9.Set(Ae,B.abh(Md,Cy));
this.KO.Set(Ae,ticksCount);CT=this.HD(B.abh(Md,Cy),Ae,this.C9.Get(Ae)+1,null,null
,0x0);if(!!CT){this.BroadcastEvent(this.KN().InitializeDown(Ae,this.C9.Get(Ae)+1
,false,CT.Bf,Cy),0x18);this.BT.Set(Ae,CT.Bf);this.FC.Set(Ae,CT.AU);}else{this.BT.
Set(Ae,null);this.FC.Set(Ae,AY);this.B$=0;return false;}var AB=CT.Bf.H;while(!!AB&&(
AB!==this)){Aa=B.abe(Aa,AB.J.slice(0,2));AB=AB.H;}this.Hj.Set(Ae,Aa);this.H8.Set(
Ae,Aa);this.FD.Set(Ae,0);this.H9.Aq(true);this.A8=Ae;this.BT.Get(Ae).Cu(this.JM(
).InitializeDown(Ae,Aa,this.C9.Get(Ae)+1,this.FC.Get(Ae),false,Cy));this.B$=0;return true;
}if(!FZ&&!!this.BT.Get(Ae)){var Aa=Cy;var AB=this.BT.Get(Ae).H;while(!!AB&&(AB!==
this)){Aa=B.abe(Aa,AB.J.slice(0,2));AB=AB.H;}if(!AB)Aa=this.H8.Get(Ae);this.A8=Ae;
var tmp=this.BT.Get(Ae);this.BT.Set(Ae,null);tmp.Cu(this.JM().InitializeUp(Ae,Aa
,this.Hj.Get(Ae),this.FD.Get(Ae),this.C9.Get(Ae)+1,this.FC.Get(Ae),false,Cy,this.
GM.Get(Ae)));this.BroadcastEvent(this.KN().InitializeUp(Ae,this.C9.Get(Ae)+1,false
,tmp,Cy),0x18);this.B$=0;return true;}this.B$=0;return false;},QR:function(F$,O0
,Ga,H5){if(F$===this)F$=null;if(!this.BT.Get(this.A8))return;var CT;CT=this.HD(B.
abh(Md,this.Ey.Get(this.A8)),this.A8,1,F$,Ga,H5);if(!!CT&&(this.BT.Get(this.A8)!==
CT.Bf))this.Sr(CT.Bf,CT.AU);if(!CT&&(this.BT.Get(this.A8)!==O0))this.Sr(O0,AY);}
,W7:function(F$,O0,Ga){this.QR(F$,O0,Ga,0x0);},Sr:function(F$,Fz){if(!this.BT.Get(
this.A8)||(this.BT.Get(this.A8)===F$))return;var tmp=this.BT.Get(this.A8);this.BT.
Set(this.A8,null);tmp.Cu(this.JM().InitializeUp(this.A8,this.H8.Get(this.A8),this.
Hj.Get(this.A8),this.FD.Get(this.A8),this.C9.Get(this.A8)+1,this.FC.Get(this.A8)
,true,this.Ey.Get(this.A8),this.GM.Get(this.A8)));this.BroadcastEvent(this.KN().
InitializeUp(this.A8,this.C9.Get(this.A8)+1,true,tmp,this.Ey.Get(this.A8)),0x18);
var Aa=this.Ey.Get(this.A8);var AB=null;if(!!F$)AB=F$.H;while(!!AB&&(AB!==this)){
Aa=B.abe(Aa,AB.J.slice(0,2));AB=AB.H;}if(!AB&&(F$!==this)){this.BT.Set(this.A8,null
);return;}this.BroadcastEvent(this.KN().InitializeDown(this.A8,this.C9.Get(this.
A8)+1,true,F$,this.Ey.Get(this.A8)),0x18);var ticksCount=0;ticksCount=((new Date
).getTime()-B.v$)|0;this.BT.Set(this.A8,F$);this.FC.Set(this.A8,Fz);this.Hj.Set(
this.A8,Aa);this.H8.Set(this.A8,Aa);this.C9.Set(this.A8,0);this.FD.Set(this.A8,0
);this.KO.Set(this.A8,ticksCount);this.GM.Set(this.A8,this.Ey.Get(this.A8));this.
BT.Get(this.A8).Cu(this.JM().InitializeDown(this.A8,Aa,this.C9.Get(this.A8)+1,this.
FC.Get(this.A8),true,this.GM.Get(this.A8)));},UZ:function(){return null;},_Init:
function(aArg){E.K._Init.call(this,aArg);E.Timer._Init.call(this.H9={N:this},0);(
this.BT=[]).__proto__=E.Root.BT;(this.C9=[]).__proto__=E.Root.C9;(this.O9=[]).__proto__=
E.Root.O9;(this.FD=[]).__proto__=E.Root.FD;(this.Hj=[]).__proto__=E.Root.Hj;(this.
KO=[]).__proto__=E.Root.KO;(this.H8=[]).__proto__=E.Root.H8;(this.FC=[]).__proto__=
E.Root.FC;(this.Ey=[]).__proto__=E.Root.Ey;(this.GM=[]).__proto__=E.Root.GM;(this.
DA=[]).__proto__=E.Root.DA;(this.CA=[]).__proto__=E.Root.CA;this.__proto__=E.Root;
this.F=0x10007F;this.H9.Ep(10);this.H9.G7=[this,this.Zv];this.Bm(aArg);},_Done:function(
){this.__proto__=E.K;this.H9._Done();E.K._Done.call(this);},_ReInit:function(){E.
K._ReInit.call(this);this.H9._ReInit();},_Mark:function(D){var A;E.K._Mark.call(
this,D);if((A=this.EC)&&(A._cycle!=D))A._Mark(A._cycle=D);B.aa6(this.BT,D);if((A=
this.Ew)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.H9)._cycle!=D)A._Mark(A._cycle=
D);},_className:"Core::Root"};E.Event={AX:0,Lo:false,Bm:function(aArg){this.AX=this.
Lj();},Lj:function(){var ticksCount=0;ticksCount=((new Date).getTime()-B.v$)|0;return ticksCount;
},_Init:function(aArg){this.__proto__=E.Event;this.Bm(aArg);B.h7++;},_Done:function(
){this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((
A=this.N)&&(A._cycle!=D))A._Mark(A._cycle=D);},N:null,_cycle:0,_observers:null,_className:
"Core::Event"};E.KeyEvent={Ct:0,Bu:0,Down:false,Initialize2:function(CB,FZ){this.
Ct=0;this.Bu=CB;this.Down=FZ;if((CB>=0x30)&&(CB<=0x39))this.Ct=(10+CB)-48;if((CB>=
0x41)&&(CB<=0x5A))this.Ct=(105+CB)-65;if((CB>=0x61)&&(CB<=0x7A))this.Ct=(105+CB)-
97;if(CB===0x20)this.Ct=131;if(!this.Ct)switch(CB){case 0x2B:this.Ct=132;break;case
0x2D:this.Ct=133;break;case 0x2A:this.Ct=134;break;case 0x2F:this.Ct=135;break;case
0x3D:this.Ct=136;break;case 0x2E:this.Ct=137;break;case 0x2C:this.Ct=138;break;case
0x3A:this.Ct=139;break;case 0x3B:this.Ct=140;break;default:;}return this;},Initialize:
function(CB,FZ){this.Ct=CB;this.Down=FZ;this.Bu=0x00;var RF=CB-10;var RE=CB-105;
if((RF>=0)&&(RF<=9))this.Bu=(48+RF)&0xFFFF;if((RE>=0)&&(RE<=25))this.Bu=(65+RE)&
0xFFFF;if(CB===131)this.Bu=0x20;if(this.Bu===0x00)switch(CB){case 132:this.Bu=0x2B;
break;case 133:this.Bu=0x2D;break;case 134:this.Bu=0x2A;break;case 135:this.Bu=0x2F;
break;case 136:this.Bu=0x3D;break;case 137:this.Bu=0x2E;break;case 138:this.Bu=0x2C;
break;case 139:this.Bu=0x3A;break;case 140:this.Bu=0x3B;break;default:;}return this;
},U7:function(TK){switch(TK){case 141:return((this.Bu>=0x41)&&(this.Bu<=0x5A))||((
this.Bu>=0x61)&&(this.Bu<=0x7A));case 142:return(((this.Bu>=0x41)&&(this.Bu<=0x5A
))||((this.Bu>=0x61)&&(this.Bu<=0x7A)))||((this.Bu>=0x30)&&(this.Bu<=0x39));case
143:return(this.Bu>=0x30)&&(this.Bu<=0x39);case 144:return(((this.Bu>=0x41)&&(this.
Bu<=0x46))||((this.Bu>=0x61)&&(this.Bu<=0x66)))||((this.Bu>=0x30)&&(this.Bu<=0x39
));case 145:return this.Bu!==0x00;case 146:return(this.Bu===0x00)&&!!this.Ct;case
147:return(((this.Ct===6)||(this.Ct===7))||(this.Ct===4))||(this.Ct===5);case 148:
return(this.Bu!==0x00)||!!this.Ct;default:;}return TK===this.Ct;},_Init:function(
aArg){E.Event._Init.call(this,aArg);this.__proto__=E.KeyEvent;},_className:"Core::KeyEvent"
};E.Nk={NZ:null,DV:B.wf,Du:0,Cb:0,Down:false,Ej:false,InitializeUp:function(Ae,D6
,JF,RC,F0){this.Down=false;this.Cb=Ae;this.Du=D6;this.DV=F0;this.NZ=RC;this.Ej=JF;
return this;},InitializeDown:function(Ae,D6,JF,RC,F0){this.Down=true;this.Cb=Ae;
this.Du=D6;this.DV=F0;this.NZ=RC;this.Ej=JF;return this;},_Init:function(aArg){E.
Event._Init.call(this,aArg);this.__proto__=E.Nk;},_Mark:function(D){var A;E.Event.
_Mark.call(this,D);if((A=this.NZ)&&(A._cycle!=D))A._Mark(A._cycle=D);},_className:
"Core::CursorGrabEvent"};E.HC={Ll:B.wf,DV:B.wf,Du:0,CU:0,EI:B.wf,C1:B.wf,Cb:0,Down:
false,Ej:false,InitializeHold:function(Ae,IN,Mi,Mj,D6,Fz,F0,Mh){this.Down=true;this.
Cb=Ae;this.C1=B.abf(IN,Fz);this.EI=B.abf(Mi,Fz);this.CU=Mj;this.Du=D6;this.DV=F0;
this.Ll=Mh;return this;},InitializeUp:function(Ae,IN,Mi,Mj,D6,Fz,JF,F0,Mh){this.
Down=false;this.Cb=Ae;this.C1=B.abf(IN,Fz);this.EI=B.abf(Mi,Fz);this.CU=Mj;this.
Du=D6;this.Ej=JF;this.DV=F0;this.Ll=Mh;return this;},InitializeDown:function(Ae,
IN,D6,Fz,JF,F0){this.Down=true;this.Cb=Ae;this.C1=B.abf(IN,Fz);this.EI=B.abf(IN,
Fz);this.CU=0;this.Du=D6;this.Ej=JF;this.DV=F0;this.Ll=F0;return this;},_Init:function(
aArg){E.Event._Init.call(this,aArg);this.__proto__=E.HC;},_className:"Core::CursorEvent"
};E.K8={Ll:B.wf,DV:B.wf,Du:0,CU:0,AU:B.wf,EI:B.wf,C1:B.wf,Cb:0,Initialize:function(
Ae,IN,Mi,aOffset,Mj,Zj,Fz,F0,Mh){this.Cb=Ae;this.C1=B.abf(IN,Fz);this.EI=B.abf(Mi
,Fz);this.AU=aOffset;this.CU=Mj;this.Du=Zj;this.DV=F0;this.Ll=Mh;return this;},_Init:
function(aArg){E.Event._Init.call(this,aArg);this.__proto__=E.K8;},_className:"Core::DragEvent"
};E.HX={DD:function(A0,aClip,aOffset,aOpacity,aBlend){},GetClipping:function(){var
A;var I=E.Bz.GetClipping.call(this);if(((this.F&0x80000)===0x80000)){var J$=AE;var
R;for(R=this.U;!!R&&!((R.F&0x200)===0x200);R=R.U)if(((R.F&0x1)===0x1))J$=B.wC(J$
,R.GetClipping());I=B.wC(I,J$);}return I;},AL:function(Et,Fd){var A;var Pf=this.
F;if((!!this.H&&((this.F&0x80001)===0x80001))&&((Fd&0x80000)===0x80000))this.H.Ai(
this.GetClipping());E.Bz.AL.call(this,Et,Fd);if(((!!this.H&&((this.F&0x1)===0x1)
)&&((Et&0x80000)===0x80000))&&!((Pf&0x80000)===0x80000))this.H.Ai(this.GetClipping(
));},S:function(C){var A;if(B.aaY(C,this.J))return;var IY=[(A=this.J)[2]-A[0],A[
3]-A[1]];var R0=[C[2]-C[0],C[3]-C[1]];var KW=!B.aaX(IY,R0);var Bc=B.abe(C.slice(
0,2),this.J.slice(0,2));if(!B.aaX(Bc,AY)&&!KW){var R=this.U;while(!!R&&!((R.F&0x200
)===0x200)){if(((R.F&0x400)===0x400)){var tmp=((R.F&0x100)===0x100);R.Lt(Bc,tmp);
}R=R.U;}}if((KW&&(IY[0]>0))&&(IY[1]>0)){var AS=this.J;var R=this.U;while(!!R&&!((
R.F&0x200)===0x200)){if(((R.F&0x400)===0x400)){if(!!R.Bx&&(R.Bx.J3!==this))R.Bx=
null;if(!R.Bx&&(R.CH!==0x14))R.Mz(AS,this);}R=R.U;}}E.Bz.S.call(this,C);if(!!this.
H&&KW){this.F=this.F|0x1000;if(!((this.H.F&0x2000)===0x2000)){this.H.F=this.H.F|
0x4000;B.pe([A=this.H,A.DS],this);}}},_Init:function(aArg){E.Bz._Init.call(this,
aArg);this.__proto__=E.HX;this.F=0x203;},_className:"Core::Outline"};E.DJ={BV:null
,Bf:null,C6:null,DZ:null,Cs:-1,B3:0,Ib:8,Dz:0,Fa:0,GH:B.wf,DX:-1,Bn:0,Ix:24,Ch:0
,Fr:null,ME:false,Ji:function(){return null;},II:function(B6,Dw,Fy,ES,ET,H4,DK,Es
,CS,CQ,CR){throw new Error(Rd);},Jg:function(B6,H4,DK,Es,CS,CQ,CR){throw new Error(
Re);},Kx:function(B6,Dw,Fy,ES,ET,DK,Es,CS,CQ,CR){throw new Error(Rf);},DispatchEvent:
function(AZ){var result;result=E.K.DispatchEvent.call(this,AZ);return result;},GG:
function(Eu){var A;if(!this.Fr)return;this.ME=true;var Bw=this.MX(0-this.Bn,1);var
BL=this.MX((((A=this.J)[3]-A[1])-this.Bn)-1,2);var Gc=BL-Bw;if(Gc<1)Gc=1;var H6=(
Gc/2)|0;var H7=(Gc/3)|0;if(!H6)H6=1;if(!H7)H7=1;if(Bw<this.B3){Bw=Bw-H6;BL=BL+H7;
}else if(BL>this.Cs){Bw=Bw-H7;BL=BL+H6;}else{Bw=this.B3;BL=this.Cs;}if(Bw>=this.
Ch){Bw=0;BL=-1;}else if(BL<0){Bw=0;BL=-1;}if(BL>=this.Ch)BL=this.Ch-1;if(Bw<0)Bw=
0;var Ii=this.B3;var Ij=this.Cs;var JV=0;var JW=-1;if(Bw>Ii)Ii=Bw;if(BL<Ij)Ij=BL;
if(Ii<=Ij){while((this.Cs<BL)&&(this.B3<Ii)){this.Ih();this.Mq();}while((this.B3>
Bw)&&(this.Cs>Ij)){this.M0();this.Mp();}}else{this.Cs=(this.Cs-this.B3)+Bw;this.
B3=Bw;JV=this.B3;JW=this.Cs;}while(this.B3<Bw)this.Ih();while(this.Cs>BL)this.M0(
);while(this.B3>Bw)this.Mp();while(this.Cs<BL)this.Mq();var O=this.Az;var Cj=this.
B3;var Aa=[0,this.Bn+this.Dy(Cj,0)];var AG=(A=this.J)[3]-A[1];var My=null;var Uo=(
A=this.J)[2]-A[0];while(!!O){var Ec=Cj;var GT=((Ec>=0)&&(Ec<=-1))||((Cj>=JV)&&(Cj<=
JW));var JR=O.GetExtent();var Fh=B.abe(Aa,JR.slice(0,2));if(GT)this.Fa=this.Ix;else
this.Fa=JR[3]-JR[1];var RV=Aa[1];var RW=Aa[1]+this.Fa;if(!B.aaX(Fh,AY))O.Lt(Fh,true
);if((GT&&(RV<AG))&&(RW>0)){this.Bf=O;this.DX=Ec;this.GH=[Uo,this.Fa];(A=this.DZ
)?A[1].call(A[0],this):null;}O=O.U;Cj+=1;Aa=[Aa[0],Aa[1]+this.Fa];}Cj=this.B3;O=
this.Az;Aa=[0,this.Bn+this.Dy(Cj,0)];while(!!O){var Ec=Cj;var GT=((Ec>=0)&&(Ec<=-
1))||((Cj>=JV)&&(Cj<=JW));if(GT)this.Fa=this.Ix;else this.Fa=(A=O.GetExtent())[3
]-A[1];var RV=Aa[1];var RW=Aa[1]+this.Fa;if(GT&&!((RV<AG)&&(RW>0))){this.Bf=O;this.
DX=Ec;this.GH=[Uo,this.Fa];(A=this.DZ)?A[1].call(A[0],this):null;}if(Ec===-1)My=
O;O=O.U;Cj+=1;Aa=[Aa[0],Aa[1]+this.Fa];}this.Bf=null;this.DX=-1;this.CV(My);this.
ME=false;},Np:function(Q,aFilter){return null;},Dq:function(F_,Br,CS,CQ,CR){throw new
Error(Rg);},NS:function(Q){throw new Error(Rh);},QQ:function(Q,D5){throw new Error(
Ri);},B4:function(Q){throw new Error(Rj);},Y:function(Q,D5){throw new Error(Rk);
},Dy:function(RA,Rx){return RA*this.Ix;},MX:function(Cy,Rx){return(Cy/this.Ix)|0;
},M0:function(){var O=this.AN;if(!O)return null;if(O===this.C3)this.CV(null);this.
Cs=this.Cs-1;if(!!O.V)O.V.U=null;else this.Az=null;this.AN=O.V;O.V=null;O.H=null;
O.Bx=null;if(this.Dz<this.Ib){if(!!this.BV)this.BV.V=O;O.U=this.BV;this.BV=O;this.
Dz++;}return O;},Mq:function(){var A;var O=this.BV;var GO=this.Fr;var Na=++this.
Cs;while(!!O&&(((A=O)?A.__proto__:null)!==GO))O=O.U;if(!!O){if(!!O.U)O.U.V=O.V;if(
!!O.V)O.V.U=O.U;if(this.BV===O)this.BV=O.U;O.U=null;O.V=null;this.Dz--;}else{O=(
E.Bf.isPrototypeOf(A=B._NewObject(GO,0))?A:null);O.HO(0x1D);if(!!this.Dz)this.Ib++;
}this.Fa=this.Ix;this.DX=Na;this.GH=[(A=this.J)[2]-A[0],this.Fa];this.Bf=O;(A=this.
DZ)?A[1].call(A[0],this):null;this.Bf=null;this.DX=-1;if(!!this.AN)this.AN.U=O;O.
H=this;O.V=this.AN;this.AN=O;if(!this.Az)this.Az=O;if(Na===-1)this.CV(O);return O;
},Ih:function(){var O=this.Az;if(!O)return null;if(O===this.C3)this.CV(null);this.
B3=this.B3+1;if(!!O.U)O.U.V=null;else this.AN=null;this.Az=O.U;O.U=null;O.H=null;
O.Bx=null;if(this.Dz<this.Ib){if(!!this.BV)this.BV.V=O;O.U=this.BV;this.BV=O;this.
Dz++;}return O;},Mp:function(){var A;var O=this.BV;var GO=this.Fr;var M$=--this.
B3;while(!!O&&(((A=O)?A.__proto__:null)!==GO))O=O.U;if(!!O){if(!!O.U)O.U.V=O.V;if(
!!O.V)O.V.U=O.U;if(this.BV===O)this.BV=O.U;O.U=null;O.V=null;this.Dz--;}else{O=(
E.Bf.isPrototypeOf(A=B._NewObject(GO,0))?A:null);O.HO(0x1D);if(!!this.Dz)this.Ib++;
}this.Fa=this.Ix;this.DX=M$;this.GH=[(A=this.J)[2]-A[0],this.Fa];this.Bf=O;(A=this.
DZ)?A[1].call(A[0],this):null;this.Bf=null;this.DX=-1;if(!!this.Az)this.Az.V=O;O.
H=this;O.U=this.Az;this.Az=O;if(!this.AN)this.AN=O;if(M$===-1)this.CV(O);return O;
},R_:function(Ac){this.BS(this.C6.AU[1]);},R$:function(Ac){var A;{var L=this.PY(
0,this.Ch-1);var If=this.J.slice(0,2);if(L[0]>If[0])L=[].concat(If[0],L.slice(1,
4));if(L[1]>If[1])L=B.abP(L,If[1]);var Bc=L[1]-this.J[1];var JX=((A=this.J)[3]-A[
1])-(L[3]-L[1]);if(JX>0)JX=0;this.C6.AU=[0,this.Bn];this.C6.BO=[0,(this.Bn+JX)-Bc
];this.C6.BN=[0,this.Bn-Bc];}},Qz:function(C){if(C===this.C6)return;if(!!C&&!!C.
Ig){B.ab5("%s%*%s",OR,C,OS);throw new Error(Me);}if(!!this.C6){this.C6.KV=null;this.
C6.Ig=null;}this.C6=C;if(!!C){C.KV=[this,this.R$];C.Ig=[this,this.R_];}},BS:function(
C){var A;if(C===this.Bn)return;this.Bn=C;this.BH();this.Ai([0,0,(A=this.J)[2]-A[
0],A[3]-A[1]]);},VL:function(C){var A;if(C<1)C=1;if(C===this.Ix)return;this.Ix=C;
while(!!this.Ih());this.BH();this.Ai([0,0,(A=this.J)[2]-A[0],A[3]-A[1]]);},Gt:function(
C){var A;if(C<0)C=0;if(C===this.Ch)return;var L=[0,0,(A=this.J)[2]-A[0],A[3]-A[1
]];if(C>this.Ch){L=[].concat(L.slice(0,3),this.Bn+this.Dy(C,3));L=B.abP(L,this.Bn+
this.Dy(this.Ch,3));}else{L=B.abP(L,this.Bn+this.Dy(C,3));L=[].concat(L.slice(0,
3),this.Bn+this.Dy(this.Ch,3));}this.Ch=C;this.BH();this.Ai(L);},Qu:function(C){
var A;if(C===this.Fr)return;this.Fr=C;while(!!this.Ih());this.BV=null;this.Dz=0;
this.BH();this.Ai([0,0,(A=this.J)[2]-A[0],A[3]-A[1]]);},PY:function(D4,ER){if(D4<
0)D4=0;if(ER>=this.Ch)ER=this.Ch-1;if(D4>ER)return AE;var L=this.J;var Fh=this.Bn;
L=[].concat(L.slice(0,3),(L[1]+Fh)+this.Dy(ER+1,0));L=B.abP(L,(L[1]+Fh)+this.Dy(
D4,0));return L;},_Init:function(aArg){E.K._Init.call(this,aArg);this.__proto__=
E.DJ;this.S(Mf);this.Fr=B.acf.Text;},_Mark:function(D){var A;E.K._Mark.call(this
,D);if((A=this.BV)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.Bf)&&(A._cycle!=
D))A._Mark(A._cycle=D);if((A=this.C6)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.
DZ)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);},_className:"Core::VerticalList"};
E.BC={BV:null,Bf:null,C6:null,DZ:null,JU:-1,JT:0,Cs:-1,B3:0,Ib:8,Dz:0,Fb:0,GH:B.
wf,DX:-1,Bn:0,Iy:24,Ch:0,Fr:null,ME:false,Ji:function(){return null;},II:function(
B6,Dw,Fy,ES,ET,H4,DK,Es,CS,CQ,CR){throw new Error(OT);},Jg:function(B6,H4,DK,Es,
CS,CQ,CR){throw new Error(OU);},Kx:function(B6,Dw,Fy,ES,ET,DK,Es,CS,CQ,CR){throw new
Error(OV);},DispatchEvent:function(AZ){var result;result=E.K.DispatchEvent.call(
this,AZ);return result;},GG:function(Eu){var A;if(!this.Fr)return;this.ME=true;var
Bw=this.MX(0-this.Bn,1);var BL=this.MX((((A=this.J)[2]-A[0])-this.Bn)-1,2);var Gc=
BL-Bw;if(Gc<1)Gc=1;var H6=(Gc/2)|0;var H7=(Gc/3)|0;if(!H6)H6=1;if(!H7)H7=1;if(Bw<
this.B3){Bw=Bw-H6;BL=BL+H7;}else if(BL>this.Cs){Bw=Bw-H7;BL=BL+H6;}else{Bw=this.
B3;BL=this.Cs;}if(Bw>=this.Ch){Bw=0;BL=-1;}else if(BL<0){Bw=0;BL=-1;}if(BL>=this.
Ch)BL=this.Ch-1;if(Bw<0)Bw=0;var Ii=this.B3;var Ij=this.Cs;var JV=0;var JW=-1;if(
Bw>Ii)Ii=Bw;if(BL<Ij)Ij=BL;if(Ii<=Ij){while((this.Cs<BL)&&(this.B3<Ii)){this.Ih(
);this.Mq();}while((this.B3>Bw)&&(this.Cs>Ij)){this.M0();this.Mp();}}else{this.Cs=(
this.Cs-this.B3)+Bw;this.B3=Bw;JV=this.B3;JW=this.Cs;}while(this.B3<Bw)this.Ih();
while(this.Cs>BL)this.M0();while(this.B3>Bw)this.Mp();while(this.Cs<BL)this.Mq();
var O=this.Az;var Cj=this.B3;var Aa=[this.Bn+this.Dy(Cj,0),0];var Bi=(A=this.J)[
2]-A[0];var My=null;var Uk=(A=this.J)[3]-A[1];while(!!O){var Ec=Cj;var GT=((Ec>=
this.JT)&&(Ec<=this.JU))||((Cj>=JV)&&(Cj<=JW));var JR=O.GetExtent();var Fh=B.abe(
Aa,JR.slice(0,2));if(GT)this.Fb=this.Iy;else this.Fb=JR[2]-JR[0];var RT=Aa[0];var
RU=Aa[0]+this.Fb;if(!B.aaX(Fh,AY))O.Lt(Fh,true);if((GT&&(RT<Bi))&&(RU>0)){this.Bf=
O;this.DX=Ec;this.GH=[this.Fb,Uk];(A=this.DZ)?A[1].call(A[0],this):null;}O=O.U;Cj+=
1;Aa=[Aa[0]+this.Fb,Aa[1]];}Cj=this.B3;O=this.Az;Aa=[this.Bn+this.Dy(Cj,0),0];while(
!!O){var Ec=Cj;var GT=((Ec>=this.JT)&&(Ec<=this.JU))||((Cj>=JV)&&(Cj<=JW));if(GT
)this.Fb=this.Iy;else this.Fb=(A=O.GetExtent())[2]-A[0];var RT=Aa[0];var RU=Aa[0
]+this.Fb;if(GT&&!((RT<Bi)&&(RU>0))){this.Bf=O;this.DX=Ec;this.GH=[this.Fb,Uk];(
A=this.DZ)?A[1].call(A[0],this):null;}if(Ec===-1)My=O;O=O.U;Cj+=1;Aa=[Aa[0]+this.
Fb,Aa[1]];}this.JT=0;this.JU=-1;this.Bf=null;this.DX=-1;this.CV(My);this.ME=false;
},Np:function(Q,aFilter){return null;},Dq:function(F_,Br,CS,CQ,CR){throw new Error(
OW);},NS:function(Q){throw new Error(Rl);},QQ:function(Q,D5){throw new Error(Rm);
},B4:function(Q){throw new Error(Rn);},Y:function(Q,D5){throw new Error(Ro);},Dy:
function(RA,Rx){return RA*this.Iy;},MX:function(Cy,Rx){return(Cy/this.Iy)|0;},M0:
function(){var O=this.AN;if(!O)return null;if(O===this.C3)this.CV(null);this.Cs=
this.Cs-1;if(!!O.V)O.V.U=null;else this.Az=null;this.AN=O.V;O.V=null;O.H=null;O.
Bx=null;if(this.Dz<this.Ib){if(!!this.BV)this.BV.V=O;O.U=this.BV;this.BV=O;this.
Dz++;}return O;},Mq:function(){var A;var O=this.BV;var GO=this.Fr;var Na=++this.
Cs;while(!!O&&(((A=O)?A.__proto__:null)!==GO))O=O.U;if(!!O){if(!!O.U)O.U.V=O.V;if(
!!O.V)O.V.U=O.U;if(this.BV===O)this.BV=O.U;O.U=null;O.V=null;this.Dz--;}else{O=(
E.Bf.isPrototypeOf(A=B._NewObject(GO,0))?A:null);O.HO(0x1D);if(!!this.Dz)this.Ib++;
}this.Fb=this.Iy;this.DX=Na;this.GH=[this.Fb,(A=this.J)[3]-A[1]];this.Bf=O;(A=this.
DZ)?A[1].call(A[0],this):null;this.Bf=null;this.DX=-1;if(!!this.AN)this.AN.U=O;O.
H=this;O.V=this.AN;this.AN=O;if(!this.Az)this.Az=O;if(Na===-1)this.CV(O);return O;
},Ih:function(){var O=this.Az;if(!O)return null;if(O===this.C3)this.CV(null);this.
B3=this.B3+1;if(!!O.U)O.U.V=null;else this.AN=null;this.Az=O.U;O.U=null;O.H=null;
O.Bx=null;if(this.Dz<this.Ib){if(!!this.BV)this.BV.V=O;O.U=this.BV;this.BV=O;this.
Dz++;}return O;},Mp:function(){var A;var O=this.BV;var GO=this.Fr;var M$=--this.
B3;while(!!O&&(((A=O)?A.__proto__:null)!==GO))O=O.U;if(!!O){if(!!O.U)O.U.V=O.V;if(
!!O.V)O.V.U=O.U;if(this.BV===O)this.BV=O.U;O.U=null;O.V=null;this.Dz--;}else{O=(
E.Bf.isPrototypeOf(A=B._NewObject(GO,0))?A:null);O.HO(0x1D);if(!!this.Dz)this.Ib++;
}this.Fb=this.Iy;this.DX=M$;this.GH=[this.Fb,(A=this.J)[3]-A[1]];this.Bf=O;(A=this.
DZ)?A[1].call(A[0],this):null;this.Bf=null;this.DX=-1;if(!!this.Az)this.Az.V=O;O.
H=this;O.U=this.Az;this.Az=O;if(!this.AN)this.AN=O;if(M$===-1)this.CV(O);return O;
},R_:function(Ac){this.BS(this.C6.AU[0]);},R$:function(Ac){var A;{var L=this.PY(
0,this.Ch-1);var If=this.J.slice(0,2);if(L[0]>If[0])L=[].concat(If[0],L.slice(1,
4));if(L[1]>If[1])L=B.abP(L,If[1]);var Bc=L[0]-this.J[0];var JX=((A=this.J)[2]-A[
0])-(L[2]-L[0]);if(JX>0)JX=0;this.C6.AU=[this.Bn,0];this.C6.BO=[(this.Bn+JX)-Bc,
0];this.C6.BN=[this.Bn-Bc,0];}},Qz:function(C){if(C===this.C6)return;if(!!C&&!!C.
Ig){B.ab5("%s%*%s",OR,C,OS);throw new Error(Me);}if(!!this.C6){this.C6.KV=null;this.
C6.Ig=null;}this.C6=C;if(!!C){C.KV=[this,this.R$];C.Ig=[this,this.R_];}},BS:function(
C){var A;if(C===this.Bn)return;this.Bn=C;this.BH();this.Ai([0,0,(A=this.J)[2]-A[
0],A[3]-A[1]]);},VM:function(C){var A;if(C<1)C=1;if(C===this.Iy)return;this.Iy=C;
while(!!this.Ih());this.BH();this.Ai([0,0,(A=this.J)[2]-A[0],A[3]-A[1]]);},Gt:function(
C){var A;if(C<0)C=0;if(C===this.Ch)return;var L=[0,0,(A=this.J)[2]-A[0],A[3]-A[1
]];if(C>this.Ch){L=[].concat(this.Bn+this.Dy(this.Ch,3),L.slice(1,4));L=B.abN(L,
this.Bn+this.Dy(C,3));}else{L=B.abN(L,this.Bn+this.Dy(this.Ch,3));L=[].concat(this.
Bn+this.Dy(C,3),L.slice(1,4));}this.Ch=C;this.BH();this.Ai(L);},Qu:function(C){var
A;if(C===this.Fr)return;this.Fr=C;while(!!this.Ih());this.BV=null;this.Dz=0;this.
BH();this.Ai([0,0,(A=this.J)[2]-A[0],A[3]-A[1]]);},PY:function(D4,ER){if(D4<0)D4=
0;if(ER>=this.Ch)ER=this.Ch-1;if(D4>ER)return AE;var L=this.J;var Fh=this.Bn;L=B.
abN(L,(L[0]+Fh)+this.Dy(ER+1,0));L=[].concat((L[0]+Fh)+this.Dy(D4,0),L.slice(1,4
));return L;},Ln:function(D4,ER){var A;if(D4<0)D4=0;if(D4>ER)return;if(this.JT>this.
JU){this.JT=D4;this.JU=ER;}else{if(D4<this.JT)this.JT=D4;if(ER>this.JU)this.JU=ER;
}var L=[0,0,(A=this.J)[2]-A[0],A[3]-A[1]];L=[].concat(this.Bn+this.Dy(D4,0),L.slice(
1,4));L=B.abN(L,this.Bn+this.Dy(ER+1,0));this.BH();this.Ai(L);},_Init:function(aArg
){E.K._Init.call(this,aArg);this.__proto__=E.BC;this.S(Mf);this.Fr=B.acf.Text;},
_Mark:function(D){var A;E.K._Mark.call(this,D);if((A=this.BV)&&(A._cycle!=D))A._Mark(
A._cycle=D);if((A=this.Bf)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.C6)&&(A.
_cycle!=D))A._Mark(A._cycle=D);if((A=this.DZ)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=
D);},_className:"Core::HorizontalList"};E.H0={Ql:null,NE:null,NC:null,FQ:null,Bj:
null,AC:0,Cb:0,AX:0,Du:0,CU:0,AU:B.wf,EI:B.wf,C1:B.wf,W8:8,SH:1,Down:false,G5:false
,Ej:false,RJ:false,MF:0,DD:function(A0,aClip,aOffset,aOpacity,aBlend){},Cu:function(
AZ){var A;var Al=(E.HC.isPrototypeOf(AZ)?AZ:null);var Cf=(E.K8.isPrototypeOf(AZ)?
AZ:null);var Pc=this.G5;var Gf;var Fg;var M5;var Dn;var Mt;if(!Al&&!Cf)return null;
Gf=(!!Al&&Al.Down)&&!Al.CU;Fg=(!!Al&&Al.Down)&&(Al.CU>0);M5=(!!Al&&Al.Down)&&(Al.
CU>this.MF);Dn=!!Al&&!Al.Down;Mt=!!Cf;if(Gf)this.MF=((A=(Al.Ej?0:50))&0x80)?A|0xFFFFFF00:
A&0xFF;if(Gf){var J0=0;var GN;this.AC=this.AC|(1<<Al.Cb);for(GN=this.AC&4095;GN>
0;GN=GN>>1)if(!!(GN&1))J0=J0+1;if(J0===1)this.AC=(this.AC|16777216)|(4096<<Al.Cb
);}if(Dn&&(this.AC<16777216)){var Ef=this.Kh();var CT=null;if(!!Ef){var Se=(!!this.
V?this.V:this.H);CT=Ef.HD(B.abh(OX,Al.DV),Al.Cb,Al.Du,null,Se,0x0);}if(!!CT){var
i;for(i=0;i<10;i++)if(!!(this.AC&(1<<i)))CT.Bf.Cu(B._NewObject(E.HC,0).InitializeDown(
i,Al.C1,Al.Du,AY,true,Al.DV));for(i=0;i<10;i++)if(!!(this.AC&(1<<i)))CT.Bf.Cu(B.
_NewObject(E.HC,0).InitializeUp(i,Al.C1,Al.C1,0,Al.Du,AY,false,Al.DV,Al.DV));}}if(
Dn)this.AC=(this.AC&~(1<<Al.Cb))|33554432;if(M5&&(this.AC<16777216))this.AC=this.
AC|67108864;if(Dn&&Al.Ej)this.AC=this.AC|67108864;if(Dn&&!(this.AC&16777215))this.
AC=0;if(Fg&&(this.AC>=67108864)){var Ef=this.Kh();if(!!Ef)Ef.QR(null,null,this,0x0
);}if((Fg&&!!(this.AC&16777216))&&!!(this.AC&33554432)){Fg=false;Dn=true;}if(!!Al&&
!(this.AC&(4096<<Al.Cb)))return this;if(!!Cf&&!(this.AC&(4096<<Cf.Cb)))return this;
if(Dn&&!(this.AC&16777216))return this;if(((Gf||Mt)||Fg)&&((this.AC<16777216)||(
this.AC>=33554432)))return this;if(Dn)this.AC=this.AC&3758100479;if(Dn&&!(this.AC&
16777215))this.AC=0;if(!!Al){this.Down=Gf||Fg;this.G5=this.P8(Al.C1);this.EI=Al.
EI;this.C1=Al.C1;this.AU=AY;this.CU=Al.CU;this.Du=Al.Du;this.Ej=Al.Ej;this.Cb=Al.
Cb;this.AX=Al.AX;if(Al.Down&&!Al.CU)Pc=false;}if(!!Cf){this.Down=true;this.G5=this.
P8(Cf.C1);this.EI=Cf.EI;this.C1=Cf.C1;this.AU=Cf.AU;this.CU=Cf.CU;this.Du=Cf.Du;
this.Cb=Cf.Cb;this.Ej=false;this.AX=Cf.AX;}var RH=this.Down;if(!!Cf)(A=this.Ql)?
A[1].call(A[0],this):null;if((!!Al&&this.Down)&&!this.CU)(A=this.Bj)?A[1].call(A[
0],this):null;if((this.Down&&this.G5)&&!Pc){this.RJ=true;(A=this.NC)?A[1].call(A[
0],this):null;}if(this.RJ&&(((RH&&!this.G5)&&Pc)||((!RH&&this.G5)&&Pc))){this.RJ=
false;(A=this.NE)?A[1].call(A[0],this):null;}if(!!Al&&!RH)(A=this.FQ)?A[1].call(
A[0],this):null;return this;},HD:function(AQ,Ae,D6,Hf,Ga,H5){var A;if(!!Hf&&(Hf!==
this))return null;if((D6<1)||(D6>this.SH))return null;if(this.AC>=33554432)return null;
if((this.AC>=16777216)&&!(this.AC&(4096<<Ae)))return null;if(this.U2()){var I=B.
lb(AQ,this.GetExtent());if(!((I[0]>=I[2])||(I[1]>=I[3]))){var D7=B.aaI(AQ);var Bc=
AY;if(D7[0]<I[0])Bc=[I[0]-D7[0],Bc[1]];if(D7[0]>=I[2])Bc=[(I[2]-D7[0])-1,Bc[1]];
if(D7[1]<I[1])Bc=[Bc[0],I[1]-D7[1]];if(D7[1]>=I[3])Bc=[Bc[0],(I[3]-D7[1])-1];return B.
_NewObject(E.Nl,0).Initialize(this,Bc);}}else{var BW=B.abi(9,B.wf,null);var i;BW.
Set(0,B.aaI(AQ));BW.Set(1,BW.Get(0));BW.Set(2,BW.Get(0));BW.Set(3,BW.Get(0));BW.
Set(4,BW.Get(0));BW.Set(1,[AQ[0],BW.Get(1)[1]]);BW.Set(2,[BW.Get(2)[0],AQ[1]]);BW.
Set(3,[AQ[2],BW.Get(3)[1]]);BW.Set(4,[BW.Get(4)[0],AQ[3]]);BW.Set(5,AQ.slice(0,2
));BW.Set(6,[AQ[2],AQ[1]]);BW.Set(7,[AQ[0],AQ[3]]);BW.Set(8,AQ.slice(2,4));for(i=
0;i<9;i=i+1)if(this.P8(BW.Get(i)))return B._NewObject(E.Nl,0).Initialize(this,B.
abe(BW.Get(i),BW.Get(0)));}return null;},Qx:function(C){if(C<1)C=1;this.W8=C;},Qw:
function(C){if(C<1)C=1;this.SH=C;},Aq:function(C){if(C)this.AL(0x100000,0x0);else
this.AL(0x0,0x100000);},_Init:function(aArg){E.LN._Init.call(this,aArg);this.__proto__=
E.H0;this.F=0x10011B;},_Mark:function(D){var A;E.LN._Mark.call(this,D);if((A=this.
Ql)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);if((A=this.NE)&&((A=A[0])._cycle!=
D))A._Mark(A._cycle=D);if((A=this.NC)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);
if((A=this.FQ)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);if((A=this.Bj)&&((A=A[0
])._cycle!=D))A._Mark(A._cycle=D);},_className:"Core::SimpleTouchHandler"};E.Cm={
timer:null,KV:null,Ig:null,AC:0,O4:0,J_:0,Pb:B.wf,JQ:0,Hh:0,Be:0,I5:0,KZ:0,JP:0,
Hg:0,Bd:0,I4:0,I3:0,EI:B.wf,Ss:B.wf,BN:B.wf,BO:B.wf,AU:B.wf,LQ:B.wf,Fv:B.wf,LP:B.
wf,NX:true,NW:true,KC:false,FG:false,FH:false,Gb:false,MF:0,DD:function(A0,aClip
,aOffset,aOpacity,aBlend){},Cu:function(AZ){var A;var Al=(E.HC.isPrototypeOf(AZ)?
AZ:null);var Cf=(E.K8.isPrototypeOf(AZ)?AZ:null);var CD=(E.Nk.isPrototypeOf(AZ)?
AZ:null);var Gf;var Fg;var M5;var Dn;var Mt;Gf=(!!Al&&Al.Down)&&!Al.CU;Fg=(!!Al&&
Al.Down)&&(Al.CU>0);M5=(!!Al&&Al.Down)&&(Al.CU>this.MF);Dn=!!Al&&!Al.Down;Mt=!!Cf;
if(Gf)this.MF=((A=(Al.Ej?0:50))&0x80)?A|0xFFFFFF00:A&0xFF;if(Gf){var J0=0;var GN;
this.AC=this.AC|(1<<Al.Cb);for(GN=this.AC&4095;GN>0;GN=GN>>1)if(!!(GN&1))J0=J0+1;
if(J0===1)this.AC=(this.AC|16777216)|(4096<<Al.Cb);}if(Dn&&(this.AC<16777216)){var
Ef=this.Kh();var CT=null;if(!!Ef){var Se=(!!this.V?this.V:this.H);CT=Ef.HD(B.abh(
OX,Al.DV),Al.Cb,Al.Du,null,Se,0x0);}if(!!CT){var i;for(i=0;i<10;i++)if(!!(this.AC&(
1<<i)))CT.Bf.Cu(B._NewObject(E.HC,0).InitializeDown(i,Al.C1,Al.Du,AY,true,Al.DV)
);for(i=0;i<10;i++)if(!!(this.AC&(1<<i)))CT.Bf.Cu(B._NewObject(E.HC,0).InitializeUp(
i,Al.C1,Al.C1,0,Al.Du,AY,false,Al.DV,Al.DV));}}if(Dn)this.AC=(this.AC&~(1<<Al.Cb
))|33554432;if(M5&&(this.AC<16777216))this.AC=this.AC|67108864;if(Dn&&Al.Ej)this.
AC=this.AC|67108864;if(Dn&&!(this.AC&16777215))this.AC=0;if(Fg&&(this.AC>=67108864
)){var Ef=this.Kh();if(!!Ef)Ef.QR(null,null,this,0x0);}if((Fg&&!!(this.AC&16777216
))&&!!(this.AC&33554432)){Fg=false;Dn=true;}if(!!Al&&!(this.AC&(4096<<Al.Cb)))return this;
if(!!Cf&&!(this.AC&(4096<<Cf.Cb)))return this;if(Dn&&!(this.AC&16777216))return this;
if(((Gf||Mt)||Fg)&&((this.AC<16777216)||(this.AC>=33554432)))return this;if(Dn)this.
AC=this.AC&3758100479;if(Dn&&!(this.AC&16777215))this.AC=0;if(!!CD&&(CD.NZ===this
))return null;if((!!CD&&CD.Down)&&(this.Gb||!this.KC))return null;if((!!CD&&CD.Down
)&&!B.wa(this.J,this.H.U_(CD.DV)))return null;if((!!CD&&!CD.Down)&&(!this.Gb||(this.
O4!==CD.Cb)))return null;if((!Al&&!Cf)&&!CD)return null;if(!!Al){this.Gb=Gf||Fg;
this.O4=Al.Cb;this.EI=Al.EI;}if(!!Cf)this.O4=Cf.Cb;if(!!CD){this.Gb=CD.Down;this.
O4=CD.Cb;}if(!!CD&&CD.Down){this.Sf();this.Bd=(((CD.AX-this.I3)*0.001)*this.Hg)+
this.Bd;this.Be=(((CD.AX-this.KZ)*0.001)*this.Hh)+this.Be;if(this.FG)this.Bd=0;if(
this.FH)this.Be=0;this.Hg=0;this.Hh=0;this.FG=false;this.FH=false;this.Pb=this.AU;
this.J_=CD.AX;return this;}if(Gf){this.Sf();this.Bd=(((Al.AX-this.I3)*0.001)*this.
Hg)+this.Bd;this.Be=(((Al.AX-this.KZ)*0.001)*this.Hh)+this.Be;if(this.FG||!this.
KC)this.Bd=0;if(this.FH||!this.KC)this.Be=0;this.Hg=0;this.Hh=0;this.FG=false;this.
FH=false;if(!this.KC){this.KC=true;(A=this.KV)?A[1].call(A[0],this):null;}this.Pb=
this.AU;this.J_=Al.AX;}if(!!Cf){var Ar=B.abe(Cf.C1,Cf.EI);var AW=this.AU;if(this.
NW)AW=[this.Pb[0]+Ar[0],AW[1]];if(this.NX)AW=[AW[0],this.Pb[1]+Ar[1]];if(AW[0]<this.
BO[0])AW=[this.BO[0]+(((AW[0]-this.BO[0])/2)|0),AW[1]];else if(AW[0]>this.BN[0])
AW=[this.BN[0]+(((AW[0]-this.BN[0])/2)|0),AW[1]];if(AW[1]<this.BO[1])AW=[AW[0],this.
BO[1]+(((AW[1]-this.BO[1])/2)|0)];else if(AW[1]>this.BN[1])AW=[AW[0],this.BN[1]+(((
AW[1]-this.BN[1])/2)|0)];if(!B.aaX(AW,this.AU)){this.Ss=B.abe(AW,this.AU);this.AU=
AW;(A=this.Ig)?A[1].call(A[0],this):null;}}if((!!CD&&!CD.Down)&&((CD.AX-this.J_)>=
200)){this.Bd=0;this.Be=0;}if(Fg&&((Al.AX-this.J_)>=200)){this.Bd=0;this.Be=0;}if(
!!Cf&&(Cf.AX>this.J_)){var Ar=Cf.AU;var TZ=1000/(Cf.AX-this.J_);var Id=0;var Ie=
0;if(this.NW)Id=Ar[0]*TZ;if(this.NX)Ie=Ar[1]*TZ;if((Id*this.Bd)<0)this.Bd=0;if((
Ie*this.Be)<0)this.Be=0;this.Bd=(this.Bd+Id)*0.5;this.Be=(this.Be+Ie)*0.5;this.J_=
Cf.AX;}if(!Dn&&!CD)return this;if(!!Al&&Al.Ej){this.Bd=0;this.Be=0;}if((this.AU[
0]<=this.BO[0])||(this.AU[0]>=this.BN[0]))this.Bd=0;else if(!this.Bd){var A_=this.
AU[0];var Bh=this.BO[0]+this.LQ[0];var A7=this.BN[0]-this.LP[0];if(A_<Bh)A7=this.
BO[0];else if(A_>A7)Bh=this.BN[0];else if(this.Fv[0]<=1){Bh=A_;A7=A_;}else{var GQ=(
A7-A_)%this.Fv[0];A7=(A_-this.Fv[0])+GQ;Bh=A_+GQ;if(A7<this.BO[0])A7=this.BO[0];
if(Bh>this.BN[0])Bh=this.BN[0];}if((Bh-A_)<=(A_-A7))A_=Bh;else A_=A7;if(A_!==this.
AU[0]){var C_=A_-this.AU[0];if(C_>0)this.Bd=Math.sqrt((C_*2)*5000)+20;if(C_<0)this.
Bd=-Math.sqrt((-C_*2)*5000)-20;this.Hg=(400-(this.Bd*this.Bd))/(2*C_);this.JP=A_;
}}else{var Z3=this.Bd*this.Bd;var C_=Z3/10000;var A_=this.AU[0];if(this.Bd>0)A_=
A_+(C_|0);if(this.Bd<0)A_=A_-(C_|0);if(A_>this.BN[0])A_=this.BN[0];else if(A_<this.
BO[0])A_=this.BO[0];var Ui=A_;var Bh=this.BO[0]+this.LQ[0];var A7=this.BN[0]-this.
LP[0];if(A_<Bh)A7=this.BO[0];else if(A_>A7)Bh=this.BN[0];else if(this.Fv[0]<=1){
Bh=A_;A7=A_;}else{var GQ=(A7-A_)%this.Fv[0];A7=(A_-this.Fv[0])+GQ;Bh=A_+GQ;if(A7<
this.BO[0])A7=this.BO[0];if(Bh>this.BN[0])Bh=this.BN[0];}if(this.Bd>0){if(A7<=this.
AU[0])A_=Bh;else if((A_-A7)<(Bh-A_))A_=A7;else A_=Bh;}else if(Bh>=this.AU[0])A_=
A7;else if((A_-A7)>(Bh-A_))A_=Bh;else A_=A7;if(A_!==this.AU[0]){C_=A_-this.AU[0];
if(A_!==Ui){var Im=A_-Ui;if(Im>0)this.Bd=this.Bd+Math.sqrt((Im*2)*5000);if(Im<0)
this.Bd=this.Bd-Math.sqrt((-Im*2)*5000);}if(this.Bd>0)this.Bd=this.Bd+20;if(this.
Bd<0)this.Bd=this.Bd-20;this.Hg=(400-(this.Bd*this.Bd))/(2*C_);this.JP=A_;}else this.
Bd=0;}if((this.AU[1]<=this.BO[1])||(this.AU[1]>=this.BN[1]))this.Be=0;else if(!this.
Be){var A$=this.AU[1];var Bh=this.BO[1]+this.LQ[1];var A7=this.BN[1]-this.LP[1];
if(A$<Bh)A7=this.BO[1];else if(A$>A7)Bh=this.BN[1];else if(this.Fv[1]<=1){Bh=A$;
A7=A$;}else{var GQ=(A7-A$)%this.Fv[1];A7=(A$-this.Fv[1])+GQ;Bh=A$+GQ;if(A7<this.
BO[1])A7=this.BO[1];if(Bh>this.BN[1])Bh=this.BN[1];}if((Bh-A$)<=(A$-A7))A$=Bh;else
A$=A7;if(A$!==this.AU[1]){var C_=A$-this.AU[1];if(C_>0)this.Be=Math.sqrt((C_*2)*
5000)+20;if(C_<0)this.Be=-Math.sqrt((-C_*2)*5000)-20;this.Hh=(400-(this.Be*this.
Be))/(2*C_);this.JQ=A$;}}else{var Z4=this.Be*this.Be;var C_=Z4/10000;var A$=this.
AU[1];if(this.Be>0)A$=A$+(C_|0);if(this.Be<0)A$=A$-(C_|0);if(A$>this.BN[1])A$=this.
BN[1];else if(A$<this.BO[1])A$=this.BO[1];var Uj=A$;var Bh=this.BO[1]+this.LQ[1];
var A7=this.BN[1]-this.LP[1];if(A$<Bh)A7=this.BO[1];else if(A$>A7)Bh=this.BN[1];
else if(this.Fv[1]<=1){Bh=A$;A7=A$;}else{var GQ=(A7-A$)%this.Fv[1];A7=(A$-this.Fv[
1])+GQ;Bh=A$+GQ;if(A7<this.BO[1])A7=this.BO[1];if(Bh>this.BN[1])Bh=this.BN[1];}if(
this.Be>0){if(A7<=this.AU[1])A$=Bh;else if((A$-A7)<(Bh-A$))A$=A7;else A$=Bh;}else
if(Bh>=this.AU[1])A$=A7;else if((A$-A7)>(Bh-A$))A$=Bh;else A$=A7;if(A$!==this.AU[
1]){C_=A$-this.AU[1];if(A$!==Uj){var Im=A$-Uj;if(Im>0)this.Be=this.Be+Math.sqrt((
Im*2)*5000);if(Im<0)this.Be=this.Be-Math.sqrt((-Im*2)*5000);}if(this.Be>0)this.Be=
this.Be+20;if(this.Be<0)this.Be=this.Be-20;this.Hh=(400-(this.Be*this.Be))/(2*C_
);this.JQ=A$;}else this.Be=0;}if(!!Al)this.I3=Al.AX;if(!!CD)this.I3=CD.AX;this.KZ=
this.I3;this.I4=this.AU[0];this.I5=this.AU[1];this.Z6();return this;},HD:function(
AQ,Ae,D6,Hf,Ga,H5){var A;if(!!Hf&&(Hf!==this))return null;if(this.AC>=33554432)return null;
if((this.AC>=16777216)&&!(this.AC&(4096<<Ae)))return null;if(!this.NX&&!!(H5&0x3
))return null;if(!this.NW&&!!(H5&0xC))return null;var I=B.lb(AQ,this.J);if(!((I[
0]>=I[2])||(I[1]>=I[3]))){var D7=B.aaI(AQ);var Bc=AY;if(D7[0]<I[0])Bc=[I[0]-D7[0
],Bc[1]];if(D7[0]>=I[2])Bc=[(I[2]-D7[0])-1,Bc[1]];if(D7[1]<I[1])Bc=[Bc[0],I[1]-D7[
1]];if(D7[1]>=I[3])Bc=[Bc[0],(I[3]-D7[1])-1];return B._NewObject(E.Nl,0).Initialize(
this,Bc);}return null;},Sf:function(){if(!!this.timer){B.z9([this,this.EE],this.
timer,0);this.timer=null;}},Z6:function(){this.timer=B._GetAutoObject(B.acg.Iw);
B.zV([this,this.EE],this.timer,0);},EE:function(Ac){var A;if(!this.timer)return;
var K1=(this.timer.AX-this.I3)*0.001;var K2=(this.timer.AX-this.KZ)*0.001;var Z7=
K1*K1;var Z8=K2*K2;var Id=(this.Hg*K1)+this.Bd;var Ie=(this.Hh*K2)+this.Be;var AW=[((((
this.Hg*0.5)*Z7)+(this.Bd*K1))+this.I4)|0,((((this.Hh*0.5)*Z8)+(this.Be*K2))+this.
I5)|0];if(this.FG&&(K1>=0.5)){AW=[this.JP,AW[1]];this.Bd=0;this.Hg=0;this.I4=AW[
0];this.FG=false;}else if(this.FG){var DN=1-Math.pow(1-(K1/0.5),5);AW=[(this.I4+((
this.JP-this.I4)*DN))|0,AW[1]];}if(this.FH&&(K2>=0.5)){AW=[AW[0],this.JQ];this.Be=
0;this.Hh=0;this.I5=AW[1];this.FH=false;}else if(this.FH){var DN=1-Math.pow(1-(K2
/0.5),5);AW=[AW[0],(this.I5+((this.JQ-this.I5)*DN))|0];}if(((this.Bd>0)&&(Id<0))||((
this.Bd<0)&&(Id>0))){Id=0;AW=[this.AU[0],AW[1]];}if(((this.Be>0)&&(Ie<0))||((this.
Be<0)&&(Ie>0))){Ie=0;AW=[AW[0],this.AU[1]];}if(!this.FG&&(AW[0]<this.BO[0])){this.
I4=AW[0];this.JP=this.BO[0];this.I3=this.timer.AX;this.FG=true;}else if(!this.FG&&(
AW[0]>this.BN[0])){this.I4=AW[0];this.JP=this.BN[0];this.I3=this.timer.AX;this.FG=
true;}if(!this.FH&&(AW[1]<this.BO[1])){this.I5=AW[1];this.JQ=this.BO[1];this.KZ=
this.timer.AX;this.FH=true;}else if(!this.FH&&(AW[1]>this.BN[1])){this.I5=AW[1];
this.JQ=this.BN[1];this.KZ=this.timer.AX;this.FH=true;}if(((!this.FG&&!!this.Bd)&&(
Id>-20))&&(Id<20)){AW=[this.JP,AW[1]];this.Bd=0;this.Hg=0;this.I4=AW[0];}if(((!this.
FH&&!!this.Be)&&(Ie>-20))&&(Ie<20)){AW=[AW[0],this.JQ];this.Be=0;this.Hh=0;this.
I5=AW[1];}if(!B.aaX(AW,this.AU)){this.Ss=B.abe(AW,this.AU);this.AU=AW;(A=this.Ig
)?A[1].call(A[0],this):null;}if(((!this.Bd&&!this.Be)&&!this.FG)&&!this.FH){this.
Sf();this.KC=false;}},V7:function(C){if(C[0]<0)C=[0,C[1]];if(C[1]<0)C=[C[0],0];this.
LQ=C;},S3:function(C){if(C[0]<0)C=[0,C[1]];if(C[1]<0)C=[C[0],0];this.Fv=C;},V6:function(
C){if(C[0]<0)C=[0,C[1]];if(C[1]<0)C=[C[0],0];this.LP=C;},_Init:function(aArg){E.
Bz._Init.call(this,aArg);this.__proto__=E.Cm;this.F=0x10011B;},_Mark:function(D){
var A;E.Bz._Mark.call(this,D);if((A=this.timer)&&(A._cycle!=D))A._Mark(A._cycle=
D);if((A=this.KV)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);if((A=this.Ig)&&((A=
A[0])._cycle!=D))A._Mark(A._cycle=D);},_className:"Core::SlideTouchHandler"};E.Iz={
U:null,FQ:null,Bj:null,J6:0,AX:0,Te:0,C2:148,Ct:0,Bu:0,Bl:true,Down:false,QP:false
,Bm:function(aArg){var A;var AK=(E.K.isPrototypeOf(A=this.N)?A:null);if(!AK)throw new
Error(Rp);this.U=AK.Pe;AK.Pe=this;},Cu:function(AZ){var A;if(!!AZ&&AZ.U7(this.C2
)){this.Down=AZ.Down;this.Ct=AZ.Ct;this.Bu=AZ.Bu;this.AX=AZ.AX;if(AZ.Down){this.
Te=this.J6;this.QP=this.J6>0;if(!this.QP)(A=this.Bj)?A[1].call(A[0],this):null;this.
J6=this.J6+1;return true;}if(!AZ.Down){this.QP=this.J6>1;this.Te=this.J6-1;this.
J6=0;(A=this.FQ)?A[1].call(A[0],this):null;return true;}}return false;},_Init:function(
aArg){this.__proto__=E.Iz;this.Bm(aArg);B.h7++;},_Done:function(){this.__proto__=
null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((A=this.U)&&(A._cycle
!=D))A._Mark(A._cycle=D);if((A=this.FQ)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D
);if((A=this.Bj)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);if((A=this.N)&&(A._cycle
!=D))A._Mark(A._cycle=D);},N:null,_cycle:0,_observers:null,_className:"Core::KeyPressHandler"
};E.Nl={Bf:null,K7:0,AU:B.wf,Initialize:function(Q,aOffset){this.Bf=Q;this.AU=aOffset;
this.K7=(aOffset[0]*aOffset[0])+(aOffset[1]*aOffset[1]);return this;},_Init:function(
aArg){this.__proto__=E.Nl;B.h7++;},_Done:function(){this.__proto__=null;B.h7--;}
,_ReInit:function(){},_Mark:function(D){var A;if((A=this.Bf)&&(A._cycle!=D))A._Mark(
A._cycle=D);if((A=this.N)&&(A._cycle!=D))A._Mark(A._cycle=D);},N:null,_cycle:0,_observers:
null,_className:"Core::CursorHit"};E.Nx={J3:null,D$:B.wg,AS:B.wg,isEmpty:false,_Init:
function(aArg){this.__proto__=E.Nx;B.h7++;},_Done:function(){this.__proto__=null;
B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((A=this.J3)&&(A._cycle!=
D))A._Mark(A._cycle=D);if((A=this.N)&&(A._cycle!=D))A._Mark(A._cycle=D);},N:null
,_cycle:0,_observers:null,_className:"Core::LayoutContext"};E.Ny={MW:B.wf,MV:B.wf
,MU:B.wf,MT:B.wf,_Init:function(aArg){E.Nx._Init.call(this,aArg);this.__proto__=
E.Ny;},_className:"Core::LayoutQuadContext"};E.PF={AK:null,U:null,Ez:null,ED:null
,CZ:null,J4:null,_Init:function(aArg){this.__proto__=E.PF;B.h7++;},_Done:function(
){this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((
A=this.AK)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.U)&&(A._cycle!=D))A._Mark(
A._cycle=D);if((A=this.Ez)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.ED)&&(A.
_cycle!=D))A._Mark(A._cycle=D);if((A=this.CZ)&&(A._cycle!=D))A._Mark(A._cycle=D);
if((A=this.J4)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.N)&&(A._cycle!=D))A.
_Mark(A._cycle=D);},N:null,_cycle:0,_observers:null,_className:"Core::DialogContext"
};E.Tg={Ex:null,AN:null,Az:null,T0:false,Zs:function(){if(!this.Ex)return;var Fk=
this.Ex;this.Ex.Fj=null;this.Ex=null;B.pe([this,this.R9],this);Fk.SK(this);},ZK:
function(Ac){if(!!this.Ex)return;if(!this.Az)return;this.Ex=this.Az;this.Az=this.
Az.U;if(!!this.Az)this.Az.V=null;else this.AN=null;this.Ex.U=null;this.T0=true;this.
Ex.Ku(this);this.T0=false;},ZQ:function(Ac){B.pe([this,this.ZK],this);},ZP:function(
Ac){B.pe([this,this.ZQ],this);},R9:function(Ac){B.pe([this,this.ZP],this);},UK:function(
Ci){if(!Ci||!Ci.Fj)return;if(Ci.Fj!==this)throw new Error(Rq);var Ur=false;if(this.
Ex===Ci){this.Ex=null;Ur=true;B.pe([this,this.R9],this);}else{if(!!Ci.U)Ci.U.V=Ci.
V;else this.AN=Ci.V;if(!!Ci.V)Ci.V.U=Ci.U;else this.Az=Ci.U;Ci.V=null;Ci.U=null;
}Ci.Fj=null;if(Ur)Ci.SJ(this);},Xa:function(Ci,Zl){if(!Ci)return;if(!!Ci.Fj)throw new
Error(Rr);Ci.Fj=this;if(Zl){Ci.U=this.Az;if(!!this.Az)this.Az.V=Ci;else this.AN=
Ci;this.Az=Ci;}else{Ci.V=this.AN;if(!!this.AN)this.AN.U=Ci;else this.Az=Ci;this.
AN=Ci;}if(!this.Ex)B.pe([this,this.R9],this);},_Init:function(aArg){this.__proto__=
E.Tg;B.h7++;},_Done:function(){this.__proto__=null;B.h7--;},_ReInit:function(){}
,_Mark:function(D){var A;if((A=this.Ex)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=
this.AN)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.Az)&&(A._cycle!=D))A._Mark(
A._cycle=D);if((A=this.N)&&(A._cycle!=D))A._Mark(A._cycle=D);},N:null,_cycle:0,_observers:
null,_className:"Core::TaskQueue"};E.LS={Fj:null,V:null,U:null,SK:function(Mk){}
,SJ:function(Mk){},Ku:function(Mk){this.Sq();},Gk:function(){if(!!this.Fj&&(this.
Fj.Ex===this))this.Fj.Zs();},Sq:function(){if(!!this.Fj)this.Fj.UK(this);},P6:function(
){return!!this.Fj&&(this.Fj.Ex===this);},_Init:function(aArg){this.__proto__=E.LS;
B.h7++;},_Done:function(){this.__proto__=null;B.h7--;},_ReInit:function(){},_Mark:
function(D){var A;if((A=this.Fj)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.V
)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.U)&&(A._cycle!=D))A._Mark(A._cycle=
D);if((A=this.N)&&(A._cycle!=D))A._Mark(A._cycle=D);},N:null,_cycle:0,_observers:
null,_className:"Core::Task"};E.HY={resource:null,EG:function(){this.resource=null;
},Bm:function(aArg){this.resource=aArg;},_Init:function(aArg){this.__proto__=E.HY;
this.Bm(aArg);B.h7++;},_Done:function(){this.EG();this.__proto__=null;B.h7--;},_ReInit:
function(){},_Mark:function(D){var A;if((A=this.N)&&(A._cycle!=D))A._Mark(A._cycle=
D);},N:null,_cycle:0,_observers:null,_className:"Core::Resource"};E.Timer={G7:null
,timer:null,AX:0,Period:1000,Nf:0,Bl:false,EG:function(){var tmp=this.timer;if(!
!tmp)tmp.DestroyTimer();this.timer=null;},Pj:function(aBegin,aPeriod){if(aBegin<
0)aBegin=0;if(aPeriod<0)aPeriod=0;var tmp=this.timer;if(!tmp&&((aBegin>0)||(aPeriod>
0)))tmp=B.z8(this,this.Trigger);if(!!tmp){tmp.ResetTimer();tmp.StartTimer(aBegin
,aPeriod);}this.timer=tmp;},Ep:function(C){if(C<0)C=0;if(C===this.Period)return;
this.Period=C;if(this.Bl)this.Pj(this.Nf,C);},IB:function(C){if(C<0)C=0;if(C===this.
Nf)return;this.Nf=C;if(this.Bl)this.Pj(C,this.Period);},Aq:function(C){if(C===this.
Bl)return;this.Bl=C;if(C)this.Pj(this.Nf,this.Period);else this.Pj(0,0);this.AX=
this.Lj();},Lj:function(){var ticksCount=0;ticksCount=((new Date).getTime()-B.v$
)|0;return ticksCount;},Trigger:function(){var A;this.AX=this.Lj();if(!this.Period
)this.Aq(false);(A=this.G7)?A[1].call(A[0],this):null;},_Init:function(aArg){this.
__proto__=E.Timer;B.h7++;},_Done:function(){this.EG();this.__proto__=null;B.h7--;
},_ReInit:function(){},_Mark:function(D){var A;if((A=this.G7)&&((A=A[0])._cycle!=
D))A._Mark(A._cycle=D);if((A=this.N)&&(A._cycle!=D))A._Mark(A._cycle=D);},N:null
,_cycle:0,_observers:null,_className:"Core::Timer"};E.AbO={Cx:0x1,Aau:0x2,AaZ:0x4
,AbM:0x8,Bl:0x10,Aby:0x20,Aa0:0x40,Aba:0x80,AaY:0x100,Aa7:0x200,AaS:0x400,Abk:0x800
,Tj:0x1000,AbN:0x2000,Abe:0x4000,Abf:0x8000,AaL:0x10000,Abd:0x20000,Abu:0x40000,
AaM:0x80000,Abj:0x100000,AaK:0x200000};E.CH={Abl:0x1,Abm:0x2,Aaq:0x4,Aar:0x8,Aas:
0x10,Aap:0x20};E.Aa2={SI:0,AbJ:1,AaA:2,E7:3,Abo:4,AbK:5,AbL:6,AaB:7,AaC:8,Aa9:9,
Aa8:10,Abq:11,Abp:12};E.Jf={SI:0,AbH:1,Left:2,Aay:3,Xf:4,UG:5,AbI:6,Right:7,Aaz:
8};E.KeyCode={NoKey:0,Ok:1,Exit:2,Menu:3,Up:4,Down:5,Left:6,Right:7,PageUp:8,PageDown:
9,Key0:10,Key1:11,Key2:12,Key3:13,Key4:14,Key5:15,Key6:16,Key7:17,Key8:18,Key9:19
,Red:20,Green:21,Blue:22,Yellow:23,White:24,Magenta:25,F1:26,F2:27,F3:28,F4:29,F5:
30,F6:31,F7:32,F8:33,F9:34,F10:35,ChannelUp:36,ChannelDown:37,Display:38,SkipPrev:
39,SkipNext:40,Home:41,End:42,Insert:43,Delete:44,Clear:45,VolumeUp:46,VolumeDown:
47,Show:48,Hide:49,Play:50,Pause:51,Record:52,Stop:53,Rev:54,Fwd:55,SlowRev:56,SlowFwd:
57,SkipBwd:58,SkipFwd:59,Repeat:60,Eject:61,Help:62,TV:63,DVD:64,VCR:65,EPG:66,OSD:
67,Text:68,PIP:69,Audio:70,Clock:71,Timer:72,Navigation:73,Karaoke:74,Game:75,Subtitle:
76,Zoom:77,Index:78,Info:79,Power:80,Setup:81,Angle:82,Mode:83,Mute:84,User0:85,
User1:86,User2:87,User3:88,User4:89,User5:90,User6:91,User7:92,User8:93,User9:94
,User10:95,User11:96,User12:97,User13:98,User14:99,User15:100,User16:101,User17:
102,User18:103,User19:104,KeyA:105,KeyB:106,KeyC:107,KeyD:108,KeyE:109,KeyF:110,
KeyG:111,KeyH:112,KeyI:113,KeyJ:114,KeyK:115,KeyL:116,KeyM:117,KeyN:118,KeyO:119
,KeyP:120,KeyQ:121,KeyR:122,KeyS:123,KeyT:124,KeyU:125,KeyV:126,KeyW:127,KeyX:128
,KeyY:129,KeyZ:130,Space:131,Plus:132,Minus:133,Multiply:134,Divide:135,Equals:136
,Period:137,Comma:138,Colon:139,Semicolon:140,AlphaKeys:141,AlphaOrDigitKeys:142
,DigitKeys:143,HexDigitKeys:144,CharacterKeys:145,ControlKeys:146,CursorKeys:147
,AnyKey:148,Enter:149,Escape:150,Backspace:151,Tab:152,CtrlKeyA:153,CtrlKeyB:154
,CtrlKeyC:155,CtrlKeyD:156,CtrlKeyE:157,CtrlKeyF:158,CtrlKeyG:159,CtrlKeyH:160,CtrlKeyI:
161,CtrlKeyJ:162,CtrlKeyK:163,CtrlKeyL:164,CtrlKeyM:165,CtrlKeyN:166,CtrlKeyO:167
,CtrlKeyP:168,CtrlKeyQ:169,CtrlKeyR:170,CtrlKeyS:171,CtrlKeyT:172,CtrlKeyU:173,CtrlKeyV:
174,CtrlKeyW:175,CtrlKeyX:176,CtrlKeyY:177,CtrlKeyZ:178,CtrlSpace:179,CtrlKey0:180
,CtrlKey1:181,CtrlKey2:182,CtrlKey3:183,CtrlKey4:184,CtrlKey5:185,CtrlKey6:186,CtrlKey7:
187,CtrlKey8:188,CtrlKey9:189,CtrlF1:190,CtrlF2:191,CtrlF3:192,CtrlF4:193,CtrlF5:
194,CtrlF6:195,CtrlF7:196,CtrlF8:197,CtrlF9:198,CtrlF10:199,CtrlEnter:200,CtrlEscape:
201,CtrlUp:202,CtrlDown:203,CtrlLeft:204,CtrlRight:205,CtrlPageUp:206,CtrlPageDown:
207,CtrlBackspace:208,CtrlInsert:209,CtrlDelete:210,CtrlHome:211,CtrlEnd:212,CtrlTab:
213,CtrlShiftKeyA:214,CtrlShiftKeyB:215,CtrlShiftKeyC:216,CtrlShiftKeyD:217,CtrlShiftKeyE:
218,CtrlShiftKeyF:219,CtrlShiftKeyG:220,CtrlShiftKeyH:221,CtrlShiftKeyI:222,CtrlShiftKeyJ:
223,CtrlShiftKeyK:224,CtrlShiftKeyL:225,CtrlShiftKeyM:226,CtrlShiftKeyN:227,CtrlShiftKeyO:
228,CtrlShiftKeyP:229,CtrlShiftKeyQ:230,CtrlShiftKeyR:231,CtrlShiftKeyS:232,CtrlShiftKeyT:
233,CtrlShiftKeyU:234,CtrlShiftKeyV:235,CtrlShiftKeyW:236,CtrlShiftKeyX:237,CtrlShiftKeyY:
238,CtrlShiftKeyZ:239,CtrlShiftSpace:240,CtrlShiftKey0:241,CtrlShiftKey1:242,CtrlShiftKey2:
243,CtrlShiftKey3:244,CtrlShiftKey4:245,CtrlShiftKey5:246,CtrlShiftKey6:247,CtrlShiftKey7:
248,CtrlShiftKey8:249,CtrlShiftKey9:250,CtrlShiftF1:251,CtrlShiftF2:252,CtrlShiftF3:
253,CtrlShiftF4:254,CtrlShiftF5:255,CtrlShiftF6:256,CtrlShiftF7:257,CtrlShiftF8:
258,CtrlShiftF9:259,CtrlShiftF10:260,CtrlShiftEnter:261,CtrlShiftEscape:262,CtrlShiftUp:
263,CtrlShiftDown:264,CtrlShiftLeft:265,CtrlShiftRight:266,CtrlShiftPageUp:267,CtrlShiftPageDown:
268,CtrlShiftBackspace:269,CtrlShiftInsert:270,CtrlShiftDelete:271,CtrlShiftHome:
272,CtrlShiftEnd:273,CtrlShiftTab:274,AltF1:275,AltF2:276,AltF3:277,AltF4:278,AltF5:
279,AltF6:280,AltF7:281,AltF8:282,AltF9:283,AltF10:284,AltEnter:285,AltEscape:286
,AltUp:287,AltDown:288,AltLeft:289,AltRight:290,AltPageUp:291,AltPageDown:292,AltBackspace:
293,AltInsert:294,AltDelete:295,AltHome:296,AltEnd:297,AltTab:298,AltShiftF1:299
,AltShiftF2:300,AltShiftF3:301,AltShiftF4:302,AltShiftF5:303,AltShiftF6:304,AltShiftF7:
305,AltShiftF8:306,AltShiftF9:307,AltShiftF10:308,AltShiftEnter:309,AltShiftEscape:
310,AltShiftUp:311,AltShiftDown:312,AltShiftLeft:313,AltShiftRight:314,AltShiftPageUp:
315,AltShiftPageDown:316,AltShiftBackspace:317,AltShiftInsert:318,AltShiftDelete:
319,AltShiftHome:320,AltShiftEnd:321,AltShiftTab:322,ShiftF1:323,ShiftF2:324,ShiftF3:
325,ShiftF4:326,ShiftF5:327,ShiftF6:328,ShiftF7:329,ShiftF8:330,ShiftF9:331,ShiftF10:
332,ShiftEnter:333,ShiftEscape:334,ShiftUp:335,ShiftDown:336,ShiftLeft:337,ShiftRight:
338,ShiftPageUp:339,ShiftPageDown:340,ShiftBackspace:341,ShiftInsert:342,ShiftDelete:
343,ShiftHome:344,ShiftEnd:345,ShiftTab:346};E.Abn={AbS:0x1,AbP:0x2,AbQ:0x4,AbR:
0x8,Aa$:0x10,Aa1:0x20};
E._Init=function(){E.LN.__proto__=E.Bf;E.Bz.__proto__=E.Bf;E.K.__proto__=E.Bz;E.Root.
__proto__=E.K;E.KeyEvent.__proto__=E.Event;E.Nk.__proto__=E.Event;E.HC.__proto__=
E.Event;E.K8.__proto__=E.Event;E.HX.__proto__=E.Bz;E.DJ.__proto__=E.K;E.BC.__proto__=
E.K;E.H0.__proto__=E.LN;E.Cm.__proto__=E.Bz;E.Ny.__proto__=E.Nx;};E._ReInit=function(
){};E.EQ=function(D){};return E;})();

/* Embedded Wizard */