#include <iostream>
#include <stdlib.h>
#include <conio.h>
//calisma21032017
using namespace std;

 class denemesinifi{
	
private : int deger;

public : void setfonk(int x);
         int getfonk();	
}nesne1;
void denemesinifi::setfonk(int x){
	deger=x;
}
int denemesinifi::getfonk(){
	
	return deger;
}

int main() {
	
	nesne1.setfonk(5);
	
	cout<<nesne1.getfonk()<<endl;
	
	
	getch();
	system("pause");
	
	return 0;
	
}





