#include <bits/stdc++.h>

using i64 = long long;

struct Node {
	int x1, y1;
	int x2, y2;
	int level;
};

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	std::cin >> n >> m;

	std::vector<Node> a(n);
	for (int i = 0; i < n; ++i) {
		int x1, y1, x2, y2;
		std::cin >> x1 >> y1 >> x2 >> y2;
		a[i].x1 = x1;
		a[i].y1 = y1;
		a[i].x2 = x2;
		a[i].y2 = y2;
		a[i].level = i;
	}

	int pre = n - 1;
	for (int i = 0; i < m; ++i) {
		int x, y;
		std::cin >> x >> y;
		int max = -1;
		for (int j = 0; j < n; ++j) {
			if (a[j].x1 <= x && a[j].x2 >= x && a[j].y1 <= y && a[j].y2 >= y) {
				if (max == -1 || a[j].level > a[max].level) {
					max = j;
				}
			}
		}
		if (max == -1) {
			std::cout << "IGNORED\n";
		} else {
			std::cout << max + 1 << "\n";
			a[max].level = a[pre].level + 1;
			pre = max;
		}
	}

	return 0;
}