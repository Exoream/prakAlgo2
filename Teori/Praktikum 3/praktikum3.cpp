#include <iostream>
using namespace std;

class Mahasiswa {
	private :
	string stambuk;
	string nama;
	int angkatan;
	string kelas;
	
	public:
	Mahasiswa (string stambuk, string nama, int angkatan, string kelas){
	this->stambuk = stambuk;
	this->nama = nama;
	this->angkatan = angkatan;
	this->kelas = kelas;
 }
 
	Mahasiswa(){}
	void setStambuk (string stambuk){
	this->stambuk = stambuk;
}
	void setNama (string nama){
	this->nama = nama;
 }
	void setAngkatan (int angkatan){
	this->angkatan = angkatan;
 }
	void setKelas (string kelas){
	this->kelas = kelas;
 }
	string getStambuk(){
	return stambuk;
 }
	string getNama(){
	return nama;
 }
	int getAngkatan(){
	return angkatan;
 }
	string getKelas(){
	return kelas;
 }
 
};

int main()
{
	Mahasiswa mahasiswa;
	int pilih, angkatan;
	string stambuk, nama, kelas;
	
	cout<< "Inisialisasi Melalui : " << endl;
	cout<< "1. Konstruktor" << endl;
	cout<< "2. Public Function" << endl;
	cout<< "Masukkan Pilihan [1..2] : ";
	cin>>pilih;
	cout << endl << endl;
	
		if(pilih==1){
			cout << "Inisialisasi Melalui Konstruktor" << endl;
			cout << "================================" << endl;
			cout << "Masukkan Stambuk 	: "; cin >> stambuk;
			cout << "Masukkan Nama 		: "; getline(cin.ignore(), nama);
			cout << "Masukkan Angkatan  	: "; cin >> angkatan;
			cout << "Masukkan Kelas 		: "; cin >> kelas;
			cout << endl << endl;
			
		Mahasiswa mahasiswa (stambuk, nama, angkatan, kelas);
		Mahasiswa *aMahasiswa;
		aMahasiswa = &mahasiswa;
			cout << "Pengaksesan Isi Data Field Pada Objek Mahasiswa Melalui Pointer : " <<endl;
			cout << "Stambuk 		: " << aMahasiswa->getStambuk() << endl;
			cout << "Nama 			: " << aMahasiswa->getNama() << endl;
			cout << "Kelas 			: " << aMahasiswa->getKelas() << endl;
			cout << "Angkatan 		: " << aMahasiswa->getAngkatan() << endl;
	}
		else if (pilih == 2){
			cout << "Inisialisasi Melalui Konstruktor" << endl;
			cout << "================================" << endl;
			cout << "Masukkan Stambuk 	: "; cin >> stambuk;
			cout << "Masukkan Nama 	  	: "; getline(cin.ignore(), nama);
			cout << "Masukkan Angkatan  	: "; cin >> angkatan;
			cout << "Masukkan Kelas 		: "; cin >> kelas;
			cout << endl << endl;
			
		mahasiswa.setStambuk(stambuk);
		mahasiswa.setNama(nama);
		mahasiswa.setAngkatan(angkatan);
		mahasiswa.setKelas(kelas);
		Mahasiswa *aMahasiswa;
		aMahasiswa = &mahasiswa;
			cout << "Pengaksesan Isi Data Field Pada Objek Mahasiswa Melalui Pointer : " <<endl;
			cout << "Stambuk 		: " << aMahasiswa->getStambuk() << endl;
			cout << "Nama 			: " << aMahasiswa->getNama() << endl;
			cout << "Kelas 			: " << aMahasiswa->getKelas() << endl;
			cout << "Angkatan 		: " << aMahasiswa->getAngkatan() << endl;
 }
		else {
			cout << "Tidak Ada Pilihan" << endl;
 }
 
}


		
		
		
		
		
		
		
