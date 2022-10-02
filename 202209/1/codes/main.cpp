#include <bits/stdc++.h>

using i64 = long long;

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	std::cin >> n >> m;

	std::vector<int> a(n + 1), b(n + 1), c(n + 1);
	c[0] = 1;
	for (int i = 1; i <= n; ++i) {
		std::cin >> a[i];
		c[i] = a[i] * c[i - 1];
	}

	for (int i = n; i >= 1; --i) {
		b[i] = m / c[i - 1];
		m -= b[i] * c[i - 1];
	}

	for (int i = 1; i <= n; ++i) {
		std::cout << b[i] << " \n"[i == n];
	}

	return 0;
}