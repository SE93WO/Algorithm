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
	int board, getoff;
	int people = 0, nmax = 0;
	
	for (int i = 0; i < 4; i++) {
		cin >> getoff >> board;
		people += board;
		people -= getoff;
		nmax = max(nmax, people);
	}

	cout << nmax;
}