#include <bits/stdc++.h>

using i64 = long long;

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}

	std::vector<int> stack, left(n), right(n);
	for (int i = 0; i < n; ++i) {
		while (!stack.empty() && a[stack.back()] >= a[i]) {
			right[stack.back()] = i;
			stack.pop_back();
		}
		left[i] = stack.empty() ? -1 : stack.back();
		stack.push_back(i);
	}
	while (!stack.empty()) {
		right[stack.back()] = n;
		stack.pop_back();
	}

	int res = 0;
	for (int i = 0; i < n; ++i) {
		res = std::max(res, (right[i] - left[i] - 1) * a[i]);
	}

	std::cout << res << "\n";
	
	return 0;
}