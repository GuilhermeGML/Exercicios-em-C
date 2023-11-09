#include <stdio.h>

struct Presente {
    int id;
    int altura;
    int largura;
    int comprimento;
    int area;
};

int main() {
    struct Presente presente[1000];
    int nt, pp, pb, area;
    int i, a, l, c;
    scanf("%d", &nt);

    for(int t = 0; t < nt; t++) {
        scanf("%d", &pp);
        scanf("%d", &pb);

        // Loop para ler os detalhes dos presentes
        for(int j = 0; j < pp; j++) {
            scanf("%d", &presente[j].id);
            scanf("%d", &presente[j].altura);
            scanf("%d", &presente[j].largura);
            scanf("%d", &presente[j].comprimento);
            presente[j].area = presente[j].altura * presente[j].largura * presente[j].comprimento;            
        }
		
        for(int j = 0; j < pb; j++) {
            int maior_area = presente[j].area;
            int maior_id = presente[j].id;
            int maior_comprimento = presente[j].comprimento;
            int maior_largura = presente[j].largura;
            int maior_altura = presente[j].altura;
		
            // Loop para encontrar o presente com a maior área-
            for(int x = 1; x < pp; x++) {
                if(presente[x].area >= maior_area) {  
                    maior_area = presente[x].area;
                    maior_id = presente[x].id;
                }
                if(presente[x].comprimento > maior_comprimento) {
                    maior_comprimento = presente[x].comprimento;
                }
                if(presente[x].largura > maior_largura) {
                    maior_largura = presente[x].largura;
                }
                if(presente[x].altura > maior_altura) {
                    maior_altura = presente[x].altura;
                }
            }
		
            printf("%d\n", maior_id);
        }
    }
    return 0;
}

