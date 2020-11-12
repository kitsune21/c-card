#include<stdio.h>
#include<stdlib.h>
#include "disp.h"

void initializeDeck(int deck[]) {
	for (int i = 0; i < 52; ++i) {
		deck[i] = (i + 1);
	}
}

void shuffleDeck(int deck[]) {
	int halfDeck1[32];
	int halfDeck2[32];
	int halfWayPoint = 26;

	//move the top half of the deck into the half deck
	for (int i = 0; i < halfWayPoint; ++i) {
		halfDeck1[i] = deck[i];
	}
	
	//move the bottom half of the deck into the half deck 2
	for (int i = 0; i < halfWayPoint; ++i) {
		halfDeck2[i] = deck[halfWayPoint + i];
	}
}

int main() {
	int deck[52];
	int nextDeck[52];

	initializeDeck(deck);

	//Shuffle the deck
	shuffleDeck(deck);

	return 0;
}