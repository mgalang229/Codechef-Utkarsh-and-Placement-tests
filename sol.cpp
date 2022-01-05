#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		vector<char> company(3);
		for (int i = 0; i < 3; i++) {
			cin >> company[i];
		}
		char x, y;
		cin >> x >> y;
		// check the placements of the letters (lower index = most preferred)
		int xx = 4;
		int yy = 4;
		for (int i = 0; i < 3; i++) {
			if (x == company[i]) {
				xx = i;
			} else if (y == company[i]) {
				yy = i;
			}
		}
		cout << (xx < yy ? x : y) << '\n';
	}
	return 0;
}