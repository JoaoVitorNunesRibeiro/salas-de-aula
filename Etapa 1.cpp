#include <iostream>
using namespace std;

int main() {
    int salas[6] = {35, 4, 22, 20, 36, 30};
    int totalAlunos = 0;

    for (int i = 0; i < 6; i++) {
        totalAlunos += salas[i];
    }

    float media = static_cast<float>(totalAlunos) / 6;

    cout << "A média de alunos por sala é: " << media << endl;

    cout << "Salas acima da média: ";
    for (int i = 0; i < 6; i++) {
        if (salas[i] > media) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;

    return 0;
}