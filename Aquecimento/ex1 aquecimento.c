#include <stdio.h>
#include <string.h>
int main(){
	int n,i,res;
	char dna[100];
	fflush(stdin);
	printf ("Sequencia de dna:");
	gets (dna);
	strupr(dna);
	n=strlen(dna);
	int flag=-1;
	for (i=0;i<n-2;i++){
		if (dna[i]=='A'&& dna [i+1]=='T'&& dna[i+2]=='G'){
			flag=1;
			break;
		}
	}
	if (flag==1)
		printf ("EXISTENTE");
		
	else 
		printf ("INEXISTENTE");
	
	return 0;
}
