#include <stdio.h>
#include <math.h>

int main()
{
	
	int n,b,temp,temp2;
	int toplam = 0;
	int i=0;
	int sayac=1;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&n);
	
	temp = n;
	temp2 = n;
	
	while(temp2 > 9)
	{
		temp2 = temp2 / 10;
		sayac++;
	}
	
	while(temp>0)
	{
		b = temp % 10;
		toplam = b * pow(10,sayac-1);
		temp = temp / 10;
		sayac--;
	}
	
	if(toplam == n)
	{
		printf("%d is Polindromic Number",n);
	}
	else
	{
		printf("%d is Polindromic Number",n);
	}
	
	return 0;
}
