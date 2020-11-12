#pragma once
#include<stdio.h>

void displayCard(int cardNum) {
	if (cardNum > 52) {
		printf("Invalid Card \n");
	}

	if (cardNum == 1 || cardNum == 14 || cardNum == 27 || cardNum == 40) {
		printf("Ace of ");
	}
	else if (cardNum == 2 || cardNum == 15 || cardNum == 28 || cardNum == 41) {
		printf("Two of ");
	}
	else if (cardNum == 3 || cardNum == 16 || cardNum == 29 || cardNum == 42) {
		printf("Three of ");
	}
	else if (cardNum == 4 || cardNum == 17 || cardNum == 30 || cardNum == 43) {
		printf("Four of ");
	}
	else if (cardNum == 5 || cardNum == 18 || cardNum == 31 || cardNum == 44) {
		printf("Five of ");
	}
	else if (cardNum == 6 || cardNum == 19 || cardNum == 32 || cardNum == 45) {
		printf("Six of ");
	}
	else if (cardNum == 7 || cardNum == 20 || cardNum == 33 || cardNum == 46) {
		printf("Seven of ");
	}
	else if (cardNum == 8 || cardNum == 21 || cardNum == 34 || cardNum == 47) {
		printf("Eight of ");
	}
	else if (cardNum == 9 || cardNum == 22 || cardNum == 35 || cardNum == 48) {
		printf("Nine of ");
	}
	else if (cardNum == 10 || cardNum == 23 || cardNum == 36 || cardNum == 49) {
		printf("Ten of ");
	}
	else if (cardNum == 11 || cardNum == 24 || cardNum == 37 || cardNum == 50) {
		printf("Jack of ");
	}
	else if (cardNum == 12 || cardNum == 25 || cardNum == 38 || cardNum == 51) {
		printf("Queen of ");
	}
	else if (cardNum == 13 || cardNum == 26 || cardNum == 39 || cardNum == 52) {
		printf("King of ");
	}

	if (cardNum > 0 && cardNum < 14) {
		printf("Spades\n");
	}
	else if (cardNum > 13 && cardNum < 27) {
		printf("Diamonds\n");
	}
	else if (cardNum > 26 && cardNum < 40) {
		printf("Clubs\n");
	}
	else if (cardNum > 39 && cardNum < 53) {
		printf("Hearts\n");
	}
}


void displayDeck(int deck[], int deckSize) {
	for (int i = 0; i < deckSize; ++i) {
		displayCard(deck[i]);
	}
}