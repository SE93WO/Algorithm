#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int height, width, n;
	int arr[101], x, y, sum = 0;
	cin >> width >> height >> n;
	for (int i = 0; i <= n; i++) {
		cin >> x >> y;
		switch (x) {
		case 1: arr[i] = y; break;
		case 2: arr[i] = 2 * width + height - y; break;
		case 3: arr[i] = 2 * (width + height) - y; break;
		case 4: arr[i] = width + y; break;
		}
	}

	for (int i = 0; i < n; i++) {
		int temp = abs(arr[i] - arr[n]);
		sum += (temp < (width + height)) ? temp : 2 * (width + height) - temp;
	}

	cout << sum;
}
