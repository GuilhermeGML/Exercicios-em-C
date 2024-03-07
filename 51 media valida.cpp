#include <stdio.h>

int main() {
    float nota, n1, n2, media, c=1;
    while(c<=2){
	    scanf("%f", &nota);
	    if (nota<0 || nota>10){
	    	printf("nota invalida\n");
		} else{
			if (c==1){
				n1 = nota;
			} else{
				n2 = nota;
			}
			c+=1;
		}
	}
	media = (n1+n2)/2;
	printf("media = %.2f\n", media);
}

