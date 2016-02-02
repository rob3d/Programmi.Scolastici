//ATTENZIONE! NON SONO RESPONSABILE PER L USO CHE VERRA' FATTO CON QUESTO CODICE!
//https://github.com/santoroberto00/Programmi.Scolastici/blob/master/DISCLAIMER-LIBERATORIA.txt

//Autore: Roberto Santo
//LidlSconti
#include <stdio.h>
#include <stdlib.h>

main(){
	int count;
	float prezzo , sconto , ps ;
	printf("Inserisci il prezzo totale della tua spesa:");
	scanf("%f",&prezzo);
	
		count=0;
		while(count<100)
		{
			printf(".......Processando calcoli.......\n");
			printf("%i percento effettuato.",count);
			count=count+1;
			system("cls");
		}
		
	if(prezzo>100)
	{
		sconto=prezzo*20/100;
		ps=prezzo-sconto;
		printf("Ecco il totale scontato: ");
		printf("%f\n",ps);
	}
	else
	{
		printf("Pagah! \n");	
	}
	
	 system("PAUSE");
}

