#include <iostream>
#include <vector>
#include <list>
using namespace std;

vector<string> longestWords1(string inp[], int n) {
	vector<string> res;
	unsigned maxlen = 0;
	//cout << sizeof(inp) << endl;
	for (int i = 0; i < n; ++i) {
		string s = inp[i];
		if (s.length() > maxlen) {
			maxlen = s.length();
			res.clear();
			res.push_back(s);
		} else if (s.length() == maxlen) {
			res.push_back(s);
		}
	}
	return res;
}

vector<string> longestWords2(vector<string> inp) {
	vector<string> res;
	unsigned maxlen = 0;
	for (auto s : inp) {
		if (s.length() > maxlen) {
			maxlen = s.length();
			res.clear();
			res.push_back(s);
		} else if (s.length() == maxlen) {
			res.push_back(s);
		}
	}
	return res;
}

list<string> longestWords3(vector<string> inp) {
	list<string> res;
	unsigned maxlen = 0;
	for (auto s : inp) {
		if (s.length() > maxlen) {
			maxlen = s.length();
			res.clear();
			res.push_back(s);
		} else if (s.length() == maxlen) {
			res.push_back(s);
		}
	}
	return res;
}

int main() {
	//string inp[] = { "vector", "list", "string", "cpp", "java" };
	vector<string> inp{"vector", "list", "string", "cpp", "java"};
	//vector<string> res = longestWords2(inp);
	list<string> res =longestWords3(inp);
	for (auto s : res)
		cout << s << endl;
	return 0;
}

