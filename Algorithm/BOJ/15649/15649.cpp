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
bool flag[10];

void solve(int N, int M, int index) {
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
		if (flag[i]) continue;
		flag[i] = true;
		arr[index] = i;
		solve(N, M, index + 1);
		flag[i] = false;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, M;
	cin >> N >> M;
	solve(N, M, 0);
}