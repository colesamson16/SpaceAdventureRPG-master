#include "InitialiseShips.h"
#include "database_manager.cpp"

static int toInt(string* s) {
    return atoi((s->c_str())); // converts strings to integers
}

// implementing constructor for initialising ships
InitialiseShips::InitialiseShips() {
    this->shipsPool = {};

    this->initialiseShips();
}

void InitialiseShips::initialiseShips() {
    for (int i = 1; i < DatabaseManager::countRows("Ships")+1; i++) {
        vector<string> data = DatabaseManager::getNthRowFromShips(i);
        Ship ship(toInt(&data[0]));
        ship.setShipHealth(toInt(&data[1]));
        ship.setShipShield(toInt(&data[2]));
        ship.setShipThrusterLevel(toInt(&data[3]));
        ship.setShipCrewSize(toInt(&data[4]));
        ship.setShipInventorySize(toInt(&data[5]));
        ship.setShipLevel(toInt(&data[6]));
        ship.setShipWeaponLevel(toInt(&data[7]));
        ship.setShipOwner(data[8]);
        ship.setShipType(data[9]);
        ship.setShipExperience(0);
        this->shipsPool.push_back(ship);
    }

}
