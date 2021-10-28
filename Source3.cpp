#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int x, y,z;
	int km;
	cout << "enter 2 numbers:(no 0)";
	cin >> x >> y;
	z = x > y ? x : y;
	if (x == 0 || y == 0)
		cout << "error!!";
	else {
		while (true) {
			if (z % x == 0 && z % y == 0)
				break;
			else
				z++;
		}
		cout << "\nkmm=" << z;
	}
}