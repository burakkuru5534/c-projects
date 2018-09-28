#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {


	int i,j;
	int n=10;
	int A []={4,6,1,11,15,44,3,5,78,77};
cout<<"Dizinin siralanmadan onceki hali: ";


	for(int x=0;x<10;x++){
		cout<<A[x]<<" ";
	}
	cout<<endl;
	for (j=1;j<n;j++){ // j=2 to n; // insertion
	
int	key = A[j];
	
	i = j-1;
	
	while(i>=0 & A[i]>key){
		
		A[i+1]=A[i];
		i=i-1;
		
	}
	A[i+1]=key;
	
	
}

cout<<"Dizinin siralanmis Hali: "<<A[0]<<" "<<A[1]<<" "<<A[2]<<" "<<A[3]<<" "<<A[4]<<" "<<A[5]<<" "<<

A[6]<<" "<<A[7]<<" "<<A[8]<<" "<<A[9]<<endl;
return 0;
}




	


	

