#include<bits/stdc++.h>

using namespace std;
//Para compilar se usa g++ nome.cpp
//Para executar ./a.out
// int main(){
//     int x,y;
//     //cin serve para pegar os valores do terminal
//     cin >> x >> y;
//     int resposta;
//     //os operadores sao: =; -; /; *; %; pow(x,y)
//     resposta = x / y;
//     //cout serve para imprimir, sempre que for adicionar alguma coisa na imprecao se usa <<
//     cout << resposta << endl;
// }

// int main(){
//     int x,y;
//     cin >> x >> y;
//     if(x > 0 && y <= 0){
//         cout << "O primeiro é positivo e o segundo é negativo" <<endl;
//     }
//     else if(x > 0 && y > 0){
//         cout << "os dois são positivos" <<endl;
//     }
//     else if(x <= 0 && y > 0){
//         cout << "O primeiro é negativo e o segundo é positivo" <<endl;
//     }
//     else{
//         cout << "Os dois são negativos" <<endl;
//     }
    
// }

int main(){
    int x, y;
    cin >> x >> y;
    if(x % 2 == 0 || y % 2 == 0){
        cout << "Algum é par" << endl;
    }
    else{
        cout << "os dois são impar" << endl;
    }
}