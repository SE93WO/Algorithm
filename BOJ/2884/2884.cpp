#include <iostream>
using namespace std;

int main() {
	int H, M;
	int ans;
	cin >> H >> M;

	ans = H * 60 + M;
	ans -= 45;

	ans += 60 * 24;
	ans %= 60 * 24;

	cout << ans / 60 << " " << ans % 60;
}