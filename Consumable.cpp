#include "Consumable.h"

Consumable::Consumable(int id) : Item(id) {
    this->setItemType("Consumable");
}

/* implementation of class Consumables constructor */
Consumable::Consumable(Item item){
    this->setItemID(item.getItemID());
    this->setItemType("Consumable");
    this->setItemName(item.getItemName());
    this->setItemInventorySize(item.getItemInventorySize());
    this->setIsStackable(item.getIsStackable());
    this->setItemValue(item.getItemValue());
}

/* implementation of setter methods of Consumable class */
void Consumable::setHealthRegen(int healthRegen) {
    this->healthRegen = healthRegen;
}

void Consumable::setShieldRegen(int shieldRegen) {
    this->shieldRegen = shieldRegen;
}

void Consumable::setHealthBoost(int healthBoost) {
    this->healthBoost = healthBoost;
}

void Consumable::setShieldBoost(int shieldBoost) {
    this->shieldBoost = shieldBoost;
}

/* implementation of getter methods of Consumable class */
int Consumable::getHealthRegen() {
    return this->healthRegen;
}

int Consumable::getShieldRegen() {
    return this->shieldRegen;
}

int Consumable::getHealthBoost() {
    return this->healthBoost;
}

int Consumable::getShieldBoost() {
    return this->shieldBoost;
}
