// Mini-sort with functions
// Sorts numbers in increasing order
// Ryan Anderson
// 9/29/2023

#include <iostream>

using std::cin; using std::cout; using std::endl;

void swapFirstSet(int &a, int &b) {
	const int tmp = a;
	a = b;
	b = tmp;
}

void swapFirstAndThird(int &a, int &c) {
	const int tmp = a;
	a = c;
	c = tmp;
}

void swapSecondAndThird(int& b, int& c) {
	const int tmp = b;
	b = c;
	c = tmp;
}

//I could have handled it with 1 function because they all do the same thing but for my sanity I made 3 separate functions so I could understand it better
//If I didnt make the const tmp variable then it wouldnt swap correctly I needed a variable to hold the original number before swapping it