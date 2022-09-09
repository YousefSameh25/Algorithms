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
ll fast_power_recu(ll b, ll p) {
	if (!p)
		re 1;
	ll h = fast_power_recu(b, p / 2);
	h *= h;
	if (p & 1)
		h *= b;
	re h;
}
ll fast_power_itera(ll b, ll p) {
	ll ans = 1;
	while (p) {
		if (p & 1)
			ans *= b;
		b *= b;
		p >>= 1;
	}
	re ans;
}
int main() {
	Never_Mind
	debugMode();
	cout << fast_power_recu(5, 4);
	re 0;
}
