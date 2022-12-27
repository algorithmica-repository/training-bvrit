#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//game of betting: how many heads will be turned up in 10 coin tosses?
int getNumberOfHeads() {
	int nheads = 0;
	for (int i = 0; i < 10; ++i) {
		if (rand() % 2 == 0)
			nheads += 1;
	}
	return nheads;
}

void simulateGame(int targetCount) {
	int nwins = 0;
	int nexperiments = 10000;
	for(int i= 0; i < nexperiments; ++i)
	if(getNumberOfHeads() >= targetCount)
	nwins += 1;
	cout << (float)nwins / nexperiments * 100 << endl;
}


int main() {
	simulateGame(8);
}
