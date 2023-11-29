#include <stdio.h>
 
int main() {
	float n;
	int cem = 0, cin = 0 , vin = 0, dez = 0, cinc = 0, dos = 0, um = 0, mcin = 0 , mvc = 0, mdez = 0, mcinc = 0, mum = 0;
	scanf("%f", &n);
	while (n != 0){
	if (n >= 100.00){
		n = n - 100.00;
		cem = cem + 1;
	}
	else{
		if (n >= 50.00){
			n = n - 50.00;
			cin = cin + 1;
	}
	else{
		if (n >= 20.00){
			n = n - 20.00;
			vin = vin + 1;
	} 	
	else{
		if (n >= 10.00){
			n = n - 10.00;
			dez = dez + 1;
	}
	else{
		if (n >= 5.00){
			n = n - 5.00;
			cinc = cinc + 1;
	}
	else{
		if (n >= 2.00){
			n = n - 2.00;
			dos = dos + 1;
	}
	else{
		if (n >= 1.00){
			n = n - 1.00;
			um = um + 1;
	}
	else{
		if (n >= 0.50){
			n = n - 0.50;
			mcin = mcin + 1;
	}
	else{
		if (n >= 0.25){
			n = n - 0.25;
			mvc = mvc + 1;
	}
	else{
		if (n >= 0.10){
			n = n - 0.10;
			mdez = mdez + 1;
	}
	else{
		if (n >= 0.05){
			n = n - 0.05;
			mcinc = mcinc + 1;
	}
	else{
		if (n >= 0.01){
			n = n - 0.01;
			mum = mum + 1;
	}
	}
	}
	}
	}
	}
	}
    }		
	}
	}
	}
	}
	}
	

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100,00\n", cem);
	printf("%d nota(s) de R$ 50,00\n", cin);
	printf("%d nota(s) de R$ 20,00\n", vin);
	printf("%d nota(s) de R$ 10,00\n", dez);
	printf("%d nota(s) de R$ 5,00\n", cinc);
	printf("%d nota(s) de R$ 2,00\n", dos);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1,00\n", um);
	printf("%d moeda(s) de R$ 0,50\n", mcin);
	printf("%d moeda(s) de R$ 0,25\n", mvc);
	printf("%d moeda(s) de R$ 0,10\n", mdez);
	printf("%d moeda(s) de R$ 0,05\n", mcinc);
	printf("%d moeda(s) de R$ 0,01\n", mum);
}
