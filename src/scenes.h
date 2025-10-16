#include "raylib.h"
#include <iostream>

void test(){
    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    };
};

void Intro(){
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("Depart from me, for I never knew you...", 248, 345,30, WHITE);
        EndDrawing();
        if (IsKeyDown(KEY_ENTER)) test();
    };
};