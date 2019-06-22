#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

bool desc(int a, int b) {
	return a > b;
}

int main() {
	int n;
	int arr[1000000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", arr + i);
	}
	sort(arr, arr + n, desc);
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
}
