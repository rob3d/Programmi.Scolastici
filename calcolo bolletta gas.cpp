//Autore: Roberto Santo

#include <stdio.h>
#include <stdlib.h>

main(){
		int mc;
		float tot ;
		
	printf("Inserisci i metri cubi consumati: ");
    scanf("%i", &mc);
    
    if(mc<500)
    {
    	tot=0.3*mc;
	}
    else if(mc<700)
    {
    	tot=0.3*500+0.5*(mc-500);
	}
    else
    {
    	tot=0.3*500+0.5*700+0.8*(mc-700);
	}
	
	printf("Il costo della tua bolletta e': %f \n",tot);
	
	 system("PAUSE");
}

