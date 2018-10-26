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

int main()
{
	int N, input;

	cin >> N;
	while (N--, cin >> input) {
		int ans = 0;
		for (int i = 1; i <= input; i += 2) {
			ans += i;
		}

		cout << ans << endl;
	}
}