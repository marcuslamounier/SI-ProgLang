#include <iostream>
#include <limits>

using namespace std;

int main () {

    int numAlunos = 50;

    // 3º REPETIÇÃO PARA NUMERO DE ALUNOS
    for (int i = 0; i < numAlunos; i++) {
        
        double peso;
        int altura;

        // 1º ESTRUTURA DE DECISÃO PESO
        do {
            cout << "Digite o peso (em kg): ";
            cin >> peso;
        } while (peso <= 0);

        // 2º ESTRUTURA DE DECISÃO ALTURA
        do {
            do {
                cout << "Digite a altura (em cm): ";
                if (cin >> altura) break;
                cout << "Digite um numero inteiro!" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } while (true);
        } while (altura <= 0 || altura > 250);

        double alturaMetro = (double)altura / 100;
        double IMC = peso / (alturaMetro * alturaMetro);

        cout << "Aluno " << i + 1 << endl;
        cout << "Peso: " << peso << ", ";
        cout << "Altura: " << alturaMetro << endl;
        cout << "IMC = " << IMC << " -> ";

        // ESTRUTURA DE DECISAO IMC
        if (IMC >= 30) {
            cout << "Obesidade";
        } else if (IMC >= 25) {
            cout << "Sobrepeso";
        } else if (IMC >= 18.5) {
            cout << "Peso normal";
        } else {
            cout << "Baixo peso";
        }
        cout << endl << endl;
    }

    return 0;
}
