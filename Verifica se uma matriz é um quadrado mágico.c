#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n, i, d1=0, d2=0, j, verificador;
	printf("Digite o tamanho da matriz quadrada:");
	scanf("%d",&n);
	int mat[n+1][n+1];
	for(i=0;i<n;i++){
		mat[i][n]=0;
		for(j=0;j<n;j++){
			printf("Digite o valor de a(%d,%d):----->",i+1,j+1);
			scanf("%d",&mat[i][j]);
			mat[i][n]+=mat[i][j];
		}
	}
	for(j=0;j<n;j++){
		mat[n][j]=0;
		for(i=0;i<n;i++){
			mat[n][j]+=mat[i][j];
		}
	}
	for(i=0;i<n;i++){
		d2+=mat[i][n-1-i];
		d1+=mat[i][i];
	}
	for(i=0;i<n;i++){
		if((mat[i][n]==mat[0][n])&&(mat[n][i]==mat[n][0])&&(mat[0][n]==mat[n][0])&&(mat[0][n]==d1)&&(mat[0][n]==d2)){
			verificador=1;
		}
		else verificador=0;
	}
	if(verificador==1) printf("É um quadrado mágico!!!!!!!!!!!");
	else printf("Não é um quadrado mágico D=");
	return 0;
}