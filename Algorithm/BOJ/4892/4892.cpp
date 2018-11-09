#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int input = 1;
    int n = 0;

    while(cin >> input, input != 0) {
        input *= 3;
        n++;
        cout << n << ". ";
        if(input%2 == 0) {
            cout << "even ";
            input /= 2;
        }
        else {
            cout << "odd ";
            input = (input + 1) / 2;
        }
        
        input *= 3;
        input /= 9;
        cout << input << endl;
    }
}
