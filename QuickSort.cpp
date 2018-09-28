#include <iostream>
#include <iostream>
#include <cstring>
#include <ctime>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

int Partition(int A[],int p,int r){
	
	int x;
	x=A[r-1]; // x holds 2
	int i;
	i=p-2; // i = -1 p =1

	for(int j=p-1;j<r-1;j++){
		//j 0,1,2,3,4 için döngüye girecek
		//1,12,3,8,5,2
		
		if(A[j]<=x){
			i=i+1;
			int temp;
			temp = A[i];
			A[i]=A[j];
			A[j]=temp;			
		}
	}
	int temp2;
	temp2=A[i+1];
	A[i+1]=A[r-1];
	A[r-1]=temp2;
	return i+1;
	
}

void QuickSort(int A[],int p,int r){
	
	if(p<r){
		
		int q = Partition(A,p,r);
		QuickSort(A,p,q);
		QuickSort(A,q+1,r);
		
	}
	
	
}






int main(int argc, char** argv) {
	
	
	int dizi[]={1,12,3,8,5,2};
		for(int i=0;i<6;i++){
	cout<<dizi[i]<<'\t';	
	}
	cout<<endl<<endl;
	QuickSort(dizi,1,6);

	for(int i=0;i<6;i++){
	cout<<dizi[i]<<'\t';	
	}
	
	
	
	
	
	return 0;
}
