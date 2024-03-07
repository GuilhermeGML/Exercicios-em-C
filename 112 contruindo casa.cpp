#include <stdio.h>
#include <math.h>

int main() {
    int lar, comp, pc, area, lado, terreno;
    do{
    	scanf("%d",&lar);
    	if(lar==0){
    		break;
		}
    	scanf("%d",&comp);
    	if(comp==0){
    		break;
		}
    	scanf("%d",&pc);
    	if(pc==0){
    		break;
		}
        area = lar * comp;
        terreno = (area * 100) / pc;
        lado = sqrt(terreno);
        printf("%d\n", lado);
    }while (lar != 0 || comp != 0 || pc != 0);
}

