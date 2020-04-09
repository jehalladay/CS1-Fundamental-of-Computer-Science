#include <iostream>
#include <cstdlib>
#include "subs.h"

using namespace std;

	// int i, cardNo, deck[52], hand1[5], hand2[5], change[5], v1, v2, winner;
	// int player1Score, player2Score, winner;
	// char cardName[20];
	// char handtype1[20], handtype2[20];
	// int cardNo = 0;

int main(void)
{
	unsigned int seed = 0;
	int deck[52], hand1[5], hand2[5];
	// int increment = 0;

/*
	Start of program proper
*/

	// 	request a random seed
	cout << "Enter a random seed: ";
	cin >> seed;
	srand(seed);
	cout << endl;
 
	// (b) shuffle the decks
	ShuffleDeck(deck);

	// (c) deal two hands without displaying them
	DealPokerHands(deck, hand1, hand2);

	// (d) for each player in turn:
	
	// player 1
	
	// show their hand
	ShowHand(hand1, 1);

	// request which cards to change
	// change the cards
	// show the final hand including what kind of hand
	ShowHand(hand1, 1);
	
	// (after player 1, output 24 blank lines)
	for (int i = 0; i < 24; i++) {
		cout << endl;
	};

	// player 2

	// show their hand
	ShowHand(hand2, 2);

	// request which cards to change
	// change the cards
	// show the final hand including what kind of hand
	ShowHand(hand2, 2);

	// (e) report the final result.
	DeclareWinner(hand1, hand2);

};