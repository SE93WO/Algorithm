#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
	string S;
	int alph[26] = { 0, };

	cin >> S;
	for (int i = 0; i < S.length(); i++) {
		alph[S[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cout << alph[i] << " ";
	}
}