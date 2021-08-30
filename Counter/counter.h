#pragma once

using namespace std;

class counterType {
	
	int counter;

	//Constructor
public:
	counterType(int counter) {
		counter = counter;
	}

	//Method declarations
	void initializeCounter();
	void setCounter(int x);
	void incrementCounter();
	void decrementCounter();
	int getCounter();
	void print();
};



