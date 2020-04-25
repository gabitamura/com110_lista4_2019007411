#include<stdio.h>
#include<math.h>

int main(){
	int v, vm;
	
	printf("velocidade atual do veiculo: ");
	scanf("%d", &v);
	printf("velocidade maxima permitida na via: ");
	scanf("%d", &vm);
	
	if (v <= vm){
		printf("\nNao houve multa.");
	}
	else if (v > vm && v < 1.20*vm){
		printf("\nO valor da multa e R$85,13.");
	}
	else if (v > 1.20*vm && v < 1.50*vm){
		printf("\nO valor da multa e R$127,69.");
	}
	else {
		printf("\nO valor da multa e R$574,62.");
	}	
}
