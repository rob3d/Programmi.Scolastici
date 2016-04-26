//Autore: Roberto Santo 2AI
/*DATO UN ELENCO DI N PRODOTTI CON N COMPRESO TRA 3 E 20, L INIZIALE DEL PRODOTTO E IL PREZZO,
CALCOLARE L INCREMENTO DEL PREZZO SECONDO UNA PERCENTUALE FORNITA DA TASTIERA PER QUEI PRODOTTI CHE HANNO UN PREZZO MAGGIORE DI 3 EURO 
E CONTARE QUANTI PRODOTTI NON HANNO SUBITO VARIAZIONE
*/
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main(){
       int quantita,count,novar,percent,prezzo;
       float nuovoprezzo;
       char prodotto,scelta;
       do
       {
           count=0;
           nuovoprezzo=0;
           novar=0;
           
           do
    		{
    				printf("\nInserisci la quantita':");
    				scanf("%d",&quantita);
    		}
    		while(quantita<3||quantita>20);
    		
    		while(count<quantita)
    		{
                                prezzo=0;
    			                printf("\nInserisci l' iniziale del prodotto:");
    			                prodotto=getche();
    			                printf("\nInserisci il prezzo del prodotto:");
                                scanf("%d",&prezzo);
                                
                                if(prezzo>3)
                                {
                                
    			                            printf("\nInserisci lo sconto da applicare:");
    			                            scanf("%d",&percent);
    			                            nuovoprezzo=prezzo+(prezzo*(float)percent/100);
    			                            printf("\nIl nuovo prezzo e': %f",nuovoprezzo);
                                }
                                else
                                            novar=novar+1;
                                
                                 count=count+1;
            }
            printf("\nVuoi ripetere il programma?(S/N)");
		    scelta=getche();
      }
      while (scelta=='s'|| scelta=='S');
		
			
       system("PAUSE");
}
