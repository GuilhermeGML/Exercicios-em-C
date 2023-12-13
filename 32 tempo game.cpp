#include <stdio.h>

int main() {
   int ini, fim, dur;
   scanf("%d", &ini);
   scanf("%d", &fim);
   if (ini < fim) {
      dur = fim - ini;
   } else {
      dur = 24 - ini + fim;
   }
   printf("O JOGO DUROU %d HORA(S)", dur);

}
