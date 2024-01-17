#include <iostream>
#include <stdlib.h>
using namespace std;

int linear_search(int[], int, int);
char pil;

main () {
	do {
		cin.clear();
		system("cls");
		const int array_size=10;
		int array[array_size]={25,36,2,48,0,69,14,22,7,19};	
		
		cout << "************ Linear Search ************" << endl;
		cout << "***************************************" << endl;
		cout << "\n Isi dari Array adalah = " << endl;
		cout << "\n Array : " <<"\t\t Data :" << endl;
		
		for (int count=0; count < array_size; count++) {
			cout << "\t" << "array ["<<count<<"]" << "\t\t";
			cout << array[count] << endl;
			
	}
		
		int searching_element=0;
		int flag=0;
		
		cout << "\n\n Masukkan Data yang Anda Cari = ";
		cin >> searching_element;
		flag = linear_search(array, array_size, searching_element);
		
		if (flag!=-1) 
			cout << "\n Data tersebut ditemukan pada posisi Array ["<<flag<<"]" << endl;	
			else  
			cout << "\n Data tersebut tidak ditemukan" <<endl;
			cout << "\n Apakah Anda ingin Mencari Data Kembali (Y/N) = ";
			cin >> pil;
	}
		
		while (toupper(pil)=='Y');
		return 0;
	}
	
	
	
	// Function Definition
	int linear_search (int array[], int array_size, int array_element) {
		int flag =-1;
		for (int count=0; count <= array_size; count++) {
			if (array_element == array [count]) {
				flag = count;
				break;
			}
		}
			return flag;
	}
			
