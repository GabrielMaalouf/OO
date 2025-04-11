#include "Banana.h"
#include "Melancia.h"

int main() {
    Banana* minhaBanana = new Banana(5.00, 0.50, "Nanica");

    minhaBanana->exibe_info();
    cout << "-----------------------" << endl;

    Melancia* m1 = new Melancia(10.0, 0.2, 3.0, false);
    Melancia* m2 = new Melancia(10.0, 0.2, 3.0, true);

    m1->exibe_info();
    m2->exibe_info();

    // Liberando memória
    delete minhaBanana;
    delete m1;
    delete m2;

    return 0;
}