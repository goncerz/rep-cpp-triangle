#include <iostream>
using namespace std;

void triangle(int n, char c) {
	int w;
	w = (n + 1) / 2;

	for (int i = 0; i < w; i++) {
		if (n % 2 == 1 || n == 1) {
			for (int j = 1; j <= n; j++) {
				if (j >= w - i && j <= w + i) {
					cout << c;
				}
				else {
					cout << " ";
				}
			}
		}
		else {
			for (int j = 1; j <= n; j++) {
				if (j >= w - i && j <= w + 1 + i) {
					cout << c;
				}
				else {
					cout << " ";
				}
			}
		}
		cout << endl;
	}
}