#include <stdio.h>
#include <stdlib.h> // system("cls");
#include <string.h> 
#include <conio.h> // getch()
#include <unistd.h> // sleep()

struct Vetor{
	float x;
	float y;
	float z;
}; 

int main(){
	struct Vetor v1, v2, soma;
	printf("Vetor 1: ");
    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);
    printf("Vetor 2: ");
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);
    soma.x = v1.x + v2.x;
    soma.y = v1.y + v2.y;
    soma.z = v1.z + v2.z;
    printf("SOma: %.2f %.2f %.2f", soma.x, soma.y, soma.z);
}
