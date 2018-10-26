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
	int year;
	cin >> year;
	
	if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0))
		cout <<  "1";
	else
		cout << "0";
}