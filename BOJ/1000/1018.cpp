#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	char map[51][51];
	int N, M, ans = 1e9;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> map[i];
	}

	for (int i = 0; i < N - 7; i++) 
		for (int j = 0; j < M - 7; j++) {
			int cnt = 0;
			for (int k = i; k < i + 8; k++)
				for (int l = j; l < j + 8; l++) {
					cnt += map[k][l] == ((k & 1) ^ (l & 1) ? 'W' : 'B');
				}
			ans = min(ans, min(cnt, 64 - cnt));
		}

	cout << ans;
}