#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n, m;
	int num[101] = { 0, };
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	for (int i = 1; i <= m; i++) {
		for (int j = 0; j + 1 < n; j++) {
			if (num[j] % i > num[j + 1] % i) swap(num[j], num[j + 1]);
		}
	}

	for (int i = 0; i < n; i++) cout << num[i] << endl;
}
