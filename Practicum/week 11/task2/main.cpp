#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

char examGrade(int score);

int main()
{
    char *keyString;
    int noOfQuestions;

    char *answerString;
    char ID[9], ch;

    int score, len, i;

    ifstream infile;
    ofstream outfile;

    infile.open("Task2.txt");
    if(!infile){
        cout << "Could not open file, please try again" << endl;
        exit(1);
    }

    cout << "entre the number of questions in the test: ";
    cin >> noOfQuestions;
    cout << endl;

    keyString = new char[noOfQuestions+1];
    answerString = new char[noOfQuestions+1];

    cout << "Processing Data" << endl;
    
    infile.get(keyString, noOfQuestions + 1);

    cout << "Key answer is: " << keyString << endl;

    infile >> ID;
    infile.get(ch);
    infile.get(answerString, noOfQuestions+1);

    while(infile.good()) {
    // while(!infile.eof()) {
    // while(infile) {
        len = strlen(answerString);

        for (i = 0; i<noOfQuestions; i++) {
            answerString[i] = ' ';
        };

        answerString[noOfQuestions] = '\0';

        score = 0;

        for(i = 0; i < noOfQuestions; i++) {
            if(answerString[i] != ' ') {
                if(answerString[i] == keyString[i]) {
                    score += 2;
                } else {
                    score--;
                };
            };
        };

        cout << ID << ":\t" << answerString << "\t" << score << examGrade(score) << endl;
    };



    return 0;
};

char examGrade(int score) {
    char grade = 'k';


    return grade;
}