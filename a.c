#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a = 1;
   int b = 20000000;
   float c;
   int d;
   /* while loop execution */
   while( a < 20000000) {
      printf("%d\t%d\t%.5f\t          %d pesent is done\n", a, b, c, d);
      a++;
      b--;
      c = a / (float)b;
      d = (float)a / 20000000 * 100;
   }
 
   return 0;
}
