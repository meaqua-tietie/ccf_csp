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

double randDouble(double left, double right) {
	int denominator = randInt(0, 100);
	double decimal = denominator == 0 ? 0.0 : (1.0 / denominator);
	double res = 1.0 * randInt(left, right) + decimal;
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
	int n = randInt();
	return 0;
}