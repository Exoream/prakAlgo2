#include <stdio.h>
#include <conio.h>
#define n 11

int A[n] = {25,12,38,15,20,45,34,3,29,7,22};
void sort (int l, int r);
int main () {
	int i, kiri, kanan, kali, X	;
	
	printf("Sebelum di Sort : ");
	for (i=0; i<=n-1; i++)
	printf (" %d", A[i]);
	printf ("\n\n");
	
	sort (0, n-1);
	printf ("\nSetelah di Sort : ");
	for (i=0; i<=n-1; i++)
	printf (" %d", A[i]);
	
}

void sort (int kiri, int kanan) {
	int i , ii, j, x, pivot, w;
		i = kiri; j = kanan;
		pivot = A[i];
			while (i<=j) {
				while (A[i] < pivot) i++;
				while (pivot < A [j]) j--;
					if (i<=j) {
						w = A[i]; A[i] = A[j]; A[j] = w;
							i++; j--;
						}
				}
				
	if (kiri <j) sort (kiri, j);
	if (i < kanan) sort (i, kanan);

}
					
		
		

