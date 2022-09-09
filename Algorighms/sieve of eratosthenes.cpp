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
bitset<N> is_prime;
vector<int> sieve(int n) {
	vector<int> primes;
	is_prime.set();
	is_prime[0] = is_prime[1] = 0;
	for (int i = 2; i * i <= n; i++) {
		if (is_prime[i]) {
			for (int j = i + i; j <= n; j += i) {
				is_prime[j] = 0;
			}
		}
	}
	for (int i = 0; i <= n; i++) {
		if (is_prime[i]) {
			primes.pb(i);
		}
	}
	re primes;
}
int main() {
	Never_Mind
	debugMode();
	int n;
	cin >> n;
	vector<int> primes = sieve(n);
	cout << "Count of primes numbers = " << sz(primes) << endl;
	for (int prime : primes)
		cout << prime << " ";
	re 0;
}
