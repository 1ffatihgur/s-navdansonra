#include <stdio.h>
#include <math.h>,

int main()
{
	
	char A[5][10];
	int i;
	
	for(i=0; i<5;i++)
	{
		printf("%d. sehri giriniz: ",i+1);
		gets(A[i]);
	}
	
	for(i=0; i<5;i++)
	{
		printf("\n");
		printf("%d. girdiginiz sehir: ",i+1);
		puts(A[i]);
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
