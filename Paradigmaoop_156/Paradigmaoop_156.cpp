#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	const int id;
	string nama;
	float nilai;

public:
	mahasiswa(int pId, string pNama, float PNilai) :id(pId), nama(pNama), nilai(PNilai) {

	}

	~mahasiswa() {
		cout << "id =" << id << endl;
		cout << "Nama = " << nama << endl;
		cout << "Nilai = " << nilai << endl;
	}
};