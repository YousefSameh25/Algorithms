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
int main() {
	Never_Mind
	debugMode();
	//O(sqrt(n))
	int n;
	cin >> n;
	vector<pair<int, int>> prime_factors;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			int power = 0;
			while (n % i == 0) {
				power++;
				n /= i;
			}
			prime_factors.eb(i, power);
		}
	}
	// if the rem n is already prime
	if (n > 1) {
		prime_factors.eb(n, 1);
	}
	for (auto iter : prime_factors) {
		cout << iter.F << "^" << iter.S << endl;
	}
	re 0;
}
