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

bool check(string &password) {
	int consonant = 0;
	int vowel = 0;
	for (char x : password) {
		if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
			consonant++;
		}
		else {
			vowel++;
		}
	}
	return consonant >= 1 && vowel >= 2;
}

void solve(int n, vector<char> &alpha, string password, int index) {
	if (password.length() == n) {
		if (check(password)) {
			cout << password << '\n';
		}
		return;
	}

	if (index >= alpha.size()) return;

	solve(n, alpha, password + alpha[index], index + 1);
	solve(n, alpha, password, index + 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int L, C;
	cin >> L >> C;
	vector<char> vc(C);
	for (int i = 0; i < vc.size(); i++) {
		cin >> vc[i];
	}

	sort(vc.begin(), vc.end());
	solve(L, vc, "", 0);
	return 0;
}