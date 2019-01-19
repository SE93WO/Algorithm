#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <vector>
#include <vector>
#include <map>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	stack<int> st;
	cin >> n;

	do {
		int left = n % -2;
		n = n / -2;

		if (left < 0) {
			left = 1;
			n++;
		}
		st.push(left);
	} while (n != 0);

	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}

	return 0;
}