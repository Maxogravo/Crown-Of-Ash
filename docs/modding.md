# How to mod Crown of Ash

# Making New Levels
In /src/main.cpp near the top there is an enum labeled 'Scene'. To create a new level you must first add that new level's name to that enum. 

Then if you scroll further down you will see a switch case statement. Add a new 'case' and write the Level's code in there. I suggest making a seperate scene if there is going to be a title. Each scene must begin and end with BeginDrawing() and EndDrawing();