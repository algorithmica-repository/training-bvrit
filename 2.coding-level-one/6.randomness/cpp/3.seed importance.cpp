#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomWithFixedSeed(int end) {
	srand(100);
	for(int i= 0; i < 10; ++i)
		cout << rand() % end << endl;
}

void randomWithDynamicSeed(int end) {
	srand(time(0));
	for(int i= 0; i < 10; ++i)
		cout << rand() % end << endl;
}
/*int main() {
	randomWithFixedSeed(10);
	cout <<endl;
	randomWithDynamicSeed(10);
}*/
