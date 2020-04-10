/* ******************************************************************
* Filename: subs.cpp                                                
* By. James Halladay                                                
* Project: week 10 Assignment #3                                    
* Login: jehalladay                                                 
* Assignment No: 3                                                  
* File Description:
*   
*	Creates all the functions that main.cpp uses   
*   
* I declare that all material in this assessment task is my work    
* except where there is clear acknowledgement                       
* or reference to the work of others. I further declare that I      
* have complied and agreed to the CMU Academic Integrity Policy     
* at the University website.                                        
*                                                                   
* Author�s Name: James Halladay UID(700#): 700425363                
* Date: 4/9/2020                                                   
*                                                                   
* Date Last Modified: 4/9/2020                                     
******************************************************************* */


#include <cstdlib>
#include <cstring>
#include <iostream>
#include "subs.h"

using namespace std;


//code and other functions go here

void RequestSeed() {
	unsigned int seed = 0;
	cout << "Enter a random seed: ";
	cin >> seed;
	srand(seed);
	cout << endl;
};






int GetCardName(int cardNo, char cardName[])
{
	const int suitSize = 4, cardsSize = 13;
	string suits[suitSize]  = {"Spades", "Clubs", "Diamonds", "Hearts"},
		   cards[cardsSize] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
;
	int suit = cardNo / 13,
		card = (cardNo - (suit * 13));

	strcpy(cardName, (cards[card] + " of " + suits[suit]).c_str());

	if (cardNo > 51 || cardNo < 0)
	{
		return 0;
	} else {
		return 1;
	};
};






void ShuffleDeck(int deck[])
{
	int temp = 0, rn = 0;

	for (int i = 0; i < 52; i++) 
	{
		deck[i] = i;
	};

	for (int i = 0; i < 51; i++)
	{
		rn = (rand() % (52 - i)) + i;
		temp = deck[i];
		deck[i] = deck[rn];
		deck[rn] = temp;
	};
};






void DealPokerHands(int deck[], int hand1[], int hand2[])
{
	int place = 0;
	for (int i = 9; i >= 0; i--) 
	{
		place = i + 42;
		if (place % 2 == 0) {
			hand2[(9 - i) / 2] = deck[place];
		} else {
			hand1[(9 - i) / 2] = deck[place];
		};
		
	};
};






