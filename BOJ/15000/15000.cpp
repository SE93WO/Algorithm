#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cmath>
using namespace std;

typedef long long ll;

int main() {
	string input;
	cin >> input;

	for (int i = 0; i < input.size(); i++) {
		input[i] = toupper(input[i]);
	}
	cout << input;
}