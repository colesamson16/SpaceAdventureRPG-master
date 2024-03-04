#include "Weapon.h"

Weapon::Weapon(int id) : Item(id) {
    // this->setItemType("Weapon");
}
/* implementation of class Weapon constructor */
Weapon::Weapon(Item item){
    this->setItemID(item.getItemID());
    this->setItemType("Weapon");
    this->setItemName(item.getItemName());
    this->setItemInventorySize(item.getItemInventorySize());
    this->setIsStackable(item.getIsStackable());
    this->setItemValue(item.getItemValue());
}

/* implementation of setter methods for class Weapon */ 
void Weapon::setWeaponDamage(int damage) {
    this->weaponDamage = damage;
}

void Weapon::setWeaponLevel(int level) {
    this->weaponLevel = level;
}

void Weapon::setWeaponExperience(int experience) {
    this->weaponExperience = experience;
}

void Weapon::setWeaponCritChance(float critChance) {
    this->weaponCritChance = critChance;
}

void Weapon::setWeaponAttackMoves(int attackMoves) {
    this->weaponAttackMoves = attackMoves;
}

void Weapon::setWeaponHitChance(float hitChance) {
    this->weaponHitChance = hitChance;
}

/* implementation of getter functions for class Weapon */
int Weapon::getWeaponDamage() {
    return this->weaponDamage;
}

int Weapon::getWeaponLevel() {
    return this->weaponLevel;
}

int Weapon::getWeaponExperience() {
    return this->weaponExperience;
}

float Weapon::getWeaponCritChance() {
    return this->weaponCritChance;
}

int Weapon::getWeaponAttackMoves() {
    return this->weaponAttackMoves;
}

int Weapon::getWeaponHitChance() {
    return this->weaponHitChance;
}
