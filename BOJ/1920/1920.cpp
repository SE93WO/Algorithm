#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	scanf("%d", &N);

	int A[100001] = { 0, };

	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}

	sort(A, A + N);

	scanf("%d", &M);

	for (int i = 0; i < M; i++) {
		int B;
		scanf("%d", &B);

		int low = 0, high = N - 1, mid = 0, ans = 0;
		while (low <= high) {
			mid = (low + high) / 2;
			if (B > A[mid])
				low = mid + 1;
			else if (B < A[mid])
				high = mid - 1;
			else {
				ans = 1;
				break;
			}
		}

		printf("%d\n", ans);
	}
}