#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    int input;
    cin >> n;
    
    while(n--) {
        int cnt = 0;
        cin >> input;
        
        cout << "Pairs for " << input << ": ";
        for(int i = 1; i < input; i++) {
            for(int j = i + 1; j <= input; j++) {
                if(i + j == input){
                    if(cnt > 0) cout << ", ";
                    cout << i << " " << j;
                    cnt++;
                }
            }
        }
        
        cout << "\n";
    }
}
