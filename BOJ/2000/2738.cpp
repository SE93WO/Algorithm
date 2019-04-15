#include <iostream>
using namespace std;

int main() {
	int N, M;
	int matrix[100][100];
	cin >> N >> M;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> matrix[i][j];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) {
			int temp;
			cin >> temp;
			matrix[i][j] += temp;
		}


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
 }