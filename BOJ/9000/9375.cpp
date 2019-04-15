#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		set<string> set;
		multimap<string, string> map;

		for (int i = 0; i < n; i++) {
			string a, b;
			cin >> a >> b;
			set.insert(b);
			map.insert(pair<string, string>(b, a));
		}
		int ans = 1;

		for (auto& s : set)
			ans *= map.count(s) + 1;

		cout << ans - 1 << endl;
	}
}