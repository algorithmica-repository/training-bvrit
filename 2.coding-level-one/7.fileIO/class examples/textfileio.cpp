#include <iostream>
#include <fstream>
using namespace std;

void readWrite(string in_name, string out_name) {
	ifstream fin(in_name);
	ofstream fout(out_name);
	string line;
	while(getline(fin, line)) {
		fout << line << "\n";
	}
	fin.close();
	fout.close();
}
int main() {
	string in_name, out_name;
	cin >> in_name;
	cin >> out_name;
	readWrite(in_name, out_name);
}
