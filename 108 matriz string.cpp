#include <stdio.h>
#include <string.h>
#define li 4
#define co 20
int main(){
	int mat[li][co], i, j, Ci, N;
	for(i=0; i<4; i++){
		for(j=0; j<82; j++){
			scanf("%1d", &mat[i][j]);
		}
	}
	int F = mat[0][0];
    int L = mat[0][N+1];
    N = (N - 2) / 4;
	char string[N+1];
	
	for (int i = 0; i < N; i++) {
        Ci = (F * mat[i+1][i+1] + L) % 257;
        string[i] = (char)Ci;
    }

    string[N] = '\0';

    printf("%s\n", string);

}
