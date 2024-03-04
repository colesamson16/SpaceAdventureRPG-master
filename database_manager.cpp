#include "libsqlite.hpp" // C++ wrapper for sqlite - https://github.com/glycos/libsqlitepp/blob/master/libsqlite.hpp
#include <vector>
#include <string>

using namespace std;

class DatabaseManager {
public:
    // static limits the scope of the function, also prevents class initialisation
    static vector<string> getNthRowFromItems(int n) {
        vector<string> data; // vector for data
        sqlite::sqlite db("SEED_Database.db"); // connection to the database
        auto cursor = db.get_statement(); // creating query
        string query = "SELECT * FROM Items WHERE item_id = " + to_string(n);
        cursor->set_sql(query);
        cursor->prepare(); // executing query

        if (cursor->step()) {
            string item_id = cursor->get_text(0);
            string item_name = cursor->get_text(1);
            string item_value = cursor->get_text(2);
            string item_inventory_size = cursor->get_text(3);
            string item_stackable = cursor->get_text(4);
            string item_type = cursor->get_text(5);

            // storing separate data values in vector called data
            data = {item_id, item_name, item_value, item_inventory_size, item_stackable, item_type};
        }
        return data;
    }

    static vector<string> getNthRowFromConsumable(int n) {
        vector<string> data;
        sqlite::sqlite db("SEED_Database.db");
        auto cursor = db.get_statement();
        string query = "SELECT * FROM Consumables WHERE consumable_id = " + to_string(n);
        cursor->set_sql(query);
        cursor->prepare();

        if (cursor->step()) {
            string consumable_id = cursor->get_text(0);
            string healthRegen = cursor->get_text(1);
            string shieldRegen = cursor->get_text(2);
            string healthBoost = cursor->get_text(3);
            string shieldBoost = cursor->get_text(4);
            string consumable_item_fk = cursor->get_text(5);

            data = {consumable_id, healthRegen, shieldRegen, healthBoost, shieldBoost, consumable_item_fk};
        }
        return data;
    }

    static vector<string> getNthRowFromWeapons(int n) {
        vector<string> data;
        sqlite::sqlite db("SEED_Database.db");
        auto cursor = db.get_statement();
        string query = "SELECT * FROM Weapons WHERE weapon_id = " + to_string(n);
        cursor->set_sql(query);
        cursor->prepare();

        if (cursor->step()) {
            string weapon_id = cursor->get_text(0);
            string weapon_damage = cursor->get_text(1);
            string weapon_level = cursor->get_text(2);
            string weapon_experience = cursor->get_text(3);
            string weapon_critchance = cursor->get_text(4);
            string weapon_attackmoves = cursor->get_text(5);
            string weapon_hitchance = cursor->get_text(6);
            string weapon_item_fk = cursor->get_text(7);

            data = {weapon_id, weapon_damage, weapon_level, weapon_experience, weapon_critchance, weapon_attackmoves,
                    weapon_hitchance, weapon_item_fk};
        }
        return data;
    }

    static vector<string> getNthRowFromSpaceSuits(int n) {
        vector<string> data;
        sqlite::sqlite db("SEED_Database.db");
        auto cursor = db.get_statement();
        string query = "SELECT * FROM SpaceSuits WHERE spacesuit_id = " + to_string(n);
        cursor->set_sql(query);
        cursor->prepare();

        if (cursor->step()) {
            string spacesuit_id = cursor->get_text(0);
            string handleTemp = cursor->get_text(1);
            string handleRad = cursor->get_text(2);
            string handleOxy = cursor->get_text(3);
            string spacesuit_item_fk = cursor->get_text(4);

            data = {spacesuit_id, handleTemp, handleRad, handleOxy, spacesuit_item_fk};
        }
        return data;
    }

    static vector<string> getNthRowFromEntity(int n) {
        vector<string> data;
        sqlite::sqlite db("SEED_Database.db");
        auto cursor = db.get_statement();
        string query = "SELECT * FROM Entity WHERE entity_id = " + to_string(n);
        cursor->set_sql(query);
        cursor->prepare();

        if (cursor->step()) {
            string entity_id = cursor->get_text(0);
            string entity_name = cursor->get_text(1);
            string entity_health = cursor->get_text(2);
            string entity_attack_damage = cursor->get_text(3);
            string entity_speed = cursor->get_text(4);
            string entity_level = cursor->get_text(5);
            string entity_type = cursor->get_text(6);

            data = {entity_id, entity_name, entity_health, entity_attack_damage, entity_speed, entity_level, entity_type};
        }
        return data;
    }

