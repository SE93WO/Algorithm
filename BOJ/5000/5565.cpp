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
	int sum, input;

	cin >> sum;
	for (int i = 0; i < 9; i++)
		cin >> input, sum -= input;

	cout << sum;
}