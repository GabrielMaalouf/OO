#include "Calculadora.h"
#include "FuncionarioCaixa.h"

int main() {
    Calculadora calc("Azul");
    FuncionarioCaixa Fun("Gabriel", "Rua2", calc);

    float num1 = 10.5, num2 = 2.5;

    cout << "Operações Matemáticas:" << endl;
    cout << num1 << " + " << num2 << " = " << Fun.soma(num1, num2) << endl;
    cout << num1 << " - " << num2 << " = " << Fun.subtrai(num1, num2) << endl;
    cout << num1 << " * " << num2 << " = " << Fun.multiplica(num1, num2) << endl;
    cout << num1 << " / " << num2 << " = " << Fun.divide(num1, num2) << endl;

    cout << "3^2 = " << calc.eleva_ao_quadrado(3) << endl;
    cout << "2^3 = " << calc.eleva_ao_cubo(2) << endl;

    cout << endl;
    calc.imprime_info();
    Fun.imprime_info();

    return 0;
}