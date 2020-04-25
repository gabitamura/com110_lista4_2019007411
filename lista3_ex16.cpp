#include<stdio.h>

int main (){
	int n1=0, n2=0, x=0;
	printf("digite um numero: ");
	scanf("%d", &n1);
	printf("digite outro numero: ");
	scanf("%d", &n2);
	
	for (n1 > n2; n1 <= n2; n1++){
		for (x = 0; x <= 10; x++){
		printf("\n%d x %d = %d", n1, x, n1*x);
		}
	printf("\n");	
	}
}
