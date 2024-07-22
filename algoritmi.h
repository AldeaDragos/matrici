#pragma once
#include <iostream>
#include <string.h>
using namespace std;


void afisare(int a[100][100],int n ,int m) {


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
}

//	Cate elemente pare ce stau pe o poziti divizibila cu 2 si 3 avem in matrice ? 

void pozDiv2si3Pare(int a[100][100], int n, int m) {

	int ct = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] % 2 == 0 && (i+j)%6==0) {
					ct++;
			}
		}
	}
	cout << ct << endl;
}

//Sa se afiseze suma elementelor prime ce stau pe o linie pare si o coloana impara

int prime(int n) {

	if (n <= 1) {
		return false;
	}

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void SumElemPrim(int a[100][100], int n, int m) {

	int suma = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (prime(a[i][j]) && i%2==0 && j%2!=0) {
				suma += a[i][j];
			}
		}
	}
	cout << suma << endl;
}

// Inlocuiti fiecare element patrat perfect cu suma elementelor de pe linia e care se afla 

int patratPerfect(int n) {

	if (sqrt(n) * sqrt(n) == n) {
		return true;
	}
	return false;
}

int sumaElementelorLinie(int a[100][100], int n, int m) {

	int suma = 0;

	for (int i = 0; i < n; i++) {
		suma += a[m][i];
	}
	return suma;
}




void sumaPP(int a[100][100], int n, int m) {

	int suma = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			int suma = sumaElementelorLinie(a,n,m);
			int p = patratPerfect(a[i][j]);

			if (suma!=0 ) {
				p == suma;
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}

}

void afisareTranspusa(int a[100][100], int n, int m) {


	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[j][i] << " ";
		}
		cout << endl;
	}

}

//Sa se gaseasca minimu de pe linia L si maximul de pe coloana C. Sa se interschimbe aceste doua elemente (L si C sunt citite de la tastatura)
int elementMaxim(int a[100][100], int n, int m) {

	int max = 0;
	for (int i = 0; i < n; i++) {
		if (a[i][m] > max) {
			max = a[i][m];
		}
	}
	return max;
}


int elementMinim(int a[100][100], int n, int m) {

	int min = 0;
	for (int i = 0; i < n; i++) {
		if (a[i][m] < min) {
			min = a[i][m];
		}
	}
	return min;
}

void minimLMaxC(int a[100][100], int n, int m) {

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[j][i] << " ";
		}
		cout << endl;
	}

}

//Reaizati un nou vector care sa contina toate elementee palindrome in ordinea in care apar ele daca am parcurge matricea pe coloane

bool estePalindrom(int n) {
	int aux = n;
	int invers = 0;

	while (n > 0) {
		invers = invers * 10 + n % 10;
		n /= 10;
	}

	return aux == invers;
}

void adaugaElementePalindrom(int a[100][100], int n, int m) {

	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			if (estePalindrom(a[i][j])) {
				cout << a[i][j] << " ";
			}
		}
	}
}

//Realizati suma elementelor de pe fiecare linie parte . Care este maxixmul dintre acestea?
void sumaMax(int a[100][100], int n, int m) {

	int suma = 0;
	int sumaMaxima = 0;

	for (int i = 0; i < n; i++) {
		suma = 0;
		for (int j = 0; j < m; j++) {
			suma += a[i][j];
		}
		if (suma > sumaMaxima) {
			sumaMaxima = suma;
		}
	}

	cout << "Maximul dintre sumele elementelor de pe fiecare linie este: " << sumaMaxima << endl;

}


//Afisare medie artimetica a elementelor de ppe linia unde se gasesc numarul cu cele mai multe cifre binare

int nrCifreBinare(int n) {
	int ct = 0;
	while (n > 0) {
		ct++;
		n /= 2;
	}
	return ct;
}

void linieCifreBinare(int a[100][100], int n, int m) {

	int maxCifreBinare = 0;
	int liniaMaxCifre = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int cifreBinare = nrCifreBinare(a[i][j]);
			if (cifreBinare > maxCifreBinare) {
				maxCifreBinare = cifreBinare;
				liniaMaxCifre = i;
			}
		}
	}

	cout << liniaMaxCifre << endl;

}

//2

// Realizati un nou numar ce sa contina cifra minima din elementul maxim de pe fiecare linie

int cifraMinim(int n) {

	int cifraMin = 9;

	while (n != 0) {
		int cifra = n % 10;
		if (cifra < cifraMin) {
			cifraMin = cifra;
		}
		n = n / 10;
	}
	return cifraMin;
}

