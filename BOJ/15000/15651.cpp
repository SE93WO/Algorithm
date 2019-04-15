#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;

int arr[10];

void solve(int N, int M, int index, int start) {
	if (index == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i];
			if (i != M - 1) 
				cout << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= N; i++) {
		arr[index] = i;
		solve(N, M, index + 1, i + 1);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, M;
	cin >> N >> M;
	solve(N, M, 0, 0);
}