#include <iostream>
// kritik bölge iþlemleri -prosesler
using namespace std;
int sira=1;
int p1,p2;
bool istek_1,istek_2;


 void mx_begin(){

	
	
	while(istek_2&&sira==p2){
		cout<<"girerse ne olur?"<<endl;
		
	}
	cout<<"kbde isleme girdi"
	<<" kb islemleri yapildi"<<endl;
	
}

 void mx_end(){
	
	istek_1=false;
	cout<<"kb islemleri sona erdi"<<endl;
	
}

 void proses1(){
	cout<<"p1 icin kb islemleri baslayacak"<<endl;
	istek_1=true;
istek_2=false;
	
	sira=p2;
	
	mx_begin();
	mx_end();
	cout<<"diger islemlere devam edilecek"<<endl;
}


void proses2(){
	
	cout<<"proses2 icin kb islemleri baslayacak"<<endl;
	istek_1=false;
	mx_begin();
	mx_end();
	
	
	
}

int main(int argc, char** argv) {



proses1();

	return 0;
}
