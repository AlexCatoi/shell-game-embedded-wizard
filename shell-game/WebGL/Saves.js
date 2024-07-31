
var timeStart;
var timeEnd; 
Initialize();

function SetBestLevel(x){
    localStorage.setItem("BestLevelReached",x);
}
function GetBestLevel(){
    let bestLevel=localStorage.getItem("BestLevelReached");
    return bestLevel;
}
function SetCoins(x){
    localStorage.setItem("Coins",x);
}
function GetCoins(){
    let coin=localStorage.getItem("Coins");
    return Number(coin);
}
function SetDate(x){
    localStorage.setItem("Date",x);
}
function GetDate(){
    let date=localStorage.getItem("Date");
    return date;
}
function SetHours(x){
    localStorage.setItem("Hours",x);
}
function GetHours(){
   let h=localStorage.getItem("Hours");
    return h;
}

function SetCorrects(x){
    localStorage.setItem("Correct Guesses",x);
}
function GetCorrects(){
    let corr=localStorage.getItem("Correct Guesses");
    return corr;
} 

function SetTotal(x){
    localStorage.setItem("Total Guesses",x);
}
function GetTotal(){
    let total=localStorage.getItem("Total Guesses");
    return total;
}

function SetActiveBall(x){
    localStorage.setItem("ActiveBall",x);
}
function GetActiveBall(){
    let actBall=localStorage.getItem("ActiveBall");
    return Number(actBall);
}
function SetActiveCup(x){
    localStorage.setItem("ActiveCup",x);
}
function GetActiveCup(){
    let actCup=localStorage.getItem("ActiveCup");
    return Number(actCup);
}
function SetActiveMusic(x){
    localStorage.setItem("ActiveMusic",x);
}
function GetActiveMusic(){
    let actMusic=localStorage.getItem("ActiveMusic");
    return Number(actMusic);
}
function SetActiveMusic(x){
    localStorage.setItem("ActiveMusic",x);
}
function GetActiveMusic(){
    let actMusic=localStorage.getItem("ActiveMusic");
    return Number(actMusic);
}

function SetActiveMusicName(x){
    localStorage.setItem("ActiveMusicName",x);
}
function GetActiveMusicName(){
    let actMusicName=localStorage.getItem("ActiveMusicName");
    return actMusicName;
}

function SetHalloweenBought(APack){
    localStorage.setItem("HalloweenBought",APack);
    console.log("Setter "+APack);
}
function GetHalloweenBought(){
    let hall=localStorage.getItem("HalloweenBought");
    return hall==="true";
}

function SetHalloweenActive(APack){
    localStorage.setItem("HalloweenActive",APack);
}
function GetHalloweenActive(){
    let hall=localStorage.getItem("HalloweenActive");
    return hall==="true";
}

function SetCupsArray(x){
    localStorage.setItem("CupsArray",JSON.stringify(x));
}
function GetCupsArray(){
    let CupsArray=localStorage.getItem("CupsArray");
    if (CupsArray) {
        return JSON.parse(CupsArray);
    }
    return []; 
}

function SetBallsArray(x){
    localStorage.setItem("BallsArray",JSON.stringify(x));
}
function GetBallsArray(){
    let BallsArray=localStorage.getItem("BallsArray");
    if (BallsArray) {
        return JSON.parse(BallsArray);
    }
    return []; 
}

function SetMusicArray(x){
    localStorage.setItem("MusicArray",JSON.stringify(x));
}
function GetMusicArray(){
    let MusicArray=localStorage.getItem("MusicArray");
    if (MusicArray) {
        return JSON.parse(MusicArray);
    }
    return []; 
}

function CurrentDate() {
    const date = new Date();
    let day = date.getDate();   
    let month = date.getMonth() + 1;  
    let year = date.getFullYear();
    let FullDate = `${day}-${month}-${year}`;
    return FullDate;
}

