#include <bits/stdc++.h>
using namespace std;

int main () {
    int linha, coluna, matriz[3][3];

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            matriz[linha][coluna] = 0;
            cout << matriz[linha][coluna];
        }
        cout << endl;
    }
    return 0;
}