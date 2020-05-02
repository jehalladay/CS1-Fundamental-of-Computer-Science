#include <cstring>
#include <iostream>
#include <iomanip>


using namespace std;

void inputCandidates(string [], int []);
void sortCandidates(string[], int[]);
void percentageVote(string[], int[], double[]);

int main() {

    const int listSize = 5;
    int votes[listSize];
    double percentages[listSize];
    string names[listSize];

    inputCandidates(names, votes);
    sortCandidates(names, votes);



    return 0;
};




void inputCandidates(string names[], int votes[]){

    cout << "This program calculates vote percentages. Please input 5 candidates and their respective vote totals" << endl;

    for (int i = 0; i < 5; i++) {
    cout << "Candidate " << i+1 << ":\t";
    cin >> names[i];
    cout << "\tVotes:\t";
    cin >> votes[i];
    };
};


void sortCandidates(string names[], int votes[]){

    const int tempSize = 5;
    int tempVotes[tempSize], tempInt;
    string tempNames[tempSize], tempString;


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 0) {
                tempVotes[0] = votes[0];
                tempNames[0] = names[0];
            } else if (votes[j] > tempVotes[j-1]) {
                tempString = tempNames[j-1];
                tempInt = tempVotes[j-1];

                tempNames[j-1] = names[j];
                tempVotes[j-1] = votes[j];

                tempNames[j] = tempString;
                tempVotes[j] = tempInt;
                
            };
        };
    };

    for (int k = 0; k < 5; k++) {
        names[k] = tempNames[k];
        votes[k] = tempVotes[k];
    };

};


void percentageVote(string names[], int votes[], double percentages[]) {

    double sumVotes = 0;

    for (int i = 0; i < 5; i++) {
        sumVotes += votes[i];

    };


};

