#include <bits/stdc++.h>
using namespace std;
const int MIN_SIZE = 1;
const int MAX_SIZE = 10;
const int MIN_ELEMENT = 0;
const int MAX_ELEMENT = 2559;

int randInt(int left, int right) {
	int res = left;
	res += (1.0 * rand() / RAND_MAX) * (right - left + 1);
	return res;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	srand(time(0));
	int n = randInt(MIN_SIZE, MAX_SIZE);
	int m = randInt(MIN_SIZE, MAX_SIZE);
	cout << n << " " << m << "\n";
	for (int i = 0; i < n; ++i) {
		int a = randInt(MIN_ELEMENT, MAX_ELEMENT);
		int b = randInt(MIN_ELEMENT, 1439);
		int c = randInt(MIN_ELEMENT, MAX_ELEMENT);
		int d = randInt(MIN_ELEMENT, 1439);
		cout << a << " " << b << " " << c << " " << d << "\n";
	}
	for (int i = 0; i < m; ++i) {
		int a = randInt(MIN_ELEMENT, MAX_ELEMENT);
		int b = randInt(MIN_ELEMENT, 1439);
		cout << a << " " << b << "\n";
	}
	return 0;
}