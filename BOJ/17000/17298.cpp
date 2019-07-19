#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	vector<int> vi(n), ans(n);
	for (int i = 0; i < n; i++) {
		cin >> vi[i];
	}
	stack<int> st;
	st.push(1e9);
	for (int i = n - 1; i >= 0; i--) {
		while (st.top() <= vi[i]) st.pop();
		if (st.top() >= 1e9) ans[i] = -1;
		else ans[i] = st.top();
		st.push(vi[i]);
	}
	for (auto x : ans) cout << x << " ";
}