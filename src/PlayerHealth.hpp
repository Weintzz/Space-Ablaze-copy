#pragma once

class PlayerHealth {
public:
    PlayerHealth(int maxHP);
    void takeDamage(int amount);
    void heal(int amount);
    int getHP() const;
    int getMaxHP() const;
    bool isDead() const;
    void reset();
private:
    int hp;
    int maxHP;
}; 