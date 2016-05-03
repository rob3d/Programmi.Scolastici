#include <stdio.h>
#include <stdlib.h>
int main()
{
int v[100],w[100],ris[100], i,l,m, N,max,min;

m=0;
do //dimensione con dowhile
{
printf("Inserire la dimensione del vettore: ");
scanf("%d", &N);
}
while(N<1 || N>100);

for(i=0; i<N; i++) //lettura elementi array v
{
printf("Inserire l'elemento %d del vettore V: ", i+1);
scanf("%d", &v[i]);

}
printf("\n");
for(i=0; i<N; i++)//lettura elementi array w
{
printf("Inserire l'elemento %d del vettore W: ", i+1);
scanf("%d", &w[i]);
}


printf("\n");
for(i=0; i<N; i++)
{
	for(l=0;l<N;l++)
	{
		if(v[i]==w[l])
		{
			ris[m]=v[i];
			m=m+1;
		}	
	}	
}
printf("Gli elementi comuni sono:\n");
for(i=0;i<m;i++)
{
	printf("%d\n",ris[i]);
}

system("PAUSE");
}
