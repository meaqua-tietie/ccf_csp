#include <bits/stdc++.h>
using namespace std;
const int MIN_SIZE = 1;
const int MAX_SIZE = 500;
const int MIN_ELEMENT = 1;
const int MAX_ELEMENT = 1000;

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
		for (int j = 0; j < n; ++j) {
			std::cout << element() << " \n"[j == n - 1];
		}
	}
	return 0;
}