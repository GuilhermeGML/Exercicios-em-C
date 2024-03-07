#include <stdio.h>
int main(){
	int x1, x2, soma, multp, mud;
	scanf("%d %d", &x1, &x2);
		if (x2>x1){
			mud = x2;
			x2 = x1;
			x1 = mud;
		}
		for (int c = x2+1; c < x1; c++) {
	        if (c % 2 != 0) {
	            soma +=c;
	        }
	    }
	    printf("Soma Impares=%d\n", soma);
	    
		if (x2>x1){
			mud = x2;
			x2 = x1;
			x1 = mud;
		}
		for (int d = x2+1; d <= x1; d++) {
	        if (d % 2 == 0) {
	            multp *=d;
	        }
	    }
	    printf("Soma pares=%d\n", multp);
}


