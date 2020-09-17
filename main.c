#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char s;
	int j;
	
	printf("input a alphabet :");
	scanf("%c",&s);
	
	printf("input alphabet is %c (%d), and the next ane is %c (%d)\n",s,s,s+1,s+1);

	
	return 0;
}
