#include <iostream>
using namespace std;

int main() {
	long long A, B, V;
	cin >> A >> B >> V;
	cout << ((V - A - 1) / (A - B) + 1) + 1;
	
}