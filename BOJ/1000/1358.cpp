#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int W, H, X, Y, P, result = 0;
	cin >> W >> H >> X >> Y >> P;
	for (int i = 0; i < P; i++) {
		int x, y;
		cin >> x >> y;
		if (X <= x && x <= X + W && Y <= y && y <= Y + H || 
			(X - x) * (X - x) + (Y + H / 2 - y) * (Y + H / 2 - y) <= H * H / 4 || 
			(X + W - x) * (X + W - x) + (Y + H / 2 - y) * (Y + H / 2 - y) <= H * H / 4)
			result++;
	}
	cout << result;
}