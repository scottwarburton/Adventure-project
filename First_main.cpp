
// MAIN FILE

#include <iostream>
#include "First_header.h"
#include "First_implem.cpp"
#include <fstream>
#include <vector>
#include <cstdlib>
#include <conio.h>
using namespace std;


int soldiers_in_database = 0;
int monsters_in_database = 0;
void fight(string, string);
void create_soldier(vector <Army> &army_soldier, vector <Navy> &navy_soldier);
void create_monster(vector <Grunt> &grunt_monster, vector <Elite> &elite_monster);
void show_soldiers(vector <Army> &army_soldier, vector <Navy> &navy_soldier);
void show_monsters(vector <Grunt> &grunt_monster, vector <Elite> &elite_monster);
//void save_soldiers_to_file();
//void load_soldiers_from_file();
//void save_monsters_to_file();
//void load_monsters_from_file();
void require_enter();


vector <Army> army_soldier;
Army* a1 = new Army;

vector <Navy> navy_soldier;
Navy* n1 = new Navy;

vector <Grunt> grunt_monster;
Grunt* g1 = new Grunt;

vector <Elite> elite_monster;
Elite* e1 = new Elite;




int main() {

    cout << "Welcome to the arena" << endl << endl;

    string menu_option = "0";

    while (menu_option != "Exit") {

        cout << "Do you want to Create, Fight, Show, or Exit?" << endl;
        cin >> menu_option;
        cout << endl;


        if (menu_option == "Create") {          // CREATE

            string create_type;
            cout << "Soldier or Monster? " << endl;
            cin >> create_type;
            cout << endl;

            if (create_type == "Soldier") {         // CREATE SOLDIER


                create_soldier(army_soldier, navy_soldier);


            } else if (create_type == "Monster") {      // CREATE MONSTER


                create_monster(grunt_monster, elite_monster);

            }
        } else if (menu_option == "Fight") {            // FIGHT

            cout << "Soldiers to choose from" << endl;
            string soldier_selection;
            show_soldiers(army_soldier, navy_soldier);
            cout << "Select soldier (eg Army soldier 1): " << endl;
            cin >> soldier_selection;

            cout << "Monsters to choose from" << endl;
            string monster_selection;
            show_monsters(grunt_monster, elite_monster);
            cout << "Select monster (eg Grunt monster 1): " << endl;
            cin >> monster_selection;

            fight(soldier_selection, monster_selection);

        } else if (menu_option == "Show") {            // SHOW
            string show_type;
            cout << "Do you want to show Soldiers or Monsters? " << endl;
            cin >> show_type;
            cout << endl;
            if (show_type == "Soldiers") {
                show_soldiers(army_soldier, navy_soldier);
            } else if (show_type == "Monsters") {
                show_monsters(grunt_monster, elite_monster);
            }
        }
        require_enter();
        system("cls");
    }
    cout << "Game over" << endl;
    return 0;
}


void fight(string soldier_selection, string monster_selection) {                              // cin soldier and monster selected
    cout << soldier_selection << " fights against " << monster_selection << endl;
/*
    if (soldier.level >= monster.level) {
        cout << "soldier wins" << endl;
        //level +1
        //check rank
    } else {
        cout << "monster wins" << endl;
        //level +1
    }
*/
}


// SOLDIERS

void create_soldier(vector <Army> &army_soldier, vector <Navy> &navy_soldier) {


    string create_soldier_type;
    cout << "Army or Navy? " << endl;
    cin >> create_soldier_type;

    int selection;
    cout << "Select level (1-100) " << endl;
    cin >> selection;

    if (create_soldier_type == "Army") {
        a1->set_level(selection);
        army_soldier.push_back(*a1);
    } else if (create_soldier_type == "Navy") {
        n1->set_level(selection);
        navy_soldier.push_back(*n1);
    }

    cout << "Army size: " << army_soldier.size() << endl;
    cout << "Navy size: " << navy_soldier.size() << endl;

    soldiers_in_database++;

}

void show_soldiers(vector <Army> &army_soldier, vector <Navy> &navy_soldier) {

    if (soldiers_in_database > 0) {
        for (int j = 0; j < army_soldier.size(); j++) {
            cout << endl << "Army soldier " << (j+1) << endl;
            cout << "Level: " << army_soldier[j].level << endl;
            cout << "Rank: " << army_soldier[j].get_rank(army_soldier[j].level) << endl;
        }
        for (int j = 0; j < navy_soldier.size(); j++) {
            cout << endl << "Navy soldier " << (j+1) << endl;
            cout << "Level: " << navy_soldier[j].level << endl;
            cout << "Rank: " << navy_soldier[j].get_rank(navy_soldier[j].level) << endl;
        }
    } else {
        cout << "None created yet. " << endl;
    }
    cout << endl;
}

//MONSTERS

