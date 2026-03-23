#include <bits/stdc++.h>
using namespace std;

int main (){
    int N, I;
    bool A = 0, B = 0;
    cin >> N;
    
    for (int i = 0; i < N; i++){
        cin >> I;
        
        if (I = 1){
            if (A == 0){
                A = 1;
            } else {
                A = 0;
            }
        } else {
            if (I = 2){
                if (B == 0){
                    B = 1;
                } else {
                    B = 0;
                }
            }
        }
    }
    cout << A << "\n" << B << "\n";
    return 0;
}