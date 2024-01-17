#include <iostream>
using namespace std;

	class Kalkulator {
		protected :
			int nilai1;
			int nilai2;
			float hasil;
		public :
			void in()
			{
				cout << "Masukkan Nilai 1 = "; cin >> nilai1;
				cout << "Masukkan Nilai 2 = "; cin >> nilai2;
			}
			void out()
			{
				hasil = nilai1 * nilai2;
				cout << "Hasil Perkalian = " << hasil;
			}
		
		};
	class Tes : public Kalkulator {
		private :
		public :
			void in()
			{
				cout << "Masukkan Nilai 1 = "; cin >> nilai1;
				cout << "Masukkan Nilai 2 = "; cin >> nilai2;
			}
			void out ()
			{
				hasil = nilai1 + nilai2;
				cout << "Hasil Pertambahan = " << hasil;
			}
		};
	class Tes2 : public Kalkulator {
		private :
		public :
			void in()
			{
				cout << "Masukkan Nilai 1 = "; cin >> nilai1;
				cout << "Masukkan Nilai 2 = "; cin >> nilai2;
			}
			void out ()
			{
				hasil = nilai1 - nilai2;
				cout << "Hasil Perkurangan = " << hasil;
			}
		};
	
	class Tes3 : public Kalkulator {
	private :
	public :
		void in()
			{
				cout << "Masukkan Nilai 1 = "; cin >> nilai1;
				cout << "Masukkan Nilai 2 = "; cin >> nilai2;
			}
		void out ()
		{
			hasil = nilai1 / nilai2;
			cout << "Hasil Perbagian = " << hasil;
		}
	};
	
int main () {
	int pil;
	Kalkulator k; 
	Tes t; 
	Tes2 t1;
	Tes3 t2;
	
	cout << "================Kalkulator===========" << endl;
	cout << "1. Penjumlahan " << endl;
	cout << "2. Pengurangan " << endl;
	cout << "3. Perkalian " << endl;
	cout << "4. Pembagian " << endl;
	cout << "Masukkan Pilihan Anda : "; cin >> pil;
	system("cls");
	
	if (pil==1) {
		t.in();
		t.out();
	}
	if (pil==2) {
		t1.in();
		t1.out();
	}
	if (pil==3) {
		k.in();
		k.out();
	}
	if (pil==4) {
		t2.in();
		t2.out();
	}
	return 0;
}
		
		
		
		
	
				
