#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 100, b = 100;
    int x, y;
    
    cin >> n;
    while(n--) {
        cin >> x >>  y;
        if(x > y){ b -= x; }
        else if(x < y) { a -= y; }
    }
    
    cout << a << endl;
    cout << b;
}
