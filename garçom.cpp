#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int N, L, C, cont = 0;
    cin >> N;
    
    
    for (int i = 0; i < N; i++){
        cin >> L >> C;
        
        if (L > C){
            cont += C;
        }
    }
    
    cout << cont << endl;
    return 0;
} 