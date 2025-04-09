#include "Pessoa.h"
#include "Programador.h"
#include "Aluno.h"


int main() {
    Pessoa* pessoa = nullptr;
    int opcao;

    cout << "Digite 1 para Programador ou 2 para Aluno: ";
    cin >> opcao;

    if (opcao == 1) {
        pessoa = new Programador("Gabriel", 23, "C++");
    }
    else if (opcao == 2) {
        pessoa = new Aluno("Gabriel", 23, 9.5);
    }
    else {
        cout << "Opcao invalida!" << endl;
        return 1;
    }

    pessoa->imprime_dados(); // chamada polimórfica

    // Verifica o tipo real da Pessoa
    if (Programador* p = dynamic_cast<Programador*>(pessoa)) {
        cout << "Linguagem preferida: " << p->getLinguagem() << endl;
    }
    else if (Aluno* a = dynamic_cast<Aluno*>(pessoa)) {
        cout << "Nota do aluno: " << a->getNota() << endl;
    }

    delete pessoa;
    return 0;
}

