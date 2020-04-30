#include<stdio.h>
#include<math.h>

int main(){
	float x, a;
	
	printf("digite x: ");
	scanf("%f", &x);

	for (a=0; a <= 10; a++){
		printf("\n%.0f^%.0f = %.0f",x, a, pow(x, a));
	}
	
return 0;
}
