#include <iostream>
#include <string>
using namespace std;

int main() {
	int V;
	int A = 0, B = 0;
	string input;

	cin >> V;
	cin >> input;

	for (int i = 0; i < input.size(); i++) {
		if (input[i] == 'A')
			A++;
		else if(input[i] == 'B')
			B++;
	}
	
	if (A > B)
		cout << "A";
	else if (A < B)
		cout << "B";
	else
		cout << "Tie";
}