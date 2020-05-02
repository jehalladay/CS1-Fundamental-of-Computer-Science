#include <stdlib>

double drand() {
    return (double)rand()/(RAND_MAX+1);
};

int irand(int low, int high) {
    return (int)((high-low+1)*drand()+low);
};

char crand(char low, char high) {
    return (char)((high-low+1)*drand()+low);
};