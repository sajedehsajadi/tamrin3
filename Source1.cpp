#include<iostream>
#include<conio.h>
using namespace std;
void main() {
	int n, m;
	cout << "enter count of rows and columns:";
	cin >> n >> m;
	char** p;
	p = new char*[n];
	for (int i = 0; i < n; i++) {
		p[i - 1] = new char[m];
	}
	for (int k = 0; k < n; k++) {
		if (k % 2 == 0) {
			for (int s = 0; s < m; s++) {
				if (s % 2 == 0)
					cout << "#";
				else
					cout << "*";
			}
			cout << '\n';
		}
		else {
			for (int h = 0; h < m; h++) {
				if (h % 2 == 0)
					cout << "*";
				else
					cout << "#";
			}
			cout << '\n';
		}
	}
}