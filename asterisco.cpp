//Autore: Roberto Santo

#include <stdio.h>
#include <stdlib.h>

main(){
	int riga,colonna,numero;
	riga=0;
	colonna=0;
	
	printf("Prego, inserire un numero:");
	scanf("%d",&numero);
	
	while(riga<numero)
	{
		colonna=0;
		while(colonna<numero)
		{
			printf("*");
			colonna=colonna+1;
		}
		printf("\n");
		riga=riga+1;
	}
	 system("PAUSE");
}

