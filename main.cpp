#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t; cin >> t;
	while (0 < (t--)) {
		int n, m; cin >> n >> m;

		int x;
		for (auto i = 0; i < n; ++i) {
			cin >> x;
		}

		for (auto i = 0; i < m; ++i) {
			cin >> x;
		}

		if (n <= m) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}

	return 0;
}