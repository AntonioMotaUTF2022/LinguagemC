#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n, k;
	float Hn=0;
	printf("Digite o número inteiro positivo:\n----->");
	scanf("%d",&n);
	for(k=1;k<=n;k++){
		Hn+=(float)1/k;
	}
	printf("O número natural Hn é: %.2f",Hn);
	return 0;
}