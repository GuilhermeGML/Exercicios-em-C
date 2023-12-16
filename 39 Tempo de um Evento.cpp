#include <stdio.h>
int main(){
	int di, hi, mi, si, df, hf, mf, sf, totd, toth, totm, tots, tot;
	int adim, adih, adid; 
	printf("Dia "); 
	scanf("%d", &di); 
	scanf("%d : %d : %d", &hi, &mi, &si); 
	printf("Dia "); 
	scanf("%d", &df); 
	scanf("%d : %d : %d", &hf, &mf, &sf);
	
	// Segundos
	if (sf >= si){
		tots = sf - si;
	} else{
		tots = 60 - si + sf; 
	}
	// Minutos
	 if (mf >= mi){
		totm = mf - mi;
	} else{
		totm = 60 - mi + mf; 
	}
	
	// Horas
	if (hf >= hi){
		toth = hf - hi;
	} else{
		toth = 24 - hi + hf; 
	} 
	// Dias
	if (df >= di && mf >= mi){
		totd = df - di - 1;
	} else{
		totd = 30 - di + df; 
	} 

	printf("%d dia(s)\n", totd);
	printf("%d hora(s)\n", toth);
	printf("%d minuto(s)\n", totm);
	printf("%d segundo(s)\n", tots);
}
