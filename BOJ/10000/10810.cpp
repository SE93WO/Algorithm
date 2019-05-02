#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	int n, m;
	int mm[101] = { 0, };
	cin >> n >> m;
	while(m--) { 
		int i, j, k;	
		cin >> i >> j >> k;

		for (int a = i; a <= j; a++) {
			mm[a] = k;
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << mm[i] << " ";
	}
}