#ifndef SEED_RPG_INITIALISESHIPS_H
#define SEED_RPG_INITIALISESHIPS_H

#include <vector>

#include "Ship.h"

using namespace std;

class InitialiseShips {
public:
    // delcaring vector named shipPool, pushing ships into the vector
    vector<Ship> shipsPool;

    // declaring constructor 
    InitialiseShips();

    void initialiseShips();
    // Ships initialiseShips(int ShipID);
};

#endif //SEED_RPG_INITIALISESHIPS_H
