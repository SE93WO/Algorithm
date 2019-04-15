#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int N;
ll B;

vector<int> matrixMultiply(vector<int> &A, vector<int> &B) {
	vector<int> C(N*N);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			for (int k = 0; k < N; k++)
				C[i*N + j] = (C[i*N + j] + A[i*N + k] * B[k*N + j]) % 1000;
	return C;
}

vector<int> matrixPower(vector<int> &A, ll p) {
	if (p == 1) return A;
	vector<int> C = matrixPower(A, p / 2);
	C = matrixMultiply(C, C);
	if (p % 2 == 1) C = matrixMultiply(C, A); 
	return C;
}

int main() {
	cin >> N >> B;
	vector<int> arr(N * N), ans;
	for (int i = 0; i < N * N; i++) {
		cin >> arr[i];
	}
	ans = matrixPower(arr, B);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << ans[i*N + j] % 1000 << " ";
		}
		cout << "\n";
	}
}