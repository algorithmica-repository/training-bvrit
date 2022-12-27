#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

void readWrite(string infile, string outfile) {
	ifstream fin(infile);
	ofstream fout(outfile);
	string line;
	while(getline(fin, line)) {
		cout << line << "\n";
		fout << line << "\n";
	}
	fin.close();
	fout.close();
}
int main() {
	string infile, outfile;
	cin >> infile;
	cin >> outfile;
	readWrite(infile, outfile);
}
