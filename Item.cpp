#include "Item.h"

/* implementation of class Merchant constructor */
Item::Item(int id) {
    this->itemID = id;
    this->itemType = "Item";
}

/* implementation of setter methods of Item class*/
Item::Item() {
    this->itemType = "Item";
}

void Item::setItemID(int id) {
    this->itemID = id;
}

void Item::setItemName(string itemName) {
    this->itemName = itemName;
}

void Item::setItemValue(int itemValue) {
    this->itemValue = itemValue;
}

void Item::setItemInventorySize(int itemSize) {
    this->itemInventorySize = itemSize;
}

void Item::setItemType(string itemType) {
    this->itemType = itemType;
}

void Item::setIsStackable(bool isStackable) {
    this->isStackable = isStackable;
}

/* implementation of getter methods of Item class*/
int Item::getItemID() {
    return this->itemID;
}

string Item::getItemName() {
    return this->itemName;
}

int Item::getItemValue() {
    return this->itemValue;
}

int Item::getItemInventorySize() {
    return this->itemInventorySize;
}

bool Item::getIsStackable() {
    return this->isStackable;
}

string Item::getItemType() {
    return this->itemType;
}
