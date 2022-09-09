//In the name of God, the most gracious, the most merciful.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Master_Minds ios_base::sync_with_stdio(false);cin.tie(nullptr); cout.tie(nullptr);
#define re return
#define FX(n) fixed << setprecision(n)
#define endl '\n'
#define sz(v) (int)v.size()
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define pb push_back
#define eb emplace_back
#define pi acos(-1)
#define F first
#define S second
const int N = 5e5 + 10, MOD = 1e9 + 7;
inline void debugMode() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
void binay(int n) {
	if (!n) re;
	binay(n >> 1);
	cout << (n & 1);
}
int main() {
	Master_Minds
	debugMode();
	int n;
	cin >> n;
	binay(n);
	re 0;

}
