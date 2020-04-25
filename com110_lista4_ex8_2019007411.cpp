#include<stdio.h>
#include<math.h>

int main(){
	int h;
	
	printf("digite o horario atual em horas: ");
	scanf("%d", &h);
	
	if (h >= 5 && h <= 11){
		printf("Manha.");
	}
	else if (h >= 12 && h <= 17){
		printf("Tarde.");
	}
	else {
		printf("Noite.");
	}
}
