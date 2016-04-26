//Autore: Roberto Santo

#include <stdio.h>
#include <stdlib.h>

main(){

    int prodotto,num,oldnum;
    
    do
    {
    
    	prodotto=1;
    	printf("Inserisci un numero:");
    	scanf("%d",&num);
    	oldnum=num;
    	if(num>0)
    	{
        	for(;num>0;num--)
        	{
        		prodotto=prodotto*num;
        	}
        printf("Il prodotto fattoriale e' : %d\n",prodotto);
         }
         else
         {
             printf("Non si puo calcolare il fattoriale.\n");
         }
     }
     while(oldnum!=0);
     
	 system("PAUSE");
}

/* scriviamo un programma dove l utente inserisce una sequenza di numeri naturali che terminano con uno zero e il programma calcola il fattoriale usando un ciclo for con conteggio negativo.
