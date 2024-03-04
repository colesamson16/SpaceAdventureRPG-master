#include "Merchant.h"

/* implementation of class Merchant constructor */
Merchant::Merchant(int id) {
    this->merchantID = id;
}

/* implementation of setter methods of Merchant class */
void Merchant::setMerchantID(int id) {
    this->merchantID = id;
}

void Merchant::setMerchantName(string name) {
    this->merchantName = name;
}

void Merchant::setMerchantPlanet(string planet) {
    this->merchantPlanet = planet;
}

void Merchant::setMerchantInventorySize(int inventorySize) {
    this->merchantInventorySize = inventorySize;
}

void Merchant::setMerchantHealth(int health) {
    this->merchantHealth = health;
}

/* implementation of getter methods of Merchant class */
int Merchant::getMerchantID() {
    return this->merchantID;
}

string Merchant::getMerchantName() {
    return this->merchantName;
}

string Merchant::getMerchantPlanet() {
    return this->merchantPlanet;
}

int Merchant::getMerchantInventorySize() {
    return this->merchantInventorySize;
}

int Merchant::getMerchantHealth() {
    return this->merchantHealth;
}

void Merchant::merchantInteract() {
}

void Merchant::merchantSell() {
}

void Merchant::merchantBuy() {
}
