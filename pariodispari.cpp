//Autore: Roberto Santo

#include <stdio.h>
#include <stdlib.h>

main(){
	int var;
	printf("Inserisci la variabile: ");
	scanf("%i",&var);
	if(var%2==0)
		{
		printf("La variabile inserita e' pari \n");
		}
		else{
			printf("La variabile inserita e' dispari \n'");
			}
	 system("PAUSE");
}

