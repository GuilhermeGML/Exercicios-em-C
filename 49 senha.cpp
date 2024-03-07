#include <stdio.h>
 
int main() {
	int senha, x=1;
	while(x==1){
	scanf("%d", &senha);
	if(senha==2002){
		printf("Acesso Permitido\n");
		break;
	} else{
		printf("Senha Invalida\n");
	}
	} 
}
