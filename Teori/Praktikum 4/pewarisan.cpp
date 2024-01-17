#include <iostream>
#include <string>
using namespace std;

// Kelas Dasar
class DariOrtu {
	private :
		int uang;
		string mobil;
	public :
		DariOrtu ()
		{
			uang = 500000;
			mobil = "Honda Jazz";
		}
		void info () 
		{
			cout << "Uang : " << uang << endl;
			cout << "Mobil : " << mobil << endl;
		}
	};
	
// Kelas Turunan
class MilikkuSendiri : public DariOrtu {
	private :
		string sepeda;
	public :
		MilikkuSendiri()
		{
			sepeda = "Pasific X233";
		}
		void info()
		{
			DariOrtu::info();
			cout << "Sepeda : " << sepeda << endl;
		}
	};
	
	int main () {
		// Pembuatan Objek
		MilikkuSendiri bendaku;
		// Info
		bendaku.info();
	}
	
	
	
	
	
	
	
	
	
	
	
	
