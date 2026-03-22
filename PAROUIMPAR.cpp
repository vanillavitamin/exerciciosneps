#include <bits/stdc++.h>
using namespace std;

int parouimpar(int a, int b){
    int soma = a + b;
    return soma;
}

int main (){
    int bino, cino, jogo;
    cin >> bino >> cino;
    
    if (bino >= 0 && bino <= 10 && cino >= 0 && cino <= 10) {
        jogo = parouimpar(bino, cino);
        if (jogo % 2 == 0) {
            cout << "Bino" << endl;
        } else {
            cout << "Cino" << endl;
        }
    } 

    return 0;
}