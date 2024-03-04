#ifndef SEED_RPG_SHIP_H
#define SEED_RPG_SHIP_H

#include <string>
using namespace std;

class Ship {
    /* attributes of Ship class */
    int shipID;
    int shipHealth;
    int shipShield;
    int shipThrusterLevel;
    // this will affect how long it takes to travel to another plant
    int shipCrewSize;
    int shipInventorySize;
    int shipLevel;
    int shipWeaponLevel;
    string shipOwner;
    string shipType;
    int shipExperience;

public:
    /* Ship class constructor */
    Ship(int id);

    /* setter functions of Ship class */
    void setShipID(int shipID);
    void setShipHealth(int shipHealth);
    void setShipShield(int shipShield);
    void setShipThrusterLevel(int shipThruster);
    void setShipCrewSize(int shipCrewSize);
    void setShipInventorySize(int shipInventorySize);
    void setShipLevel(int shipLevel);
    void setShipWeaponLevel(int shipWeaponLevel);
    void setShipOwner(string shipOwner);
    void setShipType(string shipType);
    void setShipExperience(int shipExperience);

    /* getter functions of Ship class */
    int getShipID();
    int getShipHealth();
    int getShipShield();
    int getShipThrusterLevel();
    int getShipCrewSize();
    int getShipInventorySize();
    int getShipLevel();
    int getShipWeaponLevel();
    string getShipOwner();
    string getShipType();
    int getShipExperience();
};

#endif //SEED_RPG_SHIP_H
