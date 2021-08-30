#include "counter.h"
#include <iostream>


void initializeCounter() {
	counter = 0;
}

void setCounter(int x) {
	counter = x;
}

void incrementCounter() {
	counter++;
}

void decrementCounter() {
	counter--;
}

int getCounter() {
	return counter;
}

void print() {
	std::cout << counter;
}