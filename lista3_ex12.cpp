#include<stdio.h>

int main(){
	int a=0, b=21, c=0;
	
	printf("\n\na:");
	while (a >= 0 && a <= 19){
		a++;
		printf("\n%d", a);
	}
	printf("\n\nb:");
	while (b <= 21 && b >= 2){
		b--;
		printf("\n%d", b);
	}
	printf("\n\nc:");
	while (c >= 0 && c <= 19){
		c++;
		if(c%2!=0)
			printf("\n%d", c);
	}
}
