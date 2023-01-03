#include <iostream>
#include <string>
#include <cstdlib>
#include <cassert>

using namespace std;

string add(string first, string second) {
	int flen = first.length();
	int slen = second.length();
	string res = "";
	int carry = 0;
	for (int i = flen - 1, j = slen - 1; i >= 0 || j >= 0; --i, --j) {
		int fdigit = i < 0 ? 0 : first[i] - '0';
		int sdigit = j < 0 ? 0 : second[j] - '0';
		res = (char) ((fdigit + sdigit + carry) % 10 + '0') + res;
		carry = (fdigit + sdigit + carry) / 10;
	}
	if (carry > 0)
		res = (char) (carry + '0') + res;
	return res;
}

int main() {
	string s1, s2;
	cin >> s1;
	cin >> s2;
	cout << add(s1, s2);
}

