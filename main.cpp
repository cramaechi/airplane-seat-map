//A program that assigns passenger seats on an airplane, by marking
//X if a seat position is taken.
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

const int ROW = 7;
const int COLUMN = 8;

void inputSeatSelection(char seatChart[][COLUMN], int& section, char& letter);
//Precondition: The array seatChart has been filled. section >= 1 && <= 7. letter 
//is either equal to 'A', 'B', 'C', ' ', or 'D'.
//Postcondition: Both variables section and letter have been set to values
//from the keyboard.

void displaySeatPattern(char seatChart[][COLUMN]);
//Precondition: seatChart has been filled.
//Postcondition: Displays the airplanes seat chart.

void updateSeatPattern(char seatChart[][COLUMN], int section, char letter);
//Precondition: seatChart has been filled. section and letter have been 
//initialized.
//Postcondition: Displays the updated seat chart.

char produceSeats(int row, int column);
//Precondition: row and column have been initialized.
//Postcondition: Returns a text fragment of the seat pattern.

char getSection(int row);
//Precondition: row has been intialized.
//Postcondition: Returns the seat section number.

bool seatsFull(char seatChart[][COLUMN]);
//Precondition: seatChart has been filled.
//Postcondition: Returns true if all seat are full and false they're not.

bool isOccupied (char seatChart[][COLUMN], int section, char letter);
//Precondition: seatChart has been filled. Variables section >= 1 && <= 7 and letter is
//either 'A', 'B', 'C', 'D', or ' '.
//Postcondition: Returns true if a particular seat is occupied and false
//if not.

void spaceInBetween(); //Creates space in between text.

int main()
{
	char seatPattern[ROW][COLUMN], l, ans;
	int s;

	displaySeatPattern(seatPattern);

	do
	{
		inputSeatSelection(seatPattern,s, l);
		updateSeatPattern(seatPattern, s, l);

		cout<<"Continue? (y/n): ";
		cin>>ans;

	}while(!(seatsFull(seatPattern)) && (ans == 'y' || ans == 'Y'));

	return 0;
}

void inputSeatSelection(char seatChart[][COLUMN], int& section, char& letter)
{
	do
	{
		cout<<"Enter seat desired: ";
        cin>>section>>letter;

		if(!(isOccupied(seatChart, section, letter)))
			spaceInBetween();

	}while(!(isOccupied(seatChart, section, letter)));

	cout<<"\n\n";
}


void displaySeatPattern(char seatChart[][COLUMN])
{
	 for (int row = 0; row < ROW; row++)
	 {
		 for (int column = 0; column < COLUMN; column++)
		 {
			 seatChart[row][column] = produceSeats(row, column);
		 }
	 }

	 for (int row = 0; row < ROW; row++)
	 {
		 cout<<setw(30);

		 for (int column = 0; column < COLUMN; column++)
			 cout<<seatChart[row][column];
		 
		 cout<<endl;
	 }
}

void updateSeatPattern(char seatChart[][COLUMN], int section, char letter)
{
	 for (int row = 0; row < ROW; row++)
	 {
		 for (int column = 0; column < COLUMN; column++)
		 {
			if(((row + 1) == section) && seatChart[row][column] == letter)
				seatChart[row][column] = 'X';
		 }
	 }

	 for (int row = 0; row < ROW; row++)
	 {
		 cout<<setw(30);

		 for (int column = 0; column < COLUMN; column++)
			 cout<<seatChart[row][column];
		 
		 cout<<endl;
	 }
}

char produceSeats(int row, int column)
{
	switch (column)
	{
	   case 0:
		   return getSection(row);
		   break;
	   case 1:
		   return ' ';
		   break;
	   case 2:
		   return ' ';
		   break;
	   case 3: 
		   return 'A';
		   break;
	   case 4: 
		   return 'B';
		   break;
	   case 5:
		   return ' ';
		   break;
	   case 6:
		   return 'C';
		   break;
	   case 7:
		   return 'D';
		   break;
	   default:
	   {
		   cout<<"Fatal Error: Aborting program.";
		   exit(1);
		   return ' '; // To make compiler happy.
		   break;
	   }
	}
}

char getSection(int row)
{
	switch (row)
	{
	   case 0:
		   return '1';
		   break;
	   case 1:
		   return '2';
		   break;
	   case 2:
		   return '3';
		   break;
	   case 3:
		   return '4';
		   break;
	   case 4:
		   return '5';
		   break;
	   case 5:
		   return '6';
		   break;
	   case 6:
		   return '7';
		   break;
	   default:
	   {
		   cout<<"Fatal Error: Aborting program.";
		   exit(1);
		   return ' '; //To make compiler happy.
		   break;
       }
	}
}

bool seatsFull(char seatChart[][COLUMN])
{
	for (int row = 0; row < ROW; row++)
	 {
		 for (int column = 3; column < COLUMN; column++)
		 {
			 if (seatChart[row][column] != 'X' && column != 5)
				 return false;
		 }
	 }
	
	return true;
}

bool isOccupied (char seatChart[][COLUMN], int section, char letter)
{
	for (int row = 0; row < ROW; row++)
	{
		for (int column = 0; column < COLUMN; column++)
		{
			if(((row + 1) == section) && (seatChart[row][column] == letter))
				return true;
		}
	}

	return false;
}

void spaceInBetween()
{
	cout<<"\n\n";
}
