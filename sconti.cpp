//ATTENZIONE! NON SONO RESPONSABILE PER L USO CHE VERRA' FATTO CON QUESTO CODICE!
//https://github.com/santoroberto00/Programmi.Scolastici/blob/master/DISCLAIMER-LIBERATORIA.txt

//Autore: Roberto Santo
//LidlSconti
#include <stdio.h>
#include <stdlib.h>

main(){
	float prezzo  ;
	printf("Inserisci il prezzo totale della tua spesa:");
	scanf("%f",&prezzo);
	

		
	if(prezzo<50)
	{
	
		printf("Lo sconto da applicare e':5%\n ");
	
	}
	else
	{
		if(prezzo<65)
		{
			printf("Lo sconto da applicare e':6% \n");
		}
	}
	
		if(prezzo<80&& prezzo>65)
		{
			printf("Lo sconto da applicare e':7%\n ");
		}
	
		else
	{
		if(prezzo>100)
		{
			printf("Lo sconto da applicare e':10%\n ");
		}
		else
		{
			if(prezzo>80&&prezzo<=100)
			{
			printf("Easter egg: dev stanco :D\n");
			}
		}
	}
	
	 system("PAUSE");
}

