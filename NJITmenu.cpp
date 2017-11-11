//============================================================================
// Name        : NJITmenu.cpp
// Author      : Jacob Yanicak


#include <iostream>
#include <string>


using namespace std;

void menu();

int main() {

	bool finished = false;

	do {
		menu();
		cout << "Are you finished using the matrix calculator?\nEnter: \n1 for Yes\n0 for No" << endl;
		cin >> finished;
		if (finished)
			cout << "Thanks for playing!";
	} while (!finished);


	return 0;
}
void menu() {

	cout << "Hello, welcome to our first menu.";

	// test

}
