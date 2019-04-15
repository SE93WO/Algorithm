#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <vector>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cout << fixed;
	cout.precision(2);

	while (true) {
		double input;
		cin >> input;
		
		if (input == -1) break;
		cout << "Objects weighing " << input << " on Earth will weigh " 
			<< input * 0.167 << " on the moon.\n";
	}
	return 0;

}