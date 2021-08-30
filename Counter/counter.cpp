#include "counter.h"
#include <iostream>
using namespace std;


void counterType::initializeCounter() {
	counter = 0;
}

void counterType::setCounter(int x) {
	counter = x;
}

void counterType::incrementCounter() {
	counter++;
}

void counterType::decrementCounter() {
	counter--;
}

int counterType::getCounter() {
	return counter;
}

void counterType::print() {
	cout << counter;
}