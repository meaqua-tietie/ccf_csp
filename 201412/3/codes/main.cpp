#include <bits/stdc++.h>

using i64 = long long;

struct Node {
	bool buy;
	double p;
	int s;
	bool canceled;
};

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::string op;
	double p;
	int s;

	std::vector<Node> a;
	while (std::cin >> op) {
		if (op == "cancel") {
			std::cin >> s;
			a[s - 1].canceled = true;
		} else {
			std::cin >> p >> s;
			a.push_back({op == "buy" ? true : false, p, s, false});
		}
	}

	double price = 9.00;
	int in = 0, out = 0;

	for (int i = 0; i < int(a.size()); ++i) {
		if (a[i].canceled == false) {
			if (a[i].p >= price) {
				if (a[i].buy) {
					in += a[i].s;
				} else {
					out += a[i].s;
				}
			}
		}
	}

	std::cout << std::min(in, out) << "\n";
	
	return 0;
}

//buy 9.25 100
//buy 8.88 175
//sell 9.00 1000
//buy 9.00 400
//sell 8.92 400
//cancel 1
//buy 100.00 50

// sell 1000
// buy 400 + 50