//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;

int prize_1[6] = { 500, 300, 200, 50, 30, 10 };
int prize_2[5] = { 512, 256, 128, 64, 32 };

int comp_1(int n) {
	if (n == 0) return 0;
	int sum = 0;
	int cnt = 1;
	for (int i = 0; i < 6; i++) {
		sum += cnt;
		if (n <= sum)
			return prize_1[i] * 10000;
		cnt++;
	}
	return 0;
}

int comp_2(int n) {
	if (n == 0) return 0;
	int sum = 0;
	int cnt = 1;
	for (int i = 0; i < 6; i++) {
		sum += cnt;
		if (n <= sum)
			return prize_2[i] * 10000;
		cnt *= 2;
	}
	return 0;
}

int main() {
	int t, a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		cout << comp_1(a) + comp_2(b) << endl;
	}
	return 0;
}
