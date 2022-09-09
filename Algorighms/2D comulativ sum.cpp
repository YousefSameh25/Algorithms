//In the name of God, the most gracious, the most merciful.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int uint;
#define Samo7a ios_base::sync_with_stdio(false);cin.tie(nullptr); cout.tie(nullptr);
#define re return
#define FX(n) fixed << setprecision(n)
#define endl '\n'
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define pb push_back
#define eb emplace_back
#define pi 3.14159265
const int N = 5e5 + 10, MOD = 1e9 + 7;
inline void debugMode() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE
}

int main() {
	Samo7a
	debugMode();
	int n, m;
	cin >> n >> m;
	int arr[n + 1][m + 1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			arr[i][0] = 0 , arr[0][j] = 0;
			cin >> arr[i][j];
		}
	}

	//sum each row
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			arr[i][j] += arr[i][j - 1];
		}
	}

	//sum each column
	for (int j = 1; j <= m; j++) {
		for (int i = 1; i <= n; i++) {
			arr[i][j] += arr[i - 1][j];
		}
	}

	//print final sum
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	re 0;
}
