#include <iostream>
#include <string>
using namespace std;

// Kelas Dasar
class DariOrtu {
	protected :
		int uang;
		string mobil;
	public :
		DariOrtu ()
		{
			uang = 500000;
			mobil = "Honda Jazz";
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
		void info ()
		{
			// kelas ini mengenal uang & dan mobil yang berasal dari kelas DariOrtu
			cout << "Uang : " << uang << endl;
			cout << "Mobil : " << mobil << endl;
			cout << "Sepeda : " << sepeda << endl;
		}
	};
	
	int main () {
		// Pembuatan Objek
		MilikkuSendiri bendaku;
		// Info
		bendaku.info();
	}
	
