
//IMPLEMENTATION FILE

#include "First_header.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;



void Army::set_level(int new_level) {
    level = new_level;
}

string Army::get_rank(int level) {
    vector <string> soldier_rank_list(100);
    vector <string> soldier_ranks {"Private", "Corporal", "Lance Corporal", "Sergeant", "Lieutenant", "Commander", "Captain", "Major", "Colonel", "General"};
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            soldier_rank_list[i*10+j] = soldier_ranks[i];
        }
    }
    soldier_rank = soldier_rank_list[level];
    return soldier_rank_list[level];
}

Army::Army() {
    int level;
    static int army_counter = 1;
    string soldier_rank;
    string soldier_name = "Army " + soldier_rank + " lvl " + to_string(level) + " (#" + to_string(army_counter) + ")";
    army_counter++;
}


void Navy::set_level(int new_level) {
    level = new_level;
}

string Navy::get_rank(int level) {
    vector <string> soldier_rank_list(100);
    vector <string> soldier_ranks {"Private", "Corporal", "Lance Corporal", "Sergeant", "Lieutenant", "Commander", "Captain", "Major", "Colonel", "General"};
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            soldier_rank_list[i*10+j] = soldier_ranks[i];
        }
    }
    soldier_rank = soldier_rank_list[level];
    return soldier_rank_list[level];
}

Navy::Navy() {
    int level;
    static int navy_counter = 1;
    soldier_type = "Navy";
    string soldier_name = "Navy soldier " + to_string(navy_counter);
    string soldier_rank;
    navy_counter++;
}

// Soldier - Private (0-9), Corporal (10-19), Lance Corporal (20-29), Sergeant (30-39), Lieutenant (40-49), Commander (50-59), Captain (60-69), Major (70-79), Colonel (80-89), General (90-99)


void Grunt::set_level(int new_level) {
    level = new_level;
}
string Grunt::get_rank(int level) {
    vector <string> grunt_rank_list(40);
    vector <string> grunt_ranks {"Minor", "Major", "Heavy", "Ultra"};
    for (int i; i < 4; i++) {
        for (int j; j < 10; j++) {
            grunt_rank_list[i*10+j] = grunt_ranks[i];
        }
    }
    grunt_rank = grunt_rank_list[level];
    return grunt_rank_list[level];
}
Grunt::Grunt() {
    int level;
    static int grunt_counter = 1;
    monster_type = "Grunt";
    string grunt_name = "Grunt monster " + to_string(grunt_counter);
    string grunt_rank;
    grunt_counter++;
}
void Elite::set_level(int new_level) {
    level = new_level;
}
string Elite::get_rank(int level) {
    vector <string> elite_rank_list(50);
    vector <string> elite_ranks {"Storm", "Ranger", "Ultra", "Zealot", "Commander"};
    for (int i; i < 5; i++) {
        for (int j; j < 10; j++) {
            elite_rank_list[i*10+j+20] = elite_ranks[i];
        }
    }
    elite_rank = elite_rank_list[level];
    return elite_rank_list[level];
}
Elite::Elite() {
    int level;
    static int elite_counter = 1;
    monster_type = "Elite";
    string elite_name = "Elite monster " + to_string(elite_counter);
    string elite_rank;
    elite_counter++;
}


// Grunt - Minor (1-4), Imperial (5-9), Major (10-19), Heavy (20-29), Ultra (30-39)
// Elite - Storm (20-29), Ranger (30-39), Ultra (40-49), Zealot (50-59), Commander (60-69)
// Hunter - Blue (60-79), Gold (80-100)
















