/* Logan Smith - 9/25/2017 Period 2

Data Acceptance : Take in Data

Display Data, Accept User Response, Display Changed Data

*/


// Libraries
#include <iostream>
#include <conio.h>

// Namespace
using namespace std;

// Functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
// Variables
		int donuts_eaten_count;
		char choice_answer;
		bool answersMatcheds = false;
		double piGuess;

		int calc_1, calc_2, calc_3, calc_4, calc_5;

		// User Queries
		cout << "How many donuts is too many for hyper \"kids\" : ";
		cin >> donuts_eaten_count;
		cout << "What answer did you get for number 15 on the Algebra II homework (a/b/c/d) : ";
		cin >> choice_answer;
		if (choice_answer == 'c' || choice_answer == 'C') {
			answersMatcheds = true;
		}
		cout << "what is pi : ";
		cin >> piGuess;

		cout << "Give me 3 random whole numbers : " << "\n";
		cout << "Number 1 : ";
		cin >> calc_1;
		cout << "Number 2 : ";
		cin >> calc_2;
		cout << "Number 3 : ";
		cin >> calc_3;

//stored data
		cout << "I think you are correct, " << donuts_eaten_count << " is a lot of donuts." << endl;
		cout << boolalpha << "I think that is " << answersMatcheds << " for question 15." << endl;
		cout << "So you think pi is : " << piGuess << '\n';


// calculations
		cout << calc_1 << "+" << calc_2 << "=" << calc_1 + calc_2 << endl;
		calc_4 = calc_2 * calc_3;
		cout << calc_2 << "*" << calc_3 << "=" << calc_4 << "\n";


		pause();


}