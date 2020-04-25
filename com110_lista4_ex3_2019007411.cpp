#include<stdio.h>

int main(){
	int n, x1=0, x2=0, x3=0;
	
	printf("\nMENU: ");
	printf("\n\nopcao 1: \nmassa");
	printf("\n\nopcao 2: \npeixe");
	printf("\n\nopcao 3: \ncarne");
	do {
		printf("\n\n\nselecione uma opcao: ");
		scanf("%d", &n);
	}
	while (n < 0 && n > 4);
	if (n==1){
	x1 = n;
	printf("\nopcao %d selecionada: ", x1);
	printf("massa.");
	}
	if (n==2){
	x2 = n;
	printf("\nopcao %d selecionada: ", x2);	
	printf("peixe.");

	}
	if (n==3){
	x3 = n;
	printf("\nopcao %d selecionada: ", x3);	
	printf("carne.");

	}
}