void create_monster(vector <Grunt> &grunt_monster, vector <Elite> &elite_monster) {


    string create_monster_type;
    cout << "Grunt or Elite? " << endl;
    cin >> create_monster_type;

    if (create_monster_type == "Grunt") {
        int selection;
        cout << "Select level (1-39) " << endl;
        cin >> selection;
        g1->set_level(selection);
        grunt_monster.push_back(*g1);
    } else if (create_monster_type == "Elite") {
        int selection;
        cout << "Select level (20-69) " << endl;
        cin >> selection;
        e1->set_level(selection);
        elite_monster.push_back(*e1);
    }

    cout << "Grunt size: " << grunt_monster.size() << endl;
    cout << "Elite size: " << elite_monster.size() << endl;

    monsters_in_database++;

}

void show_monsters(vector <Grunt> &grunt_monster, vector <Elite> &elite_monster) {

    if (monsters_in_database > 0) {
        for (int j = 0; j < grunt_monster.size(); j++) {
            cout << endl << "Grunt Monster " << (j+1) << endl;
            cout << "Level: " << grunt_monster[j].level << endl;
            cout << "Rank: " << grunt_monster[j].get_rank(grunt_monster[j].level) << endl;
        }
        for (int j = 0; j < elite_monster.size(); j++) {
            cout << endl << "Elite Monster " << (j+1) << endl;
            cout << "Level: " << elite_monster[j].level << endl;
            cout << "Rank: " << elite_monster[j].get_rank(elite_monster[j].level) << endl;
        }
    } else {
        cout << "None created yet. " << endl;
    }
    cout << endl;
}







/*

void save_soldiers_to_file() {
    ofstream file("soldiers_database.txt");                 // output file stream
    if (file.is_open()) {

        // save soldiers to file
        file << soldiers_in_database << endl;
        int j;
        for (j = 0; j < soldiers_in_database; j++) {
            file << army_soldier[j].soldier_name << endl;
            file << army_soldier[j].level << endl;
            file << army_soldier[j].soldier_rank << endl;

        }
        file.close();
    } else {
        cout << "Could not save" << endl;
    }
}


void save_monsters_to_file() {
    ofstream file("monsters_database.txt");
    if (file.is_open()) {
        // save monsters to file
        file << monsters_in_database << endl;
        array monster_arrays[3] = {grunt_monster, elite_monster, hunter_monster}
        int i, j = 0;
        for (monster_arrays[i]; i < 3; i++) {
            for (int j; j < monsters_in_database; j++) {
                file << (monster_arrays[i])[j].name << endl;
                file << (monster_arrays[i])[j].level << endl;
                file << monster_arrays[i].get_rank(monster_arrays[j].level) << endl;
            }
        }
        file.close();
    } else {
        cout << "Could not save" << endl;
    }
}


void load_soldiers_from_file() {
    ifstream file("soldiers_database.txt");                 // input file stream

    if (file.is_open()) {
        file >> soldiers_in_database;

        if (soldiers_in_database > 0) {

        int j;
        for (j = 0; j < soldiers_in_database; j++) {
            file >> army_soldier[j].soldier_name;
            file >> army_soldier[j].level;
            file >> army_soldier[j].soldier_rank;
        }


            cout << "File now loaded" << endl;
        } else {
            cout << "Database empty" << endl;
        }
    } else {
        cout << "Could not load" << endl;
    }
}


void load_monsters_from_file() {
    ifstream file("monsters_database.txt");

    if (file.is_open()) {
        file >> monsters_in_database;

        if (monsters_in_database > 0) {

            array monster_arrays[3] = {grunt_monster, elite_monster, hunter_monster}
            int i, j = 0;
            for (monster_arrays[i]; i < 3; i++) {
                for (int j; j < monsters_in_database; j++) {
                    file << (monster_arrays[i])[j].name << endl;
                    file << (monster_arrays[i])[j].level << endl;
                    file << monster_arrays[i].get_rank(monster_arrays[j].level) << endl;
                }
            }

            cout << "File now loaded" << endl;
        } else {
            cout << "Database empty" << endl;
        }
    } else {
        cout << "Could not load" << endl;
    }
}


void search_for_soldiers() {
    if (soldiers_in_database > 0) {
        string search_name;
        cout << "Search soldier name: " << endl;
        cin >> search_name;

        for (int i = 0; i < soldiers_in_database; i++) {

            if (search_name == army_soldier[i].soldier_name) {

                int j;
                for (j = 0; j < soldiers_in_database; j++) {
                                cout << "Soldier #: " << (j+1) << endl;
                                cout << "Name: " << army_soldier[j].soldier_name << endl;
                                cout << "Level: " << army_soldier[j].level << endl;
                                cout << "Rank: " << army_soldier[j].soldier_rank << endl;

                }
            }
            break;

        }
    } else {
        cout << "Database empty" << endl;
    }
}
*/
void require_enter() {

    cout << endl << "(Enter to continue)" << endl;
    while(getch() != 13);

}







