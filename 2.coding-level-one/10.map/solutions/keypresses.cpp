#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
using namespace std;

int keyPressesForChar(char c) {
	string keyMapping[] = { " ", ".,?!:", "ABC", "DEF", "GHI", "JKL", "MNO",
			"PQRS", "TUV", "WXYZ" };
	for (auto key : keyMapping) {
		int npress = 0;
		for (auto w : key) {
			++npress;
			if (w == c)
				return npress;
		}
	}
	return 0;
}

int countKeyPresses1(string s) {
	int count = 0;
	for (auto c : s) {
		count += keyPressesForChar(toupper(c));
	}
	return count;
}

int countKeyPresses2(string s) {
	int keyPress[128] = { 0 };
	//initialize for all the characters
	keyPress['A'] = 1;
	keyPress['B'] = 2;
	keyPress['C'] = 3;
	int count = 0;
	for (auto c : s) {
		count += keyPress[toupper(c)];
	}
	return count;
}

int countKeyPresses3(string s) {
	//initialize for all the characters
	unordered_map<char, int> keyPress { { 'A', 1 }, { 'B', 2 }, { 'C', 3 } };
	for(auto e:keyPress)
		cout << e.first << " " << e.second << endl;
	int count = 0;
	for (auto c : s) {
		count += keyPress[toupper(c)];
	}
	return count;
}

int countKeyPresses4(string s) {
	//initialize for all the characters
	map<char, int> keyPress { { 'C', 3 }, { 'A', 1 }, { 'B', 2 }};
	for(auto e:keyPress)
		cout << e.first << " " << e.second << endl;
	int count = 0;
	for (auto c : s) {
		count += keyPress[toupper(c)];
	}
	return count;
}

int main() {
	string s;
	getline(cin, s);
	cout << countKeyPresses4(s);
}

