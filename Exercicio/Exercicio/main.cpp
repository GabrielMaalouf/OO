#include "Atleta.h"
#include "Competicao.h"
#include "Corredor.h"
#include "Data.h"
#include "Nadador.h"

int main() {
	Atleta A("Gabriel", 23);
	Data D(5, 9, 2024);
	Competicao C("Maratona 15km", D);
	Nadador N("Gabriel", 23, "Profissional");
	Corredor corredor("João", 25, 75.5, C);

	Atleta* atleta1 = &N;
	Atleta* atleta2 = &corredor;

	//atleta1->imprime_info();
	N.imprime_info();
	cout << "------------" << endl;
	//atleta2->imprime_info();

	//C.imprime_info();
	corredor.imprime_info();
	return 0;
}