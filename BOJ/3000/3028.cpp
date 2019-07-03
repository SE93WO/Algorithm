#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	string input;
	int arr[3] = { 1, 2, 3 };

	cin >> input;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == 'A')
			swap(arr[0], arr[1]);
		else if (input[i] == 'B')
			swap(arr[1], arr[2]);
		else if (input[i] == 'C')
			swap(arr[0], arr[2]); 
	}

	for (int i = 0; i < 3; i++) {
		if (arr[i] == 1)
			cout << i + 1;
	}
}
