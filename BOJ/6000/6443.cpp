#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	
	while (n--) {
		string str;
		cin >> str;

		sort(str.begin(), str.end());
		do {
			cout << str << '\n';
		} while (next_permutation(str.begin(), str.end()));
	}
}
