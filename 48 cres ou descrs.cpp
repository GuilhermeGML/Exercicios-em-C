#include <stdio.h>
 
int main() {
	int n1, n2, c, x=1;
	while(x==1){
	scanf("%d %d", &n1, &n2);
	if(n2==n1){
		break;
	}
	if(n2>n1){
		printf("Crescente\n");
	} else{
		printf("Decrescente\n");
	}
	} 
}
