#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	int i, imp=0, par=0, x;
	for(i=0;i<10;i++){
		printf("\nDigite o ");
		switch(i){
			case 0: printf("primeiro"); break;
	  	  	case 1: printf("segundo"); break;
	  	  	case 2: printf("terceiro"); break;
	  	  	case 3: printf("quarto"); break;
	  	  	case 4: printf("quinto"); break;
	  	  	case 5: printf("sexto"); break;
	  	  	case 6: printf("s�timo"); break;
	  	  	case 7: printf("oitavo"); break;
	  	  	case 8: printf("nono"); break;
	  	  	case 9: printf("d�cimo"); break;
		}
		printf(" valor inteiro positivo:\n----->");
		scanf("%d",&x);
		if(x<0){
			i--;
			printf("Valor inv�lido. Tente novamente.");
		}
		else if(x%2==0) par++;
		else imp++;
	}
	printf("A sequ�ncia possui %d n�meros pares e %d n�meros �mpares",par,imp);
	return 0;
}