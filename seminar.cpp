//#include<iostream>
//using namespace std;
//
//
//struct farmacie {
//	char* nume;
//	string adresa;
//	int nrmedicamente;
//	float* preturi;
//
//};
//void afisarefarmacie(farmacie f) {
//	cout << "nume:" << f.nume << endl;
//	cout << "adresa:" << f.adresa << endl;
//	cout << "nr medicamente:" << f.nrmedicamente << endl;
//	cout << "preturi:" << f.preturi[i] << ", ";
//}
//
//int nrfarmacii = 3;
//farmacie* vector = new farmacie[nrfarmacii];
//for (int i = 0; i < nrfarmacii; i++) {
//	vector[i] = citirefarmacie();
//}
//
//for (int i = 0; i < nrfarmacii; i++) {
//	afisarefarmacie(vector[i]);
//}
//
//farmacie citirefarmacie() {
//	farmacie f;
//	cout << "la ce adresa e?";
//	cin >> f.adresa;
//	cout << "numele farmaciei:";
//	char buffer[100];
//	cin >> buffer;
//	f.nume = new char[strlen(buffer) + 1];
//	strcpy_s(f.nume, strlen(buffer) + 1, buffer);
//	cout << "numar medicamente";
//	cin >> f.nrmedicamente;
//	f.preturi = new float[f.nrmedicamente];
//	for (int i = 0; i < f.nrmedicamente; i++) {
//		cin >> f.preturi[i];
//	}
//	return f;
//}
//
//
//int main() {
//
//	farmacie* pointer;
//	pointer = new farmacie();
//	pointer->adresa = "roamana";
//
//	pointer->nume = new char[strlen("catena") + 1];
//	strcpy_s(pointer->nume, strlen("catena") + 1, "catena");
//
//	pointer->nrmedicamente = 5;
//
//	pointer->preturi = new float[pointer->nrmedicamente];
//	for (int i = 0; i < pointer->nrmedicamente; i++) {
//		pointer->preturi[i] = i + 1;
//	}
//	afisarefarmacie(*pointer);
//
//	int nrfarmacii = 3;
//	farmacie* vector;
//	vector = new farmacie[nrfarmacii];
//	for (int i = 0; i < nrfarmacii; i++) {
//		vector[i] = citirefarmacie();
//	}
//	for (int i = 0; i < nrfarmacii; i++) {
//		afisarefarmacie(vector[i]);
//	}


//////////////////////SEMINAR 3/////////////////////////////////////////////
#include<iostream>

using namespace std;

class Cofetarie {
public:
	string nume;
	int nrAngajati;
	bool esteVegana;
	const int anDeschidere;
	float adaos;
	static int TVA;

	Cofetarie() : adaos(30), anDeschidere(2024) {
		this->nume = "Delice";
		this->nrAngajati = 3;
		this->esteVegana = true;
	}

	Cofetarie(string nume, int nrAngajati, bool vegan, int an, float adaos) :anDeschidere(an) {
		this->nume = nume;
		this->nrAngajati = nrAngajati;
		this->esteVegana = vegan;
		this->adaos = adaos;
	}

	void afisare() {
		cout << "Nume:" << this->nume << endl;
		cout << "Nr angajati:" << this->nrAngajati << endl;
		cout << "Are produse vegane:" << (this->esteVegana ? "DA" : "NU") << endl;
		cout << "An deschidere:" << this->anDeschidere << endl;
		cout << "Adaos:" << this->adaos << endl;
		cout << "TVA:" << Cofetarie::TVA << endl;
	}
	static void modificaTVA(int noulTVA) {
		if (noulTVA > 0) {
			Cofetarie::TVA = noulTVA;
		}
	}
	static int calculeazaNrTotalAngajati(int nrCofetarii, Cofetarie* vector) {
		int suma = 0;
		for (int i = 0; i < nrCofetarii; i++) {
			suma += vector[i].nrAngajati;
		}

		return suma;
	}
};
int Cofetarie::TVA = 9;



int main() {
	Cofetarie c1;
	c1.afisare();
	Cofetarie::modificaTVA(19);

	Cofetarie c2("DolceVita", 6, false, 2019, 10);
	c2.afisare();

	Cofetarie* pointer;
	pointer = new Cofetarie("Ana State", 3, false, 2020, 20);
	pointer->afisare();

	delete pointer;
	//-> - derefentiere + accesare
	//[] - deplasare + derefentiere
	int nrCofetarii = 3;
	Cofetarie* vector;
	vector = new Cofetarie[nrCofetarii];

	for (int i = 0; i < nrCofetarii; i++) {
		vector[i].afisare();
	}
	cout << "Numar total: " << Cofetarie::calculeazaNrTotalAngajati(nrCofetarii, vector);
	delete[]vector;
	return 65434574;
}