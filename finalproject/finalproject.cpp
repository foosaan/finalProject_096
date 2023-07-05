#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x, y; //variabel untuk menyimpan input dari lingkaran
public:
	bidangDatar() { //construktor
		x = 0;
		y = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui funsi set x dan y untuk disimpan di x dan y
	virtual float Luas(int a) { return 0; } // fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	virtual void cekUkuran() { return ; } //fungsi untuk mengecek ukuran
	void setX(int a) { //fungsi untuk memberi mengirim nilai pada x
		this->x = a;
	}
	int getX() {
		//fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
	void setY(int a) { //fungsi untuk memberi mengirim nilai pada y
		this->y = a;
	}
	int getY() {
		//fungsi untuk membaca/mengambil nilai dalam y
		return y;
	}
	/*lengkapi disini*/
};
class Lingkaran :public bidangDatar {
public:
	void input()
	{
		int r;
		cout << "lingkaran dibuat" << endl;
		cout << "Masukkan jejari :";
		cin >> r;
		setX(r);
	}
	float hitungLuas(int a) {
		return 3.14 * a * a;
	}
	float hitungKeliling(int a) {
		return 2 * 3.14 * a;
	}
	void cekUkuran() {
		float hitungKeliling(getX());
		if (Keliling (getX()) > 40)
			cout << "ukurannya besar" << endl;
		else if (Keliling(getX()) > 20)
			cout << "ukurannya sedang" << endl;
		else if (Keliling(getX()) > 10)
			cout << "ukurannya kecil" << endl;
	}
};

class Persegipanjang :public bidangDatar { 
public:
	void input() 
	{
		int L;
		int P;
		cout << "persegipanjang dibuat" << endl;
		cout << "masukkan lebar :";
		cin >> L;
		setX(L);
		cout << "masukkan panjang :";
		cin >> P;
		setX(P);
	}
	float hitungLuas(int a) {
		return a * (getX());
	}
	float hitungKeliling(int a) {
		return  2 * (a + getX());
	}
	void cekUkuran() {
		float hitungKeliling(getX());
		if (Keliling (getX()) > 40)
			cout << "ukurannya besar" << endl;
		else if (Keliling (getX()) > 20)
			cout << "ukurannya sedang" << endl;
		else if (Keliling (getX()) > 10)
			cout << "ukurannya kecil" << endl;
	}
};

int main() {
	char repeat;

	do {
		Lingkaran* l;
		Persegipanjang* pp;

		l = new Lingkaran;
		l->input();
		cout << "luas lingkaran : " << l->hitungLuas (l->getX()) << endl;
		cout << "keliling lingkaran :" << l->hitungKeliling (l->getX()) << endl;
		l->cekUkuran();

		pp = new Persegipanjang;
		pp->input();
		cout << "luas persegipanjang : " << pp->hitungLuas (pp->getX()) << endl;
		cout << "keliling persegipanjang :" << pp->hitungKeliling (pp->getX()) << endl;
		pp->cekUkuran();


		cout << "apakah anda ingin mengulang program ? Y/N ";
		cin >> repeat;
	} while (repeat == 'Y' || repeat == 'N');
	return 0;
}
