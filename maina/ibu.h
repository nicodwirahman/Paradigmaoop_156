#pragma once
#ifndef IBU_H
#define iBU_H
#include <iostream>;
#include "anak.h"
#include <vector>
using namespace std;

class ibu {
public:
	string nama;
	vector<anak*> daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "ibu \"" << nama << "\" ada\n";
	}
	~ibu() {
		cout << "ibu \"" << nama << "\" tidakada\n";
	}
	void tambahAnak(anak*);
	void cetakAnak();
};
void ibu::tambahAnak(anak* pAnak) {
	daftar_anak.push_back(pAnak);
}
void ibu::cetakAnak() {
	cout << "Daftar Anak dari ibu \" " << this->nama << "\":\n";
	for (auto& a : daftar_anak) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
#endif



