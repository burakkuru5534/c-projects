#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int h(int k){
	int M=131071;
	float A=(sqrt(5)-1)/2;
return M*fmod(k*A,1);
	
}
int main(int argc, char** argv) {
	
	cout<<h(200202);
	
	
	
	
	return 0;
}
