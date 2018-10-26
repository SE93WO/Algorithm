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
	int x, y;

	while (cin >> x >> y, x + y != 0) {
		if (x > y)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}