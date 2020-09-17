#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a, b;
	
	printf("input a number");
	scanf("%d",&a);
	
	printf("input a number");
	scanf("%d",&b);
	

	printf("a / b =%f\n", (float)a/b);
	
	
	return 0;
}
