#include <iostream>
using namespace std;

int main() {
	int input[5];
	int ans = 0;

	for (int i = 0; i < 5; i++)
		cin >> input[i];
	
	for (int i = 0; i < 5; i++) {
		ans += input[i] * input[i];
	}

	cout << ans % 10;
}
