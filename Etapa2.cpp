#include <iostream>
#include <vector>
using namespace std;

int main() {
    int Salas;
    cout << "Digite a quantidade de salas: ";
    cin >> Salas;

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