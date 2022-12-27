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

//how do you know that experiment is giving outcome with equal chance?
void verify(int nexperiments) {
	int nheads = 0;
	int ntails = 0;
	srand(time(0));
	for (int i = 0; i < nexperiments; ++i) {
		if (rand() % 2 == 0)
			nheads += 1;
		else
			ntails += 1;
	}
	cout << nheads << endl;
	cout << ntails << endl;
}

int main() {
	simulateCoinToss();
	simulateDiceThrow();
	verify(100);

}
