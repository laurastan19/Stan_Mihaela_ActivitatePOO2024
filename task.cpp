#include <iostream>
#include <string>
using namespace std;

class Serial {
public:
    char* titlu;
    int nrSezoane;
    static int TVA;
    const int anAparitie;
    string* titluriEpisoade;

    Serial() : anAparitie(2024), nrSezoane(1) {
        this->titlu = new char[strlen("Necunoscut") + 1];
        strcpy(this->titlu, "Necunoscut");
        this->titluriEpisoade = new string[this->nrSezoane];
        for (int i = 0; i < this->nrSezoane; i++) {
            this->titluriEpisoade[i] = "Episod necunoscut";
        }
    }

    Serial(const char* titlu, int nrSezoane, int anAparitie) : anAparitie(anAparitie) {
        this->titlu = new char[strlen(titlu) + 1];
        strcpy(this->titlu, titlu);
        this->nrSezoane = nrSezoane;
        this->titluriEpisoade = new string[this->nrSezoane];
        for (int i = 0; i < this->nrSezoane; i++) {
            this->titluriEpisoade[i] = "Episod necunoscut";
        }
    }

    ~Serial() {
        if (this->titlu != NULL) {
            delete[] this->titlu;
        }
        if (this->titluriEpisoade != NULL) {
            delete[] this->titluriEpisoade;
        }
    }

    static int calcularePret(int baza) {
        return baza + (baza * TVA / 100);
    }
};

int Serial::TVA = 19;

class Sezon {
public:
    int nrSezon;
    int nrEpisoade;
    static int TVA;
    const int anLansare;
    string* titluriEpisoade;

    Sezon() : anLansare(2024), nrSezon(1), nrEpisoade(10) {
        this->titluriEpisoade = new string[this->nrEpisoade];
        for (int i = 0; i < this->nrEpisoade; i++) {
            this->titluriEpisoade[i] = "Episod standard";
        }
    }

    Sezon(int nrSezon, int nrEpisoade, int anLansare) : anLansare(anLansare) {
        this->nrSezon = nrSezon;
        this->nrEpisoade = nrEpisoade;
        this->titluriEpisoade = new string[this->nrEpisoade];
        for (int i = 0; i < this->nrEpisoade; i++) {
            this->titluriEpisoade[i] = "Episod standard";
        }
    }

    ~Sezon() {
        if (this->titluriEpisoade != NULL) {
            delete[] this->titluriEpisoade;
        }
    }

    static int calculareDurata(int durataPeEpisod) {
        return durataPeEpisod * 10;
    }
};

int Sezon::TVA = 19;

class Episod {
public:
    char* titlu;
    int durata;
    static int TVA;
    const int anProductie;

    Episod() : anProductie(2024), durata(45) {
        this->titlu = new char[strlen("Necunoscut") + 1];
        strcpy(this->titlu, "Necunoscut");
    }

    Episod(const char* titlu, int durata, int anProductie) : anProductie(anProductie) {
        this->titlu = new char[strlen(titlu) + 1];
        strcpy(this->titlu, titlu);
        this->durata = durata;
    }

    ~Episod() {
        if (this->titlu != NULL) {
            delete[] this->titlu;
        }
    }

    static int calcularePopularitate(int vizionari) {
        return vizionari / 1000;
    }
};

int Episod::TVA = 19;

int main() {
    Serial s1;
    Serial s2("Crash Landing on You", 2, 2019);
    Serial s3("Goblin", 1, 2016);

    cout << "Serial 1: " << s1.titlu << ", Sezoane: " << s1.nrSezoane << endl;
    cout << "Serial 2: " << s2.titlu << ", Sezoane: " << s2.nrSezoane << endl;
    cout << "Serial 3: " << s3.titlu << ", Sezoane: " << s3.nrSezoane << endl;

    Sezon sez1;
    Sezon sez2(1, 16, 2020);

    cout << "Sezon 1: " << sez1.nrSezon << ", Episoade: " << sez1.nrEpisoade << endl;
    cout << "Sezon 2: " << sez2.nrSezon << ", Episoade: " << sez2.nrEpisoade << endl;

    Episod ep1;
    Episod ep2("Episode 1", 60, 2019);

    cout << "Episod 1: " << ep1.titlu << ", Durata: " << ep1.durata << endl;
    cout << "Episod 2: " << ep2.titlu << ", Durata: " << ep2.durata << endl;

    return 0;
}
