#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, n, n2, x;
	printf("Digite o número inteiro positivo:\n----->");
	scanf("%d",&n);
	n2=pow(n,3.0);
	x=pow(n-1,2.0)+n;
	printf("\n\nn³=%d\nA soma de números ímpares que equivale a %d é: %d",n2,n2,x);
	for(i=1;i<n;i++){
		x+=2;
	   	printf(" + %d",x);
	}
	printf("\n\n");
	return 0;
}