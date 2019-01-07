#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	int ans;

	cin >> N;
	for (int i = 0; i <= N; i++) {
		ans = (1 + pow(2, i)) * (1 + pow(2, i));
	}

	cout << ans;
}