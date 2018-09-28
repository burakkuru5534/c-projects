#ifndef SINIF_H
#define SINIF_H
#include <iostream>
using namespace std;
class Sinif
{
	public:
		Sinif(int a,int b){
		sayi1=a;
		sayi2=b;
		cout<<sayi1<<endl<<sayi2;	
		}
	protected:
	int sayi1;
	int sayi2;
};

#endif
