#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x; // variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { // construktor
		x = 0;
	}
	virtual void input() {} //fungsi untuk menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } // fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } // fungsi untuk menghitung keliling
	void setX(int a) { // fungsi untuk memberimengirim nilai pada x
		this->x = a;
	}
	int getX() { // fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar {
public:

	Lingkaran(int x) :
		bidangDatar() {
		cout << "Lingkaran dibuat" << endl;
	}
	virtual void input() {
		cout << "masukan jejari: " << endl;
	}
};

class bujursangkar :public bidangDatar {
public:

	bujursangkar(int x) :
		bidangDatar() {
		cout << "bujursangkar dibuat" << endl;
	}
	virtual void input() {
		cout << "masukan sisi: " << endl;
	}
};
int main() {
	Lingkaran a(1);
	bujursangkar b(1);
	float();
	void();
	
}