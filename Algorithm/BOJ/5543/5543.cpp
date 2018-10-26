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
	int high, middle, low;
	int coke, cider;

	cin >> high >> middle >> low >> coke >> cider;
	cout << min(min(high, middle), low) + min(coke, cider) - 50;
}