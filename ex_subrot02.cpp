#include <stdio.h>
float calculo(float x, float y){
return	x*y*(100.0-3.0)/200.0;
}
int main(){
float sal_rec1, n_horas1, sal_min, sal_rec2, n_horas2;
printf("Insira o numero de horas trabalhadas 1:\n");
scanf("%f",	&n_horas1);
printf("Insira o numero de horas trabalhadas 2:\n");
scanf("%f",	&n_horas2);
printf("Insira o valor do salario minimo: \n");
scanf("%f",	&sal_min);
sal_rec1 = calculo(n_horas1, sal_min);
sal_rec2 = calculo(n_horas2, sal_min);
printf("Salario a receber 1: R$ %.2f.\n", sal_rec1) ;
printf("Salario a receber 2: R$ %.2f.\n", sal_rec2) ;
}


