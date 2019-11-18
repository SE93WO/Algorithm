#include <iostream>
using namespace std;

int binary_tree[10001], n = 0;

void solve(int l, int r) {
	if (l > r) return;
	int root = l;
	int s = l, e = r;
	while (binary_tree[s] >= binary_tree[root]) s++;
	while (binary_tree[e] > binary_tree[root]) e--;
	solve(s, e);
	solve(e + 1, r);
	cout << binary_tree[root] << endl;
}
int main() {
	int input;
	while (cin >> input) binary_tree[n++] = input;
	solve(0, n - 1);
}