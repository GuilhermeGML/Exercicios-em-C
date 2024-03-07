#include <stdio.h>
#define MAX 15
int main(){
  int i, j, k=1, n, mat[MAX][MAX];
  do{
  	scanf ("%d",&n);
    for(i=0; i<n; i++){
    	for (j=0; j<n; j++){
			if (i == j){
				mat[i][j] = 1;
			}else if (i < j){
				mat[i][j] = j - i + 1;
			} else{
				mat[i][j] = i - j + 1;
			}
	  	}	
	}

    for (i=0; i<n; i++){
      for (j=0; j<n; j++){
    	printf ("%3d",mat[i][j]);
	  }
      printf ("\n");
    }
  } while (n != 0);
}
