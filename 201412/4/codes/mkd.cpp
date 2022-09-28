#include <bits/stdc++.h>
using namespace std;
const int MIN_SIZE = 1;
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
	int n, m, k, d;
	n = randInt(MIN_SIZE, MAX_SIZE);
	m = randInt(MIN_SIZE, n * n);
	k = randInt(MIN_SIZE, n * n);
	d = randInt(MIN_SIZE, n * n);
	cout << n << " " << m << " " << k << " " << d << "\n";
	bool vis[1001][1001] = {false};
	for (int i = 0; i < m; ++i) {
		int x = randInt(MIN_ELEMENT, n - 1);
		int y = randInt(MIN_ELEMENT, n - 1);
		if (!vis[x][y]) {
			vis[x][y] = true;
			cout << x << " " << y << "\n";
		} else {
			--i;
		}
	}
	for (int i = 0; i < k; ++i) {
		int x = randInt(MIN_ELEMENT, n - 1);
		int y = randInt(MIN_ELEMENT, n - 1);
		int c = randInt(1, 1000);
		if (!vis[x][y]) {
			cout << x << " " << y << " " << c << "\n";
		} else {
			--i;
		}
	}
	for (int i = 0; i < d; ++i) {
		int x = randInt(MIN_ELEMENT, n - 1);
		int y = randInt(MIN_ELEMENT, n - 1);
		if (!vis[x][y]) {
			vis[x][y] = true;
			cout << x << " " << y << "\n";
		} else {
			--i;
		}
	}
	return 0;
}