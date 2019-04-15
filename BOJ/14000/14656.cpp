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
	int N, input, cnt = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> input;
		if (input != i) cnt++;
	}

	cout << cnt;
}