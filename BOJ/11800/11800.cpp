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
	int T, a, b, cnt = 1;
	string dice[6] = { "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh" };
	string same[6] = { "Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh" };

	cin >> T;
	while (T--) {
		cin >> a >> b;

		cout << "Case " << cnt << ": ";
		if (a == b) {
			cout << same[a - 1] << endl;
		}
		else if ((a == 5 && b == 6 || a == 6 && b == 5)) {
			cout << "Sheesh Beesh" << endl;
		}
		else if (a > b) {
			cout << dice[a - 1] << " " << dice[b - 1] << endl;
		}
		else 
			cout << dice[b - 1] << " " << dice[a - 1] << endl;
		cnt++;
	}
	
}