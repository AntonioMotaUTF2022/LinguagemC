#include <stdio.h>
#include <math.h>
int main() {
	int i;
	float maior=-INFINITY, meio, menor=INFINITY, x;
	for(i=1;i<4;i++){
		printf("Digite um valor para");
		switch(i){
			case 1: printf(" A:"); break;
			case 2: printf(" B:"); break;
			case 3: printf(" C:"); break;
		}
		scanf("%f",&x);
		if((maior==-INFINITY)&&(x>maior)) maior=x;
		if((menor==INFINITY)&&(x<menor)) menor=x;
		if((maior!=-INFINITY)&&(x>maior)){
			meio=maior;
			maior=x;
		}
		if((menor!=INFINITY)&&(x<menor)){
			meio=menor;
			menor=x;
		}
	}
	printf("%.2f < %.2f < %.2f",menor,meio,maior);
	return 0;
}