#include <stdio.h>
int main(){
	int matM[20][20], matL[20][20];
	int n_atributo, atributo;
	int cartasM, cartasL, escolhaM, escolhaL;
	int i, j;
	
	// quantidade de atributos
	scanf("%d", &n_atributo);
	// quantidade de cartas
	scanf("%d %d", &cartasM, &cartasL);
	// cartas de Marcos
	for(i=0; i<cartasM; i++){
		for(j=0; j<n_atributo; j++){
			scanf("%d", &matM[i][j]);
		}
	}
	// cartas de Lucas
	for(i=0; i<cartasL; i++){
		for(j=0; j<n_atributo; j++){
			scanf("%d", &matL[i][j]);
		}
	}
	// escolha das cartas
	scanf("%d %d", &escolhaM, &escolhaL);
	// atributo escolhido
	scanf("%d", &atributo);
	
	if(matM[escolhaM-1][atributo-1]> matL[escolhaL-1][atributo-1]){
		printf("Marcos\n");
	} else if(matM[escolhaM-1][atributo-1]< matL[escolhaL-1][atributo-1]){
		printf("Lucas\n");
	} else{
		printf("Empate\n");
	}
	
}
