#include <iostream>
using namespace std;

void Merge(int a[],int p, int q,int r){
	
	int b[r-p+1];
	int i=p;
	int k =0;
	int j = q+1;
	
	while(i<=q && (j<=r)){
		
		if(a[i]<a[j]){
			b[k]=a[i];
			k++;
			i++;
		}
		else {
			b[k]=a[j];
			k++;
			j++;
		}
		
	}
	while(i<=p){
		b[k]=a[i];
		k++;
		i++;
	}
	while(j<=r){
		b[k]=a[j];
		k++;
		j++;
		
	}
	
	for(int l=p;l<=r;l++){
		a[l]=b[l-p];
	}

	
	/*
	int n1,n2;
	n1=(q-p)+1;
	n2=(r-q);
	
	int L[n1];
	int R[n2];
	
	for(int i=0;i<n1;i++){
		
		L[i]=A[(p+i)];

	}
	for(int j=0;j<n2;j++){
	
		R[j]=A[q+j+1];

	}
	int i=0;
	int j=0;
	for(int k=p;k<r;k++){
		
		if(L[i]<=R[j]){
			A[k]=L[i];
			i=i+1;
		}
		else{
			A[k]=R[j];
			j=j+1;
		}
		
	}
	*/	
}

int MergeSort(int a[],int i,int j){

if(i<j){
// p = 0 , r = 5 
	int	q=(i+j)/2;
	 	MergeSort( a, i, q);
 		MergeSort( a, q+1, j);
	 	Merge( a, i,  q, j);

	}
}

int main() {

int dizi[3]={6,4,3};
for(int x=0;x<3;x++){

cout<<dizi[x]<<"\t";	
}
MergeSort(dizi,0,2);

for(int x=0;x<3;x++){

cout<<dizi[x]<<"\t";	
}
system("Pause");
	return 0;
}
