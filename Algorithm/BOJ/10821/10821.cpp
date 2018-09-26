#include <iostream>
#include <string>
using namespace std;

int main() {
    int comma = 1;
    string S;
    cin >> S;
    
    for(int i = 0; i < S.length(); i++) {
        if(S[i] == ',')
            comma++;
    }
    
    cout << comma;
}
