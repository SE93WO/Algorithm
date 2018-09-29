#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	int T;
	string A, B;

	cin >> T;
	while (T--) {
		bool check = true;
		int alph_a[26] = { 0, }, alph_b[26] = { 0, };
		cin >> A >> B;
		if (A.length() == B.length()) {
			for (int i = 0; i < A.length(); i++) {
				alph_a[A[i] - 'a']++;
				alph_b[B[i] - 'a']++;
			}

			for (int i = 0; i < 26; i++) {
				if (alph_a[i] != alph_b[i]) {
					check = false;
					break;
				}
			}
		}
		else
			check = false;

		if (check) {
			cout << A << " & " << B << " are" << " anagrams.\n";
		} else
			cout << A << " & " << B << " are" << " NOT anagrams.\n";
	}
}