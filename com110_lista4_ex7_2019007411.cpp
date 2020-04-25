#include<stdio.h>
#include<math.h>
int main (){
	float m, a, imc=0;
	
	printf("insira sua massa corporal: ");
	scanf("%f", &m);
	printf("agora insira sua altura: ");
	scanf("%f", &a);
	
	imc = m / pow(a, 2);
	
	printf("seu IMC = %f", imc);
}
