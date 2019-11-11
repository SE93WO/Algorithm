#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vi[10001];
vector<int> ans;
bool visited[10001];
int n, m;

int dfs(int n) {
	visited[n] = true;
	int ret = 0;
	for (int i = 0; i < vi[n].size(); i++) {
		if (!visited[vi[n][i]]) {
			ret += dfs(vi[n][i]);
		}
	}
	return ret + 1;
}

int main() {
	cin >> n >> m;
	
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		vi[b].push_back(a);
	}

	int maxn = -1;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			visited[j] = false;
		}
		int temp = dfs(i);
		if (maxn < temp) {
			ans.clear();
			ans.push_back(i);
			maxn = temp;
		} 
		else if (maxn == temp) {
			ans.push_back(i);
		}
	}

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
}