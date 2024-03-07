#include <stdio.h>
 
int main() {
	int n1, n2, c, soma=0, x=1, mud=0;
	while(x==1){
	scanf("%d %d", &n1, &n2);
	if(n2==0){
		break;
	}
	if(n2>n1){
		mud = n1;
		n1 = n2;
		n2 = mud;
	}
	for(c=n2; c<=n1; c++){
		printf("%d ", c);
		soma += c;	
	}
	printf("Sum=%d\n", soma);
	soma = 0;
	} 
}
