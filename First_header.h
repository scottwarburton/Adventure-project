
// HEADER FILE

#pragma once
#include <iostream>
using namespace std;


class Army {
    public:
        int level;
        string soldier_type;
        string soldier_name;
        string soldier_rank ;
        void set_level(int);
        string get_rank(int);
        Army();

};

class Navy {
    public:
        int level;
        string soldier_type;
        string soldier_name;
        string soldier_rank ;
        void set_level(int);
        string get_rank(int);
        Navy();

};


class Grunt {
    public:
        int level;

        string monster_type;
        string grunt_name;
        string grunt_rank ;
        void set_level(int);
        string get_rank(int);
        Grunt();
};

class Elite {
    public:
        int level;

        string monster_type;
        string elite_name;
        string elite_rank ;
        void set_level(int);
        string get_rank(int);
        Elite();
};




