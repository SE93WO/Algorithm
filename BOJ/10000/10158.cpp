#include <iostream>
using namespace std;

int w, h, x, y, t;
int main() {
	scanf("%d %d %d %d %d", &w, &h, &x, &y, &t);
	printf("%d %d", w - abs(w - (x + t) % (2 * w)), h - abs(h - (y + t) % (2 * h)));
	return 0;
}