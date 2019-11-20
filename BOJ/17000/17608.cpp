#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];
int n, nmax = 0, cnt = 0;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = n; i >= 0; i--) {
		if (arr[i] > nmax) {
			nmax = arr[i];
			cnt++;
		}
	}

	cout << cnt;
}
