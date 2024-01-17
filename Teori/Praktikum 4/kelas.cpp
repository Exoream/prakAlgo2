#include <iostream>
#include <string>
using namespace std;

int main() {
	// Definisi Kelas
	class Mobil {
		private :
			string jenis;
			string merk;
			int cc;
		public:
			void isikan_jenis(string jenis)
			{
				Mobil::jenis = jenis;
			}
			void isikan_merk(string merk)
			{
				Mobil::merk = merk;
			}
			void isikan_cc(int cc)
			{
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
	Mobil minibus;
	Mobil sedan;
	
	// Isikan Data
	minibus.isikan_jenis("Avanza");
	minibus.isikan_merk("Toyota");
	minibus.isikan_cc(1300);
	
	sedan.isikan_jenis("City");
	sedan.isikan_merk("Toyota");
	sedan.isikan_cc(1600);
	
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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

