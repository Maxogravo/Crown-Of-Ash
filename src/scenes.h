#include "raylib.h"

void Begin(){
    BeginDrawing();
};
void End(){
    EndDrawing();
};
void BGBlack(){
    ClearBackground(BLACK);
};
void Intro(){
    Begin();
    BGBlack();
    DrawText("Depart from me, for I never knew you.", 260, 315, 25, RED);
    End();
}