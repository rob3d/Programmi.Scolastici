//Autore: Roberto Santo

#include <stdio.h>
#include <stdlib.h>

main(){
	int numero;
	printf("Inserisci il valore del numero intero:");
	scanf("%i",&numero);
	printf("Il suo precedente e'' %i e il suo successivo e' %i.\n",numero-1,numero+1);
	 system("PAUSE");
}

