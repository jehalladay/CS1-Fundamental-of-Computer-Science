#include <iostream>

using namespace std;

int main() {
    int vertx1 = 0, verty1 = 0, vertx2 = 0, verty2 = 0, vertx3 = 0, verty3 = 0, vertx4 = 0, verty4 = 0;

    cin >> vertx1 >> verty1;
    cin >> vertx2 >> verty2;
    cin >> vertx3 >> verty3;

    if (vertx1 == vertx2) {
        vertx4 = vertx3;
    } else if (vertx1 == vertx3) {
        vertx4 = vertx2;
    } else {
        vertx4 = vertx1;
    }

    if (verty1 == verty2) {
        verty4 = verty3;
    } else if (verty1 == verty3) {
        verty4 = verty2;
    } else {
        verty4 = verty1;
    }
    cout << vertx4 << " " << verty4 << endl;



    return 0;
}