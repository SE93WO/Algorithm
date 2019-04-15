#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
	string N;

	while (getline(cin, N), N != "") {
		int lower = 0, upper = 0, digit = 0, space = 0;
		
		for (int i = 0; i < N.size(); i++) {
			if (islower(N[i])) lower++;
			else if (isupper(N[i])) upper++;
			else if (isdigit(N[i])) digit++;
			else if (isspace(N[i])) space++;
		}

		cout << lower << " " << upper << " " << digit << " " << space << endl;
	}
}