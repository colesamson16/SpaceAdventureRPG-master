#include "InitialiseMerchant.h"
#include "database_manager.cpp"

static int toInt(string* s) {
    return atoi((s->c_str())); // converts strings to integers
}

InitialiseMerchants::InitialiseMerchants() {
    // constructor for initialising planets
    this->merchantPool = {};

    this->initialiseMerchant();
}

void InitialiseMerchants::initialiseMerchant() {
    for (int i = 1; i < DatabaseManager::countRows("Merchants")+1; i++) {
        vector<string> data = DatabaseManager::getNthRowFromMerchant(i);
        Merchant merchant(toInt(&data[0]));
        merchant.setMerchantName(data[1]);
        merchant.setMerchantPlanet(data[2]);
        merchant.setMerchantInventorySize(6);
        merchant.setMerchantHealth(999999);
        // battling with the merchant might be fun
        this->merchantPool.push_back(merchant);
    }
}
