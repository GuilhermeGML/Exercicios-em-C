#include <stdio.h>

int main(){
	int cpf, ndepend, renmes, npessoas, totdin, desc, x=1;
	float imposto, salmin=1300.00, devpagar;
	printf("Quantas pessoas tem o grupo: ");
	scanf("%d", &npessoas);
	while(x <= npessoas){
	printf("Digite o CPF: ");
	scanf("%d", &cpf);
	printf("Digite o Numero de Dependentes: ");
	scanf("%d", &ndepend);
	printf("Digite a Renda por Mes ");
	scanf("%d", &renmes);
	desc = ndepend * (0,05 * salmin);
	totdin=renmes - desc;
	 if (totdin <= 2 * salmin) {
            devpagar = 0.0;
        } else if (totdin <= 3 * salmin) {
            devpagar = 0.05;
        } else if (totdin <= 5 * salmin) {
            devpagar = 0.10;
        } else if (totdin <= 7 * salmin) {
            devpagar = 0.15;
        } else {
            devpagar = totdin * 0.20;
        }
        printf("Imposto devido: %.2lf\n", devpagar);
	x++;	
	}
}
