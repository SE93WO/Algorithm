#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	string str[10] = { "i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili" };
	string arr[101];
	string input;
	int cnt = 0;
	getline(cin, input);

	char* str_buff = new char[100];
	strcpy(str_buff, input.c_str());

	char* token = strtok(str_buff, " ");
	while (token != nullptr) {
		arr[cnt++] = string(token); 
		token = strtok(nullptr, " ");
	}

	char temp = toupper(arr[0].at(0));
	cout << temp;

	for (int i = 1; i < cnt; i++) {
		bool check = false;
		for (int j = 0; j < 10; j++) {
			if (arr[i] == str[j]) {
				check = true;
				break;
			}
		}
		if (!check) {
			char temp = toupper(arr[i].at(0));
			cout << temp;
		}
	}
}
