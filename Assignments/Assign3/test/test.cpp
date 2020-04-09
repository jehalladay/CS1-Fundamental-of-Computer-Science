#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cassert>
#include "../subs.h"

using namespace std;

int unittest(string fn){
    cout << "testing function: " << fn << endl;

    if (fn == "getCardName") {
        	int cardNo = 0;
            char cardName[20];
            char comp[20];
            


        	cardNo = 51;
            strcpy(comp, "Ace of Hearts\0");
            GetCardName(cardNo, cardName);
            assert(strcmp(cardName, comp) == 0);

        	cardNo = 0;
            strcpy(comp, "Two of Spades\0");
            GetCardName(cardNo, cardName);
            assert(strcmp(cardName, comp) == 0);

        	cardNo = 12;
            strcpy(comp, "Ace of Spades\0");
            GetCardName(cardNo, cardName);
            // cout << cardName << endl;
            assert(strcmp(cardName, comp) == 0);

    } else if (fn == "shuffleDeck") {
        return 0;
    };
                  
    cout << "Tests on " << fn << " passed" << endl;
    
    return 0;
};


// Step 8: Create Main function with instructions to run the program 
//         normally or run the tests based on the given arguments

int main(int argc, char* argv[]) 
{
    const int fnsSize = 2;
    string fns[fnsSize] = {"getCardName", "shuffleDeck"};             

    if (argc > 1 && strncmp(argv[1], "test", 4) == 0) 
    {
        // cout << argc << " " << argv[1] << endl;
        for (int i = 0; i < fnsSize; i++) 
        {
            unittest(fns[i]);
        };
    } else if (argc > 1 && strncmp(argv[1], "1", 4) == 0) 
    {
        unittest(fns[0]);
    } else if (argc > 1 && strncmp(argv[1], "1", 4) == 0) 
    {
        unittest(fns[1]);
    };
    cout << "All test cases passed!" << endl;
    return 0;
}