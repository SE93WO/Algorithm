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
	int n, sum = 0, score[26] = { 0, };
	string name;

	cin >> n;
	cin >> name;

	for (int i = 0; i < n; i++) {
		score[name[i] - 'A']++;
	}

	for (int i = 0; i < 26; i++) {
		sum += (i + 1) * score[i];
	}

	cout << sum;
}