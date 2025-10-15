#define RAYLIB_CPP
#include "raylib.h"
#include "scenes.h"

int main() {
    InitWindow(1080, 720, "Game");
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        Intro();
    }
}
