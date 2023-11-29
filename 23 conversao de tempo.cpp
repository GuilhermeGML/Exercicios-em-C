#include <stdio.h>
 
int main() {
 
	int t, a = 0, m = 0, d = 0;
	scanf("%d", &t);
	while (t != 0){
	if (t >= 365){
		t = t - 365;
		a = a + 1;
	} 
	else{
	if (t >= 30){
		t = t - 30;
		m = m + 1;
	}
	else{
	if (t < 30){
		d = d + t;
		t = 0;
	}
	}
	}	
}
	printf("%d ano(s)\n", a);
	printf("%d mes(s)\n", m);
	printf("%d dia(s)\n", d);
}
	
