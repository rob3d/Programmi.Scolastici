//Autore: Roberto Santo

#include <stdio.h>
#include <stdlib.h>

main(){
	int val1,val2,temp,count;
	printf("inserisci il primo numero intero:");
	scanf("%i",&val1);
	printf("inserisci il secondo numero intero:");
	scanf("%i",&val2);
	temp=val1;
	val1=val2;
	val2=temp;
		count=0;
		while(count<100){
			printf(".......Processando calcoli.......\n");
			printf("%i percento effettuato.",count);
			count=count+1;
			system("cls");
		}
	printf("Ecco il nuovo valore dei val1: ");
	printf("%i\n",val1);
	printf("Ecco il nuovo valore dei val2: ");
	printf("%i\n",val2);
	 system("PAUSE");
}

