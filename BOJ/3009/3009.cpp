#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <vector>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b;
	int x = 0, y = 0;
	for (int i = 0; i < 3; i++) {
		cin >> a >> b;
		x ^= a; 
		y ^= b;
	}
	cout << x << y;
}

