#include<iostream>
#include<conio.h>
using namespace std;
void main() {
	int num,fact=1,x=0;
	cout << "enter number:";
	cin >> num;
		for (int i = 1; i <= num; i++) {
			fact *= i;
			if (fact == num) {
				cout << "yes";
				x = 1;
				break;
			}
		}
		if (x == 0)
			cout << "no";
}