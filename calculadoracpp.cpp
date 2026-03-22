#include <bits/stdc++.h>
using namespace std;

float adicao (float A, float B) { //função para operação de adição
    float resultado;
    resultado = A + B;
    return resultado;
}

float subtracao (float A, float B) { //função para operação de subtração
    float resultado;
    resultado = A - B;
    return resultado;
}

float multiplicacao (float A, float B) { //função para operação de multiplicação
    float resultado;
    resultado = A * B;
    return resultado;
}

float divisao (float A, float B) { //função para operação de divisão
    float resultado;
    resultado = A / B;
    return resultado;
}

void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main () {
    float op1, op2, result;
    int opcao = 0;
    char escolha = 's';
    
    while (escolha == 's' || escolha == 'S') {
        limparTela();
        
        cout << "===============================" << endl;  //menu da calculadora
        cout << "     Calculadora Simples       " << endl;
        cout << "===============================" << endl;
        cout << "Selecione uma operação:" << endl;
        cout << "1. Adição" << endl;
        cout << "2. Subtração" << endl;
        cout << "3. Multiplicação" << endl;
        cout << "4. Divisão" << endl;
        cout << "5. Sair" << endl;
        cout << "Opção: ";
        cin >> opcao;
        
        if (opcao == 5){
            cout << "Obrigado por usar a calculadora! Até a próxima." << endl;
            break;
        }
        
        cout << "Digite o primeiro número: ";
        cin >> op1;
        cout << "Digite o segundo número: ";
        cin >> op2;
        
        switch(opcao) {
            case 1:
                result = adicao(op1, op2);
                cout << "Resultado: " << result << endl;
                break;
            case 2:
                result = subtracao(op1, op2);
                cout << "Resultado: " << result << endl;
                break;
            case 3:
                result = multiplicacao(op1, op2);
                cout << "Resultado: " << result << endl;
                break;
            case 4: 
                if (op2 != 0) {
                    result = divisao(op1, op2);
                    cout << "Resultado: " << result << endl;
                    break;
                } else {
                    cout << "Erro: divisão por zero!" << endl;
                }
            default:
                cout << "Operação inválida!" << endl;
        }
        
        cout << "Deseja realizar outra operação? (s/n): " << endl;
        cin >> escolha;
    }
    
    cout << "Obrigado por usar a calculadora! Até a próxima." << endl;
    return 0;

}