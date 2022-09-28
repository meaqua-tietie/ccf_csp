#include <bits/stdc++.h>
using namespace std;
const int MIN_SIZE = 4;
const int MAX_SIZE = 1000;
const int MIN_ELEMENT = 1;
const int MAX_ELEMENT = 10000;

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
	cout << n << "\n";
	return 0;
}