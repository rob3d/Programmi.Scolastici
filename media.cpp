//Autore: Roberto Santo

#include <stdio.h>
#include <stdlib.h>

main(){
	int a,b;
	float media;
	printf("inserisci il primo numero intero:");
	scanf("%i",&a);
	printf("inserisci il secondo numero intero:");
	scanf("%i",&b);
	printf("la media dei due numeri e':");
	media=((float)a+b)/2;
	printf("%f\n",media);
	 system("PAUSE");
}

