#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a, int b) {
	return a > b;
}

int main() {
	int input[8];
	int ans[8];
	int sum = 0;

	for (int i = 0; i < 8; i++) {
		cin >> input[i];
		ans[i] = input[i];
	}

	sort(ans, ans + 8, desc);

	for (int i = 0; i < 5; i++) {
		sum += ans[i];
	}
	
	cout << sum << endl;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 5; j++) {
			if (input[i] == ans[j])
				cout << i + 1 << " ";
		}
	}

}