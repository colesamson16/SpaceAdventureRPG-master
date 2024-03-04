#pragma once

#include <string>
using namespace std;

class Merchant {
private: 
	/* attributes of Merchant class */
    int merchantID;
    string merchantName;
    string merchantPlanet;
	int merchantInventorySize;
	int merchantHealth;

public:
	/* Merchant class constructor */
	Merchant(int id);

	/* setter functions of Merchant class */
	void setMerchantID(int id);
	void setMerchantName(string name);
	void setMerchantPlanet(string planet);
	void setMerchantInventorySize(int inventorySize);
	void setMerchantHealth(int health);

	/* getter functions of Merchant class */
	int getMerchantID();
	string getMerchantName();
	string getMerchantPlanet();
	int getMerchantInventorySize();
	int getMerchantHealth();

	/* in-game functions involving the Merchant */
	void merchantInteract();
	void merchantSell();
	void merchantBuy();
};
