#ifndef SEED_RPG_INITIALISEITEMS_H
#define SEED_RPG_INITIALISEITEMS_H

#include <string>
#include <vector>
#include <tuple>

#include "Item.h"
#include "Weapon.h"
#include "Consumable.h"
#include "SpaceSuit.h"

using namespace std;

class InitialiseItems {
public:
    // tuple used to allow different data types on pointers
    tuple<vector<Weapon>*, vector<Consumable>*, vector<SpaceSuit>*> ItemsPool;

    vector<Weapon> weaponsPool;
    vector<Consumable> consumablesPool;
    vector<SpaceSuit> spaceSuitsPool;

    InitialiseItems();
    Item initialiseItem(int itemID);
    void initialiseWeapons();
    void initialiseConsumables();
    void initialiseSpaceSuits();
};

#endif //SEED_RPG_INITIALISEITEMS_H
