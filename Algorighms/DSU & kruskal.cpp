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
struct DSU {
	vector<int> rank, parent;
	int forests;

	DSU(int nodes) {
		forests = nodes;
		rank.resize(nodes + 1, 1);
		parent.resize(nodes + 1);
		for (int i = 1; i <= nodes; i++)
			parent[i] = i;
	}

	// Path compression
	int find_set(int node) {
		if (node == parent[node])
			return node;
		return parent[node] = find_set(parent[node]);
	}

	void join(int nodeX, int nodeY) {
		// Always join the small tree to the large
		if (rank[nodeX] > rank[nodeY])
			swap(nodeX, nodeY);
		parent[nodeX] = nodeY;
		// Update the rank if needed
		if (rank[nodeX] == rank[nodeY])
			rank[nodeY]++;
	}

	bool union_sets(int nodeX, int nodeY) {
		int parentX = find_set(nodeX), parentY = find_set(nodeY);
		if (parentX != parentY) {
			join(parentX, parentY);
			forests--;
		}
		return (parentX != parentY);
	}
};
struct edge {
	int from, to, weight;
	edge(int f, int t, int w) {
		from = f, to = t, weight = w;
	}
	bool operator <(const edge &e) const {
		return weight > e.weight;
	}
};
pair<int, vector<edge>> Kruskal(vector<edge> &edges, int nodes) {
	DSU dsu(nodes);
	vector<edge> MST;
	int mst_cost = 0;
	priority_queue<edge> pq;
	for (edge e : edges)
		pq.push(e);

	while (pq.size()) {
		edge e = pq.top();
		pq.pop();
		if (dsu.union_sets(e.from, e.to)) {
			mst_cost += e.weight;
			MST.push_back(e);
		}
	}
	if ((int) MST.size() != nodes - 1)
		return make_pair(-1, MST);
	return make_pair(mst_cost, MST);
}

int main() {
	Samo7a
	debugMode();
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<edge> v;
		while (m--) {
			int x, y, w;
			cin >> x >> y >> w;
			v.push_back(edge(x, y, w));
		}
		cout << "mst cost = " <<Kruskal(v, n).first << endl;
	}
	re 0;
}
