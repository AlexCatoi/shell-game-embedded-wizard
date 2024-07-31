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
acg=(function(){var B=EmWiApp;var E={};
var AY=[100,100];var AE=[0,0,100,100];var Bv="Trying to remove a fader from a task, which is actually running";
var BD="The fader doesn\'t belong to this task";var Eq="Trying to add a fader to a task, which is actually running";
var He="The fader belongs already to a task";
E.Dp={Dc:null,timer:null,E9:null,Jm:null,Ms:0,In:0,Ff:0,DM:0,MA:0.001,Ed:0,BE:0,BK:
0,PH:0.5,So:3,LJ:3,K5:0.5,Fq:3,Q_:0,Q9:0,Ft:0,E2:1000,HI:0,HH:0,H2:0,Bl:false,GF:
false,QS:false,Kc:false,Ps:false,EE:function(Ac){var A;if(!this.timer)return;if(
!this.In){if(this.QS)this.In=-1;else this.In=1;this.Ms=this.In;this.BK=this.timer.
AX;this.BE=0;this.Ed=-1;}var D9;if((this.In>0)&&(this.Ms>0))D9=this.ZY();else if((
this.In<0)&&(this.Ms<0))D9=this.Z1();else if(this.In>0)D9=this.ZZ();else D9=this.
Z0();if(D9){this.Aq(false);(A=this.E9)?A[1].call(A[0],this):null;}},Pl:function(
P){var A;if(!this.Dc&&(((this.H2===19)||(this.H2===20))||(this.H2===21))){var O5=
this.So+1;var Zx=Math.sqrt(this.PH);var Kb=0.5;var i;this.Dc=B._NewObject(E.Oc,0
);this.Dc.DQ.Set(0,1);this.Dc.IP.Set(0,1);for(i=1;i<O5;i=i+1){this.Dc.DQ.Set(i,this.
Dc.DQ.Get(i-1)*Zx);this.Dc.IP.Set(i,this.Dc.IP.Get(i-1)*this.PH);Kb=Kb+this.Dc.DQ.
Get(i);}var ZB=1/Kb;this.Dc.DQ.Set(0,0.5);Kb=0;for(i=0;i<O5;i=i+1){this.Dc.DQ.Set(
i,this.Dc.DQ.Get(i)*ZB);Kb=Kb+this.Dc.DQ.Get(i);}this.Dc.DQ.Set(O5,this.Dc.DQ.Get(
O5)+(1-Kb));}if(this.GF){if(P<0.5)P=P*2;else P=2-(P*2);}switch(this.H2){case 1:P=
Math.pow(P,this.Fq);break;case 2:{P=1-P;P=1-Math.pow(P,this.Fq);}break;case 3:{P=
P*2;if(P<1)P=Math.pow(P,this.Fq)/2;else{P=2-P;P=(2-Math.pow(P,this.Fq))*0.5;}}break;
case 4:P=(Math.pow(2.718,this.Fq*P)-1)/(Math.pow(2.718,this.Fq)-1);break;case 5:{
P=1-P;P=1-((Math.pow(2.718,this.Fq*P)-1)/(Math.pow(2.718,this.Fq)-1));}break;case
6:{P=P*2;if(P<1)P=((Math.pow(2.718,this.Fq*P)-1)/(Math.pow(2.718,this.Fq)-1))/2;
else{P=2-P;P=(2-((Math.pow(2.718,this.Fq*P)-1)/(Math.pow(2.718,this.Fq)-1)))*0.5;
}}break;case 7:P=1-Math.cos((P*90)*B.k$);break;case 8:P=Math.sin((P*90)*B.k$);break;
case 9:{P=P*2;if(P<1){P=1-Math.cos((P*90)*B.k$);P=P*0.5;}else{P=2-P;P=1-Math.cos((
P*90)*B.k$);P=(2-P)*0.5;}}break;case 10:P=1-Math.sqrt(1-(P*P));break;case 11:{P=
1-P;P=Math.sqrt(1-(P*P));}break;case 12:{P=P*2;if(P<1){P=1-Math.sqrt(1-(P*P));P=
P*0.5;}else{P=2-P;P=1-Math.sqrt(1-(P*P));P=(2-P)*0.5;}}break;case 13:P=((P*P)*P)-((
P*this.K5)*Math.sin((P*180)*B.k$));break;case 14:{P=1-P;P=((P*P)*P)-((P*this.K5)
*Math.sin((P*180)*B.k$));P=1-P;}break;case 15:{P=P*2;if(P<1){P=((P*P)*P)-((P*this.
K5)*Math.sin((P*180)*B.k$));P=P*0.5;}else{P=2-P;P=((P*P)*P)-((P*this.K5)*Math.sin((
P*180)*B.k$));P=(2-P)*0.5;}}break;case 16:P=((P*P)*P)*Math.sin(((P*90)*(1+(4*this.
LJ)))*B.k$);break;case 17:{P=1-P;P=1-(((P*P)*P)*Math.sin(((P*90)*(1+(4*this.LJ))
)*B.k$));}break;case 18:{P=P*2;if(P<1){P=((P*P)*P)*Math.sin(((P*90)*(1+(4*this.LJ
)))*B.k$);P=P*0.5;}else{P=2-P;P=((P*P)*P)*Math.sin(((P*90)*(1+(4*this.LJ)))*B.k$
);P=(2-P)*0.5;}}break;case 19:{var GP=this.Dc;var i=0;var GW=0;var Eh=GP.DQ.Get(
0);var DR=1-P;while(DR>Eh){i=i+1;GW=Eh;Eh=Eh+GP.DQ.Get(i);}P=(DR-GW)/(Eh-GW);if(
!i)P=1-(P*P);else{P=(2*P)-1;P=GP.IP.Get(i)*(1-(P*P));}}break;case 20:{var GP=this.
Dc;var i=0;var GW=0;var Eh=GP.DQ.Get(0);while(P>Eh){i=i+1;GW=Eh;Eh=Eh+GP.DQ.Get(
i);}P=(P-GW)/(Eh-GW);if(!i)P=P*P;else{P=(2*P)-1;P=1-(GP.IP.Get(i)*(1-(P*P)));}}break;
case 21:{var GP=this.Dc;var i=0;var GW=0;var Eh=GP.DQ.Get(0);var DN=P*2;var DR=DN-
1;if(DN<1)DR=-DR;while(DR>Eh){i=i+1;GW=Eh;Eh=Eh+GP.DQ.Get(i);}DR=(DR-GW)/(Eh-GW);
if(!i)DR=DR*DR;else{DR=(2*DR)-1;DR=1-(GP.IP.Get(i)*(1-(DR*DR)));}if(DN<1)P=0.5*(
1-DR);else P=0.5*(1+DR);}break;default:if(this.Kc){var DN=P;var MM=1-DN;P=((MM*DN
)*(this.DM+1))+(DN*DN);}else if(this.Ps){var DN=P;var MM=1-DN;var TT=DN*DN;var ZH=
MM*MM;P=(((ZH*DN)*(this.DM+1))+((MM*TT)*(this.Ff+2)))+(TT*DN);}}this.It(P);(A=this.
Jm)?A[1].call(A[0],this):null;},Z1:function(){var AH=(this.timer.AX-this.BK)|0;if(
AH<0)AH=-AH;var EV=this.HH;var FJ=this.HH+this.E2;var Cr=this.HI+this.E2;var D9=
false;var frame=this.Ed;if(!this.BE&&(AH>=FJ)){this.BE=1;AH=AH-FJ;this.BK=this.BK+
FJ;}if((this.BE>0)&&(AH>=Cr)){var CC=(AH/Cr)|0;this.BE=this.BE+CC;AH=AH-(CC*Cr);
this.BK=this.BK+(CC*Cr);}if((this.BE>2)&&!this.Ft)this.BE=1;if(this.BE>0)EV=this.
HI;if((this.BE>=this.Ft)&&(this.Ft>0)){D9=true;frame=0;}else if(AH>=EV)frame=1-((
AH-EV)*this.MA);else if(frame>=0)frame=0;if(frame!==this.Ed){if(frame<0)frame=0;
if(frame>1)frame=1;}if(frame!==this.Ed){this.Ed=frame;this.Pl(frame);}return D9;
},Z0:function(){var AH=(this.BK-this.timer.AX)|0;var EV=this.HH;var FJ=this.HH+this.
E2;var Cr=this.HI+this.E2;var D9=false;var frame=this.Ed;if((this.BE>1)&&(AH<0)){
var CC=(((-AH+Cr)-1)/Cr)|0;if((this.BE-CC)<=0)CC=this.BE-1;this.BE=this.BE-CC;AH=
AH+(CC*Cr);this.BK=this.BK+(CC*Cr);}if(((this.BE===1)&&(AH<0))&&(this.Ft>0)){this.
BE=0;AH=AH+FJ;this.BK=this.BK+FJ;}if(((this.BE===1)&&(AH<0))&&!this.Ft){var CC=(((-
AH+Cr)-1)/Cr)|0;AH=AH+(CC*Cr);this.BK=this.BK+(CC*Cr);}if(this.BE>0)EV=this.HI;if(
AH<0){D9=true;frame=1;}else if(AH>=EV)frame=1-((AH-EV)*this.MA);else if(frame>=0
)frame=1;if(frame!==this.Ed){if(frame<0)frame=0;if(frame>1)frame=1;}if(frame!==this.
Ed){this.Ed=frame;this.Pl(frame);}return D9;},ZZ:function(){var AH=(this.BK-this.
timer.AX)|0;var EV=this.HH;var FJ=this.HH+this.E2;var Cr=this.HI+this.E2;var D9=
false;var frame=this.Ed;if((this.BE>1)&&(AH<0)){var CC=(((-AH+Cr)-1)/Cr)|0;if((this.
BE-CC)<=0)CC=this.BE-1;this.BE=this.BE-CC;AH=AH+(CC*Cr);this.BK=this.BK+(CC*Cr);
}if(((this.BE===1)&&(AH<0))&&(this.Ft>0)){this.BE=0;AH=AH+FJ;this.BK=this.BK+FJ;
}if(((this.BE===1)&&(AH<0))&&!this.Ft){var CC=(((-AH+Cr)-1)/Cr)|0;AH=AH+(CC*Cr);
this.BK=this.BK+(CC*Cr);}if(this.BE>0)EV=this.HI;if(AH<0){D9=true;frame=0;}else if(
AH>=EV)frame=(AH-EV)*this.MA;else if(frame>=0)frame=0;if(frame!==this.Ed){if(frame<
0)frame=0;if(frame>1)frame=1;}if(frame!==this.Ed){this.Ed=frame;this.Pl(frame);}
return D9;},ZY:function(){var AH=(this.timer.AX-this.BK)|0;if(AH<0)AH=-AH;var EV=
this.HH;var FJ=this.HH+this.E2;var Cr=this.HI+this.E2;var D9=false;var frame=this.
Ed;if(!this.BE&&(AH>=FJ)){this.BE=1;AH=AH-FJ;this.BK=this.BK+FJ;}if((this.BE>0)&&(
AH>=Cr)){var CC=(AH/Cr)|0;this.BE=this.BE+CC;AH=AH-(CC*Cr);this.BK=this.BK+(CC*Cr
);}if((this.BE>2)&&!this.Ft)this.BE=1;if(this.BE>0)EV=this.HI;if((this.BE>=this.
Ft)&&(this.Ft>0)){D9=true;frame=1;}else if(AH>=EV)frame=(AH-EV)*this.MA;else if(
frame>=0)frame=1;if(frame!==this.Ed){if(frame<0)frame=0;if(frame>1)frame=1;}if(frame
!==this.Ed){this.Ed=frame;this.Pl(frame);}return D9;},IE:function(C){if(this.QS===
C)return;this.QS=C;if(!this.Bl||!this.In)return;if(C)this.Ms=-1;else this.Ms=1;this.
BK=(this.timer.Lj()*2)-this.BK;},SX:function(C){if(C<0)C=0;if(C>1)C=1;this.PH=C;
},SW:function(C){if(C<1)C=1;if(C>10)C=10;this.So=C;this.Dc=null;},S2:function(C){
if(C<1)C=1;if(C>10)C=10;this.LJ=C;},SU:function(C){if(C<0)C=0;if(C>10)C=10;this.
K5=C;},S0:function(C){if(C<1)C=1;if(C>100)C=100;this.Fq=C;},S6:function(C){if(this.
Q_===C)return;this.Q_=C;if(this.H2===26){this.Ff=C;this.Kc=(this.DM===this.Ff)&&
!!this.DM;this.Ps=!this.Kc&&(this.DM!==this.Ff);}},S5:function(C){if(this.Q9===C
)return;this.Q9=C;if(this.H2===26){this.DM=C;this.Kc=(this.DM===this.Ff)&&!!this.
DM;this.Ps=!this.Kc&&(this.DM!==this.Ff);}},Gw:function(C){if(this.H2===C)return;
this.H2=C;this.Dc=null;switch(C){case 24:{this.DM=-1.1;this.Ff=1.1;}break;case 22:{
this.DM=-1;this.Ff=-2;}break;case 23:{this.DM=2;this.Ff=1;}break;case 25:{this.DM=
1.1;this.Ff=-1.1;}break;case 0:{this.DM=0;this.Ff=0;}break;default:{this.DM=this.
Q9;this.Ff=this.Q_;}}this.Kc=(this.DM===this.Ff)&&!!this.DM;this.Ps=!this.Kc&&(this.
DM!==this.Ff);},CW:function(C){if(C<0)C=0;this.Ft=C;},AD:function(C){if(C<15)C=15;
this.E2=C;this.MA=1/C;},VK:function(C){if(C<0)C=0;this.HI=C;},Kr:function(C){if(
C<0)C=0;this.HH=C;},Aq:function(C){if(this.Bl===C)return;this.Bl=C;if(!C&&!!this.
timer){B.z9([this,this.EE],this.timer,0);this.timer=null;}if(C){this.timer=B._GetAutoObject(
E.Iw);B.zV([this,this.EE],this.timer,0);this.In=0;B.pe([this,this.EE],this);}},It:
function(Cn){},KD:function(Ac){if(this.Bl)this.Aq(false);this.Aq(true);},_Init:function(
aArg){this.__proto__=E.Dp;B.h7++;},_Done:function(){this.__proto__=null;B.h7--;}
,_ReInit:function(){},_Mark:function(D){var A;if((A=this.Dc)&&(A._cycle!=D))A._Mark(
A._cycle=D);if((A=this.timer)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.E9)&&((
A=A[0])._cycle!=D))A._Mark(A._cycle=D);if((A=this.Jm)&&((A=A[0])._cycle!=D))A._Mark(
A._cycle=D);if((A=this.N)&&(A._cycle!=D))A._Mark(A._cycle=D);},N:null,_cycle:0,_observers:
null,_className:"Effects::Effect"};E.Em={Z:null,Dj:0,AI:255,AM:0,It:function(Cn){
var Bo;this.Dj=this.AM+(Math.round((this.AI-this.AM)*Cn)|0);if(!!this.Z)(Bo=this.
Z,Bo[2].call(Bo[0],this.Dj));},_Init:function(aArg){E.Dp._Init.call(this,aArg);this.
__proto__=E.Em;},_Mark:function(D){var A;E.Dp._Mark.call(this,D);if((A=this.Z)&&((
A=A[0])._cycle!=D))A._Mark(A._cycle=D);},_className:"Effects::Int32Effect"};E.C4={
Z:null,Dj:B.wf,AI:AY,AM:B.wf,It:function(Cn){var Bo;var A1=this.AM[0];var Gj=this.
AM[1];A1=A1+(Math.round((this.AI[0]-A1)*Cn)|0);Gj=Gj+(Math.round((this.AI[1]-Gj)
*Cn)|0);this.Dj=[A1,Gj];if(!!this.Z)(Bo=this.Z,Bo[2].call(Bo[0],this.Dj));},_Init:
function(aArg){E.Dp._Init.call(this,aArg);this.__proto__=E.C4;},_Mark:function(D
){var A;E.Dp._Mark.call(this,D);if((A=this.Z)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=
D);},_className:"Effects::PointEffect"};E.EM={Z:null,Dj:B.wg,AI:AE,AM:B.wg,It:function(
Cn){var Bo;var Af=this.AM[0];var Am=this.AM[1];var Ad=this.AM[2];var As=this.AM[
3];Af=Af+(Math.round((this.AI[0]-Af)*Cn)|0);Am=Am+(Math.round((this.AI[1]-Am)*Cn
)|0);Ad=Ad+(Math.round((this.AI[2]-Ad)*Cn)|0);As=As+(Math.round((this.AI[3]-As)*
Cn)|0);this.Dj=[Af,Am,Ad,As];if(!!this.Z)(Bo=this.Z,Bo[2].call(Bo[0],this.Dj));}
,_Init:function(aArg){E.Dp._Init.call(this,aArg);this.__proto__=E.EM;},_Mark:function(
D){var A;E.Dp._Mark.call(this,D);if((A=this.Z)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=
D);},_className:"Effects::RectEffect"};E.Ni={Z:null,Dj:0,AI:0xFFFFFFFF,AM:0,It:function(
Cn){var Bo;var I0=this.AM&0xFF;var IT=(this.AM>>8)&0xFF;var IQ=(this.AM>>16)&0xFF;
var IO=(this.AM>>24)&0xFF;I0=I0+((((this.AI&0xFF)-I0)*Cn)|0);IT=IT+(((((this.AI>>
8)&0xFF)-IT)*Cn)|0);IQ=IQ+(((((this.AI>>16)&0xFF)-IQ)*Cn)|0);IO=IO+(((((this.AI>>
24)&0xFF)-IO)*Cn)|0);if(I0<0)I0=0;if(I0>255)I0=255;if(IT<0)IT=0;if(IT>255)IT=255;
if(IQ<0)IQ=0;if(IQ>255)IQ=255;if(IO<0)IO=0;if(IO>255)IO=255;this.Dj=(I0&0xFF)|((
IT&0xFF)<<8)|((IQ&0xFF)<<16)|((IO&0xFF)<<24);if(!!this.Z)(Bo=this.Z,Bo[2].call(Bo[
0],this.Dj));},_Init:function(aArg){E.Dp._Init.call(this,aArg);this.__proto__=E.
Ni;},_Mark:function(D){var A;E.Dp._Mark.call(this,D);if((A=this.Z)&&((A=A[0])._cycle
!=D))A._Mark(A._cycle=D);},_className:"Effects::ColorEffect"};E.Dr={Dj:0,AI:1,AM:
0,It:function(Cn){this.Dj=this.AM+((this.AI-this.AM)*Cn);},_Init:function(aArg){
E.Dp._Init.call(this,aArg);this.__proto__=E.Dr;},_className:"Effects::FloatEffect"
};E.HE={Fk:null,V:null,U:null,H:null,K:null,Pg:null,R3:null,Lx:null,Cx:true,Bl:true
,Ma:true,Nc:false,Ne:true,Ky:true,Jy:true,Gk:function(){if(!!this.Fk)this.Fk.Gk(
);},P7:function(){return true;},Qm:function(){},Ku:function(){this.Gk();},_Init:
function(aArg){this.__proto__=E.HE;B.h7++;},_Done:function(){this.__proto__=null;
B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((A=this.Fk)&&(A._cycle!=
D))A._Mark(A._cycle=D);if((A=this.V)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.
U)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.H)&&(A._cycle!=D))A._Mark(A._cycle=
D);if((A=this.K)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.Pg)&&((A=A[0])._cycle
!=D))A._Mark(A._cycle=D);if((A=this.R3)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D
);if((A=this.Lx)&&((A=A[0])._cycle!=D))A._Mark(A._cycle=D);if((A=this.N)&&(A._cycle
!=D))A._Mark(A._cycle=D);},N:null,_cycle:0,_observers:null,_className:"Effects::Fader"
};E.KI={Td:B.wf,IS:false,P7:function(){return this.IS;},Qm:function(){if(!this.Cx&&
!!this.K.H)this.K.A6(false);if((!this.Cx&&this.Jy)&&!!this.K.H)this.K.H.B4(this.
K);if(!this.Bl)this.K.Aq(false);},Ku:function(){if(this.Bl)this.K.Aq(true);if((this.
Cx||this.Nc)&&!this.K.H){this.K.A6(false);this.H.Y(this.K,0);}if(this.Cx&&this.Ky
)this.K.H.NS(this.K);if(this.Cx&&this.Ne)this.K.H.CV(this.K);if(this.Cx&&!this.Ma
)this.K.S(B.abJ(this.K.J,this.Td));if(this.Cx){this.K.Jt(255);this.K.A6(true);}if(
!this.Cx&&(this.H.C3===this.K))this.H.CV(null);this.IS=true;this.Gk();},_Init:function(
aArg){E.HE._Init.call(this,aArg);this.__proto__=E.KI;},_className:"Effects::VisibilityFader"
};E.Kw={BI:null,A2:null,IS:false,P7:function(){return this.IS;},Qm:function(){if(
this.Cx){this.K.Jt(this.BI.AI);this.K.S(B.abJ(this.K.J,this.A2.AI));}if(!this.Cx&&
!this.K.FS)this.K.A6(false);if((!this.Cx&&this.Jy)&&!!this.K.H)this.K.H.B4(this.
K);if(!this.Bl)this.K.Aq(false);},Ku:function(){var A;if(this.Ma){if(this.K.HJ()&&
!!this.K.H)this.BI.AM=this.K.FS;else this.BI.AM=0;this.A2.AM=this.K.J.slice(0,2);
}var ZC=((!this.K.H||!this.K.FS)||!this.K.HJ())||(((A=B.lb(this.K.J,[0,0,(A=this.
H.J)[2]-A[0],A[3]-A[1]]))[0]>=A[2])||(A[1]>=A[3]));var ZD=((!this.Cx&&((!this.K.
H||!this.K.HJ())||this.Jy))||!this.BI.AI)||(((A=B.lb(B.abh([0,0,(A=this.K.J)[2]-
A[0],A[3]-A[1]],this.A2.AI),[0,0,(A=this.H.J)[2]-A[0],A[3]-A[1]]))[0]>=A[2])||(A[
1]>=A[3]));if(ZC&&ZD){this.BI.AM=0;this.BI.AI=0;this.A2.AM=this.A2.AI;}if(this.Bl
)this.K.Aq(true);if((this.Cx||this.Nc)&&!this.K.H){this.K.A6(false);this.H.Y(this.
K,0);}if(this.Cx&&this.Ky)this.K.H.NS(this.K);if(this.Cx&&this.Ne)this.K.H.CV(this.
K);if(!this.Cx&&(this.H.C3===this.K))this.H.CV(null);if(this.Cx&&!this.K.HJ()){this.
K.S(B.abJ(this.K.J,this.A2.AM));this.K.Jt(this.BI.AM);this.K.A6(true);}if(!this.
Cx&&((!this.K.H||!this.K.HJ())||!this.K.FS)){this.IS=true;this.Gk();return;}if(!
this.Cx&&B.aaX(this.A2.AM,this.A2.AI))this.K.S(B.abJ(this.K.J,this.A2.AM));if(!this.
Cx&&(this.BI.AM===this.BI.AI))this.K.Jt(this.BI.AM);if((this.K.FS===this.BI.AI)&&
B.aaX(this.K.J.slice(0,2),this.A2.AI)){this.IS=true;this.Gk();return;}if((this.BI.
AM===this.BI.AI)&&B.aaX(this.A2.AM,this.A2.AI)){this.IS=true;this.Gk();return;}if(
!this.BI.Ft)this.BI.CW(1);if(!this.A2.Ft)this.A2.CW(1);this.A2.Z=null;this.A2.IE(
false);this.A2.GF=false;this.A2.E9=[this,this.T9];this.A2.Jm=[this,this.ZJ];this.
BI.Z=[A=this.K,A.Ve,A.Zh];this.BI.IE(false);this.BI.GF=false;this.BI.E9=[this,this.
T9];this.BI.Jm=null;this.A2.Aq(!B.aaX(this.A2.AM,this.A2.AI));this.BI.Aq(this.BI.
AM!==this.BI.AI);},T9:function(Ac){this.IS=!this.BI.Bl&&!this.A2.Bl;this.Gk();},
ZJ:function(Ac){this.K.S(B.abJ(this.K.J,this.A2.Dj));},_Init:function(aArg){E.HE.
_Init.call(this,aArg);E.Em._Init.call(this.BI={N:this},0);E.C4._Init.call(this.A2={
N:this},0);this.__proto__=E.Kw;},_Done:function(){this.__proto__=E.HE;this.BI._Done(
);this.A2._Done();E.HE._Done.call(this);},_ReInit:function(){E.HE._ReInit.call(this
);this.BI._ReInit();this.A2._ReInit();},_Mark:function(D){var A;E.HE._Mark.call(
this,D);if((A=this.BI)._cycle!=D)A._Mark(A._cycle=D);if((A=this.A2)._cycle!=D)A.
_Mark(A._cycle=D);},_className:"Effects::PositionFader"};E.IL={HA:function(){return null;
},Hz:function(){return null;},Kg:function(){return this.HA();},Kf:function(){return this.
Hz();},_Init:function(aArg){this.__proto__=E.IL;B.h7++;},_Done:function(){this.__proto__=
null;B.h7--;},_ReInit:function(){},_Mark:function(D){var A;if((A=this.N)&&(A._cycle
!=D))A._Mark(A._cycle=D);},N:null,_cycle:0,_observers:null,_className:"Effects::Transition"
};E.QW={HA:function(){var W=B._NewObject(E.KI,0);W.Cx=true;W.Bl=true;W.Ne=false;
W.Ky=true;W.Ma=false;W.Lx=[this,this.R6];return W;},Hz:function(){var W=B._NewObject(
E.KI,0);W.Cx=false;W.Bl=false;W.Jy=true;return W;},Kg:function(){var W=E.IL.Kg.call(
this);W.Ky=false;W.Bl=true;return W;},Kf:function(){var W=B._NewObject(E.KI,0);W.
Cx=false;W.Bl=true;W.Nc=true;W.Jy=false;return W;},R6:function(Ac){var A;var W=(
E.KI.isPrototypeOf(Ac)?Ac:null);var AS=[0,0,(A=W.H.J)[2]-A[0],A[3]-A[1]];var BG=[(
A=W.K.J)[2]-A[0],A[3]-A[1]];var Aa=AS.slice(0,2);Aa=[(AS[0]+(((AS[2]-AS[0])/2)|0
))-((BG[0]/2)|0),Aa[1]];Aa=[Aa[0],(AS[1]+(((AS[3]-AS[1])/2)|0))-((BG[1]/2)|0)];W.
Td=Aa;},_Init:function(aArg){E.IL._Init.call(this,aArg);this.__proto__=E.QW;},_className:
"Effects::ShowHideTransition"};E.KB={Jf:0,HA:function(){var W=B._NewObject(E.Kw,
0);W.Cx=true;W.Bl=true;W.Ne=false;W.Ky=true;W.Ma=true;W.Lx=[this,this.R6];W.BI.AD(
500);W.BI.Kr(0);W.BI.AM=0;W.BI.AI=255;W.A2.AD(500);W.A2.Gw(23);W.A2.S5(0);W.A2.S6(
0);W.A2.S0(3);W.A2.SU(0.5);W.A2.S2(3);W.A2.SW(3);W.A2.SX(0.5);return W;},Hz:function(
){var W=B._NewObject(E.Kw,0);W.Cx=false;W.Bl=false;W.Jy=true;W.Ma=true;W.Lx=[this
,this.ZO];W.BI.AM=255;W.BI.AI=0;W.BI.AD(500);W.BI.Kr(0);W.A2.AD(500);W.A2.Gw(23);
W.A2.S5(0);W.A2.S6(0);W.A2.S0(3);W.A2.SU(0.5);W.A2.S2(3);W.A2.SW(3);W.A2.SX(0.5);
return W;},Kg:function(){var W=E.IL.Kg.call(this);W.Ky=false;W.Bl=true;return W;
},Kf:function(){var W=E.IL.Kf.call(this);W.Nc=true;W.Jy=false;W.Bl=true;return W;
},R6:function(Ac){var A;var W=(E.Kw.isPrototypeOf(Ac)?Ac:null);var AS=[0,0,(A=W.
H.J)[2]-A[0],A[3]-A[1]];var BG=[(A=W.K.J)[2]-A[0],A[3]-A[1]];var Aa=AS.slice(0,2
);Aa=[(AS[0]+(((AS[2]-AS[0])/2)|0))-((BG[0]/2)|0),Aa[1]];Aa=[Aa[0],(AS[1]+(((AS[
3]-AS[1])/2)|0))-((BG[1]/2)|0)];W.A2.AI=Aa;if(((!W.K.H||!W.K.HJ())||!W.K.FS)||(((
A=B.lb(W.K.J,[0,0,(A=W.H.J)[2]-A[0],A[3]-A[1]]))[0]>=A[2])||(A[1]>=A[3]))){var FK=[(
A=W.H.J)[2]-A[0],A[3]-A[1]];switch(this.Jf){case 5:Aa=[Aa[0],-BG[1]];break;case 3:{
Aa=[Aa[0],-BG[1]];Aa=[FK[0],Aa[1]];}break;case 8:Aa=[-BG[0],-BG[1]];break;case 2:
Aa=[FK[0],Aa[1]];break;case 7:Aa=[-BG[0],Aa[1]];break;case 4:Aa=[Aa[0],FK[1]];break;
case 1:{Aa=[Aa[0],FK[1]];Aa=[FK[0],Aa[1]];}break;case 6:{Aa=[Aa[0],FK[1]];Aa=[-BG[
0],Aa[1]];}break;default:;}W.K.S(B.abJ(W.K.J,Aa));}},ZO:function(Ac){var A;var W=(
E.Kw.isPrototypeOf(Ac)?Ac:null);var Aa=W.K.J.slice(0,2);var BG=[(A=W.K.J)[2]-A[0
],A[3]-A[1]];var FK=[(A=W.H.J)[2]-A[0],A[3]-A[1]];switch(this.Jf){case 5:Aa=[Aa[
0],FK[1]];break;case 3:{Aa=[Aa[0],FK[1]];Aa=[-BG[0],Aa[1]];}break;case 8:{Aa=[Aa[
0],FK[1]];Aa=[FK[0],Aa[1]];}break;case 2:Aa=[-BG[0],Aa[1]];break;case 7:Aa=[FK[0
],Aa[1]];break;case 4:Aa=[Aa[0],-BG[1]];break;case 1:Aa=[-BG[0],-BG[1]];break;case
6:{Aa=[Aa[0],-BG[1]];Aa=[FK[0],Aa[1]];}break;default:;}W.A2.AI=Aa;},_Init:function(
aArg){E.IL._Init.call(this,aArg);this.__proto__=E.KB;},_className:"Effects::SlideTransition"
};E.H2={Aa_:0,Abg:1,Abi:2,Abh:3,AaT:4,AaV:5,AaU:6,AbA:7,AbC:8,AbB:9,AaG:10,AaI:11
,AaH:12,Aav:13,Aax:14,Aaw:15,AaP:16,AaR:17,AaQ:18,AaD:19,AaF:20,AaE:21,AaO:22,AaW:
23,AaN:24,AaX:25,AaJ:26};E.PG={Trigger:function(){B.Core.Timer.Trigger.call(this
);B.we(this,0);},_Init:function(aArg){B.Core.Timer._Init.call(this,aArg);this.__proto__=
E.PG;},_className:"Effects::EffectTimerClass"};E.Iw={_Init:function(){E.PG._Init.
call(this,0);this.Ep(15);this.Aq(true);},_ReInit:function(){},_variants:function(
){return this;},_this:null};E.Oc={DQ:B.abi(12,0,null),IP:B.abi(12,0,null),_Init:
function(aArg){(this.DQ=[]).__proto__=E.Oc.DQ;(this.IP=[]).__proto__=E.Oc.IP;this.
__proto__=E.Oc;B.h7++;},_Done:function(){this.__proto__=null;B.h7--;},_ReInit:function(
){},_Mark:function(D){var A;if((A=this.N)&&(A._cycle!=D))A._Mark(A._cycle=D);},N:
null,_cycle:0,_observers:null,_className:"Effects::TimingList"};E.Nn={AN:null,Az:
null,SK:function(Mk){var W=this.Az;while(!!W){W.Qm();W.K.F=W.K.F&~0x40000;W=W.U;
}W=this.Az;while(!!W){B.pe(W.R3,W);W=W.U;}},SJ:function(Mk){var W=this.Az;while(
!!W){B.pe(W.Pg,W);W=W.U;}this.Az=null;this.AN=null;},Ku:function(Mk){var A;if(!this.
Az)this.Gk();var W=this.Az;while(!!W){W.K.F=(W.K.F|0x40000)&~0x20000;W.K.J5=null;
W=W.U;}W=this.Az;while(!!W){(A=W.Lx)?A[1].call(A[0],W):null;W.Ku();W=W.U;}},Gk:function(
){var W=this.Az;while(!!W&&W.P7())W=W.U;if(!W)B.Core.LS.Gk.call(this);},W5:function(
Br){if(!Br)return;if(this.P6())throw new Error(Bv);if(Br.Fk!==this)throw new Error(
BD);if(!!Br.U)Br.U.V=Br.V;else this.AN=Br.V;if(!!Br.V)Br.V.U=Br.U;else this.Az=Br.
U;Br.Fk=null;Br.U=null;Br.V=null;if(!!Br.K)Br.K.J5=null;B.pe(Br.Pg,Br);if(!this.
Az)this.Sq();},Sm:function(Br){if(!Br)return;if(this.P6())throw new Error(Eq);if(
!!Br.Fk)throw new Error(He);Br.V=this.AN;Br.U=null;if(!!this.AN)this.AN.U=Br;else
this.Az=Br;this.AN=Br;Br.Fk=this;},_Init:function(aArg){B.Core.LS._Init.call(this
,aArg);this.__proto__=E.Nn;},_Mark:function(D){var A;B.Core.LS._Mark.call(this,D
);if((A=this.AN)&&(A._cycle!=D))A._Mark(A._cycle=D);if((A=this.Az)&&(A._cycle!=D
))A._Mark(A._cycle=D);},_className:"Effects::FaderTask"};E.KA={_Init:function(){
E.QW._Init.call(this,0);},_ReInit:function(){},_variants:function(){return this;
},_this:null};E.IG={_Init:function(){E.KB._Init.call(this,0);this.Jf=2;},_ReInit:
function(){},_variants:function(){return this;},_this:null};E.Ha={_Init:function(
){E.KB._Init.call(this,0);this.Jf=7;},_ReInit:function(){},_variants:function(){
return this;},_this:null};E.IH={_Init:function(){E.KB._Init.call(this,0);this.Jf=
4;},_ReInit:function(){},_variants:function(){return this;},_this:null};E.IF={_Init:
function(){E.KB._Init.call(this,0);this.Jf=5;},_ReInit:function(){},_variants:function(
){return this;},_this:null};
E._Init=function(){E.Em.__proto__=E.Dp;E.C4.__proto__=E.Dp;E.EM.__proto__=E.Dp;E.
Ni.__proto__=E.Dp;E.Dr.__proto__=E.Dp;E.KI.__proto__=E.HE;E.Kw.__proto__=E.HE;E.
QW.__proto__=E.IL;E.KB.__proto__=E.IL;E.PG.__proto__=B.Core.Timer;E.Nn.__proto__=
B.Core.LS;};E._ReInit=function(){var A;if((A=E.Iw._this))A._ReInit(),E.Iw._ReInit.
call(A);if((A=E.KA._this))A._ReInit(),E.KA._ReInit.call(A);if((A=E.IG._this))A._ReInit(
),E.IG._ReInit.call(A);if((A=E.Ha._this))A._ReInit(),E.Ha._ReInit.call(A);if((A=
E.IH._this))A._ReInit(),E.IH._ReInit.call(A);if((A=E.IF._this))A._ReInit(),E.IF.
_ReInit.call(A);};E.EQ=function(D){var A;if((A=E.Iw._this)&&(A._cycle!=D))A._Done(
E.Iw._this=null);if((A=E.KA._this)&&(A._cycle!=D))A._Done(E.KA._this=null);if((A=
E.IG._this)&&(A._cycle!=D))A._Done(E.IG._this=null);if((A=E.Ha._this)&&(A._cycle
!=D))A._Done(E.Ha._this=null);if((A=E.IH._this)&&(A._cycle!=D))A._Done(E.IH._this=
null);if((A=E.IF._this)&&(A._cycle!=D))A._Done(E.IF._this=null);};return E;})();

/* Embedded Wizard */