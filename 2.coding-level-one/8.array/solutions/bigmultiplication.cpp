#include <iostream>
#include <string>
#include <cstdlib>
#include <cassert>

using namespace std;

string mul(string first, string second) {
	int flen = first.length();
	int slen = second.length();
	int res[flen + slen] = { 0 };

	for (int i = slen - 1; i >= 0; --i) {
		for (int j = flen - 1; j >= 0; --j) {
			int prod = (second[i] - '0') * (first[j] - '0');
			int tsum = prod + res[i + j + 1];
			res[i + j + 1] = tsum % 10;
			res[i + j] += tsum / 10;
		}
	}
	string final = "";
	for (auto e : res) {
		final += to_string(e);
	}
	return final;
}

//int main() {
//	string s1, s2;
//	cin >> s1;
//	cin >> s2;
//	cout << mul(s1, s2);
//}

