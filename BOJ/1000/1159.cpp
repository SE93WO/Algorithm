#include <iostream>
using namespace std;

int main() {
	int n, count = 0;
	int family_name[26] = { 0, };
	cin >> n;

	for (int i = 0; i < n; i++) {
		char name[31];
		cin >> name;
		family_name[(int)(name[0] - 97)]++;
	}

	for (int i = 0; i < 26; i++)
		if (family_name[i] >= 5) {
			count++;
			cout << (char)(i + 97);
		}
	
	if (!count)
		cout << "PREDAJA";
}