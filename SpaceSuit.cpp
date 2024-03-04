#include "SpaceSuit.h"

SpaceSuit::SpaceSuit(int id) : Item(id) {
    this->setItemType("SpaceSuit");
}

/* implementation of class SpaceSuit constructor*/
SpaceSuit::SpaceSuit(Item item){
    this->setItemID(item.getItemID());
    this->setItemType("SpaceSuit");
    this->setItemName(item.getItemName());
    this->setItemInventorySize(item.getItemInventorySize());
    this->setIsStackable(item.getIsStackable());
    this->setItemValue(item.getItemValue());
}

/* implementation of setter methods for class Weapon */
void SpaceSuit::setHandleTemp(int handleTemp) {
    this->handleTemp = handleTemp;
}

void SpaceSuit::setHandleRad(int handleRad) {
    this->handleRad = handleRad;
}

void SpaceSuit::setHandleOxy(int handleOxy) {
    this->handleOxy = handleOxy;
}

/* implementation of getter functions for class Weapon */
int SpaceSuit::getHandleTemp() {
    return this -> handleTemp;
}

int SpaceSuit::getHandleRad() {
    return this -> handleRad;
}

int SpaceSuit::getHandleOxy() {
    return this -> handleOxy;
}
