#pragma once
#include "Entity.hpp"
#include "raylib.h"
#include "Timer.hpp"
#include "BulletManager.hpp"
#include "PlayerHealth.hpp"


enum PlayerState
{
    PLAYER_DEFAULT = 0,
    PLAYER_STUNNED,
    PLAYER_IFRAME,
    PLAYER_DEAD
};


class Player : public Entity
{
public:

    Player();
    void init();
    void update() override;
    void draw() override;
    Rectangle getHitbox() const { return rect; }
    void takeDamage(float timeStateEntered, Vector2 entityPosition, float entitySize);
    PlayerState getPlayerState() const { return playerState; }
    double getTimeOfDeath() const;

private:

    Camera2D camera;
    bool playerAccelerating;
    PlayerState playerState;
    Cooldown playerAttackCooldown;
    bool autoShoot;
    float timeStateEntered;
    PlayerHealth healthManager{125};
    double timeOfDeath = 0.0;
};