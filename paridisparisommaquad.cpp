//Autore: Roberto Santo

#include <stdio.h>
#include <stdlib.h>

main(){
	int pari,dispari,sommaquad,quantita,count,numero;
	char scelta;
	do
	{
			system("cls");
		pari=0;
		dispari=0;
		sommaquad=0;
		count=0;
		
		printf("inserisci la quantita di numeri:");
		scanf("%d",&quantita);
		
		while (quantita>count)
		{
		
			printf("inserisci un numero:");
			scanf("%d",&numero);
			if(numero%2==0)
				pari=pari+1;
			else
				dispari=dispari+1;
			sommaquad=sommaquad+(numero*numero);
			count=count+1;
			
		}
		printf("\nI numeri pari sono stati:%d",pari);
		printf("\nI numeri dispari sono stati:%d",dispari);
		printf("\nLa somma dei quadrati dei numeri e':%d",sommaquad);
		printf("\nVuoi ripetere il programma?(S/N)");

		//come alternativa: scelta=getchar();
		
		fflush(stdin);
		scanf("%c", &scelta);
			
	}
	while (scelta=='s'|| scelta=='S');
	
	 system("PAUSE");
}

