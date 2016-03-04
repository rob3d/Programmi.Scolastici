//Autore: Roberto Santo 2AI

#include <stdio.h>
#include <stdlib.h>

main(){
//letto un intero, dividiamo per 2 mentre il numero resta maggiore di 2

        int num ;
        
        printf("Inserisci un numero: ");
        scanf("%d",&num);
        
        while(num>2)
                    num=num/2;
        printf("Il numero risultante dalle divisioni e' %i\n", num);     

       system("PAUSE");
}
