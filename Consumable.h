#ifndef SEED_RPG_CONSUMABLE_H
#define SEED_RPG_CONSUMABLE_H

#include <string>
#include "Item.h"
using namespace std;

class Consumable : public Item {
private:
    /* attributes of Consumable class */
    int healthRegen;
    int shieldRegen;
    int healthBoost;
    int shieldBoost;

public:
    /* Consumable class constructor */
    Consumable(int id);
    Consumable(Item item);

    /* setter functions of Consumable class */
    void setHealthRegen(int healthRegen);
    void setShieldRegen(int shieldRegen);
    void setHealthBoost(int healthBoost);
    void setShieldBoost(int shieldBoost);

    /* getter functions of Consumable class */
    int getHealthRegen();
    int getShieldRegen();
    int getHealthBoost();
    int getShieldBoost();
};

#endif //SEED_RPG_CONSUMABLE_H
