#include <iostream>
#include <iostream>
#include <cstring>
#include <ctime>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

int Partition(int A[][6],int p,int r){
	
	int x;
	x=A[r-1][0]; 
	int i;
	i=p-2;


	for(int j=p-1;j<r-1;j++){
		//j 0,1,2,3,4 için döngüye girecek
		//1,12,3,8,5,2
		int temp[3][6];
		if(A[j][0]<=x){
			i=i+1;
			
			for(int x=0;x<6;x++){
			
			temp[j][x] = A[i][x];
			A[i][x]=A[j][x];
			A[j][x]=temp[j][x];	
			}
					
		}
	}
	int temp2[3][6];
	for(int a=0;a<6;a++){
	
	temp2[i+1][a]=A[i+1][0];
	A[i+1][0]=A[r-1][0];
	A[r-1][0]=temp2[i+1][a];
	return i+1;
	}
	
	
	
}

void QuickSort(int A[][6],int p,int r){
	
	if(p<r){
		
		int q = Partition(A,p,r);
		QuickSort(A,p,q);
		QuickSort(A,q+1,r);
		
	}
	
}

int main(int argc, char** argv) {
		
	int dizi[3][6];
	dizi[0][0]=12;
	dizi[0][1]=4;
	dizi[0][2]=8;
	dizi[0][3]=7;
	dizi[0][4]=6;
	dizi[0][5]=54;
	dizi[1][0]=2;
	dizi[1][1]=78;
	dizi[1][2]=98;
	dizi[1][3]=65;
	dizi[1][4]=45;
	dizi[1][5]=32;
	dizi[2][0]=5;
	dizi[2][1]=6;
	dizi[2][2]=8;
	dizi[2][3]=9;
	dizi[2][4]=10;
	dizi[2][5]=4;
	
	
	
		for(int i=0;i<6;i++){
			for(int j=0;j<3;j++){
				cout<<dizi[j][i]<<',';
			}
		
	}
	cout<<endl<<endl;
	QuickSort(dizi,1,3);

	for(int i=0;i<6;i++){
			for(int j=0;j<3;j++){
				cout<<dizi[j][i]<<',';
			}
		
	}
	
	return 0;
}
