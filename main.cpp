#include <iostream>
#include "header.h"
using namespace std;

int main(void) {
	int n;
	int w;
	char c = '*';

	do {
		cout << "Wprowadz liczbe naturalna n: ";
		cin >> n;
	} while (n < 1);

	cout << endl << "Trojkat rownoramienny o podstawie " << n << " utworzony ze znakow " << c << " :" << endl;

	triangle(n, c);

	return 0;
}