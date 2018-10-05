#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;

typedef long long ll;

int main()
{
	int T, a, b;
	string s;

	cin >> T;
	while (T--) {
		cin >> a >> b >> s;
		for (int i = 0; i < s.size(); i++) {
			s[i] = ((s[i] - 'A') * a + b) % 26 + 'A';
		}

		cout << s << endl;
	}
}