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

ll gcd(ll a, ll b) {
	return b ? gcd(b, a % b) : a; 
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	ll a, b;
	cin >> a >> b;
	int r = gcd(a, b);
	for (int i = 0; i < r; i++)
		cout << "1";
}