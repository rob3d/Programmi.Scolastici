#include <stdio.h>
#include <stdlib.h>
int main()
{
int v[100], i, N,max,min;
//min=0;
max=0;
do
{
printf("Inserire la dimensione del vettore: ");
scanf("%d", &N);
}
while(N<1 || N>100);

for(i=0; i<N; i++)
{
printf("Inserire l'elemento %d del vettore: ", i+1);
scanf("%d", &v[i]);

}
printf("\n");
for(i=0; i<N; i++)
{
	if(v[i]>max)
	{
		max=v[i];
	}
	if(v[i]<min|| v[i]<max)
	{
		min=v[i];
	}
	
	
}
printf("Il numero maggiore rilevato nella sequenza e' stato : %d.\n",max);
printf("Il numero minore rilevato nella sequenza e' stato : %d.\n",min);

system("PAUSE");
}
