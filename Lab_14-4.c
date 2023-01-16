#include <stdio.h>

void ekle(int a[],int z,int i){
	int c;
	int b[i+1];
	for (c=0;c<=i;c++){
		if (z<a[c]){
			b[c]=z;
			c++;
			break;
		}else{
			b[c]=a[c];
		}
	}
	while (c<=i){
		b[c]=a[c];
		c++;
	}
	for (c=0;c<=i;c++){
		printf("%d",b[c]);
	}
}

int main(){
	int y,p,h;
	printf("gireceginiz deger sayisini girin : ");
	scanf("%d",&p);
	int go[p];
	printf("Enter Number smallest to biggest:\n");
	for (y=0;y<p;y++){
		scanf("%d",&go[y]);
	}
	printf("Eklemek istediðiniz sayýyý giriniz :");
	scanf("%d",&h);
	ekle(go,h,p);
	return 0;
}
