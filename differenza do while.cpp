//Autore: Roberto Santo

#include <stdio.h>
#include <stdlib.h>

main(){
	int num1,num2,diff;
	

		do
		{
			printf("Inserisci il primo numero:");
			scanf("%d",&num1);
			printf("Inserisci il secondo numero:");
			scanf("%d",&num2);
		}
		while(num1<num2);
		
		do
		{
			diff=num1-num2;
			printf("La differenza e':%d\n",diff);
		}
		while(diff>3);

	
	 system("PAUSE");
}

