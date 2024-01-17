#include <iostream>
#include <stdlib.h>
using namespace std;

int binary_search(int[], int, int );
char pil;

main () {
	do {
		cin.clear();
		system("cls");
		
		const int array_size=10;
		int array [array_size]={0,6,9,12,20,23,29,32,47,79};
		
		cout << "************ Binary Search ************" << endl;
		cout << "***************************************" << endl;
		cout << "\n Data dalam Array adalah = " << endl;
		cout << "\n Array : " << "\t\t Data : " << endl;
		
		for (int count = 0; count < array_size; count++){
			cout << "\t" << " array ["<< count <<"]" << "\t\t";
			cout << array [count] << endl;
		}
		
		int searching_element = 0;
		int flag = 0;
		
		cout << "\n\n Masukkan Data yang Anda Cari = ";
		cin >> searching_element;
		
		flag = binary_search (array, array_size, searching_element);
		if (flag!=-1)
			cout << "\n Data ditemukan pada posisi Array ["<< flag <<"]" << endl;
			else 
			cout << "\n Data tidak ditemukan" << endl;
			cout << "\n Apakah Anda ingin Mencari Data Kembali (Y/N) = ";
			cin >> pil;
		}
		while (toupper(pil)=='Y');
		return 0;
	}
	
	// Fungctional Definition
	int binary_search (int array[],int array_size, int element) {
		int start = 0;
		int end = array_size-1;
		int middle;
		int position = -1;
		middle = (start+end)/2;
		
		do {
			if (element < array [middle])
				end = middle - 1;
				else if (element > array [middle])
				start = middle + 1;
				middle = (start+end)/2;
			}
		while (start <= end && array [middle]!= element);
				if (array [middle] == element)
				position = middle;
				
				return position;
		}
	
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		 
