#include <iostream>
#include <vector>
using namespace std;
// variavel "Sala" servirá para armazenar a quantidade de salas, "cout" irá exibir a mensagem para o usuario e "cin" para armazenar o valor na variavel "Sala"
int main() {
    int Salas;
    cout << "Digite a quantidade de salas: ";
    cin >> Salas;
    //'vector<int>' é usado para armazenar um numero variavel de elemento do tipo 'int'. e aqui é usado para armazenar o numero de alunos em cada sala. 
    // conforme percorremos as salas no loop, usamos 'alunosPorSala[i]' para acessar o elemento correspondente à sala atual e armazenar o número de alunos nessa sala. 
    // o índice 'i' é usado para acessar o elemento correto do vetor, onde 'i' varia de 0 a 'Salas - 1'.
    vector<int> alunosPorSala(Salas);
    int Alunos = 0;
    
    for (int i = 0; i < Salas; i++) {
        cout << "Digite a quantidade de alunos na sala " << (i + 1) << ": ";
        cin >> alunosPorSala[i];
        Alunos += alunosPorSala[i];
    }

    double mediaAlunos = static_cast<double>(Alunos) / Salas;
    cout << "A média de alunos por sala é: " << mediaAlunos << endl;

    cout << "Salas com número de alunos acima da média:" << endl;
    for (int i = 0; i < Salas; i++) {
        if (alunosPorSala[i] > mediaAlunos) {
            cout << "Sala " << (i + 1) << ": " << alunosPorSala[i] << " alunos" << endl;
        }
    }

    return 0;
} 
