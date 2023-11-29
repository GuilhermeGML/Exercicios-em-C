#include <stdio.h>

int main() {
	int t, h = 0, m = 0, s = 0;
	scanf("%d", &t);
	while (t != 0){
	if (t >= 60){
		t = t - 60;
		m = m + 1;
	}
	if (m == 60){
		h = h + 1;
		m = 0;
	}
	if (t < 60){
		s = s + t;
		t = 0;
	}
	}
	printf("%d:%d:%d\n",h, m, s);		
}
