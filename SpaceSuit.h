#ifndef SEED_RPG_SPACESUIT_H
#define SEED_RPG_SPACESUIT_H

#include <string>
#include "Item.h"
using namespace std;

class SpaceSuit : public Item {
private:
    /* attributes of SpaceSuit class */
    // more attributes for this might come up
    int handleTemp;
    int handleRad;
    int handleOxy;

public:
    /* SpaceSuit class constructor */
    SpaceSuit(int id);
    SpaceSuit(Item item);

    /* setter functions of SpaceSuit class */
    void setHandleTemp(int handleTemp);
    void setHandleRad(int handleRad);
    void setHandleOxy(int handleOxy);

    /* getter functions of SpaceSuit class */
    int getHandleTemp();
    int getHandleRad();
    int getHandleOxy();
};

#endif //SEED_RPG_SPACESUIT_H
