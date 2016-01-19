//Autore: Roberto Santo

#include <stdio.h>
#include <stdlib.h>

main(){
	float basetrap1,basetrap2,altezza,area;
	
	printf("Inserisci il valore della prima base:");
	scanf("%f",&basetrap1);
	printf("Inserisci il valore della seconda base:");
	scanf("%f",&basetrap2);
	printf("Inserisci il valore della altezza:");
	scanf("%f",&altezza);
	area=(basetrap1+basetrap2)*altezza/2;
	printf("Ecco il valore dell area: ");
	printf("%f\n",area);
	
	 system("PAUSE");
}

