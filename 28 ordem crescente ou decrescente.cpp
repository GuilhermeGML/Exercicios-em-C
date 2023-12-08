#include <stdio.h>

int main() {
   int a, b, c,v1,v2,v3, temp;
   scanf("%d%d%d", &a, &b, &c);
   v1=a;
   v2=b;
   v3=c;
   if (a > b) {
      temp = a;
      a = b;
      b = temp;
   }
   if (b > c) {
      temp = b;
      b = c;
      c = temp;
   }
   if (a > b) {
      temp = a;
      a = b;
      b = temp;
   }
   printf("%d\n%d\n%d\n\n", a, b, c);
   printf("%d\n%d\n%d\n", v1, v2, v3);
}

