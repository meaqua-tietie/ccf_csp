#include <bits/stdc++.h>

using i64 = long long;

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int s = 0, tmp = 0, res = 0;
	while (std::cin >> s) {
		if (s == 0) break;

		if (s == 2) {
			tmp = tmp <= 1 ? 2 : tmp + 2;
		} else {
			tmp = 1;
		}

		res += tmp;
	}

	std::cout << res << "\n";

	return 0;
}
