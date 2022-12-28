#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//simulation of coin toss experiment
void simulateCoinToss() {
	srand(time(0));
	cout << rand() % 2 << endl;
}

//simulation of dice throw experiment
void simulateDiceThrow() {
	srand(time(0));
	cout << rand() % 6 << endl;
}


/*int main() {
	simulateCoinToss();
	simulateDiceThrow();
}*/
