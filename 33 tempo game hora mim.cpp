#include <stdio.h>

int main() {
   int hi, hf, mi, mf, ti, tf, duram, durah;
   scanf("%d %d", &hi, &mi);
   scanf("%d %d", &hf, &mf);
   ti = hi*60 + mi;
   tf = hf*60 + mf;
   duram = tf - ti;
   if (duram <= 0){
   	duram += 24*60;
   }
	durah = duram / 60;
	duram = duram % 60;
   printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", durah, duram);

}
