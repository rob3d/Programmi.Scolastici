//Autore: Roberto Santo

#include <stdio.h>
#include <stdlib.h>

main(){

	int somma,num,count;
	count=0;
	num=0;
	do
	{
		printf("Inserisci un numero:");
		scanf("%d",&num);
	}
	while(num<1||num>20);
	
	while(count<num)
	{
		somma=somma+count;
		printf("La somma e':%d\n",somma);
		count=count+1;
	}
	 system("PAUSE");
}

