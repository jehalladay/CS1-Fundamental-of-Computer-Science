/* ******************************************************************
* Filename: subs.h                                                
* By. James Halladay                                                
* Project: week 10 Assignment #3                                    
* Login: jehalladay                                                 
* Assignment No: 3                                                  
* File Description:
*                                                                
*   File header to show main.cpp where the functions in subs.h are stored                                                                
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


#pragma once

void RequestSeed(void);
int GetCardName(int,char[]);
void ShuffleDeck(int[]);
void DealPokerHands(int[],int[],int[]);
int HandValue(int[],char[]);
int WhoWins(int[],int,int[],int);
void ShowHand(int[], int);
void DeclareWinner(int[], int[]);
void RequestChange(int[], int[]);
int ChangeCards(int[], int[], int[], int);


