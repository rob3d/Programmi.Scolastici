//Autore: Roberto Santo

#include <stdio.h>
#include <stdlib.h>

main(){
	int rate,rateold,ratetot,importo,importoold,importorata,npag,dieciperc;
	ratetot=0;

	
	do
	{
		printf("Inserisci il numero di rate:");
		scanf("%d",&rate);
	}
	while(rate<3||rate>10);
	rateold=rate;
	printf("Inserisci l' importo totale:");
	scanf("%d",&importo);
	importoold=importo;
	
	for(;rate>0;rate--)
	{	
	system("CLS");
		npag=npag+1;
		printf("Inserisci l' importo della rata:");
		scanf("%d",&importorata);
		printf("Ti restano ancora da pagare %d euro.\n",importo-importorata);
		printf("Fin ad ora hai pagato %d rate!\n",npag);
		ratetot=rateold+rate;
		if(importorata<(importoold*10/100))
		dieciperc=dieciperc+1;
		
	}
	
	if(importoold>importo)
	{
		
		printf("Passa dalla segreteria, hai esaurito il tuo credito!\n");
		printf("Hai versato %d rate inferiori al 10% dell importo.\n",dieciperc);
		printf("La media delle rate e'%d.",ratetot/rateold);
	}
	else
	{
		printf("Dovrai versare una Maxirata Finale di %d euro.\n",importo);
	}
	

	 system("PAUSE");
}

