#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
	string nama;
	vector<dokter*> daftar_dokter;
	pasien(string pNama) :nama(pNama) {
		cout << " paasien \"" << nama << "\"ada\n";
	}
	~pasien() {
		cout << " paasien \"" << nama << "\" tidak ada\n";
	}
	void tambahDokter(dokter*);
	void cetakDokter();
};

class dokter {
public:
	string nama;
	vector <pasien*> daftra_pasien;
	
	dokter(string pNama) :nama(pNama) {
		cout << " dokter \"" << nama << "\" ada\n";
	}
	~dokter() {
		cout << " dokter \"" << nama << "\" tidak ada\n";
	}

	void tambahpasien(pasien*);
	void cetakpasien();
};