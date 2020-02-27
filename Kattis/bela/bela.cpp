#include<iostream>

using namespace std;

int main() {
    int rounds = 0, counter = 0, points = 0;
    char dom = 'a', suit = 'a', card = 'a';

    cin >> rounds >> dom;

    for (counter = 0; counter < (rounds*4); counter++) {
        cin >> card >> suit;
        if (dom == suit) {
            switch (card) {
                case '9':
                points += 14;
                break;
                case 'T':
                points += 10;
                break;
                case 'J':
                points += 20;
                break;
                case 'Q':
                points += 3;
                break;
                case 'K':
                points += 4;
                break;
                case 'A':
                points += 11;
                break;
                default:
                points += 0;
                break;
            }
        } else {
            switch (card) {
                case '9':
                points += 0;
                break;
                case 'T':
                points += 10;
                break;
                case 'J':
                points += 2;
                break;
                case 'Q':
                points += 3;
                break;
                case 'K':
                points += 4;
                break;
                case 'A':
                points += 11;
                break;
                default:
                points += 0;
                break;
            }
        }
    } 

    cout << points << endl;



    return 0;
}