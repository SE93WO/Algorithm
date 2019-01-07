#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cmath>
using namespace std;

typedef long long ll;

int main() {
	char x;

	while (cin >> x, x != '#') {
		int ans = 0;
		string y; 
		getline(cin, y);

		for (int i = 0; i < y.size(); i++) {
			if (tolower(y[i]) == x) ans++;
		}

		cout << x << " " << ans << endl;
	}
}