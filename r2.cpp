

#include <iostream>
#include <vector>
using namespace std;


class Red {
public:
    int level;
};





int main() {





    string yep;
    while (yep != "y"){

        cout << "yep?";
        cin >> yep;

        vector <Red> red_soldier;

        Red* r1 = new Red;

        int selection;
        cout << "Select level (1-100) " << endl;
        cin >> selection;

        r1->level = 20;

        red_soldier.push_back(*r1);

        cout << red_soldier[0].level;

    }

    return 0;
}
