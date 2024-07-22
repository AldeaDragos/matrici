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

void sol14() {

	int x[50][100] = { {32,43,65,84},{62,98,77,12},{49,85,21,63},{89,11,23,98} };

	int m = 4;
	int n = 4;

	schimbareLinii(x, n, m);		

	afisare(x, n, m);
}



void sol15() {

	int x[50][100] = { {32,43,65,84},{62,98,77,12},{49,10,21,63},{89,11,23,98} };

	int m = 4;
	int n = 4;

	cifreBinareMatrice(x, n, m);

}


void sol16() {

	int x[50][100] = { {32,83,65,44},{62,98,77,12},{49,10,21,63},{89,11,23,98} };

	int m = 4;
	int n = 4;

	sortareLinii(x, n, m);

	afisare(x, n, m);
}

void sol17() {

	int x[50][100] = { {4,20,15,23,18,9},{1,8,23,22,14,18},{17,15,13,18,12,15},{3,18,8,20,12,5} };

	int n = 4;
	int m = 6;

	sumaPare2(x, n, m);
}

void sol18() {

	int x[50][100] = { {5,5,10,5},{3,9,1,2},{4,10,1,2} };

	int n = 3;
	int m = 4;

	sumaLinii(x, n, m);
}


void sol19() {

	int x[50][100] = { {5,5,10,5},{3,9,1,9},{4,10,1,2} };

	int n = 3;
	int m = 4;

	sumaLinii1(x, n, m);
}


void sol20() {

	int x[50][100] = { {5,12,10},{3,9,1},{7,10,1},{10,9,3} };

	int n = 4;
	int m = 3;

	nrPrimeProblema(x, n, m);
}

void sol21() {

	int x[50][100] = { {4,20,15,23,18,9},{1,8,23,22,14,18},{17,15,13,18,12,15},{3,18,8,20,12,5} };

	int n = 4;
	int m = 6;

	OrdLin(x, n, m);
}


void sol22() {

	int x[50][100] = { {4,20,15,23,18,9},{1,8,23,22,14,18},{17,15,13,18,12,15},{3,18,8,20,12,5} };

	int n = 4;
	int m = 6;

	MaxAp1(x, n, m);
}

void sol23() {

	int x[50][100] = { {23,23,15,23,18,23},{17,17,17,17,17,17},{17,18,13,18,12,15},{34,34,34,34,34,34} };

	int n = 4;
	int m = 6;

	cntLinii(x, n, m);
}


void sol24() {

	int x[50][100] = { {15,27,40,41,32,42,12},{48,35,40,54,17,46,33},{37,52,40,19,11,46,23},{49,27,40,29,25,44,12} };

	int n = 4;
	int m = 7;

	cntColoane(x, n, m);
}


void sol25() {

	int x[50][100] = { {12,5,12,11,4},{3,20,10,20,12},{4,5,30,12,6},{8,13,7,12,14} };

	int m = 4;
	int n = 5;

	chenar2(x, n, m);

}



void sol26() {

	int x[50][100] = { {4,70,15,23,38,9},{1,8,23,23,14,18},{17,15,13,38,12,15},{3,18,8,23,12,5} };

	int n = 4;
	int m = 6;

	Max2Ap(x, n, m);
}