#include <stdio.h>

int main() {
   float sal, nsal, reajuste;
   int ind;
   scanf("%f", &sal);
   if (sal <= 400.00) {
      nsal = sal * 1.15;
      reajuste = sal * 0.15;
      ind = 15;
   } else 
   if (sal <= 800.00) {
      nsal = sal * 1.12;
      reajuste = sal * 0.12;
      ind = 12;
   } else 
   if (sal <= 1200.00) {
      nsal = sal * 1.10;
      reajuste = sal * 0.10;
      ind = 10;
   } else 
   if (sal <= 2000.00) {
      nsal = sal * 1.07;
      reajuste = sal * 0.07;
      ind = 7;
   } else {
      nsal = sal * 1.04;
      reajuste = sal * 0.04;
      ind= 4;
   }
   printf("Novo salario: %.2f\n", nsal);
   printf("Valor do reajuste: R$ %.2f\n", reajuste);
   printf("Indice de reajuste: %d%%\n", ind);
}	
