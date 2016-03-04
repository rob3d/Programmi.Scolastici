//Autore: Roberto Santo 2AI
#include <stdio.h>
#include <stdlib.h>

main(){
     int num, somma, valsomma;
     somma=0;
     printf("Inserisci un numero intero: \n");
     scanf("%i",&valsomma);
     
while(somma<valsomma)
{
       printf("Inserisci un numero intero: \n");
       scanf("%i",&num);
       somma= somma+num;
}
printf("La somma supera la costante inserita come primo numero.\n");
printf("la somma corrisponde a %i\n",somma);
     system("PAUSE");
}
