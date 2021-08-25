
// HEADER

class Navy : public Soldier {
    public:
        Navy(int);
        int level;
        string soldier_type;
        string name;
        string rank ;
};
class AirForce : public Soldier {
    public:
        AirForce(int);
        int level;
        string soldier_type;
        string name;
        string rank ;
};
class SpecForces : public Soldier {
    public:
        SpecForces(int);
        int level;
        string soldier_type;
        string name;
        string rank ;
};


// IMPLEM


Navy::Navy(int level) : Soldier() {
    static int navy_counter = 1;
    this->level = level;
    soldier_type = "Navy";
    string name = "Navy soldier " + navy_counter++;
    string rank = Soldier.get_rank(level);
}

AirForce::AirForce(int level) : Soldier() {
    static int airforce_counter = 1;
    this->level = level;
    soldier_type = "Air Force";
    string name = "Air Force soldier " + airforce_counter++;
    string rank = Soldier.get_rank(level);
}

SpecForces::SpecForces(int level) : Soldier() {
    static int specforces_counter = 1;
    this->level = level;
    soldier_type = "Spec Forces";
    string name = "Spec Forces soldier " + specforces_counter++;
    string rank = Soldier.get_rank(level);
}

Navy navy_soldier[20];
AirForce airforce_soldier[20];
SpecForces specforces_soldier[20];
