#include<stdio.h>
#include<math.h>

int main(){
	
	float n, a;
	
	printf("digite n: ");
	scanf("%f", &n);
	
	for (a=0; a <= n; a++){
		printf("\n3^%.0f = %.0f", a, pow(3, a));
	}
	
return 0;	
}
