#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n, m;
vector <int> v[32001];
priority_queue <int> que;
int indegree[32001];

void solve() {

	while (!que.empty()) {
		int here = -que.top();
		que.pop();
		printf("%d ", here); 
		for (int i = 0; i < v[here].size(); i++) {
			indegree[v[here][i]]--; 
			if (!indegree[v[here][i]]) {
				que.push(-v[here][i]);
			}
		}
	}
	printf("\n");
}
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		int a, b; scanf("%d %d", &a, &b);
		v[a].push_back(b);
		indegree[b]++; 
	}
	for (int i = 1; i <= n; i++) {
		if (indegree[i] == 0)que.push(-i);
	}
	solve();
}