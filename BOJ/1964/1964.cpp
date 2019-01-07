#include <iostream>
using namespace std;

int main() {
	long long N, ans;
	cin >> N;

	cout << (1 + 4 * N + 3 * N * (N - 1) / 2) % 45678;
}