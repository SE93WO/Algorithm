#include <iostream>
using namespace std;

int main() {
	int A, B;
	int cnt = 0, ans = 0;
	cin >> A >> B;

	for (int i = 1; i <= B;) {
		cnt++;
		for (int j = 1; j <= cnt; j++) {
			if (A <= i && i <= B)
				ans += cnt;
			i++;
		}
	}

	cout << ans;
}