    static vector<string> getNthRowFromPlayer(int n) {
        vector<string> data;
        sqlite::sqlite db("SEED_Database.db");
        auto cursor = db.get_statement();
        string query = "SELECT * FROM Player WHERE player_id = " + to_string(n);
        cursor->set_sql(query);
        cursor->prepare();

        if (cursor->step()) {
            string player_id = cursor->get_text(0);
            string player_inventory_size = cursor->get_text(1);
            string player_currency = cursor->get_text(2);
            string player_experience = cursor->get_text(3);
            string player_entity_fk = cursor->get_text(4);

            data = {player_id, player_inventory_size, player_currency, player_experience, player_entity_fk};
        }
        return data;
    }

    static vector<string> getNthRowFromEnemy(int n) {
        vector<string> data;
        sqlite::sqlite db("SEED_Database.db");
        auto cursor = db.get_statement();
        string query = "SELECT * FROM Enemy WHERE enemy_id = " + to_string(n);
        cursor->set_sql(query);

        cursor->prepare();
        data.push_back(to_string(n));

        if (cursor->step()) {
            string enemy_id = cursor->get_text(0);
            string enemy_entity_fk = cursor->get_text(1);
            data = {enemy_id, enemy_entity_fk};
        }
        return data;
    }

    static vector<string> getNthRowFromShips(int n) {
        vector<string> data;
        sqlite::sqlite db("SEED_Database.db");
        auto cursor = db.get_statement();
        string query = "SELECT * FROM Ships WHERE ship_id = " + to_string(n);
        cursor->set_sql(query);
        cursor->prepare();

        if (cursor->step()) {
            string ship_id = cursor->get_text(0);
            string ship_health = cursor->get_text(1);
            string ship_shield = cursor->get_text(2);
            string ship_thruster_level = cursor->get_text(3);
            string ship_crew_size = cursor->get_text(4);
            string ship_inventory_size = cursor->get_text(5);
            string ship_level = cursor->get_text(6);
            string ship_weapon_level = cursor->get_text(7);
            string ship_owner = cursor->get_text(8);
            string ship_type = cursor->get_text(9);
            string ship_experience = cursor->get_text(10);

            data = {ship_id, ship_health, ship_shield, ship_thruster_level, ship_crew_size, ship_inventory_size, ship_level,
                    ship_weapon_level, ship_owner, ship_type, ship_experience};
        }
        return data;
    }

    static vector<string> getNthRowFromPlanet(int n) {
        vector<string> data;
        sqlite::sqlite db("SEED_Database.db");
        auto cursor = db.get_statement();
        string query = "SELECT * FROM Planet WHERE planet_id = " + to_string(n);
        cursor->set_sql(query);
        cursor->prepare();

        if (cursor->step()) {
            string planet_id = cursor->get_text(0);
            string planet_name = cursor->get_text(1);
            string planet_radiation = cursor->get_text(2);
            string planet_oxygen = cursor->get_text(3);
            string planet_temperature = cursor->get_text(4);
            string planet_weather_chance = cursor->get_text(5);
            string planet_weather_type = cursor->get_text(6);

            data = {planet_id, planet_name, planet_radiation, planet_oxygen, planet_temperature, planet_weather_chance,
                    planet_weather_type};
        }
        return data;
    }

    static vector<string> getNthRowFromMerchant(int n) {
        vector<string> data;
        sqlite::sqlite db("SEED_Database.db");
        auto cursor = db.get_statement();
        string query = "SELECT * FROM Merchants WHERE merchant_id = " + to_string(n);
        cursor->set_sql(query);
        cursor->prepare();

        if (cursor->step()) {
            string merchant_id = cursor->get_text(0);
            string merchant_name = cursor->get_text(1);
            string merchant_planet = cursor->get_text(2);

            data = {merchant_id, merchant_name, merchant_planet};
        }
        return data;
    }

    // counts the row for selected table
    static int countRows(string tableName) {
        sqlite::sqlite db("SEED_Database.db");
        auto cursor = db.get_statement();
        string query = "SELECT * FROM " + tableName;
        cursor->set_sql(query);
        cursor->prepare();
        int numOfRows = 0;
        while(cursor->step()){
            numOfRows += cursor.use_count();
        }
        return numOfRows;
    }
};
