#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//  10x15 boyutlu A dizisi
int A[10][15];
//baþlangýçta b nin boyutu
int b_length=0;

//FUNCTION1 A dizisindeki asal elemanlarý B dizisine atar.
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

// b dizisinin elemanlarýný büyükten küçüðe sýralar
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


// A dizisinin elemanlarýna 2 ile 101 arasýnda random sayý atama iþlemi
printf("Two Dimensional 10x15 Array A:\n\n");

	for (int i = 0; i<10; i++) {
		for (int j = 0; j<15; j++) {
			A[i][j] = 2 + rand() % 101;
			printf("%d", A[i][j]);
			printf("\t");

		}
		printf("\n");

	}
// A dizisinin elemanlarýna 2 ile 101 arasýnda random sayý atama iþlemi sonu


// A dizinin kaç elemaný asaldýr sorgusu ve B dizisinin eleman sayýsýný bulma	
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
// b dizisinin eleman sayýsý bulundu ve boyutuna uygun bir b dizisi oluþturuldu
int B[b_length];
// A dizinin kaç elemaný asaldýr sorgusu ve B dizisinin eleman sayýsýný bulma sonu

// FUNCTION1 A arrayindeki asal sayýlarý B dizisine atar.
	FUNCTION1(A,B);
	
	// B dizisinin elemanlarýný yazdýrýyoruz.
printf("one-dimensional Array B which holds the prime elements of the Array A:\n");

for(int i=0;i<b_length;i++){
	printf("%d",B[i]);
	printf("\t");
}
printf("\n");
//B dizisinin elemanlarý yazdýrýldý.	

//FUNCTION2 B dizisinin elemanlarýný büyükten küçüðe doðru sýralar.
	FUNCTION2(b_length,B);
//program sonu
	return 0;
}