function getStart(){
    const date=new Date();
    let minutes=date.getMinutes();
    let hour=date.getHours();
    timeStart=`${hour}.${minutes}`;
}
function getEnd(){
    const date=new Date();
    let minutes=date.getMinutes();
    let hour=date.getHours();
    timeEnd=`${hour}.${minutes}`;
}

function HoursEllapsed(x,y,ok){
    const [hour1, minute1] = x.split('.').map(Number);
    const [hour2, minute2] = y.split('.').map(Number);

    let time1=hour1*60+minute1;
    let time2=hour2*60+minute2;

    if(ok)
        timeElapsed=time2-time1;
    else
        timeElapsed=time2+time1;

     let hourElapsed=Math.floor(timeElapsed/60);
     let minuteElapsed=timeElapsed%60;
     let formattedMinutes = minuteElapsed.toString().padStart(2, '0');
     return `${hourElapsed}.${formattedMinutes}`;

}


function UpdateStorage(lvl,ok,ok1){
    let bestLevel=GetBestLevel();
    let h=GetHours();
    let corr=GetCorrects();
    let total=GetTotal();
    coin=GetCoins();

    if(lvl>bestLevel)
    {
        SetBestLevel(lvl);
        SetDate(CurrentDate());
    }
    if(ok)
    { 
        if(ok1)
            SetCorrects(parseInt(corr)+1);
        SetTotal(parseInt(total)+1);
    }
    getEnd();
    let he=HoursEllapsed(timeStart,timeEnd,true);
    let newTime=HoursEllapsed(h,he,false);    
    SetHours(newTime);
    getStart();
}

function UpdatePrefs(ACup,ABall,AMusic,APack)
{
    SetActiveCup(ACup);
    SetActiveBall(ABall);
    SetActiveMusic(AMusic);
    SetHalloweenActive(APack);
}
function UpdateMoney(money)
{
    SetCoins(Number(GetCoins())+Number(money));
}


function UpdateArrays(cups,balls,music){
    SetCupsArray(cups);
    SetBallsArray(balls);
    SetMusicArray(music);
}


function MakeDefaultCupsArray(){
    var Cups=[];
    for(let i=0;i<13;i++)
    {
        if(i==10)
            Cups.push(true);
        Cups.push(false);
    }
    return Cups;
}

function MakeDefaultBallsArray(){
    var Balls=[];
    for(let i=0;i<10;i++)
    {
        if(i==5)
            Balls.push(true);
        Balls.push(false);
    }
    return Balls;
}

function MakeDefaultMusicArray(){
    var Music =[];
    for(let i=0;i<16;i++)
    {
        if(i==14)
            Music.push(true);
        Music.push(false);
    }
    return Music;
}

function Initialize(){
    if(GetBestLevel()==null)
        SetBestLevel(1);
    if(GetDate()==null)
        SetDate(CurrentDate());
    if(GetHours()==null)
        SetHours('0.0')
    if(GetCorrects()==null)
        SetCorrects(0);
    if(GetTotal()==null)
        SetTotal(0);
    if(GetCoins()==0)
        SetCoins(0);
    if(GetActiveMusicName()==null)
        SetActiveMusicName("Default ");
    if(GetCupsArray().length==0)
        SetCupsArray(MakeDefaultCupsArray());
    if(GetBallsArray().length==0)
        SetBallsArray(MakeDefaultBallsArray());
    if(GetMusicArray().length==0)
        SetMusicArray(MakeDefaultMusicArray());
    if(GetActiveBall()==0 && GetBallsArray()[0]==false)
        SetActiveBall(5);
    if(GetActiveCup()==0 && GetCupsArray()[0]==false)
        SetActiveCup(10);
    if(GetActiveMusic()==0 && GetMusicArray()[0]==false) 
        SetActiveMusic(14);
    if(GetHalloweenBought()==false)
        SetHalloweenBought(false);
    if(GetHalloweenActive()==false)
        SetHalloweenActive(false);
    getStart();
}




