#include <iostream>
#include <cstdlib>
#include "randLib.h"

using namespace std;

int diceRoll();
int cointoss();


int main (int argc, const char * argv[]) {

    cout << "Hello World" << endl;

    return 0;
};



int diceRoll() {
    return (irand(1, 6)+irand(1,6));
};


int coinToss() {
    int i = 0;

    while (drand() < 0.5) {
        i++;
    };

    return i;
};