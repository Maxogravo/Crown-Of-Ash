#define RAYLIB_CPP
#include "raylib.h"
#include <iostream>

class PlayerCharacter {
    public:
        int health;
        int level;
        int XP;
        int x;
        int y;
        int speed;
    
    void draw() {
        DrawCircle(x,y,25,BLUE);
    }
};

int main() {
    // Player Values
    PlayerCharacter player;
    player.health = 100;
    player.level = 0;
    player.XP = 0;
    player.x = 540;
    player.y = 360;
    player.speed = 2;

    InitWindow(1080, 720, "Crown Of Ash");
    SetTargetFPS(60);
    while (!WindowShouldClose()) {

        // Controlling
        if (IsKeyDown(KEY_W)) player.y -= player.speed;
        if (IsKeyDown(KEY_S)) player.y += player.speed;
        if (IsKeyDown(KEY_A)) player.x -= player.speed;
        if (IsKeyDown(KEY_D)) player.x += player.speed;

        BeginDrawing();
        ClearBackground(RAYWHITE);
        player.draw();
        EndDrawing();
    }
}
