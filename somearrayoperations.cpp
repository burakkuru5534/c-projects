
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//  3x4 boyutlu A dizisi
int A[3][4]={{847,3219,25,77},{9076,171,3,101022},{4,8765,888,8934101}};
//3x4 boyutlu B dizisi
int B[3][4];

//PRINT fonksiyonu baþlangýç
void PRINT(int a[][4]){
// dizi elemanlarýný yazdýrma iþlemi
for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
		printf("%d\t",a[i][j]);
	}printf("\n");
}
// dizi elemanlarýný yazdýrma iþlemi sonu

}
//PRINT fonksiyonu sonu

//REVERSENUMBER fonksiyonu baþlangýç

void REVERSENUMBER(int a[][4],int b[][4]){
int k=0;
int C[7]={0,0,0,0,0,0,0};
char str[7];
char num;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			while(A[i][j]!=0){
				
				C[k]=C[k]*10;
				C[k]=C[k]+A[i][j]%10;
				A[i][j]=A[i][j]/10;
				k=k+1;
		
		
			}
			for(int a=0;a<3;a++){
				for(int b=0;b<4;b++){
					for(int c=0;c<7;c++){
						sprintf(str,"%d",C[c]);
						
					}
					for(int i=0;i<7;i++){
					num=(char)C[i];
					}
					
					B[i][j]=(int)num;
				}
			}	
		
		
		}
	}
	

	
}
//REVERSENUMBER fonksiyonu sonu

int main() {

printf("A dizisi:\n");
PRINT(A);
REVERSENUMBER(A,B);
printf("B dizisi:\n");
PRINT(B);

//program sonu


	return 0;
}
