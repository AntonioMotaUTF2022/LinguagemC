#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, j, x;
	printf("Digite o tamanho do vetor:\n----->");
	scanf("%d",&x);
	float vet[x];
	int vet2[x];
	for(i=0;i<x;i++){
		printf("Digite um número:");
		scanf("%f",&vet[i]);
		vet2[i]=1;
	}
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			if((i!=j)&&(vet[i]==vet[j])&&(vet[i]!=INFINITY)&&(vet[j]!=INFINITY)){
				vet2[i]++;
				vet[j]=INFINITY;
			}
		}
		if(vet[i]!=INFINITY){
			printf("\n%.1f ocorre %d vez",vet[i],vet2[i]);
			if(vet2[i]>1) printf("es");
		}
		
	}
	return 0;
}