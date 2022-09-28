#include <bits/stdc++.h>

using i64 = long long;
constexpr int p = 1E9 + 7;

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	std::vector<std::array<i64, 6>> a(n);
	a[0][0] = 1LL;
	for (int i = 1; i < n; ++i) {
		// 只含 2
		a[i][0] = 1LL;
		// 只含 2 0
		a[i][1] = (a[i - 1][0] + a[i - 1][1] * 2) % p;
		// 只含 2 3
		a[i][2] = (a[i - 1][0] + a[i - 1][2]) % p;
		// 只含 2 0 1 
		a[i][3] = (a[i - 1][1] + a[i - 1][3] * 2) % p;
		// 只含 2 0 3
		a[i][4] = (a[i - 1][1] + a[i - 1][2] + a[i - 1][4] * 2) % p;
		// 含 2 0 3 1
		a[i][5] = (a[i - 1][3] + a[i - 1][4] + a[i - 1][5] * 2) % p;
	}

	std::cout << a[n - 1][5] << "\n";
	
	return 0;
}