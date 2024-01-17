#include <iostream>
#include <string>
using namespace std;

int main () {
	// Definisi Kelas
	class Mobil {
		private :
			string jenis;
			string merk;
			int cc;
		public :
			Mobil(string jenis, string merk, int cc) 
			{
				Mobil::jenis = jenis;
				Mobil::merk = merk;
				Mobil::cc = cc;
			}
			string peroleh_jenis()
			{
				return jenis;
			}
			string peroleh_merk()
			{
				return merk;
			}
			int peroleh_cc()
			{
				return cc;
			}
	};
	
	// Pembuatan Objek
	Mobil minibus("Avanza","Toyota",1300);
	Mobil sedan("City","Honda",1600);
	
	// Tampilkan Data
	cout << "Minibus : " << endl;
	cout << "Jenis : " << minibus.peroleh_jenis() << endl;
	cout << "Merk : " << minibus.peroleh_merk() << endl;
	cout << "CC : " << minibus.peroleh_cc() << endl;
	cout << endl;
	
	cout << "Sedan : " << endl;
	cout << "Jenis : " << sedan.peroleh_jenis() << endl;
	cout << "Merk : " << sedan.peroleh_merk() << endl;
	cout << "CC : " << sedan.peroleh_cc() << endl;

}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
			
			
