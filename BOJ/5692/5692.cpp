#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int input;
	int factorial[] = { 1, 2, 6, 24, 120 };

	while (cin >> input, input != 0) {
		int ans = 0;
		for (int i = 0; input > 0; i++, input /= 10) {
			ans += (input % 10) * factorial[i];
		}
		cout << ans << '\n';
	}
}