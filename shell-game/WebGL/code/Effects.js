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
var AZ=[100,100];var AD=[0,0,100,100];var Bu="Trying to remove a fader from a task, which is actually running";
var BD="The fader doesn\'t belong to this task";var En="Trying to add a fader to a task, which is actually running";
var Hd="The fader belongs already to a task";
C.Do={Dc:null,timer:null,E7:null,Jn:null,MH:0,Io:0,Fe:0,DL:0,MP:0.001,D_:0,BE:0,BK:
0,P0:0.5,SK:3,LV:3,K$:0.5,Fp:3,Rl:0,Rk:0,Fs:0,EY:1000,HG:0,HF:0,H3:0,Bm:false,GA:
false,Q5:false,Kf:false,PM:false,EA:function(Ab){var A;if(!this.timer)return;if(
!this.Io){if(this.Q5)this.Io=-1;else this.Io=1;this.MH=this.Io;this.BK=this.timer.
AY;this.BE=0;this.D_=-1;}var D4;if((this.Io>0)&&(this.MH>0))D4=this.AaG();else if((
this.Io<0)&&(this.MH<0))D4=this.AaJ();else if(this.Io>0)D4=this.AaH();else D4=this.
AaI();if(D4){this.Aq(false);(A=this.E7)?A[1].call(A[0],this):null;}},PE:function(
O){var A;if(!this.Dc&&(((this.H3===19)||(this.H3===20))||(this.H3===21))){var Pm=
this.SK+1;var Aae=Math.sqrt(this.P0);var Ke=0.5;var i;this.Dc=B._NewObject(C.Ov,
0);this.Dc.DP.Set(0,1);this.Dc.IR.Set(0,1);for(i=1;i<Pm;i=i+1){this.Dc.DP.Set(i,
this.Dc.DP.Get(i-1)*Aae);this.Dc.IR.Set(i,this.Dc.IR.Get(i-1)*this.P0);Ke=Ke+this.
Dc.DP.Get(i);}var Aai=1/Ke;this.Dc.DP.Set(0,0.5);Ke=0;for(i=0;i<Pm;i=i+1){this.Dc.
DP.Set(i,this.Dc.DP.Get(i)*Aai);Ke=Ke+this.Dc.DP.Get(i);}this.Dc.DP.Set(Pm,this.
Dc.DP.Get(Pm)+(1-Ke));}if(this.GA){if(O<0.5)O=O*2;else O=2-(O*2);}switch(this.H3
){case 1:O=Math.pow(O,this.Fp);break;case 2:{O=1-O;O=1-Math.pow(O,this.Fp);}break;
case 3:{O=O*2;if(O<1)O=Math.pow(O,this.Fp)/2;else{O=2-O;O=(2-Math.pow(O,this.Fp)
)*0.5;}}break;case 4:O=(Math.pow(2.718,this.Fp*O)-1)/(Math.pow(2.718,this.Fp)-1);
break;case 5:{O=1-O;O=1-((Math.pow(2.718,this.Fp*O)-1)/(Math.pow(2.718,this.Fp)-
1));}break;case 6:{O=O*2;if(O<1)O=((Math.pow(2.718,this.Fp*O)-1)/(Math.pow(2.718
,this.Fp)-1))/2;else{O=2-O;O=(2-((Math.pow(2.718,this.Fp*O)-1)/(Math.pow(2.718,this.
Fp)-1)))*0.5;}}break;case 7:O=1-Math.cos((O*90)*B.k$);break;case 8:O=Math.sin((O
*90)*B.k$);break;case 9:{O=O*2;if(O<1){O=1-Math.cos((O*90)*B.k$);O=O*0.5;}else{O=
2-O;O=1-Math.cos((O*90)*B.k$);O=(2-O)*0.5;}}break;case 10:O=1-Math.sqrt(1-(O*O));
break;case 11:{O=1-O;O=Math.sqrt(1-(O*O));}break;case 12:{O=O*2;if(O<1){O=1-Math.
sqrt(1-(O*O));O=O*0.5;}else{O=2-O;O=1-Math.sqrt(1-(O*O));O=(2-O)*0.5;}}break;case
13:O=((O*O)*O)-((O*this.K$)*Math.sin((O*180)*B.k$));break;case 14:{O=1-O;O=((O*O
)*O)-((O*this.K$)*Math.sin((O*180)*B.k$));O=1-O;}break;case 15:{O=O*2;if(O<1){O=((
O*O)*O)-((O*this.K$)*Math.sin((O*180)*B.k$));O=O*0.5;}else{O=2-O;O=((O*O)*O)-((O
*this.K$)*Math.sin((O*180)*B.k$));O=(2-O)*0.5;}}break;case 16:O=((O*O)*O)*Math.sin(((
O*90)*(1+(4*this.LV)))*B.k$);break;case 17:{O=1-O;O=1-(((O*O)*O)*Math.sin(((O*90
)*(1+(4*this.LV)))*B.k$));}break;case 18:{O=O*2;if(O<1){O=((O*O)*O)*Math.sin(((O
*90)*(1+(4*this.LV)))*B.k$);O=O*0.5;}else{O=2-O;O=((O*O)*O)*Math.sin(((O*90)*(1+(
4*this.LV)))*B.k$);O=(2-O)*0.5;}}break;case 19:{var GK=this.Dc;var i=0;var GR=0;
var Ec=GK.DP.Get(0);var DQ=1-O;while(DQ>Ec){i=i+1;GR=Ec;Ec=Ec+GK.DP.Get(i);}O=(DQ-
GR)/(Ec-GR);if(!i)O=1-(O*O);else{O=(2*O)-1;O=GK.IR.Get(i)*(1-(O*O));}}break;case
20:{var GK=this.Dc;var i=0;var GR=0;var Ec=GK.DP.Get(0);while(O>Ec){i=i+1;GR=Ec;
Ec=Ec+GK.DP.Get(i);}O=(O-GR)/(Ec-GR);if(!i)O=O*O;else{O=(2*O)-1;O=1-(GK.IR.Get(i
)*(1-(O*O)));}}break;case 21:{var GK=this.Dc;var i=0;var GR=0;var Ec=GK.DP.Get(0
);var DM=O*2;var DQ=DM-1;if(DM<1)DQ=-DQ;while(DQ>Ec){i=i+1;GR=Ec;Ec=Ec+GK.DP.Get(
i);}DQ=(DQ-GR)/(Ec-GR);if(!i)DQ=DQ*DQ;else{DQ=(2*DQ)-1;DQ=1-(GK.IR.Get(i)*(1-(DQ
*DQ)));}if(DM<1)O=0.5*(1-DQ);else O=0.5*(1+DQ);}break;default:if(this.Kf){var DM=
O;var M1=1-DM;O=((M1*DM)*(this.DL+1))+(DM*DM);}else if(this.PM){var DM=O;var M1=
1-DM;var UJ=DM*DM;var Aao=M1*M1;O=(((Aao*DM)*(this.DL+1))+((M1*UJ)*(this.Fe+2)))+(
UJ*DM);}}this.Iu(O);(A=this.Jn)?A[1].call(A[0],this):null;},AaJ:function(){var AG=(
this.timer.AY-this.BK)|0;if(AG<0)AG=-AG;var ER=this.HF;var FJ=this.HF+this.EY;var
Cs=this.HG+this.EY;var D4=false;var frame=this.D_;if(!this.BE&&(AG>=FJ)){this.BE=
1;AG=AG-FJ;this.BK=this.BK+FJ;}if((this.BE>0)&&(AG>=Cs)){var CD=(AG/Cs)|0;this.BE=
this.BE+CD;AG=AG-(CD*Cs);this.BK=this.BK+(CD*Cs);}if((this.BE>2)&&!this.Fs)this.
BE=1;if(this.BE>0)ER=this.HG;if((this.BE>=this.Fs)&&(this.Fs>0)){D4=true;frame=0;
}else if(AG>=ER)frame=1-((AG-ER)*this.MP);else if(frame>=0)frame=0;if(frame!==this.
D_){if(frame<0)frame=0;if(frame>1)frame=1;}if(frame!==this.D_){this.D_=frame;this.
PE(frame);}return D4;},AaI:function(){var AG=(this.BK-this.timer.AY)|0;var ER=this.
HF;var FJ=this.HF+this.EY;var Cs=this.HG+this.EY;var D4=false;var frame=this.D_;
if((this.BE>1)&&(AG<0)){var CD=(((-AG+Cs)-1)/Cs)|0;if((this.BE-CD)<=0)CD=this.BE-
1;this.BE=this.BE-CD;AG=AG+(CD*Cs);this.BK=this.BK+(CD*Cs);}if(((this.BE===1)&&(
AG<0))&&(this.Fs>0)){this.BE=0;AG=AG+FJ;this.BK=this.BK+FJ;}if(((this.BE===1)&&(
AG<0))&&!this.Fs){var CD=(((-AG+Cs)-1)/Cs)|0;AG=AG+(CD*Cs);this.BK=this.BK+(CD*Cs
);}if(this.BE>0)ER=this.HG;if(AG<0){D4=true;frame=1;}else if(AG>=ER)frame=1-((AG-
ER)*this.MP);else if(frame>=0)frame=1;if(frame!==this.D_){if(frame<0)frame=0;if(
frame>1)frame=1;}if(frame!==this.D_){this.D_=frame;this.PE(frame);}return D4;},AaH:
function(){var AG=(this.BK-this.timer.AY)|0;var ER=this.HF;var FJ=this.HF+this.EY;
var Cs=this.HG+this.EY;var D4=false;var frame=this.D_;if((this.BE>1)&&(AG<0)){var
CD=(((-AG+Cs)-1)/Cs)|0;if((this.BE-CD)<=0)CD=this.BE-1;this.BE=this.BE-CD;AG=AG+(
CD*Cs);this.BK=this.BK+(CD*Cs);}if(((this.BE===1)&&(AG<0))&&(this.Fs>0)){this.BE=
0;AG=AG+FJ;this.BK=this.BK+FJ;}if(((this.BE===1)&&(AG<0))&&!this.Fs){var CD=(((-
AG+Cs)-1)/Cs)|0;AG=AG+(CD*Cs);this.BK=this.BK+(CD*Cs);}if(this.BE>0)ER=this.HG;if(
AG<0){D4=true;frame=0;}else if(AG>=ER)frame=(AG-ER)*this.MP;else if(frame>=0)frame=
0;if(frame!==this.D_){if(frame<0)frame=0;if(frame>1)frame=1;}if(frame!==this.D_){
this.D_=frame;this.PE(frame);}return D4;},AaG:function(){var AG=(this.timer.AY-this.
BK)|0;if(AG<0)AG=-AG;var ER=this.HF;var FJ=this.HF+this.EY;var Cs=this.HG+this.EY;
var D4=false;var frame=this.D_;if(!this.BE&&(AG>=FJ)){this.BE=1;AG=AG-FJ;this.BK=
this.BK+FJ;}if((this.BE>0)&&(AG>=Cs)){var CD=(AG/Cs)|0;this.BE=this.BE+CD;AG=AG-(
CD*Cs);this.BK=this.BK+(CD*Cs);}if((this.BE>2)&&!this.Fs)this.BE=1;if(this.BE>0)
ER=this.HG;if((this.BE>=this.Fs)&&(this.Fs>0)){D4=true;frame=1;}else if(AG>=ER)frame=(
AG-ER)*this.MP;else if(frame>=0)frame=1;if(frame!==this.D_){if(frame<0)frame=0;if(
frame>1)frame=1;}if(frame!==this.D_){this.D_=frame;this.PE(frame);}return D4;},IG:
function(value){if(this.Q5===value)return;this.Q5=value;if(!this.Bm||!this.Io)return;
if(value)this.MH=-1;else this.MH=1;this.BK=(this.timer.Lq()*2)-this.BK;},Tl:function(
value){if(value<0)value=0;if(value>1)value=1;this.P0=value;},Tk:function(value){
if(value<1)value=1;if(value>10)value=10;this.SK=value;this.Dc=null;},Tq:function(
value){if(value<1)value=1;if(value>10)value=10;this.LV=value;},Ti:function(value
){if(value<0)value=0;if(value>10)value=10;this.K$=value;},To:function(value){if(
value<1)value=1;if(value>100)value=100;this.Fp=value;},Tu:function(value){if(this.
Rl===value)return;this.Rl=value;if(this.H3===26){this.Fe=value;this.Kf=(this.DL===
this.Fe)&&!!this.DL;this.PM=!this.Kf&&(this.DL!==this.Fe);}},Tt:function(value){
if(this.Rk===value)return;this.Rk=value;if(this.H3===26){this.DL=value;this.Kf=(
this.DL===this.Fe)&&!!this.DL;this.PM=!this.Kf&&(this.DL!==this.Fe);}},Gs:function(
value){if(this.H3===value)return;this.H3=value;this.Dc=null;switch(value){case 24:{
this.DL=-1.1;this.Fe=1.1;}break;case 22:{this.DL=-1;this.Fe=-2;}break;case 23:{this.
DL=2;this.Fe=1;}break;case 25:{this.DL=1.1;this.Fe=-1.1;}break;case 0:{this.DL=0;
this.Fe=0;}break;default:{this.DL=this.Rk;this.Fe=this.Rl;}}this.Kf=(this.DL===this.
Fe)&&!!this.DL;this.PM=!this.Kf&&(this.DL!==this.Fe);},CX:function(value){if(value<
0)value=0;this.Fs=value;},AC:function(value){if(value<15)value=15;this.EY=value;
this.MP=1/value;},Wv:function(value){if(value<0)value=0;this.HG=value;},Kv:function(
value){if(value<0)value=0;this.HF=value;},Aq:function(value){if(this.Bm===value)
return;this.Bm=value;if(!value&&!!this.timer){B.z9([this,this.EA],this.timer,0);
this.timer=null;}if(value){this.timer=B._GetAutoObject(C.Ix);B.zV([this,this.EA]
,this.timer,0);this.Io=0;B.pe([this,this.EA],this);}},Iu:function(Co){},KG:function(
Ab){if(this.Bm)this.Aq(false);this.Aq(true);},_Init:function(aArg){this.__proto__=
C.Do;B.h7++;},_Done:function(){this.__proto__=null;B.h7--;},_ReInit:function(){}
,_Mark:function(D){var A;if((A=this.Dc)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=
this.timer)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.E7)&&((A=A[0])._cycle!=
D))A._Mark(A._cycle=D);if((A=this.Jn)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);
if((A=this.M)&&(A._cycle!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null
,_className:"Effects::Effect"};C.Ei={Y:null,Di:0,AH:255,AM:0,Iu:function(Co){var
A1;this.Di=this.AM+(Math.round((this.AH-this.AM)*Co)|0);if(!!this.Y)(A1=this.Y,A1[
2].call(A1[0],this.Di));},_Init:function(aArg){C.Do._Init.call(this,aArg);this.__proto__=
C.Ei;},_Mark:function(D){var A;C.Do._Mark.call(this,D);if((A=this.Y)&&((A=A[0]).
_cycle!=D))A._Mark(A._cycle=D);},_className:"Effects::Int32Effect"};C.C5={Y:null
,Di:B.wf,AH:AZ,AM:B.wf,Iu:function(Co){var A1;var A3=this.AM[0];var Gg=this.AM[1
];A3=A3+(Math.round((this.AH[0]-A3)*Co)|0);Gg=Gg+(Math.round((this.AH[1]-Gg)*Co)|
0);this.Di=[A3,Gg];if(!!this.Y)(A1=this.Y,A1[2].call(A1[0],this.Di));},_Init:function(
aArg){C.Do._Init.call(this,aArg);this.__proto__=C.C5;},_Mark:function(D){var A;C.
Do._Mark.call(this,D);if((A=this.Y)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);},
_className:"Effects::PointEffect"};C.EI={Y:null,Di:B.wg,AH:AD,AM:B.wg,Iu:function(
Co){var A1;var Ae=this.AM[0];var Ak=this.AM[1];var Ac=this.AM[2];var Ap=this.AM[
3];Ae=Ae+(Math.round((this.AH[0]-Ae)*Co)|0);Ak=Ak+(Math.round((this.AH[1]-Ak)*Co
)|0);Ac=Ac+(Math.round((this.AH[2]-Ac)*Co)|0);Ap=Ap+(Math.round((this.AH[3]-Ap)*
Co)|0);this.Di=[Ae,Ak,Ac,Ap];if(!!this.Y)(A1=this.Y,A1[2].call(A1[0],this.Di));}
,_Init:function(aArg){C.Do._Init.call(this,aArg);this.__proto__=C.EI;},_Mark:function(
D){var A;C.Do._Mark.call(this,D);if((A=this.Y)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=
D);},_className:"Effects::RectEffect"};C.Ny={Y:null,Di:0,AH:0xFFFFFFFF,AM:0,Iu:function(
Co){var A1;var I2=this.AM&0xFF;var IV=(this.AM>>8)&0xFF;var IS=(this.AM>>16)&0xFF;
var IQ=(this.AM>>24)&0xFF;I2=I2+((((this.AH&0xFF)-I2)*Co)|0);IV=IV+(((((this.AH>>
8)&0xFF)-IV)*Co)|0);IS=IS+(((((this.AH>>16)&0xFF)-IS)*Co)|0);IQ=IQ+(((((this.AH>>
24)&0xFF)-IQ)*Co)|0);if(I2<0)I2=0;if(I2>255)I2=255;if(IV<0)IV=0;if(IV>255)IV=255;
if(IS<0)IS=0;if(IS>255)IS=255;if(IQ<0)IQ=0;if(IQ>255)IQ=255;this.Di=(I2&0xFF)|((
IV&0xFF)<<8)|((IS&0xFF)<<16)|((IQ&0xFF)<<24);if(!!this.Y)(A1=this.Y,A1[2].call(A1[
0],this.Di));},_Init:function(aArg){C.Do._Init.call(this,aArg);this.__proto__=C.
Ny;},_Mark:function(D){var A;C.Do._Mark.call(this,D);if((A=this.Y)&&((A=A[0])._cycle
!=D))A._Mark(A._cycle=D);},_className:"Effects::ColorEffect"};C.Dq={Di:0,AH:1,AM:
0,Iu:function(Co){this.Di=this.AM+((this.AH-this.AM)*Co);},_Init:function(aArg){
C.Do._Init.call(this,aArg);this.__proto__=C.Dq;},_className:"Effects::FloatEffect"
};C.HC={Fj:null,U:null,T:null,G:null,J:null,Pz:null,So:null,LG:null,Cy:true,Bm:true
,Mo:true,Ns:false,Nu:true,KC:true,JA:true,Gh:function(){if(!!this.Fj)this.Fj.Gh(
);},Qn:function(){return true;},QE:function(){},Kz:function(){this.Gh();},_Init:
function(aArg){this.__proto__=C.HC;B.h7++;},_Done:function(){this.__proto__=null;
B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((A=this.Fj)&&(A._cycle!=
D))A._Mark(A._cycle=D);if((A=this.U)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.
T)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.G)&&(A._cycle!=D))A._Mark(A._cycle=
D);if((A=this.J)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.Pz)&&((A=A[0])._cycle
!=D))A._Mark(A._cycle=D);if((A=this.So)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D
);if((A=this.LG)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);if((A=this.M)&&(A._cycle
!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:"Effects::Fader"
};C.KK={TD:B.wf,IU:false,Qn:function(){return this.IU;},QE:function(){if(!this.Cy&&
!!this.J.G)this.J.A8(false);if((!this.Cy&&this.JA)&&!!this.J.G)this.J.G.B5(this.
J);if(!this.Bm)this.J.Aq(false);},Kz:function(){if(this.Bm)this.J.Aq(true);if((this.
Cy||this.Ns)&&!this.J.G){this.J.A8(false);this.G.X(this.J,0);}if(this.Cy&&this.KC
)this.J.G.N_(this.J);if(this.Cy&&this.Nu)this.J.G.CW(this.J);if(this.Cy&&!this.Mo
)this.J.R(B.abJ(this.J.I,this.TD));if(this.Cy){this.J.Jv(255);this.J.A8(true);}if(
!this.Cy&&(this.G.C4===this.J))this.G.CW(null);this.IU=true;this.Gh();},_Init:function(
aArg){C.HC._Init.call(this,aArg);this.__proto__=C.KK;},_className:"Effects::VisibilityFader"
};C.KB={BI:null,A4:null,IU:false,Qn:function(){return this.IU;},QE:function(){if(
this.Cy){this.J.Jv(this.BI.AH);this.J.R(B.abJ(this.J.I,this.A4.AH));}if(!this.Cy&&
!this.J.FR)this.J.A8(false);if((!this.Cy&&this.JA)&&!!this.J.G)this.J.G.B5(this.
J);if(!this.Bm)this.J.Aq(false);},Kz:function(){var A;if(this.Mo){if(this.J.HJ()&&
!!this.J.G)this.BI.AM=this.J.FR;else this.BI.AM=0;this.A4.AM=this.J.I.slice(0,2);
}var Aaj=((!this.J.G||!this.J.FR)||!this.J.HJ())||(((A=B.lb(this.J.I,[0,0,(A=this.
G.I)[2]-A[0],A[3]-A[1]]))[0]>=A[2])||(A[1]>=A[3]));var Aak=((!this.Cy&&((!this.J.
G||!this.J.HJ())||this.JA))||!this.BI.AH)||(((A=B.lb(B.abh([0,0,(A=this.J.I)[2]-
A[0],A[3]-A[1]],this.A4.AH),[0,0,(A=this.G.I)[2]-A[0],A[3]-A[1]]))[0]>=A[2])||(A[
1]>=A[3]));if(Aaj&&Aak){this.BI.AM=0;this.BI.AH=0;this.A4.AM=this.A4.AH;}if(this.
Bm)this.J.Aq(true);if((this.Cy||this.Ns)&&!this.J.G){this.J.A8(false);this.G.X(this.
J,0);}if(this.Cy&&this.KC)this.J.G.N_(this.J);if(this.Cy&&this.Nu)this.J.G.CW(this.
J);if(!this.Cy&&(this.G.C4===this.J))this.G.CW(null);if(this.Cy&&!this.J.HJ()){this.
J.R(B.abJ(this.J.I,this.A4.AM));this.J.Jv(this.BI.AM);this.J.A8(true);}if(!this.
Cy&&((!this.J.G||!this.J.HJ())||!this.J.FR)){this.IU=true;this.Gh();return;}if(!
this.Cy&&B.aaX(this.A4.AM,this.A4.AH))this.J.R(B.abJ(this.J.I,this.A4.AM));if(!this.
Cy&&(this.BI.AM===this.BI.AH))this.J.Jv(this.BI.AM);if((this.J.FR===this.BI.AH)&&
B.aaX(this.J.I.slice(0,2),this.A4.AH)){this.IU=true;this.Gh();return;}if((this.BI.
AM===this.BI.AH)&&B.aaX(this.A4.AM,this.A4.AH)){this.IU=true;this.Gh();return;}if(
!this.BI.Fs)this.BI.CX(1);if(!this.A4.Fs)this.A4.CX(1);this.A4.Y=null;this.A4.IG(
false);this.A4.GA=false;this.A4.E7=[this,this.UY];this.A4.Jn=[this,this.Aaq];this.
BI.Y=[A=this.J,A.V1,A.Z0];this.BI.IG(false);this.BI.GA=false;this.BI.E7=[this,this.
UY];this.BI.Jn=null;this.A4.Aq(!B.aaX(this.A4.AM,this.A4.AH));this.BI.Aq(this.BI.
AM!==this.BI.AH);},UY:function(Ab){this.IU=!this.BI.Bm&&!this.A4.Bm;this.Gh();},
Aaq:function(Ab){this.J.R(B.abJ(this.J.I,this.A4.Di));},_Init:function(aArg){C.HC.
_Init.call(this,aArg);C.Ei._Init.call(this.BI={M:this},0);C.C5._Init.call(this.A4={
M:this},0);this.__proto__=C.KB;},_Done:function(){this.__proto__=C.HC;this.BI._Done(
);this.A4._Done();C.HC._Done.call(this);},_ReInit:function(){C.HC._ReInit.call(this
);this.BI._ReInit();this.A4._ReInit();},_Mark:function(D){var A;C.HC._Mark.call(
this,D);if((A=this.BI)._cycle!=D)A._Mark(A._cycle=D);if((A=this.A4)._cycle!=D)A.
_Mark(A._cycle=D);},_className:"Effects::PositionFader"};C.IN={Hy:function(){return null;
},Hx:function(){return null;},Kj:function(){return this.Hy();},Ki:function(){return this.
Hx();},_Init:function(aArg){this.__proto__=C.IN;B.h7++;},_Done:function(){this.__proto__=
null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((A=this.M)&&(A._cycle
!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:"Effects::Transition"
};C.Q9={Hy:function(){var V=B._NewObject(C.KK,0);V.Cy=true;V.Bm=true;V.Nu=false;
V.KC=true;V.Mo=false;V.LG=[this,this.Sr];return V;},Hx:function(){var V=B._NewObject(
C.KK,0);V.Cy=false;V.Bm=false;V.JA=true;return V;},Kj:function(){var V=C.IN.Kj.call(
this);V.KC=false;V.Bm=true;return V;},Ki:function(){var V=B._NewObject(C.KK,0);V.
Cy=false;V.Bm=true;V.Ns=true;V.JA=false;return V;},Sr:function(Ab){var A;var V=(
C.KK.isPrototypeOf(Ab)?Ab:null);var AS=[0,0,(A=V.G.I)[2]-A[0],A[3]-A[1]];var BG=[(
A=V.J.I)[2]-A[0],A[3]-A[1]];var Z=AS.slice(0,2);Z=[(AS[0]+(((AS[2]-AS[0])/2)|0))-((
BG[0]/2)|0),Z[1]];Z=[Z[0],(AS[1]+(((AS[3]-AS[1])/2)|0))-((BG[1]/2)|0)];V.TD=Z;},
_Init:function(aArg){C.IN._Init.call(this,aArg);this.__proto__=C.Q9;},_className:
"Effects::ShowHideTransition"};C.KE={Jh:0,Hy:function(){var V=B._NewObject(C.KB,
0);V.Cy=true;V.Bm=true;V.Nu=false;V.KC=true;V.Mo=true;V.LG=[this,this.Sr];V.BI.AC(
500);V.BI.Kv(0);V.BI.AM=0;V.BI.AH=255;V.A4.AC(500);V.A4.Gs(23);V.A4.Tt(0);V.A4.Tu(
0);V.A4.To(3);V.A4.Ti(0.5);V.A4.Tq(3);V.A4.Tk(3);V.A4.Tl(0.5);return V;},Hx:function(
){var V=B._NewObject(C.KB,0);V.Cy=false;V.Bm=false;V.JA=true;V.Mo=true;V.LG=[this
,this.Aav];V.BI.AM=255;V.BI.AH=0;V.BI.AC(500);V.BI.Kv(0);V.A4.AC(500);V.A4.Gs(23
);V.A4.Tt(0);V.A4.Tu(0);V.A4.To(3);V.A4.Ti(0.5);V.A4.Tq(3);V.A4.Tk(3);V.A4.Tl(0.5
);return V;},Kj:function(){var V=C.IN.Kj.call(this);V.KC=false;V.Bm=true;return V;
},Ki:function(){var V=C.IN.Ki.call(this);V.Ns=true;V.JA=false;V.Bm=true;return V;
},Sr:function(Ab){var A;var V=(C.KB.isPrototypeOf(Ab)?Ab:null);var AS=[0,0,(A=V.
G.I)[2]-A[0],A[3]-A[1]];var BG=[(A=V.J.I)[2]-A[0],A[3]-A[1]];var Z=AS.slice(0,2);
Z=[(AS[0]+(((AS[2]-AS[0])/2)|0))-((BG[0]/2)|0),Z[1]];Z=[Z[0],(AS[1]+(((AS[3]-AS[
1])/2)|0))-((BG[1]/2)|0)];V.A4.AH=Z;if(((!V.J.G||!V.J.HJ())||!V.J.FR)||(((A=B.lb(
V.J.I,[0,0,(A=V.G.I)[2]-A[0],A[3]-A[1]]))[0]>=A[2])||(A[1]>=A[3]))){var FK=[(A=V.
G.I)[2]-A[0],A[3]-A[1]];switch(this.Jh){case 5:Z=[Z[0],-BG[1]];break;case 3:{Z=[
Z[0],-BG[1]];Z=[FK[0],Z[1]];}break;case 8:Z=[-BG[0],-BG[1]];break;case 2:Z=[FK[0
],Z[1]];break;case 7:Z=[-BG[0],Z[1]];break;case 4:Z=[Z[0],FK[1]];break;case 1:{Z=[
Z[0],FK[1]];Z=[FK[0],Z[1]];}break;case 6:{Z=[Z[0],FK[1]];Z=[-BG[0],Z[1]];}break;
default:;}V.J.R(B.abJ(V.J.I,Z));}},Aav:function(Ab){var A;var V=(C.KB.isPrototypeOf(
Ab)?Ab:null);var Z=V.J.I.slice(0,2);var BG=[(A=V.J.I)[2]-A[0],A[3]-A[1]];var FK=[(
A=V.G.I)[2]-A[0],A[3]-A[1]];switch(this.Jh){case 5:Z=[Z[0],FK[1]];break;case 3:{
Z=[Z[0],FK[1]];Z=[-BG[0],Z[1]];}break;case 8:{Z=[Z[0],FK[1]];Z=[FK[0],Z[1]];}break;
case 2:Z=[-BG[0],Z[1]];break;case 7:Z=[FK[0],Z[1]];break;case 4:Z=[Z[0],-BG[1]];
break;case 1:Z=[-BG[0],-BG[1]];break;case 6:{Z=[Z[0],-BG[1]];Z=[FK[0],Z[1]];}break;
default:;}V.A4.AH=Z;},_Init:function(aArg){C.IN._Init.call(this,aArg);this.__proto__=
C.KE;},_className:"Effects::SlideTransition"};C.H3={AbT:0,Ab1:1,Ab3:2,Ab2:3,AbC:
4,AbE:5,AbD:6,Acj:7,Acl:8,Ack:9,Abp:10,Abr:11,Abq:12,Abe:13,Abg:14,Abf:15,Aby:16
,AbA:17,Abz:18,Abm:19,Abo:20,Abn:21,Abx:22,AbF:23,Abw:24,AbG:25,Abs:26};C.PZ={Trigger:
function(){B.Core.Timer.Trigger.call(this);B.we(this,0);},_Init:function(aArg){B.
Core.Timer._Init.call(this,aArg);this.__proto__=C.PZ;},_className:"Effects::EffectTimerClass"
};C.Ix={_Init:function(){C.PZ._Init.call(this,0);this.El(15);this.Aq(true);},_ReInit:
function(){},_variants:function(){return this;},_this:null};C.Ov={DP:B.abi(12,0,
null),IR:B.abi(12,0,null),_Init:function(aArg){(this.DP=[]).__proto__=C.Ov.DP;(this.
IR=[]).__proto__=C.Ov.IR;this.__proto__=C.Ov;B.h7++;},_Done:function(){this.__proto__=
null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((A=this.M)&&(A._cycle
!=D))A._Mark(A._cycle=D);},M:null,_cycle:0,_observers:null,_className:"Effects::TimingList"
};C.ND={AN:null,Ay:null,S6:function(My){var V=this.Ay;while(!!V){V.QE();V.J.E=V.
J.E&~0x40000;V=V.T;}V=this.Ay;while(!!V){B.pe(V.So,V);V=V.T;}},S5:function(My){var
V=this.Ay;while(!!V){B.pe(V.Pz,V);V=V.T;}this.Ay=null;this.AN=null;},Kz:function(
My){var A;if(!this.Ay)this.Gh();var V=this.Ay;while(!!V){V.J.E=(V.J.E|0x40000)&~
0x20000;V.J.J8=null;V=V.T;}V=this.Ay;while(!!V){(A=V.LG)?A[1].call(A[0],V):null;
V.Kz();V=V.T;}},Gh:function(){var V=this.Ay;while(!!V&&V.Qn())V=V.T;if(!V)B.Core.
L6.Gh.call(this);},XP:function(Bq){if(!Bq)return;if(this.Qm())throw new Error(Bu
);if(Bq.Fj!==this)throw new Error(BD);if(!!Bq.T)Bq.T.U=Bq.U;else this.AN=Bq.U;if(
!!Bq.U)Bq.U.T=Bq.T;else this.Ay=Bq.T;Bq.Fj=null;Bq.T=null;Bq.U=null;if(!!Bq.J)Bq.
J.J8=null;B.pe(Bq.Pz,Bq);if(!this.Ay)this.SL();},SI:function(Bq){if(!Bq)return;if(
this.Qm())throw new Error(En);if(!!Bq.Fj)throw new Error(Hd);Bq.U=this.AN;Bq.T=null;
if(!!this.AN)this.AN.T=Bq;else this.Ay=Bq;this.AN=Bq;Bq.Fj=this;},_Init:function(
aArg){B.Core.L6._Init.call(this,aArg);this.__proto__=C.ND;},_Mark:function(D){var
A;B.Core.L6._Mark.call(this,D);if((A=this.AN)&&(A._cycle!=D))A._Mark(A._cycle=D);
if((A=this.Ay)&&(A._cycle!=D))A._Mark(A._cycle=D);},_className:"Effects::FaderTask"
};C.KD={_Init:function(){C.Q9._Init.call(this,0);},_ReInit:function(){},_variants:
function(){return this;},_this:null};C.II={_Init:function(){C.KE._Init.call(this
,0);this.Jh=2;},_ReInit:function(){},_variants:function(){return this;},_this:null
};C.G8={_Init:function(){C.KE._Init.call(this,0);this.Jh=7;},_ReInit:function(){
},_variants:function(){return this;},_this:null};C.IJ={_Init:function(){C.KE._Init.
call(this,0);this.Jh=4;},_ReInit:function(){},_variants:function(){return this;}
,_this:null};C.JC={_Init:function(){C.KE._Init.call(this,0);this.Jh=5;},_ReInit:
function(){},_variants:function(){return this;},_this:null};
C._Init=function(){C.Ei.__proto__=C.Do;C.C5.__proto__=C.Do;C.EI.__proto__=C.Do;C.
Ny.__proto__=C.Do;C.Dq.__proto__=C.Do;C.KK.__proto__=C.HC;C.KB.__proto__=C.HC;C.
Q9.__proto__=C.IN;C.KE.__proto__=C.IN;C.PZ.__proto__=B.Core.Timer;C.ND.__proto__=
B.Core.L6;};C._ReInit=function(){var A;if((A=C.Ix._this))A._ReInit(),C.Ix._ReInit.
call(A);if((A=C.KD._this))A._ReInit(),C.KD._ReInit.call(A);if((A=C.II._this))A._ReInit(
),C.II._ReInit.call(A);if((A=C.G8._this))A._ReInit(),C.G8._ReInit.call(A);if((A=
C.IJ._this))A._ReInit(),C.IJ._ReInit.call(A);if((A=C.JC._this))A._ReInit(),C.JC.
_ReInit.call(A);};C.EM=function(D){var A;if((A=C.Ix._this)&&(A._cycle!=D))A._Done(
C.Ix._this=null);if((A=C.KD._this)&&(A._cycle!=D))A._Done(C.KD._this=null);if((A=
C.II._this)&&(A._cycle!=D))A._Done(C.II._this=null);if((A=C.G8._this)&&(A._cycle
!=D))A._Done(C.G8._this=null);if((A=C.IJ._this)&&(A._cycle!=D))A._Done(C.IJ._this=
null);if((A=C.JC._this)&&(A._cycle!=D))A._Done(C.JC._this=null);};return C;})();

/* Embedded Wizard */