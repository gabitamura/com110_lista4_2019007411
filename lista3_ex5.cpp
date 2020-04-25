#include<stdio.h>
#include<math.h>

int main(){
	
	float min, seg=0;
	
	printf("digite os minutos: ");
	scanf("%f", &min);
	
	seg = min*60;
	
	printf("%.0fmin = %.0fseg", min, seg);
	
}
