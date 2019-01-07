#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N[9];
	int arr[9];

	for (int i = 0; i < 9; i++) {
		cin >> N[i];
		arr[i] = N[i];
	}

	sort(arr, arr + 9);

	cout << arr[8] << endl;

	for (int i = 0; i < 9; i++) {
		if (N[i] == arr[8])
			cout << i + 1;
	}
}