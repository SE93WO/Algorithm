#include <bits/stdc++.h>
using namespace std;

#define div 9901
int m[111111][4];
int main() {
	int N;
	cin >> N;
	m[1][0] = 1;
	m[1][1] = 1;
	m[1][2] = 1;

	for (int i = 2; i <= N; i++) {
		m[i][0] = (m[i - 1][0] + m[i - 1][1] + m[i - 1][2]) % div;
		m[i][1] = (m[i - 1][0] + m[i - 1][2]) % div;
		m[i][2] = (m[i - 1][0] + m[i - 1][1]) % div;
	}

	cout << (m[N][0] + m[N][1] + m[N][2]) % div;

}