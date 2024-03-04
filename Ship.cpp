#include "Ship.h"

/* implementation of class Ship constructor*/
Ship::Ship(int id) {
    this->shipID = id;
    this->shipType = "Ship";
}

/* implementation of class shipID*/
void Ship::setShipID(int shipID) {
    this->shipID = shipID;
}

/* implementation of setter methods for class Ship */
void Ship::setShipHealth(int shipHealth) {
    this->shipHealth = shipHealth;
}

void Ship::setShipShield(int shipShield) {
    this->shipShield = shipShield;
}

void Ship::setShipThrusterLevel(int shipThrusterLevel) {
    this->shipThrusterLevel = shipThrusterLevel;
}

void Ship::setShipCrewSize(int shipCrewSize) {
    this->shipCrewSize = shipCrewSize;
}

void Ship::setShipInventorySize(int shipInventorySize) {
    this->shipInventorySize = shipInventorySize;
}

void Ship::setShipLevel(int shipLevel) {
    this->shipLevel = shipLevel;
}

void Ship::setShipWeaponLevel(int shipWeaponLevel) {
    this->shipWeaponLevel = shipWeaponLevel;
}

void Ship::setShipOwner(string shipOwner) {
    this->shipOwner = shipOwner;
}

void Ship::setShipType(string shipType) {
    this->shipType = shipType;
}

void Ship::setShipExperience(int shipExperience) {
    this->shipExperience = shipExperience;
}

/* implementation of getter methods for class Ship */
int Ship::getShipID() {
    return this->shipID;
}

int Ship::getShipHealth() {
    return this->shipHealth;
}

int Ship::getShipShield() {
    return this->shipShield;
}

int Ship::getShipThrusterLevel() {
    return this->shipThrusterLevel;
}

int Ship::getShipCrewSize() {
    return this->shipCrewSize;
}

int Ship::getShipInventorySize() {
    return this->shipInventorySize;
}

int Ship::getShipLevel() {
    return this->shipLevel;
}

int Ship::getShipWeaponLevel() {
    return this->shipWeaponLevel;
}

string Ship::getShipOwner() {
    return this->shipOwner;
}

string Ship::getShipType() {
    return this->shipType;
}

int Ship::getShipExperience() {
    return this->shipExperience;
}
