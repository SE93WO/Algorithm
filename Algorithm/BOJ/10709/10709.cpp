#include <iostream>
using namespace std;

int main() {
    int H, M, num = 0;
    char map[101][101];
    
    cin >> H >> M;
    for(int i=0; i<H; i++) {
        for(int j=0; j<M; j++) {
            cin >> map[i][j];
        }
    }
    
    for(int i=0; i<H; i++) {
        num = -1;
        for(int j=0; j<M; j++) {
            if(map[i][j] == 'c')
                num = 0;
            cout << num << " ";
            if(num >= 0)
                num++;
        }
        cout << "\n";
    }
    
}
