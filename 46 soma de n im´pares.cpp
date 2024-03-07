#include <stdio.h>
 
int main() {
	int x1, x2, c, soma, imp, test, cont=0, mud=0;
	scanf("%d", &test);
	while(cont != test){
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
	    printf("%d\n", soma);
	    soma = 0;
    	cont +=1;
	}
}

