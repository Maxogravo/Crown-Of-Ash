#define RAYLIB_CPP
#include "raylib.h"
#include "entities.h"
#include <iostream>

enum Scene {Intro, Ch1T, Ch1L1};

int main() {
    PlayerCharacter player;
    player.health = 100;
    player.speed = 2;
    player.x = 0;
    player.y = 0;
    bool dead = false;

    InitWindow(1080, 720, "Crown Of Ash");
    SetTargetFPS(60);
    Scene currentScene = Intro;
    
    while (!WindowShouldClose()){
        switch(currentScene){
            case Intro:
                BeginDrawing();
                ClearBackground(BLACK);
                DrawText("Depart from me, for I never knew you...", 248, 345,30, WHITE);
                EndDrawing();
                if(IsKeyPressed(KEY_ENTER)) currentScene = Ch1T;
                break;
            case Ch1T:
                BeginDrawing();
                ClearBackground(BLACK);
                DrawText("Chapter 1: Limbo", 420.0, 345.0, 30, WHITE);
                EndDrawing();
                if(IsKeyPressed(KEY_ENTER)) currentScene = Ch1L1;
                break;
            case Ch1L1:
                player.x = 528;
                player.y = 348;
                BeginDrawing();
                ClearBackground(BLACK);
                player.draw();
                EndDrawing();
                break;
        }
    }
    CloseWindow();
    return 0;
}
