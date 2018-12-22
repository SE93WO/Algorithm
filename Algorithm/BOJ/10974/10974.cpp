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

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	vector<int> vi(N);

	for (int i = 0; i < N; i++) {
		vi[i] = i + 1;
	}

	do {
		for(int i = 0; i < N; i++) {
			cout << vi[i] << ' ';
		}
		cout << '\n';
	} while (next_permutation(vi.begin(), vi.end()));

}