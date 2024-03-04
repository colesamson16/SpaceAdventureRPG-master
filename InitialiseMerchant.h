#ifndef SEED_RPG_INITIALISEMERCHANT_H
#define SEED_RPG_INITIALISEMERCHANT_H

#include <vector>

#include "Merchant.h"

using namespace std;

class InitialiseMerchants {
public:
    // delcaring vector named merchantPool, pushing merchants into the vector
    vector<Merchant> merchantPool;

    // declaring constructor
    InitialiseMerchants();
    void initialiseMerchant();

};

#endif //SEED_RPG_INITIALISEMERCHANT_H
