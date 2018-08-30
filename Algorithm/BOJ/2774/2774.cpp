#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	string input;

	cin >> T;
	for (int i = 0; i < T; i++) {
		int num[10] = { 0, };
		int cnt = 0;
		cin >> input;
		for (int j = 0; j < input.length(); j++) {
			int temp = input[j] - '0';
			num[temp]++;
		}

		for (int k = 0; k < 10; k++) {
			if (num[k] > 0)
				cnt++;
		}

		cout << cnt << endl;
	}

 }