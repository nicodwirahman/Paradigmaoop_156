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
	vector <pasien*> daftar_pasien;
	
	dokter(string pNama) :nama(pNama) {
		cout << " dokter \"" << nama << "\" ada\n";
	}
	~dokter() {
		cout << " dokter \"" << nama << "\" tidak ada\n";
	}

	void tambahpasien(pasien*);
	void cetakpasien();
};

void pasien::tambahDokter(dokter* pDokter) {
	daftar_dokter.push_back(pDokter);
}
void pasien::cetakDokter() {
	cout << "Daftar Dokter yang menangani pasien \"" << this->nama << "\":\n";
	for (auto& a : daftar_dokter) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
void dokter::tambahpasien(pasien* pPasien) {
	daftar_pasien.push_back(pPasien);
	pPasien->tambahDokter(this);
}
void dokter::cetakpasien() {
	cout << "Daftar pasien dari dokter \"" << this->nama << "\":\n";
	for (auto& a : daftar_pasien) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

int main() {
	dokter* vardokter1 = new dokter("dr.budi");
	dokter* vardokter2 = new dokter("dr.tono");
	pasien* varpasien1 = new pasien("Andi");
	pasien* varpasien2 = new pasien("Lia");

	vardokter1->tambahpasien(varpasien1);
	vardokter1->tambahpasien(varpasien2);
	vardokter2->tambahpasien(varpasien1);

	vardokter1->cetakpasien();
	vardokter2->cetakpasien();
	varpasien1->cetakDokter();
	varpasien2->cetakDokter();
}