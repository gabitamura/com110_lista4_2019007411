#include<stdio.h>

int main(){
	
	int linha=1, coluna=1;
	
	for (linha = 1; linha < 8; linha++){
		for (coluna = 1; coluna < 24; coluna++){
		if (linha = 1){
			for (coluna = 1; coluna <= 23; coluna++){
			printf("#");
		}
	printf("\n");
		if (linha > 1 && linha < 7){
			if (coluna = 1 && coluna = 23)
			printf("#");
		}
	printf("\n");		
		}
		if (linha = 7){
			for (coluna = 1; coluna <= 23; coluna++){
			printf("#");
			}
		}
	printf("\n");
	}	}
}
