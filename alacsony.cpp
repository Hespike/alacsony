#include <string>

using namespace std;

struct Ember {
    string n;
    unsigned int magassag;
};

bool operator<(const Ember& e1, const Ember& e2) {
    if (e1.magassag < e2.magassag) {
        return true;
    } else {
        return false;
    }
}
bool operator>(const Ember& e1, const Ember& e2) {
    if (e1.magassag > e2.magassag) {
        return true;
    } else {
        return false;
    }
}

/*
#include <string>

using namespace std;

struct Ember {
    string n;
    unsigned int magassag;
};

bool operator<(const Ember& e1, const Ember& e2) {
    if (e1.magassag < e2.magassag) {
        return true;
    }

    return false;
}

bool operator>(const Ember& e1, const Ember& e2) {
    if (e1.magassag > e2.magassag) {
        return true;
    }

    return false;
}
*/
