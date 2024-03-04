#pragma once

#include <string>

using namespace std;

class Item {
private:
    /* attributes of Item class */
    int itemID;
    string itemName;
    int itemValue;
    int itemInventorySize;
    bool isStackable;
    string itemType;

public:
    /* Item class constructor */
    Item();
    Item(int id);

    /* setter functions of Item class */
    void setItemID(int id);
    void setItemName(string itemName);
    void setItemValue(int itemValue);
    void setItemInventorySize(int itemSize);
    void setIsStackable(bool isStackable);
    void setItemType(string itemType);

    /* getter functions of Item class */
    int getItemID();
    string getItemName();
    int getItemValue();
    int getItemInventorySize();
    bool getIsStackable();
    string getItemType();
};
