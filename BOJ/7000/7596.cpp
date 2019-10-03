#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n, cnt = 1;
	while (true) {
		cin >> n;
		if (n == 0) break;
		vector<string> vs(n);
		cin.ignore();
		for (int i = 0; i < n; i++) {
			getline(cin, vs[i]);
		}
		sort(vs.begin(), vs.end());
		cout << cnt++ << endl;
		for (auto x : vs) {
			cout << x << endl;
		}
	}
}