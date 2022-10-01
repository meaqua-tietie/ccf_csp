#include <bits/stdc++.h>

using i64 = long long;

struct Node {
	int status;
	double p;
	i64 s;
} a[5010];

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n = 0;
	std::string opt;
	while (std::cin >> opt) {
		if (opt[0] == 'c') {
			int i;
			std::cin >> i;
			a[i].status = 0;
			++n;
		} else {
			std::cin >> a[++n].p >> a[n].s;
			a[n].status = opt[0] == 'b' ? 1 : 2;
		}
	}

	double rp = 0.0;
	i64 rs = 0LL;
	for (int i = 1; i <= n; ++i) {
		if (!a[i].status) continue;
		double curP = a[i].p;
		i64 buy = 0, sell = 0;
		for (auto x : a) {
			if (x.status == 1 && x.p >= curP) {
				buy += x.s;
			} else if (x.status == 2 && x.p <= curP) {
				sell += x.s;
			}
		}
		i64 tmp = std::min(buy, sell);
		if (tmp > rs || (tmp == rs && curP >= rp)) {
			rp = curP;
			rs = tmp;
		}
	}

	std::cout << std::fixed << std::setprecision(2) << rp << " ";
	std::cout << rs << "\n";

	return 0;
}