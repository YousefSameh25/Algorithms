//In the name of God, the most gracious, the most merciful.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Samo7a ios_base::sync_with_stdio(false);cin.tie(nullptr); cout.tie(nullptr);
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
int n, m;
void line(int i, int j) {
	if (j == m + 1)
		re;
	if (i == 1 or i == n)
		cout << '*';
	else if (j == m or j == 1)
		cout << '*';
	else
		cout << ' ';
	line(i, j + 1);
}
void print(int i) {
	if (i == n + 1)
		re;
	line(i, 1);
	cout << endl;
	print(i + 1);
}
int main() {
	Samo7a
	debugMode();
	cin >> n >> m;
	print(1);
	re 0;
}
