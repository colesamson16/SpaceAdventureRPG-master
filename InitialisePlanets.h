#ifndef SEED_RPG_INITIALISEPLANETS_H
#define SEED_RPG_INITIALISEPLANETS_H

#include <vector>

#include "Planet.h"

using namespace std;

class InitialisePlanets {
public:
    // delcaring vector named planetsPool, pushing planets into the vector
    vector<Planet> planetsPool;

    // declaring constructor
    InitialisePlanets();
    void initialisePlanet();
    // Planet initialisePlanet(int PlanetID);
};

#endif //SEED_RPG_INITIALISEPLANETS_H
