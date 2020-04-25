#include<stdio.h>

int main (){
	int a=0, b=0;
	printf("digite um numero: ");
	scanf("%d", &a);
	printf("digite outro numero: ");
	scanf("%d", &b);
	printf("\ninteiros entre %d e %d: ", a, b);
	a++;
	for (a > b; a < b; a++){
		printf("\n%d", a);
	}
}
