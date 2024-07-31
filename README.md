# shell-game-embedded-wizard

A project made in embedded wizard 13.

The game rules are simple, there are 3 cups and a ball, which is under one of the cups. At the beginning of the round, the position of the ball is shown, then the shuffle starts. Your objective is to keep track of the ball, and to choose the correct cup at the end. If you guess correctly, the current level will increment and you will get some coins. If you guess wrong the level will reset to level 1 and you won't get any money.

After you collect enough money, you can go to the shop and customize your experience with other cups, balls and background music. As you play, you'll unlock achivements when certain conditions are fullfilled. 

![find it](https://github.com/user-attachments/assets/d70263fb-8be0-460b-b708-0d379d826578)

Since the application uses images you need it to run on a localhost. To do so you can follow the steps:
1. Open cmd and switch the path to the WebGL folder inside the project.
2. Run the command: python -m http.server 8000
3. Open in browser: http:/localhost:8000/EmWiApp.html

Or you can open the WebGL folder inside Visual Studio Code and run the live server extension.
