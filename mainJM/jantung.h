#include <iostream>
#ifndef JANTUNG_H
#define JANTUNG_H

using namespace std;

class jantung {
public:
	jantung() {
		cout << "jantung didupkan\n";
	}
	~jantung() {
		cout << "jantung dimatikan\n";
	}
};
#endif

