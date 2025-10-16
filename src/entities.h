#include "raylib.h"

class PlayerCharacter {
    public:
        int health;
        int level;
        int XP;
        int x;
        int y;
        int speed;
        bool dead;
    
    void draw() {
        DrawRectangle(x,y,25,25,BLUE);
    }
    void death() {
        ClearBackground(BLACK);
        DrawText("You Died", 500, 360, 50, RED);
    }
};

class Enemy{
    public:
        int health;
        int damage;
        int speed;
        int x;
        int y;
    
    void draw() {
        DrawRectangle(x,y,25,25,RED);
    }

    void ApproachPlayer(PlayerCharacter player) {
        if (x < player.x) x += speed;
        if (x > player.x) x -= speed;
        if (y < player.y) y += speed;
        if (y > player.y) y -= speed;
    }
};
