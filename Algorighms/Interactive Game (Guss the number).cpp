//In the name of God, the most gracious, the most merciful.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//
int main() {
	int s = 1, e = 1e6, ans;
	while (s <= e) {
		int mid = (s + e) / 2;
		cout << mid << endl;
		fflush(stdout);
		string st; cin >> st;
		if (st == "<")
			e = mid - 1;
		else {
			ans = mid;
			s = mid + 1;
		}
	}
	cout << "! " << ans;
	fflush(stdout);
	re 0;
}
