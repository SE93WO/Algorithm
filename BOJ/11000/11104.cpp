#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cmath>
using namespace std;

typedef long long ll;

int main() {
	int N;
	string input;

	cin >> N;
	while (N--, cin >> input) {
		int ans = 0;
		for (int i = 0; i < 24; i++) {
			if (input[23 - i] == '1')
				ans += pow(2, i);
		}
		cout << ans << endl;
	}
}