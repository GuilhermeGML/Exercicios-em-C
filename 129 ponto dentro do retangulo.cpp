#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()

struct Ponto{
	int x;
	int y;
};


int main(){
	struct Ponto v1, v2, p;
	printf("Cordenada superior: ");
	scanf("%d %d", &v1.x,&v1.y);
	printf("Cordenada inferior: ");
	scanf("%d %d", &v2.x,&v2.y);
	printf("Cordenada do ponto: ");
	scanf("%d %d", &p.x,&p.y);
	if (p.x <= v1.x && p.x >= v2.x && p.y <= v1.y && p.y >= v2.y) {
		printf("Esta dentro do retangulo\n");
	} else{
		printf("Esta fora do retangulo\n");
	}
}
