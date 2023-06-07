#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
    virtual void input() = 0; // fungsi yang menerima input dan mengirim input melaluifungsi setX untuk disimpan di x
    virtual float Luas() = 0; //fungsi untuk menghitung luas
    virtual float Keliling() = 0; //fungsi untuk menghitung keliling
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
        int l;
        cout << "Masukkan jari-jari lingkaran: ";
        cin >> l;
        setX(l);
    }

    float Luas() {
        return 3.14 * getX() * getX();
    }

    float Keliling() {
        return 2 * 3.14 * getX();
    }
};
class Bujursangkar :public bidangDatar { /*lengkapi disini*/ 
public:
    void input() {
        int b;
        cout << "Masukan sisi :";
        cin >> b;
        setX(b);
    }

    float Luas() {
        return getX() * getX();
    }

    float Keliling() {
        return 4 * getX();
    }
};
int main() {
  
    bidangDatar* obj;

    cout << "Lingkaran dibuat " << endl;
    obj = new Lingkaran();
    obj->input();
    cout << "Luas lingkaran :  " << obj->Luas() << endl;
    cout << "Keliling lingkaran :  " << obj->Keliling() << endl;
    
    cout << endl;

    cout << "Bujursangkar dibuat" << endl;
    obj = new Bujursangkar;
    obj->input();
    cout << "Luas bujursangkar :  " << obj->Luas() << endl;
    cout << "Keliling bujursangkar :  " << obj->Keliling() << endl;


    return 0;
}