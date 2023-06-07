#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui
	//fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar { /*lengkapi disini*/ 
public:
    void input() {
        int r;
        cout << "Masukkan jari-jari lingkaran: ";
        cin >> r;
        setX(r);
    }

    float Luas(int a) {
        return 3.14 * a * a;
    }

    float Keliling(int a) {
        return 2 * 3.14 * a;
    }
};
class Bujursangkar :public bidangDatar { /*lengkapi disini*/ 
public:
    void input() {
        int s;
        cout << "Masukan sisi :";
        cin >> s;
        setX(s);
    }

    float Luas(int a) {
        return a * a;
    }

    float Keliling(int a) {
        return 4 * a;
    }
};
int main() {
    Lingkaran lingkaran;
    Bujursangkar bujursangkar;

    bidangDatar* obj;

    int pilih;
    cout << "Pilih objek: " << endl;
    cout << "1. Lingkaran" << endl;
    cout << "2. Bujursangkar" << endl;
    cout << "Pilihan: ";
    cin >> pilih;

    if (pilih == 1) {
        obj = &lingkaran;
    }
    else if (pilih == 2) {
        obj = &bujursangkar;
    }
    else {
        cout << "Pilihan tidak valid!" << endl;
        return 0;
    }

    obj->input();
    int x = obj->getX();
    float luas = obj->Luas(x);
    float keliling = obj->Keliling(x);

    cout << "Luas: " << luas << endl;
    cout << "Keliling: " << keliling << endl;

    return 0;
}