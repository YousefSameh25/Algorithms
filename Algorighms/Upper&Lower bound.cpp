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
	//freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
int main() {
	Samo7a
	debugMode();
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int q;
	cin >> q;
	while (q--) {
		int x;
		cin >> x;
		int s = 0, e = n;
		while (s <= e) {
			int mid = (s + e) / 2;
			if (x >= arr[mid]) { // with (=)-> upper bound - without (=) -> lowerbound
				s = mid + 1;
			} else {
				e = mid - 1;
			}
		}
		if (s < n) {
			cout << arr[s] << endl;
		} else {
			cout << "Not found\n";
		}
	}

	re 0;
}
