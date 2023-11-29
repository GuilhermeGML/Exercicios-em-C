#include <stdio.h>

int main() {
	int n, cem = 0, cin = 0 , vin = 0, dez = 0, cinc = 0, dos = 0, um = 0;
	scanf("%d", &n);
	while (n != 0){
	if (n >= 100){
		n = n - 100;
		cem = cem + 1;
	}
	else{
		if (n >= 50){
			n = n - 50;
			cin = cin + 1;
	}
	else{
		if (n >= 20){
			n = n - 20;
			vin = vin + 1;
	} 	
	else{
		if (n >= 10){
			n = n - 10;
			dez = dez + 1;
	}
	else{
		if (n >= 5){
			n = n - 5;
			cinc = cinc + 1;
	}
	else{
		if (n >= 2){
			n = n - 2;
			dos = dos + 1;
	}
	else{
		if (n >= 1){
			n = n - 1;
			um = um + 1;
	}
	}
	}
	}
	}
	}
	}
}
	printf("%d nota(s) de R$ 100,00\n", cem);
	printf("%d nota(s) de R$ 50,00\n", cin);
	printf("%d nota(s) de R$ 20,00\n", vin);
	printf("%d nota(s) de R$ 10,00\n", dez);
	printf("%d nota(s) de R$ 5,00\n", cinc);
	printf("%d nota(s) de R$ 2,00\n", dos);
	printf("%d nota(s) de R$ 1,00\n", um);
		
}
	
