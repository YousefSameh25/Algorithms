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
long int memo[100][100];
long int pascal(int n, int m) {
	if (m == 0 or n == m)
		re 1;
	if (memo[n][m])
		re memo[n][m];
	re memo[n][m] = pascal(n - 1, m - 1) + pascal(n - 1, m);
}
void solve(int n, int m) {
	cout << n <<" things taken "<<m <<" at a time is " <<pascal(n, m)<<" exactly.\n";
}

int main() {
	Samo7a
	debugMode();
	int n, m;
	cin >> n >> m;
	solve(n, m);
	re 0;
}
