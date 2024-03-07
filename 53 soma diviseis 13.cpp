#include <stdio.h>
 
int main() {
	int x1, x2, c, soma, mud=0;
		scanf("%d", &x1);
		scanf("%d", &x2);
		if (x1>x2){
			mud = x1;
			x2 = x1;
			x1 = mud;
		}
		for(c = x2; c <= x1; c++) {
	        if (c % 13 != 0) {
	            soma +=c;
	        }
	    }
	    printf("%d\n", soma);
}


