#include <bits/stdc++.h>
using namespace std;
const int MIN_SIZE = 1;
const int MAX_SIZE = 100;
const int MIN_ELEMENT = 0;
const int MAX_ELEMENT = 99;

int randInt(int left, int right) {
	int res = left;
	res += (1.0 * rand() / RAND_MAX) * (right - left + 1);
	return res;
}

int size() {
	return randInt(MIN_SIZE, MAX_SIZE);
}

int element() {
	return randInt(MIN_ELEMENT, MAX_ELEMENT);
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	srand(time(0));
	int n = size();
	cout << n << "\n";
	for (int i = 0; i < n; ++i) {
		int x1 = randInt(MIN_ELEMENT, MAX_ELEMENT);
		int y1 = randInt(MIN_ELEMENT, MAX_ELEMENT);
		int x2 = randInt(x1, MAX_ELEMENT);
		int y2 = randInt(y1, MAX_ELEMENT);

		cout << x1 << " " << y1 << " " << x2 << " " << y2 << "\n";
	}
	return 0;
}