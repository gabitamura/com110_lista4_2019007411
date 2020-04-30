#include<stdio.h>

int main(){
	int x, maior, menor, c=0;
	
	do{
		printf("numero: ");
		scanf("%d", &x);
		if (c==0){
			maior = x;
			menor = x;
			c++;
		}
			if (x >= 0){	
				if (x > maior){
				maior = x;
			}
			if (x == 0){
			menor = x;
			}
			if (x < menor){
			menor = x;
			}
		}
	}
	while (x >= 0);
	
	printf("\nmaior = %d", maior);
	printf("\nmenor = %d", menor);
	
}
