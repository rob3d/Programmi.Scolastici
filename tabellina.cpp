//Autore: Roberto Santo

#include <stdio.h>
#include <stdlib.h>

main(){
	int numero, count, prodotto;
	
	do
	{
		printf("Inserisci un numero:");
		scanf("%d",&numero);
	}
	while(numero<1||numero>10);
	printf("Ecco la tabellina del %d\n",numero);
	for(count=0;count<=10;count++)
	{
		prodotto=count*numero;
		printf("%d\n",prodotto);
	}
	
	 system("PAUSE");
}

