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

default_fonk();//fonk tan�m�nda atanan ilk de�erler, de�er girilmezse kullan�l�r.
// bu fonk �al��t���nda tan�mdaki 5 de�erleri a ve b i�in d�ner.


cout<<fak_fonk(5);









	return 0;
}
