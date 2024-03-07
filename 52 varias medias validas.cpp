#include <stdio.h>

int main() {
    float nota, n1, n2, media, c=1;
	int test=1;
    do{
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
		do{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &test);
		} while(test!=1 && test!=2);
		c=1;
	} while(test==1);
}

