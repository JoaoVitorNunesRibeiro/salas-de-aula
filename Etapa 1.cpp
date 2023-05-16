#include <iostream>
using namespace std;
//declaração de um array que suporta até 6 elementos inteiros.
int main() {
    int salas[6] = {35, 4, 22, 20, 36, 30};
    int totalAlunos = 0;
    //for usado para percorrer cada item do array, para no final do loop, terá o total de alunos de todas as salas.
    for (int i = 0; i < 6; i++) {
        totalAlunos += salas[i];
    }
    //calculo da média somando todas as salas
    //usa-se a função "static_cast<float>" para obter uma média decimal precisa, cado contrário o resultado sairia arredondado
    float media = static_cast<float>(totalAlunos) / 6;
    //monstra a média calculada pro usuário 
    cout << "A média de alunos por sala é: " << media << endl;
    //irá mostrar para o usuário as salas que possuem valores maiores que a média calculada
    cout << "Salas acima da média: ";
    for (int i = 0; i < 6; i++) {
        if (salas[i] > media) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;

    return 0;
}
