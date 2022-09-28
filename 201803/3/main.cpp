#include <bits/stdc++.h>

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	std::vector<int> a(n);
	int max = INT_MIN;
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
		if (a[i] > max) max = a[i];
	}

	std::vector<int> cnt(max + 1);
	int res;
	res = max = 0;
	for (int i = 0; i < n; ++i) {
		++cnt[a[i]];
		if (cnt[a[i]] > max) {
			max = cnt[a[i]];
			res = a[i];
		} else if (cnt[a[i]] == max) {
			res = std::min(res, a[i]);
		}
	}

	std::cout << res << "\n";

	return 0;
}