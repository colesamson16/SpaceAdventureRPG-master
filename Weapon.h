#ifndef SEED_RPG_WEAPON_H
#define SEED_RPG_WEAPON_H

#include <string>
#include "Item.h"
using namespace std;

class Weapon : public Item {
private:
    /* attributes of Weapon class */
    int weaponDamage;
    int weaponLevel;
    int weaponExperience;
    float weaponCritChance;
    int weaponAttackMoves;
    float weaponHitChance;

public:
    /* Weapon class constructor */
    Weapon(int id);
    Weapon(Item item);

    /* setter functions of Weapon class */
    void setWeaponDamage(int damage);
    void setWeaponLevel(int level);
    void setWeaponExperience(int experience);
    void setWeaponCritChance(float critChance);
    void setWeaponAttackMoves(int attackMoves);
    void setWeaponHitChance(float hitChance);

    /* getter functions of Weapon class */
    int getWeaponDamage();
    int getWeaponLevel();
    int getWeaponExperience();
    float getWeaponCritChance();
    int getWeaponAttackMoves();
    int getWeaponHitChance();
};

#endif //SEED_RPG_WEAPON_H
