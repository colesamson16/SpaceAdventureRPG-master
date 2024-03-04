#include <Windows.h>
#include <iostream>
#include <vector>
#include <string>
#include "Weapon.h"
#include "Player.h"
#include "Enemy.h"
#include "Entity.h"
#include "InitialiseItems.h"
#include "Ship.h"
#include "InitialiseShips.h"

using namespace std;
string itemtype;


Weapon weapon(0);
Enemy enemy(0);
Player player;
Item item;
InitialiseItems initialiseItems;
InitialiseShips initialiseShips;
Ship ship(0);


int MoveSelector()
{

}

int Attack ()
{

    //Entity entity();
    string CurrentEnemy;
    string CurrentEnemyWeight;

    vector<string> EnemyWeight ={"(LIGHT)","(AVERAGE)","(HEAVY)"};
    vector<string> EnemyType = {"Igni","Aridus","Swampy","Nuclei","Frost-Zomb"};

    cout << "Battle has been entered" << endl;


    int Generate = rand() % 100 + 1;

    if (Generate > weapon.getWeaponHitChance() / enemy.getEntitySpeed())
    {
        cout << "You have missed!!" << endl;
    }

    else if (Generate <= weapon.getWeaponCritChance() )
    {
        weapon.setWeaponCritChance(weapon.getWeaponDamage() * 1.5);
        enemy.setEntityHealth( enemy.getEntityHealth("current") -
        weapon.getWeaponCritChance(), "current");
        cout << "Critical hit!!" << endl;
    }

    else
    {
        enemy.damageEntity(weapon.getWeaponDamage());
        cout << "Hit!!" << endl;
    }

    if (enemy.isEntityDead() == true)
    {
        for (int i = 0; i < EnemyType.size(), i++;)
        {
            if (EnemyType[i] == enemy.getEntityType())
            {
                for (int i = 0; i < EnemyWeight.size(), i++;)
                {
                    if (EnemyWeight[i] == CurrentEnemyWeight)
                    {
                        player.setPlayerCurrency(player.getPlayerCurrency() + i + 1);
                        player.setPlayerExperience(player.getPlayerExperience() + i + 1);
                    }
                }
            }
        }
    }
}

int ShipAttack ()
    {

        int ShipCritChance = 5;
        vector<string> EnemyShipWeight ={"Frigate","Warship","Destroyer"};
        cout << "Ship Battle has been entered" << endl;

        int Generate = rand() % 100 + 1;

        if (Generate > weapon.getWeaponHitChance() / )
        {
            cout << "You have missed!!" << endl;
        }

        else if (Generate <= ShipCritChance)
        {
            weapon.setWeaponCritChance(weapon.getWeaponDamage() * 1.5);
            enemy.setEntityHealth( enemy.getEntityHealth("current") -
            weapon.getWeaponCritChance(), "current");
            cout << "Critical hit!!" << endl;
        }

        else
        {
            enemy.damageEntity(weapon.getWeaponDamage());
            cout << "Hit!!" << endl;
        }

        for (int i = 1; i < initialiseShips.shipsPool.size(); i++)
        {
            if ( initialiseShips.shipsPool[i].getShipHealth() == 0)
            {
                for (int i = 0; i < EnemyShipWeight.size(), i++;)
                {
                    if (EnemyShipWeight[i] == ship.getShipOwner())
                    {
                        player.setPlayerCurrency(player.getPlayerCurrency() + i + 1);
                        ship.setShipExperience(ship.getShipExperience() + i + 1);
                    }
                }
            }
        }
    }
}

int EnemyAttack()
{
        int Generate = rand() % 100 + 1;

        if (Generate > weapon.getWeaponHitChance() )
        {
            cout << "The Enemy has missed!!" << endl;
        }

        else if (Generate <= weapon.getWeaponCritChance() )
        {
            player.damageEntity(weapon.getWeaponDamage() * 1.5);
            cout << "The Enemy has hit!!" << endl;
        }

        else;
        {
            player.damageEntity(weapon.getWeaponDamage() * NegativeEffects);
        }
    }
}

int Consumable()
{
        if (item.getItemType() == "ShieldBoost")
        {

            Shields  = Shields + initialiseItems.consumablesPool[0].getShieldBoost()

            if (Shields >  150)
            {
                Shields = 150;
                return Shields;
            }

            return Shields;
        }

        if (item.getItemType() == "HealthBoost")
        {

            player.setEntityHealth(player.getEntityHealth("current") +
            initialiseItems.consumablesPool[0].getHealthBoost());

            if ( player.getEntityHealth("current") > 150)
            {
                player.setEntityHealth(150);
            }
        }

        if (item.getItemType() == "Cosmic Apple")
        {
            player.setEntityHealth(player.getEntityHealth("current" )
            + initialiseItems.consumablesPool[2].getHealthRegen());
        }


        if (item.getItemType() == "Stellar Bread")
        {
            player.setEntityHealth(initialiseItems.consumablesPool[3].getHealthBoost());
        }

        if (item.getItemType() == "Neutron Beef")
        {
            initialiseItems.consumablesPool[4].getHealthBoost();
        }
    }

}

int FightMenu()
{

    if (itemtype == "Weapon")
    {
        Attack();
    }

    else if (itemtype == "Consumable")
    {
        Consumable();
    }

    else if (Attack())
    {
        EnemyAttack();
    }

    else;
    {
        cout << "Please choose a weapon or consumable" << endl;
    }
}