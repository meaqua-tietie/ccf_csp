#include <bits/stdc++.h>

using i64 = long long;

void turn(std::string &s) {
	for (int i = 0, n = int(s.length()); i < n; ++i) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 'a' - 'A';
		}
	}
}

bool check(std::string s, std::string mode) {
	int n = int(s.length()), m = int(mode.length());
	for (int i = 0; i < n; ++i) {
		int j;
		for (j = 0; j < m; ++i, ++j) {
			if (s[i] != mode[j]) {
				break;
			}
		}
		if (j == m) {
			return true;
		}
	}
	return false;
}

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::string s;
	int op, q, n = int(s.length());
	std::cin >> s >> op >> q;
	if (op == 0) {
		turn(s);
	}

	for (int i = 0; i < q; ++i) {
		std::string t;
		std::cin >> t;
		std::string temp = t;
		if (op) {
			turn(temp);
		}
		if (check(temp, s)) {
			std::cout << t << "\n";
		}
	}
	
	return 0;
}