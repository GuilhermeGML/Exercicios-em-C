#include <stdio.h>

int main(){
	int a,b,c,d;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	if(b>c && d>a && (c+d)>(b+a)){
		printf("Valores aceitos\n");
	} else{
		printf("Valores nao aceitos\n");
	}
}
