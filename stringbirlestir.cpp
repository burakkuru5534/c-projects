#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	
	string ifade[2];
	ifade[0]="19";
	ifade[1]="38";
	
	string str;
	str = ifade[0]+ifade[1];
	int i;
	i=atoi(str.c_str());
	cout<<i;
	
	
	
	
	
	return 0;
}
