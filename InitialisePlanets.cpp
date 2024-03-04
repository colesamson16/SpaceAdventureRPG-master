#include "InitialisePlanets.h"
#include "database_manager.cpp"

// this was moved from header file
static int toInt(string* s) {
    return atoi((s->c_str())); // converts strings to integers
}

InitialisePlanets::InitialisePlanets() {
    // constructor for initialising planets
    this->planetsPool = {};

    // implementing initialiseplanets class
    this->initialisePlanet();
}

void InitialisePlanets::initialisePlanet() {
    for (int i = 1; i < DatabaseManager::countRows("Planet")+1; i++) {
        vector<string> data = DatabaseManager::getNthRowFromPlanet(i);
        Planet planet(toInt(&data[0]));
        planet.setPlanetName(data[1]);
        planet.setPlanetRadiation(data[2]);
        planet.setPlanetOxygen(data[3]);
        planet.setPlanetTemperature(data[4]);
        planet.setPlanetWeatherChance(data[5]);
        planet.setPlanetWeatherType(data[6]);
        this->planetsPool.push_back(planet);
    }
}
