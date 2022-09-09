//In the name of God, the most gracious, the most merciful.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Never_Mind ios_base::sync_with_stdio(false);cin.tie(nullptr); cout.tie(nullptr);
#define re return
#define FX(n) fixed << setprecision(n)
#define endl '\n'
#define sz(v) (int) v.size()
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define pb push_back
#define eb emplace_back
#define pi acos(-1)
#define F first
#define S second
const int N = 2e5 + 10, MOD = 1e9 + 7;
inline void debugMode() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//
void div(int k, vector<pair<int, int>> &tmp) {
	for (int i = 1; i * i <= k; i++) {
		if (k % i == 0) {
			tmp.eb(i, k / i);
			if (k / i != i)
				tmp.eb(k / i, i);
		}
	}
}
int main() {
	Never_Mind
	debugMode();
	int t;
	cin >> t;
	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		int arr[n + 10][m + 10];
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				arr[0][j] = 0, arr[i][0] = 0, arr[0][0] = 0;
				cin >> arr[i][j];
			}
		}
		// pre row
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				arr[i][j] += arr[i][j - 1];
			}
		}
		// pre colu
		for (int j = 1; j <= m; j++) {
			for (int i = 1; i <= n; i++) {
				arr[i][j] += arr[i - 1][j];
			}
		}
		ll mx = -1;
		vector<pair<int, int>> tmp;
		div(k, tmp);
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				for (auto iter : tmp) {
					iter.F--, iter.S--;
					if (i - iter.F >= 1 and j - iter.S >= 1) {
						ll sum = arr[i][j];
						sum -= arr[i - iter.F - 1][j];
						sum -= arr[i][j - iter.S - 1];
						sum += arr[i - iter.F - 1][j - iter.S - 1];
						mx = max(mx, sum);
					}
				}
			}
		}
		if (mx == -1)
			cout << "No such rectangle.\n";
		else
			cout << mx << endl;
	}
	re 0;
}
