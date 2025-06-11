#include <iostream>
#include "Lista.h"

using namespace std;

Lista<string> lista;

int main(){

    lista.insere("arroz");
    lista.insere("feijao");
    lista.insere("batata");

    lista.printLista();

    lista.remover("arroz");

    cout << endl;

    lista.printLista();

    lista.insere("arroz", 2);

    cout << endl;

    lista.printLista();

    lista.insere("queijo", 2);


    cout << endl;

    lista.printLista();

    
    return 0;
}
