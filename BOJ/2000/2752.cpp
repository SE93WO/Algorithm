#include <iostream>
#include <algorithm>
using namespace std;

int main() { 
	int input[3];
	for (int i = 0; i < 3; i++)
		cin >> input[i];

	sort(input, input + 3);

	for (int i = 0; i < 3; i++)
		cout << input[i] << " ";

}