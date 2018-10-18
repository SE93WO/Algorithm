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
	int T, input, ans = 0;
	
	cin >> T;
	for (int i = 0; i < 5; i++) {
		cin >> input;
		if (T == input)
			ans++;
	}
	cout << ans;
}