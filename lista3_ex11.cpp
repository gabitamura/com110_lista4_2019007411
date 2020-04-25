#include<stdio.h>
#include<math.h>

int main(){
	int dia, mes, ano, diaa, mesa, anoa, idade=0;
	printf("DATA DE NASCIMENTO: ");
	printf("\ndia: ");
	scanf("%d", &dia);
	printf("\nmes: ");
	scanf("%d", &mes);
	printf("\nano: ");
	scanf("%d", &ano);
	printf("\nDATA ATUAL: ");
	printf("\ndia: ");
	scanf("%d", &diaa);
	printf("\nmes: ");
	scanf("%d", &mesa);
	printf("\nano: ");
	scanf("%d", &anoa);
	if (mes == mesa){
		if (dia <= diaa)
		idade = anoa - ano;
		else 
		idade = anoa - ano -1;
	}
	else if (mes < mesa)
		idade = anoa - ano;
	else 
		idade = anoa - ano - 1;
	printf("\nANIVERSARIO: %d/%d/%d", dia, mes, ano);
	printf("\nidade: %d", idade);
}