int HandValue(int hand[],char handType[]){
	int score = 9, pairs = 0, straight = 0,
		suits[4] = {0, 0, 0, 0},
		type[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	for (int i = 0; i < 5; i++) 
	{
		suits[hand[i] / 13]++;
		type[hand[i] % 13]++;
	};

	for (int i = 0; i < 13; i++) 
	{
		// Check Straight
		if (straight != 5) {
			if (type[i] == 1) {
				straight++;
			} else {
				straight = 0;
			};
		};

		// Check matching cards
		if (type[i] == 4) {
			// Four of a kind
			score = 2;
			strcpy(handType, "Four of a Kind");
		} else if (type[i] == 3) {
			// Three of a kind
			score = 6;
			strcpy(handType, "Three of a Kind");
		} else if (type[i] == 2) {
			// Pair or Two Pair
			pairs++;
		};
	};

	if (straight == 5) {
		// Straight
		score = 5;
		strcpy(handType, "Straight");
	};

	// Check Flush
	if (suits[0] == 5 || suits[1] == 5 || suits[2] == 5 || suits[3] == 5) {
		if (straight == 5) {
			// Straight Flush
			score = 1;
			strcpy(handType, "Straight Flush");
		} else {
			// Flush 
			score = 4;
			strcpy(handType, "Flush");
		};
	} else if (suits[0] == 3 || suits[1] == 3 || suits[2] == 3 || suits[3] == 3) {
		if (suits[0] == 2 || suits[1] == 2 || suits[2] == 2 || suits[3] == 2) {
			// Full house
			score = 3;
			strcpy(handType, "Full House");
		};
	};

	if (score == 9) {
		if (pairs == 2) {
			// Two Pair
			score = 7;
			strcpy(handType, "Two Pair");
		} else if (pairs == 1) {
			// One Pair
			score = 8;
			strcpy(handType, "One Pair");
		} else {
			// High Card
			strcpy(handType, "High Card");
		};
	};

	return score;
};






int WhoWins(int hand1[], int player1Score, int hand2[], int player2Score) {
	int winner = 0,  three = 0, pair = 0, high = 0,
		type1[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		type2[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	for (int i = 0; i < 5; i++) 
	{
		// type 1 is player 1's hand
		type1[hand1[i] % 13]++;

		// type 2 is player 2's hand
		type2[hand2[i] % 13]++;
	};

	for (int i = 12; i >= 0; i--)
	{
		// Check for four of a kind in descending order
		if (type1[i] == 4) {
			winner = 1;
			break;
		} else if (type2[i] == 4) {
			winner = 2;
			break;
		};

		// Check for three of a kind in descending order
		if (three == 0) {
			if (type1[i] == 4) {
				three = 1;
			} else if (type2[i] == 4) {
				three = 2;
			};
		};

		// Check for pairs in descending order
		if (pair == 0) {
				// if pairs match, compare the next pairs
			if (type1[i] == 2 && type2[i] != 2) {
				pair = 1; 
			} else if (type2[i] == 2 && type1[i] != 2) {
				pair = 2; 
			};
		};

		// Check for High Card
		if (high == 0) {
				// if cards match, compare next cards
			if (type1[i] == 1 && type2[i] != 1) {
				high = 1; 
			} else if (type2[i] == 1 && type1[i] != 1) {
				high = 2; 
			};
		};
	};

	// If four of a kind, skip, else decide winner
	if (winner == 0) {
		if (three != 0) {
			winner = three;
		} else if (pair != 0) {
			winner = pair;
		} else {
			winner = high;
		};
	};

	// winner returns 1 or 2 to denote which player won, 0 if tied
	return winner;
};






void ShowHand(int hand[], int player) {
	char cardName[20], handtype[20];
	string order[5] = {"first", "second", "third", "fourth", "fifth"};

	HandValue(hand, handtype);

	cout << "Player " << player << " has " << handtype << endl << endl;
	for (int i = 0; i < 5; i++){
			GetCardName(hand[i], cardName);
		cout << "Player" << player << "'s " << order[i] << " card"  << ":\t" << cardName << endl;
	};
	cout << endl;
};






void DeclareWinner(int hand1[], int hand2[]){
	char handType1[20], handType2[20];
	int playerScore1 = 0, playerScore2 = 0, winner = 0;

	playerScore1 = HandValue(hand1, handType1);
	playerScore2 = HandValue(hand2, handType2);

	cout << "Player 1's Hand:\t" << handType1 << "\tScore:\t" << playerScore1 << endl;
	cout << "Player 2's Hand:\t" << handType2 << "\tScore:\t" << playerScore2 << endl;

	if (playerScore1 == playerScore2) {
		// check hands for highest pair/card
		winner = WhoWins(hand1, playerScore1, hand2, playerScore2);

	} else if (playerScore1 < playerScore2) {
		// Player 1 wins
		winner = 1;
	} else {
		// Player 2 wins
		winner = 2;
	};

	if (winner == 0) {
		cout << "Player 1 and Player 2 Tied!" << endl;
	} else {
		cout << "Player " << winner << " Won the Match!" << endl;
	};
};






void RequestChange(int hand[], int request[]) {
	string choice = "";
	for (int i = 0; i < 5; i++){
		request[i] = 0;
	};

	cout << "Would you like to change cards?" << endl;
	
	for (int i = 0; i < 5; i++){
		cout << "(Y/n) for Card " << i+1 <<":\t" ; 
		cin >> choice;
		if (choice == "y" || choice == "Y") {
			request[i] = 1;
		};
	};
	cout << endl;
};






int ChangeCards(int hand[], int deck[], int request[], int increment) {

	for (int i = 0; i < 5; i++){
		cout << "request[i]= "<<request[i] << endl;
		if (request[i] == 1) {
			increment++;
			hand[i] = deck[41 - increment];
			request[i] = 0;
		};
	};

	return increment;
};
