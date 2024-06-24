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

