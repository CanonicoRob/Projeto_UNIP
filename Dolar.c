#include <stdio.h>
float cotacao (float real,float cot_moeda){
	float r_conv=real*cot_moeda;
	return r_conv;
}
int main(){
	float dolar,euro,dolar1,euro1,dolar2,euro2,us1,eur1,us2,eur2;
	printf ("Cotacao do dolar: \n");
	scanf ("%f",&dolar);
	printf ("Cotacao do euro: \n");
	scanf ("%f",&euro);
	
	printf ("Dolar1: \n");
	scanf ("%f",&us1);
	dolar1=cotacao(us1,dolar);
	printf ("Dolar 1 = %f R$ \n",dolar1);
	
	printf ("Euro1: \n");
	scanf ("%f",&eur1);
	euro1=cotacao(eur1,euro);
	printf ("Euro 1 = % 3f R$ \n",euro1);
	
	printf ("Dolar2: \n");
	scanf ("%f",&us2);
	dolar2=cotacao(us2,dolar);
	printf ("Dolar 2 = % 3f R$ \n",dolar2);
	
	printf ("Euro2: \n");
	scanf ("%f",&eur2);
	euro2=cotacao(eur2,euro);
	printf ("Euro 2 = % 3f R$ \n",euro2);
}

