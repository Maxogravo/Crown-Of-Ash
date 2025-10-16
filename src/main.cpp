#define RAYLIB_CPP
#include "raylib.h"
#include <iostream>
#include "entities.h"

PlayerCharacter player;
void resetPlayer() {
    player.health = 100;
    player.level = 0;
    player.XP = 0;
    player.x = 540;
    player.y = 360;
    player.speed = 2;
    player.dead = false;
}

int main() {
    resetPlayer();

    // Enemy Values
    Enemy enemy;
    enemy.health = 25;
    enemy.damage = 5;
    enemy.speed = 1;
    enemy.x = 100;
    enemy.y = 100;

    InitWindow(1080, 720, "Crown Of Ash");
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        while (!player.dead) {
            // Controlling Player
            if (IsKeyDown(KEY_W)) player.y -= player.speed;
            if (IsKeyDown(KEY_S)) player.y += player.speed;
            if (IsKeyDown(KEY_A)) player.x -= player.speed;
            if (IsKeyDown(KEY_D)) player.x += player.speed;
            // Enemy Logic
            enemy.ApproachPlayer(player);
            if (enemy.x == player.x && enemy.y == player.y) player.dead = true;
            // Drawing 
            BeginDrawing();
            ClearBackground(RAYWHITE);
            player.draw();
            enemy.draw();
            EndDrawing();

        }
        BeginDrawing();
        player.death();
        if (IsKeyDown(KEY_R)) {
            ClearBackground(RAYWHITE);
            resetPlayer();
        }
        EndDrawing();
    }
}
