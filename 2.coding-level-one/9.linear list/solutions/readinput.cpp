#include <iostream>
#include <vector>
#include <list>
using namespace std;

vector<int> getSeq1() {
	vector<int> res;
	int n;
	while (true) {
		cin >> n;
		if (n == 0)
			break;
		res.push_back(n);
	}
	return res;
}

list<int> getSeq2() {
	list<int> res;
	int n;
	while (true) {
		cin >> n;
		if (n == 0)
			break;
		res.push_back(n);
	}
	return res;
}
//int main() {
////	vector<int> data1 = getSeq1();
////	for (auto e : data1)
////		cout << e << endl;
//
//	list<int> data2 = getSeq2();
//	for (auto e : data2)
//		cout << e << endl;
//	return 0;
//}
