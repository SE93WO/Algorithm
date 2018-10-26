#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	int N;
	bool ans = true;
	string X, Y;

	cin >> N >> X >> Y;

	if (N % 2 == 1) {
		for (int i = 0; i < X.size(); i++) {
			if (X[i] == Y[i]) {
				ans = false;
				break;
			}
		}
	}
	else {
		for (int i = 00; i < X.size(); i++) {
			if (X[i] != Y[i]) {
				ans = false;
				break;
			}
		}
	}

	puts(ans ? "Deletion succeeded" : "Deletion failed");

}