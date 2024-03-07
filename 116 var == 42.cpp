#include <stdio.h>
int main(){
	int var, armazen[99], i=0, j;
	while(var !=42){
		scanf("%d", &var);
		armazen[i]=var;
		i++;
	};
	for(j=0;j<i-1;j++){
		printf("%d\n", armazen[j]);
	}
}
