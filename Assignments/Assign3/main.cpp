/* ******************************************************************
* Filename: main.cpp                                                
* By. James Halladay                                                
* Project: week 10 Assignment #3                                    
* Login: jehalladay                                                 
* Assignment No: 3                                                  
* File Description:
* Program creates a deck of cards, shuffles it, and deals two hands
* 	After the hands are dealt, player 1 and 2 are prompted to 
* 	Replace cards with a new card out of the deck
* 	Program then shows the new hand
*
*	After both players finish changing cards a winner is declared
*                                                                
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


#include <iostream>
#include <cstdlib>
#include "subs.h"

using namespace std;

int main(void)
{
	int deck[52], hand1[5], hand2[5], request[5], increment = 0;

/*
	Start of program proper
*/

	// 	request a random seed
	RequestSeed();

	// (b) shuffle the decks
	ShuffleDeck(deck);

	// (c) deal two hands without displaying them
	DealPokerHands(deck, hand1, hand2);

	// (d) for each player in turn:
	
	// player 1
	
	// show their hand
	ShowHand(hand1, 1);

	// request which cards to change
	RequestChange(hand1, request);

	// change the cards
	increment = ChangeCards(hand1, deck, request, increment);

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
	RequestChange(hand2, request);

	// change the cards
	ChangeCards(hand2, deck, request, increment);

	// show the final hand including what kind of hand
	ShowHand(hand2, 2);

	// (e) report the final result.
	DeclareWinner(hand1, hand2);

};