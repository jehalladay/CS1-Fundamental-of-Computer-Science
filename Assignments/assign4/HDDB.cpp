/*********************************************************************************************
*	Implementation program for Practicum 8 by Sherine and CSCI 111 student:              *
**********************************************************************************************/

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
#include "HDDB.h"

const int MAXDB = 100;

struct disc
{
	char* title;
	char* director;
	int year;
	int runtime;
	char* genre;
	char* pic;
};
typedef disc* discPtr;

discPtr DB[MAXDB];
bool selected[MAXDB];
int numDB;

void HTMLGen();

void YearFilter()
{
}

void GenreFilter()
{
}

void TimeFilter()
{
}

void DisplayAll()
{
	for (int i=0;i<numDB;i++)
		selected[i] = true;	
	HTMLGen();
}

void LoadDB()
{

}

void ClearDB()
{

}	

void HTMLGen()
{
	char fname[256];
	ofstream ofs;
	
	cout << "Output file name: ";
	cin.getline(fname,255,'\n');
	ofs.open(fname);
	if (!ofs.is_open())
	{
		cerr << "Could not open output file " << fname << endl;
		exit(1);
	}

//	here is where the HTML output is generated including
//	the header and tail, and the information for each video

	ofs.close();
}
