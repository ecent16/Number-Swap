// CPP_FInalProject_Centeno.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void printBoard(int b[], int r, int c);

int main()
{
	const int NUM_ROWS = 5;
	const int NUM_COLS = 5;
	int board[25];

	printBoard(board, NUM_ROWS, NUM_COLS);
}

void printBoard(int b[], int r, int c) {

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
	
			cout << b[i * c + j];
		}
		cout << endl;
	}

}
