#include <bits/stdc++.h>

using i64 = long long;

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, x;
	std::cin >> n >> x;

	std::vector<int> a(n);
	int pre = 0;
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
		pre += a[i];
	}

	std::vector<int> dp(pre + 1);
	for (int i = 0; i < n; ++i) {
		for (int j = pre; j >= a[i]; --j) {
			dp[j] = std::max(dp[j], dp[j - a[i]] + a[i]);
		}
	}

	int res = 0;
	for (int i = x; i <= pre; ++i) {
		if (dp[i] >= x) {
			res = i;
			break;
		}
	}

	std::cout << res << "\n";

	return 0;
}