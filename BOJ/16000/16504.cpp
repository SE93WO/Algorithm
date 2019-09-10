#include <iostream>
using namespace std;

int main() {
	int n, num;
	long long ans = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> num;
			ans += num;
		}
	}
	
	cout << ans;
}