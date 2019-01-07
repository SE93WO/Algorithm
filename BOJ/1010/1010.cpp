#include <iostream>
using namespace std;

int main() {
	int T, N, M;
	cin >> T;
	while (T--) {
		long long ans = 1;
		cin >> N >> M;
		
		for (int i = 1; i <= N; i++)
			ans = ans * (M - i + 1) / i;

		cout << ans << endl;
	}

	return 0;
}