//============================================================================
// Name        : hello-cpp.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Please type a decimal number:" << endl;
	cin >> n;
	string r = "";
	while (n != 0) {
		if (n % 2 == 0) {
			r = "0" + r;
		} else {
			r = "1" + r;
		}
		n /= 2;
	}
	cout << "Binary number:" << r;
	return 0;
}

