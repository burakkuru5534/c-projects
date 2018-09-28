#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	
	int sayi = 10;
	
	while(true){
		
		if(sayi%17==0){
			if(sayi%16==0){
				if(sayi%15==0){
					if(sayi%14==0){
						if(sayi%13==0){
							if(sayi%12==0){
								if(sayi%11==0){
									if(sayi%10==0){
										if(sayi%9==0){
											cout<<"sayi: "<<sayi<<endl;
											break;
										}
										else{
											sayi++;
										}
									}
									else{
										sayi++;
									}
								}
								else{
									sayi++;
								}
							}
							else{
								sayi++;
							}
						}
						else sayi++;
					}
					else sayi++;
				}
				else{
					sayi++;
				}
			}
			else{
				sayi++;
			}
		}
		else {
			sayi++;
		}
		
	
 }
	

	return 0;
	
	
	
	
}
