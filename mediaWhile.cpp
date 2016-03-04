//Autore: Roberto Santo

#include <stdio.h>
#include <stdlib.h>

main(){
	int num ,somma ,count;
	float media;
	
	num=1;
	somma=0;
	count=0;
	
	printf("Inserisci un numero:");
	scanf("%i",&num);
	
	while(num>0)
	{
	count=count+1;
	somma=somma+num;
	media=somma/count;
	printf("La media attuale e'%f\n",media);
	printf("Inserisci un numero: ");
	scanf("%i",&num);
	
	
	}
	
	printf("L ultimo numero inserito era negativo!\n");
	
	 system("PAUSE");
}

