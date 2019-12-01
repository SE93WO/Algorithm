#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k, nmax = -101, sum = 0;
	cin >> n >> k;
	vector<int> vi(n);
	
	for (int i = 0; i < n; i++) {
		cin >> vi[i];
	}

	for (int i = 0; i <= n - k; i++) {
		for (int j = i; j < i + k; j++) {
			sum += vi[j];
		}
		if (nmax < sum) {
			nmax = sum;
		}
		sum = 0;
	}
	
	cout << nmax;
}