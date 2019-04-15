#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	int bucket[101];
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		bucket[i] = i;

	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		swap(bucket[x], bucket[y]);
	}

	for (int i = 1; i <= N; i++) {
		cout << bucket[i] << " ";
	}
}