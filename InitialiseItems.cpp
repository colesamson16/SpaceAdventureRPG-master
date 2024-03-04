#include "InitialiseItems.h"
#include "database_manager.cpp"

// this was moved from header file
static int toInt(string* s) {
    return atoi((s->c_str())); // converts strings to integers
}

InitialiseItems::InitialiseItems() {
    // constructor for initialising items
    this->weaponsPool = {};
    this->consumablesPool = {};
    this->spaceSuitsPool = {};

    // storing all pools into the Item pool
    this->ItemsPool = make_tuple(&this->weaponsPool, &this->consumablesPool, &this->spaceSuitsPool);

    this->initialiseWeapons();
    this->initialiseConsumables();
    this->initialiseSpaceSuits();
}

Item InitialiseItems::initialiseItem(int itemID) {
    vector<string> data = DatabaseManager::getNthRowFromItems(itemID);
    Item item(toInt(&data[0]));
    item.setItemName(data[1]);
    item.setItemValue(toInt(&data[2]));
    item.setItemInventorySize(toInt(&data[3]));
    item.setIsStackable(toInt(&data[4]));
    item.setItemType(data[5]);

    return item;
}

void InitialiseItems::initialiseWeapons() {
    for (int i = 1; i < DatabaseManager::countRows("Weapons")+1; i++) {
        // +1 after the (less than sign) is used because countRows starts on 0
        vector<string> data = DatabaseManager::getNthRowFromWeapons(i);
        Weapon weapon = Weapon(this->initialiseItem(toInt(&data[7])));
        // takes the item and turns it into a weapon initialisation class
        weapon.setWeaponDamage(toInt(&data[1]));
        weapon.setWeaponLevel(1);
        weapon.setWeaponExperience(0);
        weapon.setWeaponCritChance(toInt(&data[4]));
        weapon.setWeaponAttackMoves(toInt(&data[5]));
        weapon.setWeaponHitChance(toInt(&data[6]));
        this->weaponsPool.push_back(weapon);
    }
}

void InitialiseItems::initialiseConsumables() {
    for (int i = 1; i < DatabaseManager::countRows("Consumables")+1; i++) {
        vector<string> data = DatabaseManager::getNthRowFromConsumable(i);
        Consumable consumable = Consumable(this->initialiseItem(toInt(&data[5])));
        consumable.setHealthRegen(toInt(&data[1]));
        consumable.setShieldRegen(toInt(&data[2]));
        consumable.setHealthBoost(toInt(&data[3]));
        consumable.setShieldBoost(toInt(&data[4]));
        this->consumablesPool.push_back(consumable);
    }
}

void InitialiseItems::initialiseSpaceSuits() {
    for (int i = 1; i < DatabaseManager::countRows("SpaceSuits")+1; i++) {
        vector<string> data = DatabaseManager::getNthRowFromSpaceSuits(i);
        SpaceSuit spaceSuit = SpaceSuit(this->initialiseItem(toInt(&data[4])));
        spaceSuit.setHandleTemp(toInt(&data[1]));
        spaceSuit.setHandleRad(toInt(&data[2]));
        spaceSuit.setHandleOxy(toInt(&data[3]));
        this->spaceSuitsPool.push_back(spaceSuit);
    }

}
