#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
using namespace std;

int main(void)
{
    int T, n, input;
    int arr[100] = {0,};
    string func, num;
    deque<int> deq;
    cin >> T;
    
    while(T--) {
        cin >> func >> n >> num;

        for(int i=0; i<num. size(); i++) {
            if(num[i] >= '0' && num[i] <= '9') {
                input = input*10 + num[i] - '0';
            }
            else {
                if(input > 0) deq.push_back(input);
                input = 0;
            }
        }
        
        bool error = false, rev = false;

        for(int i=0; func.size(); i++) {
            if(func[i] == 'R') {
                rev = !rev;
            }
            else {
                if(deq.empty()) {
                    error  = true;
                    break;
                }
                if(rev) deq.pop_back();
                else deq.pop_front();
            }
        }

        if(error) {
            cout << "error" << endl;
        }
        else {
            cout << '[';
            if(rev) reverse(deq.begin(), deq.end());
            for(int i=0; i<deq.size(); i++)  {
                cout << deq[i];
                if(i < deq.size()-1) {
                    cout << ',';
                }
            }
            cout << ']';
        }    
    }

    for(int i=0; i<deq.size(); i++) {
        cout << deq[i];
        cout << 'a';
    }
}

// g++ test.cpp -o test.exe
// test.exe