#include "Player.h"
#include "Entity.h"
#include "Planet.h"
#include "InitialisePlanets.h"

int Planet::radiation() {
    string radLevel;
    float radDamage;
    InitialisePlanets initialisePlanets;


    while (radDamage < 100)
    {
        radDamage =  ClockDiffer * radLevel;
        Sleep(10);
        return radDamage;
    }

    while (radLevel == low && radDamage < 200)
    {
        radDamage = radDamage + 0.1;
        Sleep(10);
        return radDamage;
    }

    while (radLevel == medium && radDamage < 200)
    {
        radDamage = radLevel + 0.5;
        Sleep(10);
        return radDamage;
    }

    while (radLevel == medium && radDamage < 200)
    {
        radDamage = radLevel + 1;
        Sleep(10);
        return radDamage;
    }



}

int Planet::Weather() {
    bool Acidrain;
    int Acidlevel;
    int WeatherDamage;
    int Generate;
    bool Level;
    int WeatherChance;

    while (Level == true)
    {
        int Generate = rand() % 100 + 1;
        Sleep(60000);
        return Generate;

    }
    // every 60 seconds a random number is generated

    if (Generate < WeatherChance)
    {
        Acidrain == true;
    }

    else;
    {
        Acidrain == false;
    }

    while (WeatherDamage < 200)
    {
        WeatherDamage =  Acidlevel + 5;
        Sleep(60000)
        return WeatherDamage;
    }
    // two columns needed in text file, weather type and chance
    // to be put in for loop to be made more efficient

}

int Planet::Oxygen() {
    int OxygenLevel; // needs to be imported from Player class
    int PlanetOxygen; // needs to be imported from Planet sql file
    int NegativeEffects;

    while (PlanetOxygen == none) // undeclared because each planet needs to be assigned an oxygen level on sql file
    {
        if (OxygenLevel != 0)
        {
            OxygenLevel = OxygenLevel - 10;
            Sleep(60000)
            return OxygenLevel;
        }

    }

    while (PlanetOxygen == low)
    {
        if(OxygenLevel != 0)
        {
            OxygenLevel = OxygenLevel - 5;
            Sleep(60000)
            return OxygenLevel;
        }

    }

    while (PlanetOxygen == medium)
    {
        return OxygenLevel;
    }

    while (PlanetOxygen == high)
    {
        if (OxygenLevel != 100)
        {
            OxygenLevel = OxygenLevel + 10;
            Sleep(60000);
            return OxygenLevel;
        }

    }

    while (PlanetOxygen == Perfect)
    {
        if (OxygenLevel != 100)
        {
            OxygenLevel = OxygenLevel + 20;
            Sleep(60000);
            return OxygenLevel;
        }

    }


    while (OxygenLevel <= 0)
    {
        NegativeEffects + 1;
        Sleep(120000)
        return NegativeEffects;
    }
}




