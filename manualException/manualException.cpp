#include <iostream>
using namespace std;

int main() {
	try {
		cout << "Selamat belajar di Prodi TI UMY" << endl;
		cout << "Pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		cout << "default Pengecualian dieksekusi" << endl;
	}
	return 0;
}