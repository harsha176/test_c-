//============================================================================
// Name        : Test_c++.cpp
// Author      : Harshavardhan Malipatel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include "Complex.h"

using namespace std;

void print_msg();

int max(int a, int b) {
	return a > b ? a : b;
}

// Get max number index id in the list
int max(int* aList, int length) {
	int max_index = 0;
	for (int i = 1; i < length; i++) {
		cout << aList[i] << endl;
		if (aList[max_index] < aList[i]) {
			max_index = i;
		}
	}

	return max_index;
}

int main(void) {
	print_msg();
	int arr[] = {2, 3, 4, 5, 6};
	cout << "Max of 2, 3, 4, 5 is " << max(arr, 5) << endl;
	return EXIT_SUCCESS;
}

void print_msg() {
	cout << "Hari OM Tat Sat!!!" << endl;
	cout << "Om Shanti Shanti Shanti" << endl;
	cout << "Happy Holidays!" << endl;

	Complex test(3, 4);
}

