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
	string S;
	int T, A, B;

	cin >> S;
	cin >> T;
	while (T--) {
		cin >> A >> B;
		char temp;

		temp = S[A];
		S[A] = S[B];
		S[B] = temp;
	}

	cout << S;
}