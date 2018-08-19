#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	int N[5];

	cin >> T;
	while (T--) {
		for (int i = 0; i < 5; i++) {
			cin >> N[i];
		}
		
		sort(N, N + 5);
		
		if (N[3] - N[1] >= 4) {
			cout << "KIN" << endl;
		}
		else
			cout << N[1] + N[2] + N[3] << endl;
	}
}