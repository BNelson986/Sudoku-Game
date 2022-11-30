#include <iostream>
#include <random>
#include <vector>
#include <set>
#include <iterator>

struct location {
	std::set<int> possibleValues;
	int finalValue;
};

class Game {
public:
	location board[81];		//	Board of sets to store possible answers and final answers
	std::vector<int> numLocations;
	Game();		//	Default Constructor, randomly generates given cell count
	void play(int);	//	Sets up initial board for play
	int randInt(int, int);		//	Generates random numbers to fill given cells
	void printBoard();		//	Prints current board state
	void startBoard(int);		//	Checks for dupes before inserting value
	bool insertValue(int, int, char);		//	Inserts value into cell, if no duplicates in row, col, or 3X3 
	void print(std::set<int> const&);	//	Print individual sets
	void insertMenu();			//	Displays menu for inserting value
};	
