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
ll mul(ll a, ll b, ll m) {
	a %= m, b %= m;
	re (a * b) % m;
}

ll fast_power(ll a, ll b, ll m) {
	if (b == 0 or a == 1)
		re 1;
	ll half = fast_power(a, b / 2, m);
	if (b & 1)
		re mul(a, mul(half, half, m), m);
	re mul(half, half, m);
}

int main() {
	Samo7a
	debugMode();
	ll a, b, m;
	while (cin >> a >> b >> m) {
		cout << fast_power(a, b, m) <<endl;
	}
	re 0;
}
