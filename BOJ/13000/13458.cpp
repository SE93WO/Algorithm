#include <iostream>
using namespace std;

int main() {
	long long arr[1000001];
	long long N, B, C, ans = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	cin >> B >> C;
	for (int i = 0; i < N; i++) {
		arr[i] -= B;
		ans++;
		if (arr[i] > 0) ans += arr[i] / C;
		if (arr[i] % C > 0) ans++;
	}

	cout << ans;
}