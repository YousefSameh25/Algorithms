//In the name of God, the most gracious, the most merciful.
#include <bits/stdc++.h>
using namespace std;
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//
// the observation is (i + j) on the reversed diagonal = (n + m - 1)/2
void reversed_diagonal() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((i + j) == (n + n - 1) / 2) {
				cout << 'X';
			} else {
				cout << '.';
			}
		}
		cout << endl;
	}
}
int main() {
	reversed_diagonal();
	return 0;
}
