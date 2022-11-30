#pragma once

#include "game.h"

#define EMPTY 11	//	Value of 'empty' cell

using namespace std;

Game::Game()
{
	play(randInt(10, 7));
}

void Game::play(int givenSize)
{
	startBoard(givenSize);
	printBoard();
}

int Game::randInt(int MAX, int MIN)
{
	random_device rd;	//	obtain random number from hardware
	mt19937 gen(rd());	//	seed the generator
	uniform_int_distribution<> distr(MIN, MAX);	//	Defined range
	
	return distr(gen);
}

void Game::printBoard()
{
	for (int i = 0; i < 81; i++) {
		cout << " " << board[i].finalValue << " ";
		if (i % 9 == 8) {
			cout << endl;
		}
	}
}

void Game::startBoard(int givenSize)
{
	//	Loop for random size of given values
	while (numLocations.size() <= givenSize) {
		int numLoc = randInt(81, 1);
		bool found = false;

		//	Loop through numLocations for duplicates
		for (int i = 0; i < numLocations.size(); i++) {
			if (numLoc == numLocations[i]) {
				found = true;
			}
		}

		//	If not found push numLoc into vector
		if (!found) {
			numLocations.push_back(numLoc);
		}
	}

	//	Convert numLocations to usable 2dArray cell indexes
	for (int k = 0; k < numLocations.size(); k++) {
		cout << " Number Locations \n";
		cout << numLocations[k] << endl;

		//	Track duplicates for restarting loop at same point with new values
		bool duplicate = false;

		//	Inserting into sets
		int value = randInt(9, 1);

		cout << "value: " << value << endl;

		int row = numLocations[k] / 9;

		//	Check for row duplicates for each row
		switch (row) {
		case 0:
			for (int i = 9 * 0; i < 9 * 1; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 1:
			for (int i = 9 * 1; i < 9 * 2; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 2:
			for (int i = 9 * 2; i < 9 * 3; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 3:
			for (int i = 9 * 3; i < 9 * 4; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 4:
			for (int i = 9 * 4; i < 9 * 5; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 5:
			for (int i = 9 * 5; i < 9 * 6; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 6:
			for (int i = 9 * 6; i < 9 * 7; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 7:
			for (int i = 9 * 7; i < 9 * 8; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 8:
			for (int i = 9 * 8; i < 9 * 9; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		}

		//	Calculate col location
		int col = numLocations[k] % 9;

		switch (col) {
		case 0:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 1:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 2:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 3:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 4:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 5:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 6:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 7:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 8:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		}

		//	CUBE 1
		if (row >= 0 && row < 3 && col >= 0 && col < 3) {
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					//	Check for duplicates
					int cellLocation = (9 * i) + j;
					auto search = board[cellLocation].possibleValues.find(value);
					if (search != board[cellLocation].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}


		//	CUBE 2
		else if (row >= 0 && row < 3 && col > 2 && col < 6) {
			for (int i = 0; i < 3; i++) {
				for (int j = 3; j < 6; j++) {
					//	Check for duplicates
					int cellLocation = (9 * i) + j;
					auto search = board[cellLocation].possibleValues.find(value);
					if (search != board[cellLocation].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 3
		else if (row >= 0 && row < 3 && col > 5 && col < 9) {
			for (int i = 0; i < 3; i++) {
				for (int j = 6; j < 9; j++) {
					//	Check for duplicates
					int cellLocation = (9 * i) + j;
					auto search = board[cellLocation].possibleValues.find(value);
					if (search != board[cellLocation].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 4
		else if (row > 2 && row < 6 && col >= 0 && col < 3) {
			for (int i = 3; i < 6; i++) {
				for (int j = 0; j < 3; j++) {
					//	Check for duplicates
					int cellLocation = (9 * i) + j;
					auto search = board[cellLocation].possibleValues.find(value);
					if (search != board[cellLocation].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 5
		else if (row > 2 && row < 6 && col > 2 && col < 6) {
			for (int i = 3; i < 6; i++) {
				for (int j = 3; j < 6; j++) {
					//	Check for duplicates
					int cellLocation = (9 * i) + j;
					auto search = board[cellLocation].possibleValues.find(value);
					if (search != board[cellLocation].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 6
		else if (row > 2 && row < 6 && col > 5 && col < 9) {
			for (int i = 3; i < 6; i++) {
				for (int j = 6; j < 9; j++) {
					//	Check for duplicates
					int cellLocation = (9 * i) + j;
					auto search = board[cellLocation].possibleValues.find(value);
					if (search != board[cellLocation].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 7
		else if (row > 5 && row < 9 && col >= 0 && col < 3) {
			for (int i = 6; i < 9; i++) {
				for (int j = 0; j < 3; j++) {
					//	Check for duplicates
					int cellLocation = (9 * i) + j;
					auto search = board[cellLocation].possibleValues.find(value);
					if (search != board[cellLocation].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 8
		else if (row > 5 && row < 9 && col >2 && col < 6) {
			for (int i = 6; i < 9; i++) {
				for (int j = 3; j < 6; j++) {
					//	Check for duplicates
					int cellLocation = (9 * i) + j;
					auto search = board[cellLocation].possibleValues.find(value);
					if (search != board[cellLocation].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 9
		else if (row > 5 && row < 9 && col > 5 && col < 9) {
			for (int i = 6; i < 9; i++) {
				for (int j = 6; j < 9; j++) {
					//	Check for duplicates
					int cellLocation = (9 * i) + j;
					auto search = board[cellLocation].possibleValues.find(value);
					if (search != board[cellLocation].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	If a duplicate is found, decrement k to restart
		if (duplicate == true) {
			k--;
			continue;
		}

		//	If no duplicates are found, insert value into cell's tree
		else if (duplicate == false) {
			board[numLocations[k]].finalValue = value;
			cout << " Inserted \n";
		}
	}
}

bool Game::insertValue(int cellLocation, int value, char choice)
{
	//	Variable to track if duplicates in row, col, or cube
	bool duplicate = false;

	//	Calculate col and row location
	int row = cellLocation / 9;
	int col = cellLocation % 9;

	if (choice == 'p' || choice == 'P') {
		//	Check for row duplicates for each row
		switch (row) {
		case 0:
			for (int i = 9 * 0; i < 9 * 1; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 1:
			for (int i = 9 * 1; i < 9 * 2; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 2:
			for (int i = 9 * 2; i < 9 * 3; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 3:
			for (int i = 9 * 3; i < 9 * 4; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 4:
			for (int i = 9 * 4; i < 9 * 5; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 5:
			for (int i = 9 * 5; i < 9 * 6; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 6:
			for (int i = 9 * 6; i < 9 * 7; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 7:
			for (int i = 9 * 7; i < 9 * 8; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 8:
			for (int i = 9 * 8; i < 9 * 9; i++) {
				auto search = board[i].possibleValues.find(value);
				if (search != board[i].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		}

		switch (col) {
		case 0:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 1:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 2:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 3:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 4:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 5:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 6:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 7:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 8:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				auto search = board[loc].possibleValues.find(value);
				if (search != board[loc].possibleValues.end()) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		}

		//	CUBE 1
		if (row >= 0 && row < 3 && col >= 0 && col < 3) {
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					auto search = board[loc].possibleValues.find(value);
					if (search != board[loc].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}


		//	CUBE 2
		else if (row >= 0 && row < 3 && col > 2 && col < 6) {
			for (int i = 0; i < 3; i++) {
				for (int j = 3; j < 6; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					auto search = board[loc].possibleValues.find(value);
					if (search != board[loc].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 3
		else if (row >= 0 && row < 3 && col > 5 && col < 9) {
			for (int i = 0; i < 3; i++) {
				for (int j = 6; j < 9; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					auto search = board[loc].possibleValues.find(value);
					if (search != board[loc].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 4
		else if (row > 2 && row < 6 && col >= 0 && col < 3) {
			for (int i = 3; i < 6; i++) {
				for (int j = 0; j < 3; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					auto search = board[loc].possibleValues.find(value);
					if (search != board[loc].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 5
		else if (row > 2 && row < 6 && col > 2 && col < 6) {
			for (int i = 3; i < 6; i++) {
				for (int j = 3; j < 6; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					auto search = board[loc].possibleValues.find(value);
					if (search != board[loc].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 6
		else if (row > 2 && row < 6 && col > 5 && col < 9) {
			for (int i = 3; i < 6; i++) {
				for (int j = 6; j < 9; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					auto search = board[loc].possibleValues.find(value);
					if (search != board[loc].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 7
		else if (row > 5 && row < 9 && col >= 0 && col < 3) {
			for (int i = 6; i < 9; i++) {
				for (int j = 0; j < 3; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					auto search = board[loc].possibleValues.find(value);
					if (search != board[loc].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 8
		else if (row > 5 && row < 9 && col >2 && col < 6) {
			for (int i = 6; i < 9; i++) {
				for (int j = 3; j < 6; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					auto search = board[loc].possibleValues.find(value);
					if (search != board[loc].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 9
		else if (row > 5 && row < 9 && col > 5 && col < 9) {
			for (int i = 6; i < 9; i++) {
				for (int j = 6; j < 9; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					auto search = board[loc].possibleValues.find(value);
					if (search != board[loc].possibleValues.end()) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		if (duplicate == false) {
			board[cellLocation].possibleValues.insert(value);
			return true;
		}

		return false;
	}
	else if (choice == 'f' || choice == 'F') {
		//	Check for row duplicates for each row
		switch (row) {
		case 0:
			for (int i = 9 * 0; i < 9 * 1; i++) {
				if (value == board[cellLocation].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 1:
			for (int i = 9 * 1; i < 9 * 2; i++) {
				if (value == board[cellLocation].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 2:
			for (int i = 9 * 2; i < 9 * 3; i++) {
				if (value == board[cellLocation].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 3:
			for (int i = 9 * 3; i < 9 * 4; i++) {
				if (value == board[cellLocation].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 4:
			for (int i = 9 * 4; i < 9 * 5; i++) {
				if (value == board[cellLocation].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 5:
			for (int i = 9 * 5; i < 9 * 6; i++) {
				if (value == board[cellLocation].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 6:
			for (int i = 9 * 6; i < 9 * 7; i++) {
				if (value == board[cellLocation].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 7:
			for (int i = 9 * 7; i < 9 * 8; i++) {
				if (value == board[cellLocation].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 8:
			for (int i = 9 * 8; i < 9 * 9; i++) {
				if (value == board[cellLocation].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		}
	
		switch (col) {
		case 0:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				if (value == board[loc].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 1:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				if (value == board[loc].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 2:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				if (value == board[loc].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 3:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				if (value == board[loc].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 4:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				if (value == board[loc].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 5:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				if (value == board[loc].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 6:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				if (value == board[loc].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 7:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				if (value == board[loc].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		case 8:
			for (int i = 0; i < 9; i++) {
				int loc = 9 * i + col;
				if (value == board[loc].finalValue) {
					//	If found, change duplicate to true for catching issue
					duplicate = true;
				}
			}
			break;
		}

		//	CUBE 1
		if (row >= 0 && row < 3 && col >= 0 && col < 3) {
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					if (value == board[loc].finalValue) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}


		//	CUBE 2
		else if (row >= 0 && row < 3 && col > 2 && col < 6) {
			for (int i = 0; i < 3; i++) {
				for (int j = 3; j < 6; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					if (value == board[loc].finalValue) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 3
		else if (row >= 0 && row < 3 && col > 5 && col < 9) {
			for (int i = 0; i < 3; i++) {
				for (int j = 6; j < 9; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					if (value == board[loc].finalValue) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 4
		else if (row > 2 && row < 6 && col >= 0 && col < 3) {
			for (int i = 3; i < 6; i++) {
				for (int j = 0; j < 3; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					if (value == board[loc].finalValue) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}
	
		//	CUBE 5
		else if (row > 2 && row < 6 && col > 2 && col < 6) {
			for (int i = 3; i < 6; i++) {
				for (int j = 3; j < 6; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					if (value == board[loc].finalValue) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 6
		else if (row > 2 && row < 6 && col > 5 && col < 9) {
			for (int i = 3; i < 6; i++) {
				for (int j = 6; j < 9; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					if (value == board[loc].finalValue) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 7
		else if (row > 5 && row < 9 && col >= 0 && col < 3) {
			for (int i = 6; i < 9; i++) {
				for (int j = 0; j < 3; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					if (value == board[loc].finalValue) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 8
		else if (row > 5 && row < 9 && col >2 && col < 6) {
			for (int i = 6; i < 9; i++) {
				for (int j = 3; j < 6; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					if (value == board[loc].finalValue) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	CUBE 9
		else if (row > 5 && row < 9 && col > 5 && col < 9) {
			for (int i = 6; i < 9; i++) {
				for (int j = 6; j < 9; j++) {
					//	Check for duplicates
					int loc = (9 * i) + j;
					if (value == board[loc].finalValue) {
						//	If found, change duplicate to true for catching issue
						duplicate = true;
					}
				}
			}
		}

		//	If no duplicates, set final value
		if (duplicate == false) {
			board[cellLocation].finalValue = value;
			return true;
		}

		return false;
	}
}

void Game::print(set<int> const& s)
{
	//	Print if empty set
	if (s.empty() == true) {
		cout << " E ";
	}

	for (auto it = s.cbegin(); it != s.cend(); it++) {
		cout << " " << *it << " ";
	}
}

void Game::insertMenu()
{
	cout << " Please select a column and row that you wish to ammend. \n";
	
	//	Variables for location
	int row, col;
	//	Variable for value of entered value
	int value;

	//	Variable to choose between final and possible values
	char choice;

	cout << " Column: "; cin >> col;
	cout << "\n Row: "; cin >> row;

	//	Variable for the cell location
	int cell = 9 * (row - 1) + (col - 1);

	cout << " To enter possible values of that cell, enter 'P' \n";
	cout << " To enter final or known value of the cell enter 'F' \n";

	cin >> choice;

	//	This path is for possible values
	if (choice == 'p' || choice == 'P') {
		cout << " To exit the possible values, enter '0' \n";
		while (choice != 0 || board[cell].possibleValues.size() <= 9) {
			cout << " Please enter your number. \n";
			cin >> value;

			if (insertValue(cell, value, choice)) {
				cout << " Number added successfully. \n";
				continue;
			}

			if (!insertValue(cell, value, choice)) {
				cout << " There is a duplicate of that value in that cell's row, column, or cube. \n";
				cout << " Double check and reenter.\n";
				continue;
			}
		}

	}
	else {
	}


}

