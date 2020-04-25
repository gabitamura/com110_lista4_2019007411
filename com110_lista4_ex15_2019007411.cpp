#include<stdio.h>

int main(){
	int linha, coluna, n;
	printf("digite n: ");
	scanf("%d", &n); 
  
  	printf("\n");
	linha = 1;
	while (linha <= n){
    coluna = 1;
    	while (coluna <= linha){
    	printf( "#" );
    	coluna ++;
    	}
    printf( "\n" );
    linha ++;
	}
}
