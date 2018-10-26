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
	int x, y, multiply;
	cin >> x >> y;

	multiply = x * y;
	cout << x * (y % 10) << endl;
	y /= 10;
	cout << x * (y % 10) << endl;
	y /= 10;
	cout << x * (y % 10) << endl;
	cout << multiply;
}