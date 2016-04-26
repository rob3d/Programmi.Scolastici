#include <stdio.h>
#include <stdlib.h>
int main()
{
int v[100], i, N, totale=0;
do
{
printf("Inserire la dimensione del vettore: ");
scanf("%d", &N);
}
while(N<1 || N>100);
for(i=0; i<N; i++)
{
printf("Inserire l'elemento V[%d] del vettore: ", i+1);
scanf("%d", &v[i]);
totale=totale+v[i];
}
printf("\n");
for(i=0; i<N; i++)
{
	if(v[i]>0)
	{
		printf("Nella posizione %d e' presente un numero positivo.\n",i+1);
	}
}
system("PAUSE");
}