void numarNou(int a[100][100], int n, int m) {

	int numarNou = 0;
	int elemMax = a[0][0];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] > elemMax) {
				elemMax = a[i][j];
			}
		}


		int cifraMinima = cifraMinim(elemMax);

		numarNou = numarNou * 10 + cifraMinima;

	}
	cout << "Noul numar este: " << numarNou << endl;
}

//Care este media aritmetica a elemenetelor ce au intre 3-5 divizori proprii;

int divProprii(int n) {

	if (n <= 1) {
		return 0;
	}

	int ct = 0;

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			ct++;

		}
	}

	return ct;

}

void maDivProprii(int a[100][100], int n, int m) {

	int suma = 0;
	int ct = 0;
	int media = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int divizoriProprii = divProprii(a[i][j]);
			if (divizoriProprii >= 3 && divizoriProprii <= 5) {
				suma += a[i][j];
				ct++;

			}
		}
	}

	media = suma / ct;

	cout << "Media aritmetica a elementelor cu intre 3 si 5 divizori proprii este: " << media << endl;

}

// Care este cifra de control a elementeui din coltul dreapta jos 

int cifraControl(int n) {
	while (n >= 10) {
		int suma = 0;
		while (n > 0) {
			int cifra = n % 10;
			suma += cifra;
			n /= 10;
		}
		n = suma;
	}
	return n;
}


// Se citeste o matrice de maxim 20 x 1000 de elemente numere intregi de la tastatura

// a) Sa se schimbe intre ele liniile matricei astfel incat pprima coloana sa fie ordonata crecator.

void interschimbareLiniiMatrice(int a[100][100], int n, int linia1, int linia2) {

	for (int i = 0; i < n; i++) {

		int aux = a[linia1][i];
		a[linia1][i] = a[linia2][i];
		a[linia2][i] = aux;

	}

}

void schimbareLinii(int a[100][100], int n, int m) {


	bool sortat = false;

	do {
		sortat = true;
		for (int i = 0; i < n - 1; i++) {
			if (a[i][0] > a[i + 1][0]) {
				interschimbareLiniiMatrice(a, n, i, i + 1);
				sortat = false;
			}
		}
	} while (sortat == false);
}


// Care este numarul de elemente din matrice ce au in componenta doar cifre binare?

bool numereBinare(int n) {

	while (n != 0) {
		int cifra = n % 10;
		if (cifra != 0 && cifra != 1) {
			return false;
		}
		n = n / 10;
	}
	return true;
}

void cifreBinareMatrice(int a[100][100], int n, int m) {

	int ct = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (numereBinare(a[i][j])) {
				ct++;
			}
		}
	}
	cout << "Matricea contine " << ct << " nr binare " << endl;
}

// Afisati elementele matricei , pe o linie , in ordinea din desen: -> <- ->

void sortareLinieCrescator(int a[100][100], int n, int m, int linie) {

	bool sortat = false;

	do {

		sortat = true;

		for (int j = 0; j < m-1; j++) {

			if (a[linie][j] > a[linie][j + 1]){

				int aux = a[linie][j];
				a[linie][j] = a[linie][j + 1];
				a[linie][j + 1] = aux;
				sortat = false;

				}
		}
	} while (sortat == false);
}

void sortareLinieDescrescator(int a[100][100], int n, int m, int linie) {

	bool sortat = false;

	do {

		sortat = true;

		for (int j = 0; j < n; j++) {

			if (a[linie][j] < a[linie][j + 1]){

				int aux = a[linie][j];
				a[linie][j] = a[linie][j + 1];
				a[linie][j + 1] = aux;
				sortat = false;

				}
		}
	} while (sortat == false);
}

void sortareLinii(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		
		
		if (i % 2 == 0) {

			sortareLinieCrescator(a, n, m, i);
		}
		else {
			sortareLinieDescrescator(a, n, m, i);
		}

	}

}

//TEMA

////Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Determinați suma valorilor pare din matrice.


void sumaPare2(int a[100][100], int n, int m) {

	int suma = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] % 2 == 0) {
				suma += a[i][j];
			}
		}
	}
	cout << suma << endl;
}

////Se dă o matrice cu n linii și m coloane și elemente numere naturale. Să se determine suma elementelor de pe fiecare linie.


void sumaLinii(int a[100][100], int n, int m) {


	for (int i = 0; i < n; i++) {

		int suma = 0;

		for (int j = 0; j < m; j++) {
			suma += a[i][j];
		}
		cout << suma << " ";
	}
}

