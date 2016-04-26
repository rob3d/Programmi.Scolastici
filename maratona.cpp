//Autore: Roberto Santo
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	int quantita, count, countm, punti, puntitot, menu, sfondo;
	char cognome,categoria,scelta,carattere;
	
	printf("Avvio in corso, ora ti verranno proposte delle scelte:\n");
	printf("Premi 0 se vuoi chiudere il programma.\n");
	printf("Premi 1 se vuoi cambiare i colori.\n");
	printf("Premi qualsiasi altro numero se vuoi avviare il programma.\n");
	scanf("%d",&menu);
	
	switch (menu)
	{
		case 0:
   		exit (EXIT_FAILURE);
		break;
		
		case 1:
			
				printf("\nInserisci un numero compreso tra 0 e 7: ");
				scanf("%d",&sfondo);
				printf("\nInserisci un carattere compreso tra 'A' e 'F'(SOLO MAIUSCOLO):\n");
				carattere=getche();
				switch(carattere)
				{
					case 'A':
						system("COLOR 0A");
					break;
					case 'B':
						system("COLOR 0B");
					break;
					case 'C':
						system("COLOR 0C");
					break;
					case 'D':
						system("COLOR 0D");
					break;
					case 'E':
						system("COLOR 0E");
					break;
					case 'F':
						system("COLOR 0F");
					break;
				}
				switch(sfondo)
				{
					case (0):
						system("COLOR 00");
					break;
					case (1):
						system("COLOR 10");
					break;
					case 2:
						system("COLOR 20");
					break;
					case 3:
						system("COLOR 30");
					break;
					case 4:
						system("COLOR 40");
					break;
					case 5:
						system("COLOR 50");
					break;
					case 6:
						system("COLOR 60");
					break;
					case 7:
						system("COLOR 70");
					break;
				}
				
		break;
		
	}
	do
	{
		countm=0;
		puntitot=0;
		
		do
		{
				printf("\nInserisci la quantita':");
				scanf("%d",&quantita);
		}
		while(quantita<10||quantita>40);
			
		while(count<quantita)
		{
			printf("\nInserisci l' iniziale del cognome dell' atleta:");
			cognome=getche();
			printf("\nInserisci l' iniziale della categoria dell' atleta:");
			categoria=getche();
			if(categoria=='M'||categoria=='m')
			{
				printf("\nInserisci il punteggio dell' atleta '%c' :",cognome);
				scanf("%d",&punti);
				countm=countm+1;
				puntitot=puntitot+punti;
			}
			count=count+1;	
		}
		printf("\nGli studenti che si sono cimentati nella Maratona sono: %d\n",countm);
		printf("La somma dei punteggi che i maratoneti hanno ottenuto e': %d\n",puntitot);
		
		printf("\nVuoi ripetere il programma?(S/N)");
		scelta=getche();
	}
	while (scelta=='s'|| scelta=='S');
	
	 system("PAUSE");
}

