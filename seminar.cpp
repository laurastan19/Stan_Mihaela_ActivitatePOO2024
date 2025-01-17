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


///////////////////////////////////////////////SEMINAR 3/////////////////////////////////////////////
//#include<iostream>
//
//class Cofetarie {
//private:
//	string nume;
//	int nrAngajati;
//	float* salarii;
//	bool esteVegana;
//	const int anDeschidere;
//	float adaos;
//	static int TVA;
//public:
//	//constructor implicit
//	Cofetarie() : adaos(20), anDeschidere(2024) {
//		this->nume = nume;
//		this->nrAngajati = nrAngajati;
//		this->esteVegana = true;
//		this->salarii = NULL;
//	}
//
//	//constructor cu parametrii
//	Cofetarie(string nume, int nrAngajati,bool vegan,
//		float adaos,int an) : anDeschidere(an) {
//		this->nume = nume;
//		this->nrAngajati = nrAngajati;
//		this->esteVegana = true;
//		this->adaos = adaos;
//		this->salarii = new float[nrAngajati];
//		for (int i = 0; i < nrAngajati; i++) {
//			this->salarii[i] = 1000 + i * 100;
//		}
//		
//	}
//
//};

///////////////////////////////////////////SEMINAR 4////////////////////////////////////////////
//#include<iostream>
//
//using namespace std;
//
//class Cofetarie {
//private:
//	string nume; //
//	int nrAngajati;//
//	float* salarii;
//	bool esteVegana;
//	const int anDeschidere;
//	float adaos;
//	static int TVA;
//
//public:
//	Cofetarie() : adaos(30), anDeschidere(2024) {
//		this->nume = "Delice";
//		this->nrAngajati = 0;
//		this->esteVegana = true;
//		this->salarii = NULL;
//	}
//
//	Cofetarie(string nume, int nrAngajati, bool vegan, int an, float adaos) :anDeschidere(an) {
//		this->nume = nume;
//		this->nrAngajati = nrAngajati;
//		this->esteVegana = vegan;
//		this->adaos = adaos;
//		this->salarii = new float[nrAngajati];
//		for (int i = 0; i < nrAngajati; i++) {
//			this->salarii[i] = 1000 + i * 100;
//		}
//	}
//
//	Cofetarie(const Cofetarie& c) :anDeschidere(c.anDeschidere) {
//		this->nume = c.nume;
//		this->nrAngajati = c.nrAngajati;
//		this->salarii = new float[c.nrAngajati];
//		for (int i = 0; i < c.nrAngajati; i++) {
//			this->salarii[i] = c.salarii[i];
//		}
//		this->esteVegana = c.esteVegana;
//		this->adaos = c.adaos;
//	}
//
//	~Cofetarie() {
//		if (this->salarii) {
//			delete[]this->salarii;
//		}
//	}
//
//	string getNume() {
//		return this->nume;
//	}
//
//	void setNume(string nume) {
//		if (nume.length() > 1) {
//			this->nume = nume;
//		}
//	}
//
//	int getNrAngajati() {
//		return this->nrAngajati;
//	}
//	void setNrAngajati(int nrAngajati, float* salarii) {
//		if (nrAngajati > 0) {
//			this->nrAngajati = nrAngajati;
//			if (this->salarii != NULL) {
//				delete[]this->salarii;
//			}
//			this->salarii = new float[this->nrAngajati];
//			for (int i = 0; i < this->nrAngajati; i++) {
//				this->salarii[i] = salarii[i];
//			}
//		}
//	}
//
//	float* getSalarii() {
//		return this->salarii;
//	}
//
//	float getSalariu(int index) {
//		if (index >= 0 && index < this->nrAngajati) {
//			return this->salarii[index];
//		}
//	}
//
//
//
//	void afisare() {
//		cout << "Nume:" << this->nume << endl;
//		cout << "Nr angajati:" << this->nrAngajati << endl;
//		cout << "Are produse vegane:" << (this->esteVegana ? "DA" : "NU") << endl;
//		cout << "An deschidere:" << this->anDeschidere << endl;
//		cout << "Adaos:" << this->adaos << endl;
//		cout << "TVA:" << Cofetarie::TVA << endl;
//	}
//	static void modificaTVA(int noulTVA) {
//		if (noulTVA > 0) {
//			Cofetarie::TVA = noulTVA;
//		}
//	}
//	static int calculeazaNrTotalAngajati(int nrCofetarii, Cofetarie* vector) {
//		int suma = 0;
//		for (int i = 0; i < nrCofetarii; i++) {
//			suma += vector[i].nrAngajati;
//		}
//
//		return suma;
//	}
//
//
//};
//int Cofetarie::TVA = 9;
//
//void f(Cofetarie c) {
//
//}
//
//int main() {
//	Cofetarie c;
//	cout << c.getNume() << endl;
//	c.setNume("");
//	cout << c.getNume() << endl;
//	c.setNume("Alt nume");
//	cout << c.getNume() << endl;
//	c.setNrAngajati(4, new float[4] {2, 6, 4, 9});
//
//	Cofetarie c2("Minimal", 3, false, 2020, 10);
//	cout << c2.getSalarii()[1] << endl;
//	cout << c2.getSalariu(1) << endl;
//
//	c2.setNrAngajati(5, new float[5] {1, 2, 3, 4, 5});//de ce nu e bine
//	cout << c2.getSalariu(4);
//
//	Cofetarie* vector = new Cofetarie[1000];
//	delete[]vector;
//
//	Cofetarie c3(c2);
//	Cofetarie c4 = c2;
//	f(c4);
//}


