#include <iostream>
using namespace std;

int main() {
	int max = 0, res = 0;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		int a = n;
		int b = i;
		int temp;
		while (b >= 0) {
			cnt++;
			temp = a - b;
			a = b;
			b = temp;
		}
		if (cnt > max) {
			max = cnt;
			res = i;
		}
	}
	cout << max + 1 << '\n' << n << " ";
	int a = n;
	int b = res;
	while (b >= 0) {
		cout << b << " ";
		int temp = a - b;
		a = b;
		b = temp;
	}
}
