#include <iostream>
using namespace std;

int main() {
	int n, ans = 0;
	while (scanf("%d", &n) > 0) if (n > 0) ans++;
	cout << ans;
}