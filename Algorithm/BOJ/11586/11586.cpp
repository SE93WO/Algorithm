#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, K;
	string input[101];

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input[i];
	}
	cin >> K;

	if (K == 1) {
		for (int i = 0; i < N; i++) {
			cout << input[i] << endl;
		}
	}
	else if (K == 2) {
		for (int i = 0; i < N; i++) {
			for (int j = N - 1; j >= 0; j--) {
				cout << input[i][j];
			}
			cout << endl;
		}
	}
	else if (K == 3) {
		for (int i = N - 1; i >= 0; i--) {
			cout << input[i] << endl;
		}
	}
}