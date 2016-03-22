//Autore: Roberto Santo
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	int count,quantita,casuale,pari,dispari;
	char scelta;
	do
	{
		
		system("cls");
		count=0;
		pari=0;
		dispari=0;
		
		do{
			printf("inserisci la quantita':");
			scanf("%d",&quantita);
		}
		while(quantita<1||quantita>50);

			while(count<quantita)
			{
				casuale=(rand()%200)+1;
				if(casuale%2==0)
				pari=pari+1;
				else
				dispari=dispari+1;
					
				printf("%d\n",casuale);
				count=count+1;
			}
			
	printf("\nI numeri pari estratti sono:%d",pari);
	printf("\nI numeri dispari estratti sono:%d",dispari);
	printf("\nVuoi ripetere il programma?(S/N)");
	scelta=getche();
	
	}
	while (scelta=='s'|| scelta=='S');
	
		 system("PAUSE");
}

