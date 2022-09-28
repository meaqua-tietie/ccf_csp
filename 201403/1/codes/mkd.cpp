#include <bits/stdc++.h>
using namespace std;
const int MIN_SIZE = 1;
const int MAX_SIZE = 500;
const int MIN_ELEMENT = -1000;
const int MAX_ELEMENT = 1000;

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
	set<int> set;
	for (int i = 0; i < n; ++i) {
		int tmp = randInt(MIN_ELEMENT, MAX_ELEMENT);
		while (set.find(tmp) != set.end()) {
			tmp = randInt(MIN_ELEMENT, MAX_ELEMENT);
		}
		set.insert(tmp);
		cout << tmp << " \n"[i == n - 1];
	}
	return 0;
}