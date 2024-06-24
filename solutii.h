#include "algoritmi.h"




void sol1() {	


	int x[100][100] = { {32,12,43},{54,65,54},{12,64,23} };

	int m = 3;
	int n = 3;

	afisare(x, m, n);
}

void sol2() {

	int x[50][100] = { {32,43,65,84},{62,98,77,12},{49,85,21,63},{99,11,23,98} };

	int m = 4;
	int n = 4;

	pozDiv2si3Pare(x, n, m);

}

void sol3() {

	int x[50][100] = { {32,43,65,84},{62,98,77,12},{49,85,21,63},{99,11,23,98} };

	int m = 4;
	int n = 4;

	SumElemPrim(x, n, m);



}

void sol4() {


	int x[100][100] = { {32,12,43},{54,65,54},{12,64,23} };

	int m = 3;	
	int n = 3;

	afisareTranspusa(x, m, n);
}

void sol5() {

	int x[50][100] = { {32,43,65,84},{62,98,77,12},{49,85,21,63},{99,11,23,98} };

	int m = 4;
	int n = 4;

	sumaPP(x, n, m);



}

void sol6() {

	int x[50][100] = { {32,43,65,84},{62,98,77,12},{49,85,21,63},{99,11,23,98} };

	int m = 4;
	int n = 4;

	sumaElementelorLinie(x, n, m);



}

void sol9() {

	int x[50][100] = { {32,43,65,84},{62,98,77,12},{49,85,21,63},{99,11,23,98} };

	int m = 4;
	int n = 4;

	sumaMax(x, n, m);



}

void sol10() {

	int x[50][100] = { {32,43,65,84},{62,98,77,12},{49,85,21,63},{99,11,23,98} };

	int m = 4;
	int n = 4;

	linieCifreBinare(x, n, m);
}


void sol11() {

	int x[50][100] = { {32,43,65,84},{62,98,77,12},{49,85,21,63},{99,11,23,98} };

	int m = 4;
	int n = 4;

	numarNou(x, n, m);
}

void sol12() {

	int x[50][100] = { {32,43,65,84},{62,98,77,12},{49,85,21,63},{99,11,23,98} };

	int m = 4;
	int n = 4;

	maDivProprii(x, n, m);
}

void sol13() {

	int x[50][100] = { {32,43,65,84},{62,98,77,12},{49,85,21,63},{99,11,23,98} };

	int m = 4;
	int n = 4;

	int elemDraptaJos = x[n - 1][m - 1];
	int cifra = cifraControl(elemDraptaJos);

	cout << "Cifra de control a elementului din coltul dreapta jos este: " << cifra << endl;
}

// Care este frecventa fiecarei cifre in parte a elementeor de ppe o coloana para si o linia impara din matricea citita

// Sortati crescator coloana pe care apare elementul de la pct d 