//Gigel a găsit o matrice cu n linii și m coloane și elemente numere naturale. El își propune să determine, pentru fiecare linie,
//cea mai mică valoare care se poate obține adunând elementele de pe linie, cu excepția unuia.

void sumaLinii1(int a[100][100], int n, int m) {

	int sumaMin = 0;
	for (int i = 0; i < n; i++) {
		int suma = 0;
		for (int j = 0; j < m - 1; j++) {
			suma += a[i][j];
			if (suma < sumaMin) {
				sumaMin = suma;
			}
		}
		cout << suma << " ";
	}
}

//Se dă o matrice cu n linii și m coloane și elemente numere naturale. Să se determine câte dintre elementele situate pe linii cu indici pari sunt prime.

void nrPrimeProblema(int a[100][100], int n, int m) {

	int ct = 0;

	for (int i = 0; i < n; i += 2) {
		for (int j = 0; j < m; j++) {
			if (prime(a[i][j])) {
				ct++;
			}
		}
	}
	cout << ct << endl;
}

//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale.Să se ordoneze liniile matricei crescător după suma elementelor.

void OrdLin(int a[100][100], int n, int m) {

	int s[100] = { 0 };
	int v[100];

	for (int i = 0; i < n; i++) {
		s[i] = 0;
		for (int j = 0; j < m; j++) {
			s[i] += a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		v[i] = i;
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {

			if (s[v[i]] > s[v[j]]) {

				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
			cout << a[v[i]][j] << " ";
		cout << endl;

	}
}

//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se determine elementul cu număr maxim de apariții în matrice. 
// Dacă există mai multe elemente cu număr maxim de apariții se va afișa cel mai mare dintre ele.

void MaxAp1(int a[100][100], int n, int m) {

	int f[10000] = { 0 };
	int maxAparitii = 0;
	int elementMax = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int val = a[i][j];
			f[val]++;
		}
	}

	for (int i = 0; i < 10000; i++) {
		if (f[i] > maxAparitii) {
			maxAparitii = f[i];
			elementMax = i;
		}
		else if (f[i] == maxAparitii) {
			if (i > elementMax) {
				elementMax = i;
			}
		}
	}

	cout << elementMax << endl;
}


//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se determine câte linii ale matricei au toate elementele egale.

void cntLinii(int a[100][100], int n, int m) {

	int nrLiniiEgale = 0;

	for (int i = 0; i < n; i++) {
		bool egale = true;
		for (int j = 1; j < m; j++) {
			if (a[i][j] != a[i][0]) {
				egale = false;
			}
		}
		if (egale) {
			nrLiniiEgale++;
		}
	}

	cout << nrLiniiEgale << endl;
}

//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se determine câte coloane ale matricei au elementele distincte două câte două.

void cntColoane(int a[100][100], int n, int m) {

	int nrColoaneDistincte = 0;

	for (int j = 0; j < m; j++) {
		bool distincte = true;
		for (int k = 0; k < n; k++) {
			for (int l = k+1; l < n; l++) {
				if (a[k][j] == a[l][j]) {
					distincte = false;
					
				}
			}
		}
		if (distincte) {
			nrColoaneDistincte++;
		}
	}
	cout << nrColoaneDistincte << endl;
}

//Scrieți un program C/C++ care citește de la tastatură numere naturale din intervalul [3, 100], în această ordine: n și m, apoi elementele unui tablou bidimensional cu n linii și m coloane, iar la final un număr x.

void chenar2(int a[100][100], int n, int m) {

	int k;
	cout << "Introduceti un numar: ";
	cin >> k;

	for (int i = 0; i < n; i++) {
		bool gasit = true;
		for (int j = 0; j < m; j++) {
			if (a[i][j] != k) {
				gasit= false;
			}
		}
		if (gasit) {
			cout << "DA" << endl;
		}
	}
}

//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se determine cea mai mare valoare care apare în matrice de cel puțin două ori.

void Max2Ap(int a[100][100], int n, int m) {

	int f[10000] = { 0 };
	int elementMax = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int val = a[i][j];
			f[val]++;
		}
	}

	for (int i = 0; i < 10000; i++) {
		if (f[i] >= 2) {
			if (i > elementMax) {
				elementMax = i;
			}
		}
	}
	cout << elementMax << endl;
}

//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Determinați indicele liniei care conține număr maxim de elemente pare. Dacă există mai multe linii cu număr maxim de elemente pare, se vor afișa toți indicii, în ordine crescătoare.