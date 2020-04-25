#include<stdio.h>
#include<math.h>

int main(){
	
	float a, b;
	
	printf("digite um numero: ");
	scanf("%f", &a);
	printf("digite outro numero: ");
	scanf("%f", &b);
	
	printf("\n%.2f + %.2f = %.2f", a, b, a+b);
	printf("\n%.2f - %.2f = %.2f", a, b, a-b);
	printf("\n%.2f x %.2f = %.2f", a, b, a*b);
	printf("\n%.2f / %.2f = %.2f", a, b, a/b);
	
}
