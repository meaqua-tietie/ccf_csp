#include <bits/stdc++.h>

using i64 = long long;

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	std::map<int, int> map;
	for (int i = 0, x; i < n; ++i) {
		std::cin >> x;
		std::cout << ++map[x] << " \n"[i == n - 1];
	}

	return 0;
}
