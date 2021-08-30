#include <iostream>
#include "counter.h"
using namespace std;

int main() {
	counterType counter1;
	counterType counter2(5);

	counter1.print();

	cout << endl;

	counter1.incrementCounter();
	cout << "After Increment counter1: " << counter1.getCounter() << endl;

	cout << "Counter 2 = " << counter2.getCounter() << endl;

	counter1.setCounter(-6);
	cout << "After resetting counter1: " << counter1.getCounter() << endl;

	return 0;
}