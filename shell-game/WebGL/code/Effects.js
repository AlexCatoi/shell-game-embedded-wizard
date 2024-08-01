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
);if(EmWiApp.acg)throw new Error("The unit file 'Effects.js' included twice!");EmWiApp.
acg=(function(){var B=EmWiApp;var C={};
var A0=[100,100];var AG=[0,0,100,100];var Bu="Trying to remove a fader from a task, which is actually running";
var BD="The fader doesn\'t belong to this task";var Eo="Trying to add a fader to a task, which is actually running";
var Hd="The fader belongs already to a task";
C.Do={Dc:null,timer:null,E7:null,Jk:null,MQ:0,In:0,Ff:0,DK:0,MY:0.001,D$:0,BE:0,BK:
0,P$:0.5,ST:3,L4:3,Lc:0.5,Fq:3,Ru:0,Rt:0,Ft:0,EZ:1000,HG:0,HF:0,H2:0,Bm:false,GA:
false,Rc:false,Ka:false,PW:false,EB:function(Ab){var A;if(!this.timer)return;if(
!this.In){if(this.Rc)this.In=-1;else this.In=1;this.MQ=this.In;this.BK=this.timer.
AZ;this.BE=0;this.D$=-1;}var D5;if((this.In>0)&&(this.MQ>0))D5=this.Aa$();else if((
this.In<0)&&(this.MQ<0))D5=this.Abc();else if(this.In>0)D5=this.Aba();else D5=this.
Abb();if(D5){this.Ar(false);(A=this.E7)?A[1].call(A[0],this):null;}},PP:function(
O){var A;if(!this.Dc&&(((this.H2===19)||(this.H2===20))||(this.H2===21))){var Pw=
this.ST+1;var AaH=Math.sqrt(this.P$);var J$=0.5;var i;this.Dc=B._NewObject(C.OE,
0);this.Dc.DO.Set(0,1);this.Dc.IR.Set(0,1);for(i=1;i<Pw;i=i+1){this.Dc.DO.Set(i,
this.Dc.DO.Get(i-1)*AaH);this.Dc.IR.Set(i,this.Dc.IR.Get(i-1)*this.P$);J$=J$+this.
Dc.DO.Get(i);}var AaM=1/J$;this.Dc.DO.Set(0,0.5);J$=0;for(i=0;i<Pw;i=i+1){this.Dc.
DO.Set(i,this.Dc.DO.Get(i)*AaM);J$=J$+this.Dc.DO.Get(i);}this.Dc.DO.Set(Pw,this.
Dc.DO.Get(Pw)+(1-J$));}if(this.GA){if(O<0.5)O=O*2;else O=2-(O*2);}switch(this.H2
){case 1:O=Math.pow(O,this.Fq);break;case 2:{O=1-O;O=1-Math.pow(O,this.Fq);}break;
case 3:{O=O*2;if(O<1)O=Math.pow(O,this.Fq)/2;else{O=2-O;O=(2-Math.pow(O,this.Fq)
)*0.5;}}break;case 4:O=(Math.pow(2.718,this.Fq*O)-1)/(Math.pow(2.718,this.Fq)-1);
break;case 5:{O=1-O;O=1-((Math.pow(2.718,this.Fq*O)-1)/(Math.pow(2.718,this.Fq)-
1));}break;case 6:{O=O*2;if(O<1)O=((Math.pow(2.718,this.Fq*O)-1)/(Math.pow(2.718
,this.Fq)-1))/2;else{O=2-O;O=(2-((Math.pow(2.718,this.Fq*O)-1)/(Math.pow(2.718,this.
Fq)-1)))*0.5;}}break;case 7:O=1-Math.cos((O*90)*B.k$);break;case 8:O=Math.sin((O
*90)*B.k$);break;case 9:{O=O*2;if(O<1){O=1-Math.cos((O*90)*B.k$);O=O*0.5;}else{O=
2-O;O=1-Math.cos((O*90)*B.k$);O=(2-O)*0.5;}}break;case 10:O=1-Math.sqrt(1-(O*O));
break;case 11:{O=1-O;O=Math.sqrt(1-(O*O));}break;case 12:{O=O*2;if(O<1){O=1-Math.
sqrt(1-(O*O));O=O*0.5;}else{O=2-O;O=1-Math.sqrt(1-(O*O));O=(2-O)*0.5;}}break;case
13:O=((O*O)*O)-((O*this.Lc)*Math.sin((O*180)*B.k$));break;case 14:{O=1-O;O=((O*O
)*O)-((O*this.Lc)*Math.sin((O*180)*B.k$));O=1-O;}break;case 15:{O=O*2;if(O<1){O=((
O*O)*O)-((O*this.Lc)*Math.sin((O*180)*B.k$));O=O*0.5;}else{O=2-O;O=((O*O)*O)-((O
*this.Lc)*Math.sin((O*180)*B.k$));O=(2-O)*0.5;}}break;case 16:O=((O*O)*O)*Math.sin(((
O*90)*(1+(4*this.L4)))*B.k$);break;case 17:{O=1-O;O=1-(((O*O)*O)*Math.sin(((O*90
)*(1+(4*this.L4)))*B.k$));}break;case 18:{O=O*2;if(O<1){O=((O*O)*O)*Math.sin(((O
*90)*(1+(4*this.L4)))*B.k$);O=O*0.5;}else{O=2-O;O=((O*O)*O)*Math.sin(((O*90)*(1+(
4*this.L4)))*B.k$);O=(2-O)*0.5;}}break;case 19:{var GK=this.Dc;var i=0;var GR=0;
var Ed=GK.DO.Get(0);var DP=1-O;while(DP>Ed){i=i+1;GR=Ed;Ed=Ed+GK.DO.Get(i);}O=(DP-
GR)/(Ed-GR);if(!i)O=1-(O*O);else{O=(2*O)-1;O=GK.IR.Get(i)*(1-(O*O));}}break;case
20:{var GK=this.Dc;var i=0;var GR=0;var Ed=GK.DO.Get(0);while(O>Ed){i=i+1;GR=Ed;
Ed=Ed+GK.DO.Get(i);}O=(O-GR)/(Ed-GR);if(!i)O=O*O;else{O=(2*O)-1;O=1-(GK.IR.Get(i
)*(1-(O*O)));}}break;case 21:{var GK=this.Dc;var i=0;var GR=0;var Ed=GK.DO.Get(0
);var DL=O*2;var DP=DL-1;if(DL<1)DP=-DP;while(DP>Ed){i=i+1;GR=Ed;Ed=Ed+GK.DO.Get(
i);}DP=(DP-GR)/(Ed-GR);if(!i)DP=DP*DP;else{DP=(2*DP)-1;DP=1-(GK.IR.Get(i)*(1-(DP
*DP)));}if(DL<1)O=0.5*(1-DP);else O=0.5*(1+DP);}break;default:if(this.Ka){var DL=
O;var M_=1-DL;O=((M_*DL)*(this.DK+1))+(DL*DL);}else if(this.PW){var DL=O;var M_=
1-DL;var U3=DL*DL;var AaS=M_*M_;O=(((AaS*DL)*(this.DK+1))+((M_*U3)*(this.Ff+2)))+(
U3*DL);}}this.It(O);(A=this.Jk)?A[1].call(A[0],this):null;},Abc:function(){var AJ=(
this.timer.AZ-this.BK)|0;if(AJ<0)AJ=-AJ;var ES=this.HF;var FK=this.HF+this.EZ;var
Cs=this.HG+this.EZ;var D5=false;var frame=this.D$;if(!this.BE&&(AJ>=FK)){this.BE=
1;AJ=AJ-FK;this.BK=this.BK+FK;}if((this.BE>0)&&(AJ>=Cs)){var CD=(AJ/Cs)|0;this.BE=
this.BE+CD;AJ=AJ-(CD*Cs);this.BK=this.BK+(CD*Cs);}if((this.BE>2)&&!this.Ft)this.
BE=1;if(this.BE>0)ES=this.HG;if((this.BE>=this.Ft)&&(this.Ft>0)){D5=true;frame=0;
}else if(AJ>=ES)frame=1-((AJ-ES)*this.MY);else if(frame>=0)frame=0;if(frame!==this.
D$){if(frame<0)frame=0;if(frame>1)frame=1;}if(frame!==this.D$){this.D$=frame;this.
PP(frame);}return D5;},Abb:function(){var AJ=(this.BK-this.timer.AZ)|0;var ES=this.
HF;var FK=this.HF+this.EZ;var Cs=this.HG+this.EZ;var D5=false;var frame=this.D$;
if((this.BE>1)&&(AJ<0)){var CD=(((-AJ+Cs)-1)/Cs)|0;if((this.BE-CD)<=0)CD=this.BE-
1;this.BE=this.BE-CD;AJ=AJ+(CD*Cs);this.BK=this.BK+(CD*Cs);}if(((this.BE===1)&&(
AJ<0))&&(this.Ft>0)){this.BE=0;AJ=AJ+FK;this.BK=this.BK+FK;}if(((this.BE===1)&&(
AJ<0))&&!this.Ft){var CD=(((-AJ+Cs)-1)/Cs)|0;AJ=AJ+(CD*Cs);this.BK=this.BK+(CD*Cs
);}if(this.BE>0)ES=this.HG;if(AJ<0){D5=true;frame=1;}else if(AJ>=ES)frame=1-((AJ-
ES)*this.MY);else if(frame>=0)frame=1;if(frame!==this.D$){if(frame<0)frame=0;if(
frame>1)frame=1;}if(frame!==this.D$){this.D$=frame;this.PP(frame);}return D5;},Aba:
function(){var AJ=(this.BK-this.timer.AZ)|0;var ES=this.HF;var FK=this.HF+this.EZ;
var Cs=this.HG+this.EZ;var D5=false;var frame=this.D$;if((this.BE>1)&&(AJ<0)){var
CD=(((-AJ+Cs)-1)/Cs)|0;if((this.BE-CD)<=0)CD=this.BE-1;this.BE=this.BE-CD;AJ=AJ+(
CD*Cs);this.BK=this.BK+(CD*Cs);}if(((this.BE===1)&&(AJ<0))&&(this.Ft>0)){this.BE=
0;AJ=AJ+FK;this.BK=this.BK+FK;}if(((this.BE===1)&&(AJ<0))&&!this.Ft){var CD=(((-
AJ+Cs)-1)/Cs)|0;AJ=AJ+(CD*Cs);this.BK=this.BK+(CD*Cs);}if(this.BE>0)ES=this.HG;if(
AJ<0){D5=true;frame=0;}else if(AJ>=ES)frame=(AJ-ES)*this.MY;else if(frame>=0)frame=
0;if(frame!==this.D$){if(frame<0)frame=0;if(frame>1)frame=1;}if(frame!==this.D$){
this.D$=frame;this.PP(frame);}return D5;},Aa$:function(){var AJ=(this.timer.AZ-this.
BK)|0;if(AJ<0)AJ=-AJ;var ES=this.HF;var FK=this.HF+this.EZ;var Cs=this.HG+this.EZ;
var D5=false;var frame=this.D$;if(!this.BE&&(AJ>=FK)){this.BE=1;AJ=AJ-FK;this.BK=
this.BK+FK;}if((this.BE>0)&&(AJ>=Cs)){var CD=(AJ/Cs)|0;this.BE=this.BE+CD;AJ=AJ-(
CD*Cs);this.BK=this.BK+(CD*Cs);}if((this.BE>2)&&!this.Ft)this.BE=1;if(this.BE>0)
ES=this.HG;if((this.BE>=this.Ft)&&(this.Ft>0)){D5=true;frame=1;}else if(AJ>=ES)frame=(
AJ-ES)*this.MY;else if(frame>=0)frame=1;if(frame!==this.D$){if(frame<0)frame=0;if(
frame>1)frame=1;}if(frame!==this.D$){this.D$=frame;this.PP(frame);}return D5;},IF:
function(value){if(this.Rc===value)return;this.Rc=value;if(!this.Bm||!this.In)return;
if(value)this.MQ=-1;else this.MQ=1;this.BK=(this.timer.Lu()*2)-this.BK;},Ts:function(
value){if(value<0)value=0;if(value>1)value=1;this.P$=value;},Tq:function(value){
if(value<1)value=1;if(value>10)value=10;this.ST=value;this.Dc=null;},Ty:function(
value){if(value<1)value=1;if(value>10)value=10;this.L4=value;},To:function(value
){if(value<0)value=0;if(value>10)value=10;this.Lc=value;},Tv:function(value){if(
value<1)value=1;if(value>100)value=100;this.Fq=value;},TC:function(value){if(this.
Ru===value)return;this.Ru=value;if(this.H2===26){this.Ff=value;this.Ka=(this.DK===
this.Ff)&&!!this.DK;this.PW=!this.Ka&&(this.DK!==this.Ff);}},TB:function(value){
if(this.Rt===value)return;this.Rt=value;if(this.H2===26){this.DK=value;this.Ka=(
this.DK===this.Ff)&&!!this.DK;this.PW=!this.Ka&&(this.DK!==this.Ff);}},Gt:function(
value){if(this.H2===value)return;this.H2=value;this.Dc=null;switch(value){case 24:{
this.DK=-1.1;this.Ff=1.1;}break;case 22:{this.DK=-1;this.Ff=-2;}break;case 23:{this.
DK=2;this.Ff=1;}break;case 25:{this.DK=1.1;this.Ff=-1.1;}break;case 0:{this.DK=0;
this.Ff=0;}break;default:{this.DK=this.Rt;this.Ff=this.Ru;}}this.Ka=(this.DK===this.
Ff)&&!!this.DK;this.PW=!this.Ka&&(this.DK!==this.Ff);},CX:function(value){if(value<
0)value=0;this.Ft=value;},AF:function(value){if(value<15)value=15;this.EZ=value;
this.MY=1/value;},WQ:function(value){if(value<0)value=0;this.HG=value;},Kv:function(
value){if(value<0)value=0;this.HF=value;},Ar:function(value){if(this.Bm===value)
return;this.Bm=value;if(!value&&!!this.timer){B.z9([this,this.EB],this.timer,0);
this.timer=null;}if(value){this.timer=B._GetAutoObject(C.Iw);B.zV([this,this.EB]
,this.timer,0);this.In=0;B.pe([this,this.EB],this);}},It:function(Co){},KI:function(
Ab){if(this.Bm)this.Ar(false);this.Ar(true);},_Init:function(aArg){this.__proto__=
C.Do;B.h7++;},_Done:function(){this.__proto__=null;B.h7--;},_ReInit:function(){}
,_Mark:function(D){var A;if((A=this.Dc)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=
this.timer)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.E7)&&((A=A[0])._cycle!=
D))A._Mark(A._cycle=D);if((A=this.Jk)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);
if((A=this.M)&&(A._cycle!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null
,_className:"Effects::Effect"};C.Ei={Y:null,Di:0,AK:255,AO:0,It:function(Co){var
Ax;this.Di=this.AO+(Math.round((this.AK-this.AO)*Co)|0);if(!!this.Y)(Ax=this.Y,Ax[
2].call(Ax[0],this.Di));},_Init:function(aArg){C.Do._Init.call(this,aArg);this.__proto__=
C.Ei;},_Mark:function(D){var A;C.Do._Mark.call(this,D);if((A=this.Y)&&((A=A[0]).
_cycle!=D))A._Mark(A._cycle=D);},_className:"Effects::Int32Effect"};C.C5={Y:null
,Di:B.wf,AK:A0,AO:B.wf,It:function(Co){var Ax;var A3=this.AO[0];var Gh=this.AO[1
];A3=A3+(Math.round((this.AK[0]-A3)*Co)|0);Gh=Gh+(Math.round((this.AK[1]-Gh)*Co)|
0);this.Di=[A3,Gh];if(!!this.Y)(Ax=this.Y,Ax[2].call(Ax[0],this.Di));},_Init:function(
aArg){C.Do._Init.call(this,aArg);this.__proto__=C.C5;},_Mark:function(D){var A;C.
Do._Mark.call(this,D);if((A=this.Y)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);},
_className:"Effects::PointEffect"};C.EJ={Y:null,Di:B.wg,AK:AG,AO:B.wg,It:function(
Co){var Ax;var Af=this.AO[0];var Al=this.AO[1];var Ac=this.AO[2];var Aq=this.AO[
3];Af=Af+(Math.round((this.AK[0]-Af)*Co)|0);Al=Al+(Math.round((this.AK[1]-Al)*Co
)|0);Ac=Ac+(Math.round((this.AK[2]-Ac)*Co)|0);Aq=Aq+(Math.round((this.AK[3]-Aq)*
Co)|0);this.Di=[Af,Al,Ac,Aq];if(!!this.Y)(Ax=this.Y,Ax[2].call(Ax[0],this.Di));}
,_Init:function(aArg){C.Do._Init.call(this,aArg);this.__proto__=C.EJ;},_Mark:function(
D){var A;C.Do._Mark.call(this,D);if((A=this.Y)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=
D);},_className:"Effects::RectEffect"};C.NG={Y:null,Di:0,AK:0xFFFFFFFF,AO:0,It:function(
Co){var Ax;var I2=this.AO&0xFF;var IV=(this.AO>>8)&0xFF;var IS=(this.AO>>16)&0xFF;
var IQ=(this.AO>>24)&0xFF;I2=I2+((((this.AK&0xFF)-I2)*Co)|0);IV=IV+(((((this.AK>>
8)&0xFF)-IV)*Co)|0);IS=IS+(((((this.AK>>16)&0xFF)-IS)*Co)|0);IQ=IQ+(((((this.AK>>
24)&0xFF)-IQ)*Co)|0);if(I2<0)I2=0;if(I2>255)I2=255;if(IV<0)IV=0;if(IV>255)IV=255;
if(IS<0)IS=0;if(IS>255)IS=255;if(IQ<0)IQ=0;if(IQ>255)IQ=255;this.Di=(I2&0xFF)|((
IV&0xFF)<<8)|((IS&0xFF)<<16)|((IQ&0xFF)<<24);if(!!this.Y)(Ax=this.Y,Ax[2].call(Ax[
0],this.Di));},_Init:function(aArg){C.Do._Init.call(this,aArg);this.__proto__=C.
NG;},_Mark:function(D){var A;C.Do._Mark.call(this,D);if((A=this.Y)&&((A=A[0])._cycle
!=D))A._Mark(A._cycle=D);},_className:"Effects::ColorEffect"};C.Dq={Di:0,AK:1,AO:
0,It:function(Co){this.Di=this.AO+((this.AK-this.AO)*Co);},_Init:function(aArg){
C.Do._Init.call(this,aArg);this.__proto__=C.Dq;},_className:"Effects::FloatEffect"
};C.HC={Fk:null,U:null,T:null,G:null,J:null,PK:null,Sx:null,LP:null,Cy:true,Bm:true
,Mx:true,Nz:false,NB:true,KE:true,Jw:true,Gi:function(){if(!!this.Fk)this.Fk.Gi(
);},Qy:function(){return true;},QP:function(){},KA:function(){this.Gi();},_Init:
function(aArg){this.__proto__=C.HC;B.h7++;},_Done:function(){this.__proto__=null;
B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((A=this.Fk)&&(A._cycle!=
D))A._Mark(A._cycle=D);if((A=this.U)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.
T)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.G)&&(A._cycle!=D))A._Mark(A._cycle=
D);if((A=this.J)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.PK)&&((A=A[0])._cycle
!=D))A._Mark(A._cycle=D);if((A=this.Sx)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D
);if((A=this.LP)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);if((A=this.M)&&(A._cycle
!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:"Effects::Fader"
};C.KL={TL:B.wf,IU:false,Qy:function(){return this.IU;},QP:function(){if(!this.Cy&&
!!this.J.G)this.J.A8(false);if((!this.Cy&&this.Jw)&&!!this.J.G)this.J.G.B5(this.
J);if(!this.Bm)this.J.Ar(false);},KA:function(){if(this.Bm)this.J.Ar(true);if((this.
Cy||this.Nz)&&!this.J.G){this.J.A8(false);this.G.X(this.J,0);}if(this.Cy&&this.KE
)this.J.G.Oh(this.J);if(this.Cy&&this.NB)this.J.G.CW(this.J);if(this.Cy&&!this.Mx
)this.J.R(B.abJ(this.J.I,this.TL));if(this.Cy){this.J.Jr(255);this.J.A8(true);}if(
!this.Cy&&(this.G.C4===this.J))this.G.CW(null);this.IU=true;this.Gi();},_Init:function(
aArg){C.HC._Init.call(this,aArg);this.__proto__=C.KL;},_className:"Effects::VisibilityFader"
};C.KC={BI:null,A4:null,IU:false,Qy:function(){return this.IU;},QP:function(){if(
this.Cy){this.J.Jr(this.BI.AK);this.J.R(B.abJ(this.J.I,this.A4.AK));}if(!this.Cy&&
!this.J.FS)this.J.A8(false);if((!this.Cy&&this.Jw)&&!!this.J.G)this.J.G.B5(this.
J);if(!this.Bm)this.J.Ar(false);},KA:function(){var A;if(this.Mx){if(this.J.HI()&&
!!this.J.G)this.BI.AO=this.J.FS;else this.BI.AO=0;this.A4.AO=this.J.I.slice(0,2);
}var AaN=((!this.J.G||!this.J.FS)||!this.J.HI())||(((A=B.lb(this.J.I,[0,0,(A=this.
G.I)[2]-A[0],A[3]-A[1]]))[0]>=A[2])||(A[1]>=A[3]));var AaO=((!this.Cy&&((!this.J.
G||!this.J.HI())||this.Jw))||!this.BI.AK)||(((A=B.lb(B.abh([0,0,(A=this.J.I)[2]-
A[0],A[3]-A[1]],this.A4.AK),[0,0,(A=this.G.I)[2]-A[0],A[3]-A[1]]))[0]>=A[2])||(A[
1]>=A[3]));if(AaN&&AaO){this.BI.AO=0;this.BI.AK=0;this.A4.AO=this.A4.AK;}if(this.
Bm)this.J.Ar(true);if((this.Cy||this.Nz)&&!this.J.G){this.J.A8(false);this.G.X(this.
J,0);}if(this.Cy&&this.KE)this.J.G.Oh(this.J);if(this.Cy&&this.NB)this.J.G.CW(this.
J);if(!this.Cy&&(this.G.C4===this.J))this.G.CW(null);if(this.Cy&&!this.J.HI()){this.
J.R(B.abJ(this.J.I,this.A4.AO));this.J.Jr(this.BI.AO);this.J.A8(true);}if(!this.
Cy&&((!this.J.G||!this.J.HI())||!this.J.FS)){this.IU=true;this.Gi();return;}if(!
this.Cy&&B.aaX(this.A4.AO,this.A4.AK))this.J.R(B.abJ(this.J.I,this.A4.AO));if(!this.
Cy&&(this.BI.AO===this.BI.AK))this.J.Jr(this.BI.AO);if((this.J.FS===this.BI.AK)&&
B.aaX(this.J.I.slice(0,2),this.A4.AK)){this.IU=true;this.Gi();return;}if((this.BI.
AO===this.BI.AK)&&B.aaX(this.A4.AO,this.A4.AK)){this.IU=true;this.Gi();return;}if(
!this.BI.Ft)this.BI.CX(1);if(!this.A4.Ft)this.A4.CX(1);this.A4.Y=null;this.A4.IF(
false);this.A4.GA=false;this.A4.E7=[this,this.Vg];this.A4.Jk=[this,this.AaU];this.
BI.Y=[A=this.J,A.Wk,A.Aap];this.BI.IF(false);this.BI.GA=false;this.BI.E7=[this,this.
Vg];this.BI.Jk=null;this.A4.Ar(!B.aaX(this.A4.AO,this.A4.AK));this.BI.Ar(this.BI.
AO!==this.BI.AK);},Vg:function(Ab){this.IU=!this.BI.Bm&&!this.A4.Bm;this.Gi();},
AaU:function(Ab){this.J.R(B.abJ(this.J.I,this.A4.Di));},_Init:function(aArg){C.HC.
_Init.call(this,aArg);C.Ei._Init.call(this.BI={M:this},0);C.C5._Init.call(this.A4={
M:this},0);this.__proto__=C.KC;},_Done:function(){this.__proto__=C.HC;this.BI._Done(
);this.A4._Done();C.HC._Done.call(this);},_ReInit:function(){C.HC._ReInit.call(this
);this.BI._ReInit();this.A4._ReInit();},_Mark:function(D){var A;C.HC._Mark.call(
this,D);if((A=this.BI)._cycle!=D)A._Mark(A._cycle=D);if((A=this.A4)._cycle!=D)A.
_Mark(A._cycle=D);},_className:"Effects::PositionFader"};C.IN={Hy:function(){return null;
},Hx:function(){return null;},Kd:function(){return this.Hy();},Kc:function(){return this.
Hx();},_Init:function(aArg){this.__proto__=C.IN;B.h7++;},_Done:function(){this.__proto__=
null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((A=this.M)&&(A._cycle
!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:"Effects::Transition"
};C.Rg={Hy:function(){var V=B._NewObject(C.KL,0);V.Cy=true;V.Bm=true;V.NB=false;
V.KE=true;V.Mx=false;V.LP=[this,this.SA];return V;},Hx:function(){var V=B._NewObject(
C.KL,0);V.Cy=false;V.Bm=false;V.Jw=true;return V;},Kd:function(){var V=C.IN.Kd.call(
this);V.KE=false;V.Bm=true;return V;},Kc:function(){var V=B._NewObject(C.KL,0);V.
Cy=false;V.Bm=true;V.Nz=true;V.Jw=false;return V;},SA:function(Ab){var A;var V=(
C.KL.isPrototypeOf(Ab)?Ab:null);var AU=[0,0,(A=V.G.I)[2]-A[0],A[3]-A[1]];var BG=[(
A=V.J.I)[2]-A[0],A[3]-A[1]];var Z=AU.slice(0,2);Z=[(AU[0]+(((AU[2]-AU[0])/2)|0))-((
BG[0]/2)|0),Z[1]];Z=[Z[0],(AU[1]+(((AU[3]-AU[1])/2)|0))-((BG[1]/2)|0)];V.TL=Z;},
_Init:function(aArg){C.IN._Init.call(this,aArg);this.__proto__=C.Rg;},_className:
"Effects::ShowHideTransition"};C.KG={Jf:0,Hy:function(){var V=B._NewObject(C.KC,
0);V.Cy=true;V.Bm=true;V.NB=false;V.KE=true;V.Mx=true;V.LP=[this,this.SA];V.BI.AF(
500);V.BI.Kv(0);V.BI.AO=0;V.BI.AK=255;V.A4.AF(500);V.A4.Gt(23);V.A4.TB(0);V.A4.TC(
0);V.A4.Tv(3);V.A4.To(0.5);V.A4.Ty(3);V.A4.Tq(3);V.A4.Ts(0.5);return V;},Hx:function(
){var V=B._NewObject(C.KC,0);V.Cy=false;V.Bm=false;V.Jw=true;V.Mx=true;V.LP=[this
,this.AaZ];V.BI.AO=255;V.BI.AK=0;V.BI.AF(500);V.BI.Kv(0);V.A4.AF(500);V.A4.Gt(23
);V.A4.TB(0);V.A4.TC(0);V.A4.Tv(3);V.A4.To(0.5);V.A4.Ty(3);V.A4.Tq(3);V.A4.Ts(0.5
);return V;},Kd:function(){var V=C.IN.Kd.call(this);V.KE=false;V.Bm=true;return V;
},Kc:function(){var V=C.IN.Kc.call(this);V.Nz=true;V.Jw=false;V.Bm=true;return V;
},SA:function(Ab){var A;var V=(C.KC.isPrototypeOf(Ab)?Ab:null);var AU=[0,0,(A=V.
G.I)[2]-A[0],A[3]-A[1]];var BG=[(A=V.J.I)[2]-A[0],A[3]-A[1]];var Z=AU.slice(0,2);
Z=[(AU[0]+(((AU[2]-AU[0])/2)|0))-((BG[0]/2)|0),Z[1]];Z=[Z[0],(AU[1]+(((AU[3]-AU[
1])/2)|0))-((BG[1]/2)|0)];V.A4.AK=Z;if(((!V.J.G||!V.J.HI())||!V.J.FS)||(((A=B.lb(
V.J.I,[0,0,(A=V.G.I)[2]-A[0],A[3]-A[1]]))[0]>=A[2])||(A[1]>=A[3]))){var FL=[(A=V.
G.I)[2]-A[0],A[3]-A[1]];switch(this.Jf){case 5:Z=[Z[0],-BG[1]];break;case 3:{Z=[
Z[0],-BG[1]];Z=[FL[0],Z[1]];}break;case 8:Z=[-BG[0],-BG[1]];break;case 2:Z=[FL[0
],Z[1]];break;case 7:Z=[-BG[0],Z[1]];break;case 4:Z=[Z[0],FL[1]];break;case 1:{Z=[
Z[0],FL[1]];Z=[FL[0],Z[1]];}break;case 6:{Z=[Z[0],FL[1]];Z=[-BG[0],Z[1]];}break;
default:;}V.J.R(B.abJ(V.J.I,Z));}},AaZ:function(Ab){var A;var V=(C.KC.isPrototypeOf(
Ab)?Ab:null);var Z=V.J.I.slice(0,2);var BG=[(A=V.J.I)[2]-A[0],A[3]-A[1]];var FL=[(
A=V.G.I)[2]-A[0],A[3]-A[1]];switch(this.Jf){case 5:Z=[Z[0],FL[1]];break;case 3:{
Z=[Z[0],FL[1]];Z=[-BG[0],Z[1]];}break;case 8:{Z=[Z[0],FL[1]];Z=[FL[0],Z[1]];}break;
case 2:Z=[-BG[0],Z[1]];break;case 7:Z=[FL[0],Z[1]];break;case 4:Z=[Z[0],-BG[1]];
break;case 1:Z=[-BG[0],-BG[1]];break;case 6:{Z=[Z[0],-BG[1]];Z=[FL[0],Z[1]];}break;
default:;}V.A4.AK=Z;},_Init:function(aArg){C.IN._Init.call(this,aArg);this.__proto__=
C.KG;},_className:"Effects::SlideTransition"};C.H2={Acn:0,Acv:1,Acx:2,Acw:3,Ab8:
4,Ab_:5,Ab9:6,AcP:7,AcR:8,AcQ:9,AbV:10,AbX:11,AbW:12,AbK:13,AbM:14,AbL:15,Ab4:16
,Ab6:17,Ab5:18,AbS:19,AbU:20,AbT:21,Ab3:22,Ab$:23,Ab2:24,Aca:25,AbY:26};C.P_={Trigger:
function(){B.Core.Timer.Trigger.call(this);B.we(this,0);},_Init:function(aArg){B.
Core.Timer._Init.call(this,aArg);this.__proto__=C.P_;},_className:"Effects::EffectTimerClass"
};C.Iw={_Init:function(){C.P_._Init.call(this,0);this.Em(15);this.Ar(true);},_ReInit:
function(){},_variants:function(){return this;},_this:null};C.OE={DO:B.abi(12,0,
null),IR:B.abi(12,0,null),_Init:function(aArg){(this.DO=[]).__proto__=C.OE.DO;(this.
IR=[]).__proto__=C.OE.IR;this.__proto__=C.OE;B.h7++;},_Done:function(){this.__proto__=
null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((A=this.M)&&(A._cycle
!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:"Effects::TimingList"
};C.NL={AP:null,AB:null,Td:function(MH){var V=this.AB;while(!!V){V.QP();V.J.E=V.
J.E&~0x40000;V=V.T;}V=this.AB;while(!!V){B.pe(V.Sx,V);V=V.T;}},Tc:function(MH){var
V=this.AB;while(!!V){B.pe(V.PK,V);V=V.T;}this.AB=null;this.AP=null;},KA:function(
MH){var A;if(!this.AB)this.Gi();var V=this.AB;while(!!V){V.J.E=(V.J.E|0x40000)&~
0x20000;V.J.J3=null;V=V.T;}V=this.AB;while(!!V){(A=V.LP)?A[1].call(A[0],V):null;
V.KA();V=V.T;}},Gi:function(){var V=this.AB;while(!!V&&V.Qy())V=V.T;if(!V)B.Core.
Mc.Gi.call(this);},X_:function(Bq){if(!Bq)return;if(this.Qx())throw new Error(Bu
);if(Bq.Fk!==this)throw new Error(BD);if(!!Bq.T)Bq.T.U=Bq.U;else this.AP=Bq.U;if(
!!Bq.U)Bq.U.T=Bq.T;else this.AB=Bq.T;Bq.Fk=null;Bq.T=null;Bq.U=null;if(!!Bq.J)Bq.
J.J3=null;B.pe(Bq.PK,Bq);if(!this.AB)this.SU();},SR:function(Bq){if(!Bq)return;if(
this.Qx())throw new Error(Eo);if(!!Bq.Fk)throw new Error(Hd);Bq.U=this.AP;Bq.T=null;
if(!!this.AP)this.AP.T=Bq;else this.AB=Bq;this.AP=Bq;Bq.Fk=this;},_Init:function(
aArg){B.Core.Mc._Init.call(this,aArg);this.__proto__=C.NL;},_Mark:function(D){var
A;B.Core.Mc._Mark.call(this,D);if((A=this.AP)&&(A._cycle!=D))A._Mark(A._cycle=D);
if((A=this.AB)&&(A._cycle!=D))A._Mark(A._cycle=D);},_className:"Effects::FaderTask"
};C.KF={_Init:function(){C.Rg._Init.call(this,0);},_ReInit:function(){},_variants:
function(){return this;},_this:null};C.II={_Init:function(){C.KG._Init.call(this
,0);this.Jf=2;},_ReInit:function(){},_variants:function(){return this;},_this:null
};C.G8={_Init:function(){C.KG._Init.call(this,0);this.Jf=7;},_ReInit:function(){
},_variants:function(){return this;},_this:null};C.IJ={_Init:function(){C.KG._Init.
call(this,0);this.Jf=4;},_ReInit:function(){},_variants:function(){return this;}
,_this:null};C.IH={_Init:function(){C.KG._Init.call(this,0);this.Jf=5;},_ReInit:
function(){},_variants:function(){return this;},_this:null};
C._Init=function(){C.Ei.__proto__=C.Do;C.C5.__proto__=C.Do;C.EJ.__proto__=C.Do;C.
NG.__proto__=C.Do;C.Dq.__proto__=C.Do;C.KL.__proto__=C.HC;C.KC.__proto__=C.HC;C.
Rg.__proto__=C.IN;C.KG.__proto__=C.IN;C.P_.__proto__=B.Core.Timer;C.NL.__proto__=
B.Core.Mc;};C._ReInit=function(){var A;if((A=C.Iw._this))A._ReInit(),C.Iw._ReInit.
call(A);if((A=C.KF._this))A._ReInit(),C.KF._ReInit.call(A);if((A=C.II._this))A._ReInit(
),C.II._ReInit.call(A);if((A=C.G8._this))A._ReInit(),C.G8._ReInit.call(A);if((A=
C.IJ._this))A._ReInit(),C.IJ._ReInit.call(A);if((A=C.IH._this))A._ReInit(),C.IH.
_ReInit.call(A);};C.EN=function(D){var A;if((A=C.Iw._this)&&(A._cycle!=D))A._Done(
C.Iw._this=null);if((A=C.KF._this)&&(A._cycle!=D))A._Done(C.KF._this=null);if((A=
C.II._this)&&(A._cycle!=D))A._Done(C.II._this=null);if((A=C.G8._this)&&(A._cycle
!=D))A._Done(C.G8._this=null);if((A=C.IJ._this)&&(A._cycle!=D))A._Done(C.IJ._this=
null);if((A=C.IH._this)&&(A._cycle!=D))A._Done(C.IH._this=null);};return C;})();

/* Embedded Wizard */