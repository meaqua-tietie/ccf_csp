#include <bits/stdc++.h>

using i64 = long long;

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	std::vector mat(n, std::vector<int>(n));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			std::cin >> mat[i][j];
		}
	}

	bool up = true;
	int i = 0, j = 0;
	for (int pos = 0; pos < n * n; ++pos) {
		std::cout << mat[i][j] << " \n"[pos == n * n - 1];
		if (up) {
			if (j == n - 1) ++i, up = !up;
			else if (i == 0) ++j, up = !up;
			else --i, ++j;
		} else {
			if (i == n - 1) ++j, up = !up;
			else if (j == 0) ++i, up = !up;
			else --j, ++i;
		}
	}

	return 0;
}