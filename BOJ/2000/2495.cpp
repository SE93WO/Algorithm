#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string input;

	for (int i = 0; i < 3; i++) {
		cin >> input;
		int max_num = 0;
		int cnt = 1;
		for (int j = 0; j < 7; j++) {
			if (input[j] == input[j + 1])
				cnt++;
			else
				cnt = 1;
			max_num = max(max_num, cnt);
		}

		cout << max_num << endl;
	}
}