#include <stdio.h>
 
int main() {
 
    float i=0, j=1; 
	int c;
	printf("I=0 J=1\n");
	printf("I=0 J=2\n");
	printf("I=0 J=3\n");
	for (i=0.2; i<=2.2;){
			for(c=1; c<=3; c++){
			printf("I=%.1f J=%.1f\n", i, j);
			j+=1;
		}
		j -= 3;
		j += 0.2;
		i +=0.2;
	}
}
