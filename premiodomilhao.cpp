#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A;
    cin >> N;
    
    long long total = 0;
    int dias = 0;
    
    for (int i = 0; i < N; i++){
        cin >> A;
        total += A;
        if(total >= 1000000){
            dias = i + 1;
            break;
        }   
    }
    cout << dias;
    return 0;
}
