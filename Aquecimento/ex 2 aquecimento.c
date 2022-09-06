#include<stdio.h>
#include "matrixlib.h"
int main (){
	int  mat [100][100];
	float p,im;
	int lin,cols,i,j;
	
	printf ("qtde de linhas e colunas: ");
	scanf ("%d%d",&lin,&cols);
	carregaMatrix(mat,lin,cols);
	printf ("***MATRIX***\n");
	printMatrix(mat, lin,cols);//
	printf ("*******************\n");
	for (i=0;i<lin;i++){
		for (j=0;j<cols;j++){
			if(mat[i][j]%2==0){
				p++;
			}
			else
				im++;	
			
		}
	}
	printf("PARES: %.0f \nIMPARES : %.0f",p,im);
	return 0;
}

