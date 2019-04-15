#include <iostream>
using namespace std;

int main() {
	int N, K;
	int cnt = 0;
	bool num[1001] = { 0, };

	cin >> N >> K;

	for (int i = 2; i <= N; i++) {
		if (num[i])
			continue;
		for (int j = i; j <= N; j += i) {
			if (num[j])
				continue;
			cnt++;
			num[j] = true;
			if (cnt == K) {
				cout << j << endl;
				break;
			}
		}
	}
}