////////////////////////////////////////SEMINAR 6///////////////////////////////////////////
//
//#include<iostream>
//
//using namespace std;
//
//class Cofetarie {
//private:
//	string nume; //
//	int nrAngajati;//
//	float* salarii;
//	bool esteVegana;
//	const int anDeschidere;
//	float adaos;
//	static int TVA;
//
//public:
//	Cofetarie() : adaos(30), anDeschidere(2024) {
//		this->nume = "Delice";
//		this->nrAngajati = 0;
//		this->esteVegana = true;
//		this->salarii = NULL;
//	}
//
//	Cofetarie(string nume, int nrAngajati, bool vegan, int an, float adaos) :anDeschidere(an) {
//		this->nume = nume;
//		this->nrAngajati = nrAngajati;
//		this->esteVegana = vegan;
//		this->adaos = adaos;
//		this->salarii = new float[nrAngajati];
//		for (int i = 0; i < nrAngajati; i++) {
//			this->salarii[i] = 1000 + i * 100;
//		}
//	}
//
//	Cofetarie(const Cofetarie& c) :anDeschidere(c.anDeschidere) {
//		this->nume = c.nume;
//		this->nrAngajati = c.nrAngajati;
//		this->salarii = new float[c.nrAngajati];
//		for (int i = 0; i < c.nrAngajati; i++) {
//			this->salarii[i] = c.salarii[i];
//		}
//		this->esteVegana = c.esteVegana;
//		this->adaos = c.adaos;
//	}
//	Cofetarie operator=(const Cofetarie& c) {
//		if (&c != this) {
//			this->nume = c.nume;
//			this->nrAngajati = c.nrAngajati;
//			if (this->salarii != NULL) {
//				delete[]this->salarii;
//			}
//			this->salarii = new float[c.nrAngajati];
//			for (int i = 0; i < c.nrAngajati; i++) {
//				this->salarii[i] = c.salarii[i];
//			}
//			this->esteVegana = c.esteVegana;
//			this->adaos = c.adaos;
//		}
//		return *this;
//	}
//
//	~Cofetarie() {
//		if (this->salarii) {
//			delete[]this->salarii;
//		}
//	}
//
//	string getNume() {
//		return this->nume;
//	}
//
//	void setNume(string nume) {
//		if (nume.length() > 1) {
//			this->nume = nume;
//		}
//	}
//
//	int getNrAngajati() {
//		return this->nrAngajati;
//	}
//	void setNrAngajati(int nrAngajati, float* salarii) {
//		if (nrAngajati > 0) {
//			this->nrAngajati = nrAngajati;
//			if (this->salarii != NULL) {
//				delete[]this->salarii;
//			}
//			this->salarii = new float[this->nrAngajati];
//			for (int i = 0; i < this->nrAngajati; i++) {
//				this->salarii[i] = salarii[i];
//			}
//		}
//	}
//
//	float* getSalarii() {
//		return this->salarii;
//	}
//
//	float getSalariu(int index) {
//		if (index >= 0 && index < this->nrAngajati) {
//			return this->salarii[index];
//		}
//	}
//
//	Cofetarie operator+(Cofetarie c)const {
//		Cofetarie temp = *this;
//		temp.nrAngajati = this->nrAngajati + c.nrAngajati;
//		float* aux = new float[temp.nrAngajati];
//		for (int i = 0; i < this->nrAngajati; i++) {
//			aux[i] = this->salarii[i];
//		}
//		for (int i = 0; i < c.nrAngajati; i++) {
//			aux[i + this->nrAngajati] = c.salarii[i];
//		}
//		if (temp.salarii != NULL) {
//			delete[]temp.salarii;
//		}
//		temp.salarii = aux;
//		return temp;
//	}
//
//	Cofetarie& operator+=(Cofetarie c) {
//		*this = *this + c;
//		return *this;
//	}
//
//	Cofetarie operator+(float salariu)const {
//		Cofetarie temp = *this;
//		if (temp.salarii != NULL) {
//			delete[]temp.salarii;
//		}
//		temp.salarii = new float[temp.nrAngajati + 1];
//		for (int i = 0; i < this->nrAngajati; i++) {
//			temp.salarii[i] = this->salarii[i];
//		}
//		temp.salarii[temp.nrAngajati] = salariu;
//		temp.nrAngajati++;
//		return temp;
//	}
//
//	friend Cofetarie operator+(float salariu, Cofetarie c) {
//		Cofetarie temp = c;
//		if (temp.salarii != NULL) {
//			delete[]temp.salarii;
//		}
//		temp.salarii = new float[temp.nrAngajati + 1];
//		for (int i = 0; i < c.nrAngajati; i++) {
//			temp.salarii[i] = c.salarii[i];
//		}
//		temp.salarii[temp.nrAngajati] = salariu;
//		temp.nrAngajati++;
//		return temp;
//	}
//
//	explicit operator int() {
//		return this->nrAngajati;
//	}
//
//	explicit operator float() {
//		float s = 0;
//		for (int i = 0; i < this->nrAngajati; i++) {
//			s += this->salarii[i];
//		}
//		return s;
//	}
//
//	void afisare() {
//		cout << "Nume:" << this->nume << endl;
//		cout << "Nr angajati:" << this->nrAngajati << endl;
//		cout << "Are produse vegane:" << (this->esteVegana ? "DA" : "NU") << endl;
//		cout << "An deschidere:" << this->anDeschidere << endl;
//		cout << "Adaos:" << this->adaos << endl;
//		cout << "TVA:" << Cofetarie::TVA << endl;
//	}
//	static void modificaTVA(int noulTVA) {
//		if (noulTVA > 0) {
//			Cofetarie::TVA = noulTVA;
//		}
//	}
//	static int calculeazaNrTotalAngajati(int nrCofetarii, Cofetarie* vector) {
//		int suma = 0;
//		for (int i = 0; i < nrCofetarii; i++) {
//			suma += vector[i].nrAngajati;
//		}
//		return suma;
//	}
//
//	friend ostream& operator<<(ostream& output, Cofetarie c);
//
//	friend istream& operator>>(istream& input, Cofetarie& c) {
//		cout << "Nume:";
//		input >> c.nume;
//		cout << "Nr angajati:";
//		input >> c.nrAngajati;
//		if (c.salarii != NULL) {
//			delete[]c.salarii;
//		}
//		if (c.nrAngajati > 0) {
//			c.salarii = new float[c.nrAngajati];
//			for (int i = 0; i < c.nrAngajati; i++) {
//				cout << "Salariul " << i + 1 << ":";
//				input >> c.salarii[i];
//			}
//		}
//		else {
//			c.salarii = NULL;
//		}
//		cout << "Are produse vegane? 1-DA; 0-NU:";
//		input >> c.esteVegana;
//		cout << "Adaos comercial:";
//		input >> c.adaos;
//		return input;
//	}
//
//	bool operator<(Cofetarie c) {
//		return this->nrAngajati < c.nrAngajati;
//	}
//
//	float& operator[](int index) {
//		if (index >= 0 && index < this->nrAngajati) {
//			return this->salarii[index];
//		}
//		else {
//			throw "Indexul este in afara limitelor";
//		}
//	}
//
//};
//int Cofetarie::TVA = 9;
//
//ostream& operator<<(ostream& output, Cofetarie c) {
//	output << "Nume:" << c.nume << endl;
//	output << "Nr angajati:" << c.nrAngajati << endl;
//	if (c.salarii != NULL) {
//		for (int i = 0; i < c.nrAngajati; i++) {
//			cout << c.salarii[i] << ", ";
//		}
//		cout << endl;
//	}
//	output << "Are produse vegane:" << (c.esteVegana ? "DA" : "NU") << endl;
//	output << "An deschidere:" << c.anDeschidere << endl;
//	output << "Adaos:" << c.adaos << endl;
//	output << "TVA:" << Cofetarie::TVA << endl;
//	return output;
//}
//int main() {
//	Cofetarie c;
//	Cofetarie c2("Minimal", 3, false, 2020, 10);
//
//	cout << c2;
//	cin >> c2;
//	cout << endl << c2 << endl;
//
//
//	int nrAngajati = (int)c2;
//	float salariiTotale = (float)c2;
//
//
//	if (c < c2) { //c1.operator<(c2);
//		cout << "C1 este mai mic decat c2";
//	}
//
//	try {
//		cout << endl << c2[1] << endl;
//		cout << c2[-6];
//	}
//	catch (int exceptie) {
//
//	}
//	catch (float exceptie) {
//
//	}
//	catch (const char* exceptie) {
//		cout << endl << exceptie << endl;
//	}
//	catch (...) {
//
//	}
//
//	cout << c2[1] << endl;
//	c2[1] = 2000;
//	cout << c2[1] << endl;
//
//
//
//}
