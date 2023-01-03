#include <iostream>
#include <string>
#include <cstdlib>
#include <cassert>

using namespace std;

int findLengthOfLongPal(string s) {
	int freq[58] = { 0 };
	for (auto c : s) {
		if (c >= 'a' && c <= 'z')
			++freq[c - 'a' + 6];
		else
			++freq[c - 'A'];
	}
	int count = 0;
	bool isOddFreqExists = false;
	for (int i = 0; i < 52; ++i) {
		if (freq[i] % 2 == 0)
			count += freq[i];
		else {
			isOddFreqExists = true;
			count += freq[i] - 1;
		}
	}
	if (isOddFreqExists)
		++count;
	return count;
}
int main() {
//	string s;
//	cin >> s;

	string s1 = "abcc";
	cout << findLengthOfLongPal(s1) << endl;
	assert(findLengthOfLongPal(s1) == 3);

	string s2 = "aaabbbcc";
	cout << findLengthOfLongPal(s2) << endl;
	assert(findLengthOfLongPal(s2) == 7);

	string s3 = "";
	cout << findLengthOfLongPal(s3) << endl;
	assert(findLengthOfLongPal(s3) == 0);
}

