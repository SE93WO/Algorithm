#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int t;
	cin >> t;
	for(int i = 1; i <=t; i++){
		int arr[3] = { 0, };
		cin >> arr[0] >> arr[1] >> arr[2];
		sort(arr, arr + 3);
		if ((arr[2] * arr[2]) == (arr[0] * arr[0]) + (arr[1] * arr[1])) 
			printf("Case #%d: YES\n", i);
		else
			printf("Case #%d: NO\n", i);
	}
}
