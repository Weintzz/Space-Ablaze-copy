#include "PlayerHealth.hpp"

PlayerHealth::PlayerHealth(int maxHP) : hp(maxHP), maxHP(maxHP) {}

void PlayerHealth::takeDamage(int amount) {
    hp -= amount;
    if (hp < 0) hp = 0;
}

void PlayerHealth::heal(int amount) {
    hp += amount;
    if (hp > maxHP) hp = maxHP;
}

int PlayerHealth::getHP() const {
    return hp;
}

int PlayerHealth::getMaxHP() const {
    return maxHP;
}

bool PlayerHealth::isDead() const {
    return hp <= 0;
}

void PlayerHealth::reset() {
    hp = maxHP;
} 