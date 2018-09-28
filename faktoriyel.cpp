#include <iostream>
#include <stdlib.h>
//calisma_19032017
using namespace std;

void default_fonk(int a=5,int b=5){//
	cout << "a="<<a<<endl<<"b="<<b<<endl;
}

int fak_fonk(int a){
	
	if(a==1){
		return 1;
	}
	else{
		return a*fak_fonk(a-1);
	}


}

int main() {

default_fonk();//fonk tanýmýnda atanan ilk deðerler, deðer girilmezse kullanýlýr.
// bu fonk çalýþtýðýnda tanýmdaki 5 deðerleri a ve b için döner.


cout<<fak_fonk(5);









	return 0;
}
