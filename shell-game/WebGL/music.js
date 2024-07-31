
var audio;
var shuffle=new Audio('audio/shuffleBetter.mp3');
shuffle.volume=0.5;

function PlayMusic(){
    audio.loop = true;
    audio.volume = 0.5;
    audio.play().then(() => {
        console.log("Redare audio începută.");
    }).catch(error => {
        console.error("Eroare la redarea audio:", error);
    });

}
function SetVolume(x){
        audio.volume=x;
}

function achievementUnlock(){
    ach=new Audio('audio/Ach.m4a');
    ach.volume=shuffle.volume;
    ach.loop=false;
    ach.play();
}


var correct;
function Correct(){
    correct=new Audio('audio/NiceOne.mp3');
    correct.volume=shuffle.volume;
    correct.play();
}

var wrong;
function Wrong(){
    wrong=new Audio('audio/wrongBuzz.mp3');
    wrong.volume=shuffle.volume;
    wrong.play();
}

function ShuffleStart(){
    shuffle.loop=true;
    shuffle.play();
}
function ShuffleEnd(){
    if(!shuffle.paused)
        shuffle.pause();
    else return;
}

function ShuffleVolume(x){
    shuffle.volume=x;
}

function SelectMusic(nume){
    let musicName=nume.substring(0,nume.indexOf(' '));
    let path='audio/MusicShop/'+musicName+'.m4a';
    if(audio==null)
        audio=new Audio(path);
    else
    {
        const sr=audio.src.toString();
        const index = sr.indexOf("audio");
        var comparedSRC;
        if (index !== -1) {
            comparedSRC=sr.substring(index);
        }
        if(comparedSRC==path.toString())
            return;
        audio.pause();
        audio.src=path;
    }
    PlayMusic();
}

