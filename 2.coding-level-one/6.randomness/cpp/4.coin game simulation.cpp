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

/*int main() {
	for (int i = 0; i < 10; ++i)
		cout << getNumberOfHeads() << endl;
}*/
