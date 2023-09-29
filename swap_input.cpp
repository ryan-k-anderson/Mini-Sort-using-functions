// Mini-sort with functions
// Sorts numbers in increasing order
// Ryan Anderson
// 9/29/2023

#include <iostream>
#include "swap.hpp"

using std::cin; using std::cout; using std::endl;

 int main() {
	int num1;
	int num2;
	int num3;

	cout << "Input 3 numders: ";
	cin >> num1 >> num2 >> num3;

	if (num1 > num2) {
		swapFirstSet(num1, num2);
	}

	if (num1 > num3) {
		swapFirstAndThird(num1, num3);
	}

	if (num2 > num3) {
		swapSecondAndThird(num2, num3);
	}

	cout << num1 << " " << num2 << " " << num3 << endl;
	
	return 0;// Exits program since in main is a function
}