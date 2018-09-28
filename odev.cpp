#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//  10x15 boyutlu A dizisi
int A[10][15];
//ba�lang��ta b nin boyutu
int b_length=0;

//FUNCTION1 A dizisindeki asal elemanlar� B dizisine atar.
int FUNCTION1(int a[][15],int b[]) {
	int k = 0;
	
	for (int i = 0; i<10; i++) {
		for (int j = 0; j<15; j++) {
			int bayrak=0;
			for(int x=2;x<=a[i][j]/2;x++){
				if(a[i][j]%x==0){
					bayrak=1;
					break;
				}
			}
			if(bayrak==0){
			b[k]=a[i][j];
			k=k+1;	
			}
			
			
			
			
		
		}
		
	}

	return k;
}

// b dizisinin elemanlar�n� b�y�kten k����e s�ralar
void FUNCTION2(int a,int b[]) {
	
	int gecici_bellek;
	for (int i = 0; i<a; i++) {
		for (int j = 0; j<a; j++) {
			if (b[i]>b[j]&&b[j]!=b[i]) {
				gecici_bellek = b[i];
				b[i] = b[j];
				b[j] = gecici_bellek;


			}
		}
	}
	printf("Array B without dublicates- (DESCENDING ORDER):\n");
	for (int i = 0; i<a; i++) {
		printf("%d ", b[i]);
	}

} // FUCNTION2 sonu



int main() {


// A dizisinin elemanlar�na 2 ile 101 aras�nda random say� atama i�lemi
printf("Two Dimensional 10x15 Array A:\n\n");

	for (int i = 0; i<10; i++) {
		for (int j = 0; j<15; j++) {
			A[i][j] = 2 + rand() % 101;
			printf("%d", A[i][j]);
			printf("\t");

		}
		printf("\n");

	}
// A dizisinin elemanlar�na 2 ile 101 aras�nda random say� atama i�lemi sonu


// A dizinin ka� eleman� asald�r sorgusu ve B dizisinin eleman say�s�n� bulma	
	for (int i = 0; i<10; i++) {
		for (int j = 0; j<15; j++) {
			int bayrak=0;
			
			for(int x=2;x<=A[i][j]/2;x++){
				if(A[i][j]%x==0){
					bayrak=1;
					break;
					
				}
				
			}
			if(bayrak==0){
			b_length=b_length+1;
				
			}
		}	
	}
// b dizisinin eleman say�s� bulundu ve boyutuna uygun bir b dizisi olu�turuldu
int B[b_length];
// A dizinin ka� eleman� asald�r sorgusu ve B dizisinin eleman say�s�n� bulma sonu

// FUNCTION1 A arrayindeki asal say�lar� B dizisine atar.
	FUNCTION1(A,B);
	
	// B dizisinin elemanlar�n� yazd�r�yoruz.
printf("one-dimensional Array B which holds the prime elements of the Array A:\n");

for(int i=0;i<b_length;i++){
	printf("%d",B[i]);
	printf("\t");
}
printf("\n");
//B dizisinin elemanlar� yazd�r�ld�.	

//FUNCTION2 B dizisinin elemanlar�n� b�y�kten k����e do�ru s�ralar.
	FUNCTION2(b_length,B);
//program sonu
	return 0;
}
