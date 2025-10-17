#include "raylib.h"
#include "entities.h"

enum Scene {Intro, Ch1T, Ch1L1};

void game_scenes() {
    PlayerCharacter player;
    player.health = 100;
    player.speed = 2;
    player.x = 528;
    player.y = 348;
    bool dead = false;

    Scene currentScene = Intro;
    InitWindow(1080, 720, "Crown Of Ash");
    SetTargetFPS(60);
    
    while (!WindowShouldClose()){
        if (IsKeyDown(KEY_W)) player.y -= 2;
        if (IsKeyDown(KEY_S)) player.y += 2;
        if (IsKeyDown(KEY_D)) player.x += 2;
        if (IsKeyDown(KEY_A)) player.x -= 2;

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
                BeginDrawing();
                ClearBackground(WHITE);
                player.draw();
                EndDrawing();
                break;
        }
    }
    CloseWindow();
}
