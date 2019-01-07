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
	int S, T, D;
	cin >> S >> T >> D;

	cout << (D / (S * 2)) * T;
}