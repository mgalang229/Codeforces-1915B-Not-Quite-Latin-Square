#include <bits/stdc++.h>
using namespace std;

void solve() {
	char s[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> s[i][j];
	bool vis[3];
	for (int i = 0; i < 3; i++) {
		memset(vis, false, sizeof(vis));
		for (int j = 0; j < 3; j++)
			vis[s[i][j]-'A'] = true;
		bool ok = false;
		for (int j = 0; j < 3; j++) {
			if (!vis[j]) {
				cout << char('A' + j);
				ok = true;
			}
		}
		if (ok)
			break;
	}
	cout << "\n";
}

int main() {
	int t = 1;
	cin >> t;
	while (t--)
		solve();
}
