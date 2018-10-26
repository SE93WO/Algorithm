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
	
	getline(cin, S);
	for (int i = 0; i < S.size(); i++) {
		if (isupper(S[i])) {
			S[i] = ((S[i] - 'A') + 13) % 26 + 'A';
		}
		else if (islower(S[i])) {
			S[i] = ((S[i] - 'a') + 13) % 26 + 'a';
		}
	}

	cout << S;
}