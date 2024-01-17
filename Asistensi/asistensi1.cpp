#include <iostream>
using namespace std;

int iterative (int arr[], int a, int b) { 
		int x = arr[b]; 
		int y = (a - 1); 
			for (int i = a; i <= b - 1; i++) { 
				if (arr[i] <= x) { 
					y++; 
					swap(arr[y], arr[i]); 
			} 
		} 
				swap(arr[y + 1], arr[b]); 
				return (y + 1); 
		} 
		void quick_sort(int arr[], int a, int b) { 
			 int stack[b-a+1]; 
			 int top = -1; 
			 stack[++top]=a; 
			 stack[++top]=b;
			  
				while(top >= 0){ 
					b = stack[top--]; 
					a = stack[top--]; 
					int p = iterative(arr, a, b); 
						if(p-1>a){ 
							stack[++top] = a; 
							stack[++top] = p - 1; 
					} 
						if(p+1<b){ 
							stack[++top] = p + 1; 
							stack[++top] = b; 
						} 
					} 
				} 
int rekursive (int ar[], int start, int end) {
	int pivot = ar[end];
	int partitionIndex = start;
	for (int i=start; i<end; i++) {
		if (ar[i] < pivot) {
			swap (ar[i], ar[partitionIndex]);
			partitionIndex++;
		}
	}	
	swap (ar[partitionIndex], ar[end]);
	return partitionIndex;
}

void quickSort (int ar[], int start, int end) {
	if (start < end) {
		int partitionIndex = iterative (ar,start,end);
			quickSort (ar,start,partitionIndex-1);
			quickSort (ar,partitionIndex+1,end);
		}
	}
	
int main(){ 
	
	int n, pilih;
	
	cout << "Masukkan Jumlah Data : " ; cin >> n ;
	int a[n];
	
	for (int x=0 ; x<=n-1 ; x++) {
	cout << "Masukkan Angka ke-" << x+1 << " : " ; cin >> a[x];
}
    cout << endl;
	cout << "Urutkan Data : " <<endl;
	cout << "1. Iterative Quicksort :" << endl;
	cout << "2. Recursive Quicksort :" << endl;
	cout << "Masukkan Pilihan [1..2] : "; cin >> pilih;
	cout<<endl;
	
	if ( pilih == 1) {
	cout << "Pengurutan Data Dengan Iterative Quicksort" << endl;
	cout <<	"==========================================" << endl; 
	cout << "Data Sebelum Diurutkan : ";
	
	for(int x=0; x<n; x++) {
		cout << a[x] << " ";
}
		cout << endl;
 
		quickSort(a,0,n-1); 
		cout << "Data Setelah Diurutkan : "; 
	
	for(int x=0; x<n; x++){
		cout<<a[x]<<" ";
 }
		cout<<endl;
	}
	
	else if ( pilih == 2) {
		cout << "Pengurutan Data Dengan Rekursive Quicksort" << endl;
		cout <<	"==========================================" << endl; 
		cout <<	"Data Sebelum Diurutkan : ";
		
	for(int x=0; x<n; x++) {
		cout << a[x] << " ";
	}
		cout << endl;
		quickSort (a,0,n-1);
		cout << "Data Setelah Diurutkan : ";
		 
	for(int x=0;x<n;x++) {
		cout<<a[x]<<" ";
 }
		cout<<endl;
	}
}
