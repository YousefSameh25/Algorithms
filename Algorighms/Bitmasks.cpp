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
int addBit(int n, int bit) {
	re (n | (1 << bit));
}
int removeBit(int n, int bit) {
	re (n & ~(1 << bit));
}
bool checkBit(int n, int bit) {
	re (n & (1 << bit));
}
int leastSignificantBit(int n) {
	re log2(n & (-n));
}
int mostSignificantBit(int n) {
	re 31 - __builtin_clz(n);
}
int togggleBit(int n, int bit) {
	re (n ^ (1 << bit));
}
bool ispoweroftwo(int n) {
	re (log2(n) == (int) log2(n));
}
void print(int n) {
	if (!n)
		re;
	print(n / 2);
	cout << n % 2;
}
int main() {
	Never_Mind
	debugMode();
	re 0;
}
