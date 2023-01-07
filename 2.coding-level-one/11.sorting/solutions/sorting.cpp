#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <functional>
using namespace std;

bool cmp(int first, int second) {
	return second < first;
}
int main() {
	int a[] = { 10, 5, 4, 40, 20, 30 };
	int n = sizeof(a) / sizeof(int);
	//sort(a, a + n, greater<int>());
	sort(a, a + n, cmp);
	for (auto x : a)
		cout << x << " ";
	cout << endl;

	vector<int> v{ 10, 5, 4, 40, 20, 30 };
	sort(v.begin(), v.end(), cmp);
	for(auto x:v)
		cout << x << " ";
	cout << endl;

	list<int> lst{ 10, 5, 4, 40, 20, 30 };
	lst.sort(cmp);
	for(auto x:lst)
		cout << x << " ";
	cout << endl;
	return 0;
}
