#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {




int i = 4,*p;

printf("The Value of i:%d ",i,"\n");
printf("The adress of i:%d",&i,"\n");
p=&i;
*p=4;
printf("The adress of i:%d ",p,"\n");
printf("The value of i:%d",*p,"\n");







	return 0;
}
