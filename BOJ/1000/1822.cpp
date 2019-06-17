#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int a, b;
	set<int> s;
	cin >> a >> b;

	int input;
	for (int i = 0; i < a; i++) {
		cin >> input;
		s.insert(input);
	}
	for (int i = 0; i < b; i++) {
		cin >> input;
		
		auto it = s.find(input);
		if (it == s.end()) continue;
		else s.erase(it);
	}
	
	cout << s.size() << endl;
	for(auto x : s) {
		cout << x << " ";
	}
	return 0;
}
