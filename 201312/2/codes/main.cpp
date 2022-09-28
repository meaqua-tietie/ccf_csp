#include <bits/stdc++.h>

using i64 = long long;

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::string s;
	std::cin >> s;

	int n = int(s.length());
	int res = 0, cnt = 1;
	for (int i = 0; i < n - 1; ++i) {
		if (s[i] >= '0' && s[i] <= '9') {
			res += (s[i] - '0') * cnt++;
		}
	}

	res %= 11;
	char c = res == 10 ? 'X' : (res + '0');
	if (c == s[n - 1]) {
		std::cout << "Right\n";
	} else {
		s[n - 1] = c;
		std::cout << s << "\n";
	}

	return 0;
}
