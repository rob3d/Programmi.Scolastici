//Autore: Roberto Santo 2AI

#include <stdio.h>
#include <stdlib.h>

main(){
       int count;
       char A;
       
       count=0;
       
while (count>2)
{
       printf("Inserisci un carattere: ");
       scanf("%c",&A);

       switch (A)
       {
              case 'a':
              case 'e':
              case 'i':
              case 'o':
              case 'u':
              case 'A':
              case 'E':
              case 'I':
              case 'O':
              case 'U':
                   
                   printf("La lettera inserita e' una vocale!\n");
              break;
       
              case ' ':
                   printf("Il carattere e' uno spazio!\n");
              break;
              
       default:
              printf("Carattere non riconosciuto!\n");
       }
       count= count+1;
}
       system("PAUSE");
}
