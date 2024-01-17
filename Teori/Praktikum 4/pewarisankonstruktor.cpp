#include <iostream>
#include <string>
using namespace std;

// Kelas Dasar
class Pegawai {
	protected :
		string nip;
		string nama;
	public :
		Pegawai(string nip, string nama)
		{
			Pegawai::nip = nip;
			Pegawai::nama = nama;
		}
		void info ()
		{
			cout << "NIP Pegawai : " << nip << endl;
			cout << "Nama Pegawai : " << nama << endl;
		}
	};
	
// Kelas Turunan
class PegawaiAsing : public Pegawai {
	private :
		string no_paspor;
	public :
		PegawaiAsing(string nip, string nama, string no_paspor):
			Pegawai(nip,nama)
		{
			PegawaiAsing::no_paspor = no_paspor;
		}
		void info ()
		{
			Pegawai::info();
			cout << "Paspor Pegawai : " << no_paspor << endl;
		}
	};
	
int main () {
	// Pembuatan Objek
	PegawaiAsing insinyur("192837","Ir. St. Hajrah Mansyur","A12P1019");
	
	// Info
	insinyur.info();
}
	
	
	
	
	
	
	
	
	
	
	
	
