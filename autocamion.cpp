//Autore: Roberto Santo

#include <stdio.h>
#include <stdlib.h>

main(){
	int cilindrata, cheveicolo;
	printf("Inserisci 1 se possiedi una auto \nInserisci 2 se possiedi un camion\n");
	scanf("%i", &cheveicolo);
	printf("Ora inserisci la cilindrata del motore:");
	scanf("%i",&cilindrata);
	
	if(cheveicolo==1)
	{
		if(cilindrata<1000)
		{
		printf("Pagherai 20 euro\n");
	
		}
		else
		{
			if(cilindrata <2000)
			{
			printf("Pagherai 30 euro\n");
			}
			else
			{
				printf("Pagherai 40 euro\n");

			}
		}
	}
	else
	{
		if (cheveicolo==2)
		{
			if(cilindrata<2000)
			{
		printf("Pagherai 40 euro\n");
	
		}
		else
		{
			if(cilindrata <3000)
			{
			printf("Pagherai 50 euro\n");
			}
			else
			{
				printf("Pagherai 100 euro\n");

			}
		}
			
	}
	}
 
	 system("PAUSE");
}

