Initialize();


function GetAchivements(){
    let Achieve=localStorage.getItem("Achievements");
    if (Achieve) {
        return JSON.parse(Achieve);
    }
    return []; 
}

function SetAchievements(x){
    localStorage.setItem("Achievements",JSON.stringify(x));
}

function MakeDefaultAchievements(){
    var Achieve=[];
    for(let i=0;i<15;i++)
    {
        Achieve.push(false);
    }
    return Achieve;
}

function Initialize(){
    if(GetAchivements().length==0)
        SetAchievements(MakeDefaultAchievements());
}

function CheckRights(){
    var ach=GetAchivements();
    var corr=GetCorrects();
    if(corr>=50 && !ach[0])
    {
        ach[0]=true;
        SetAchievements(ach);
        return 0;
    }
    else if(corr>=100 && !ach[1])
    {
        ach[1]=true;
        SetAchievements(ach);
        return 1;
    }
    return -1;
        
}


function CheckCupsAchievements(){
    var count=0;
    var x=GetCupsArray();
    var ach=GetAchivements();
    for(var i=0;i<x.length;i++)
        if(x[i])
            count++;
    if(count>=1 && !ach[2])
    {
        ach[2]=true;
        SetAchievements(ach);
        return 2;
    }
    else if(count>=5 && !ach[3])
    {
        ach[3]=true;
        SetAchievements(ach);
        return 3;
    }
    else if(count==x.length-1 && !ach[4])
    {
        ach[4]=true;
        SetAchievements(ach);
        return 4;
    }
    return -1;
}

function CheckBallsAchievements(){
    var count=0;
    var x=GetBallsArray();
    var ach=GetAchivements();
    for(var i=0;i<x.length;i++)
        if(x[i])
            count++;
    if(count>=1 && !ach[5])
    {
        ach[5]=true;
        SetAchievements(ach);
        return 5;
    }
    else if(count>=5 && !ach[6])
    {
        ach[6]=true;
        SetAchievements(ach);
        return 6;
    }
    else if(count==x.length-1 && !ach[7])
    {
        ach[7]=true;
        SetAchievements(ach);
        return 7;
    }
    return -1;
}

function CheckMusicAchievements(){
    var count=0;
    var x=GetMusicArray();
    var ach=GetAchivements();
    for(var i=0;i<x.length;i++)
        if(x[i])
            count++;
    if(count>=1 && !ach[8])
    {
        ach[8]=true;
        SetAchievements(ach);
        return 8;
    }
    else if(count>=5 && !ach[9])
    {
        ach[9]=true;
        SetAchievements(ach);
        return 9;
    }
    else if(count==x.length-1 && !ach[10])
    {
        ach[10]=true;
        SetAchievements(ach);
        return 10;
    }
    return -1;
}

function CheckHalloween(){
    var ach=GetAchivements();
    if(GetHalloweenBought() && !ach[11])
    {
        ach[11]=true;
        SetAchievements(ach);
        return 11;
    }
    return -1;
}

function CheckLevels(){
    var ach=GetAchivements();
    var lvl=GetBestLevel();
    if(lvl>=15 && !ach[12])
    {
        ach[12]=true;
        SetAchievements(ach)
        return 12;
    }
    else if(lvl>=20 && !ach[13])
    {
        ach[13]=true;
        SetAchievements(ach);
        return 13;
    }
    else if(lvl>=25 && !ach[14])
    {
        ach[14]=true;
        SetAchievements(ach);
        return 14;
    }
    return -1;
}
