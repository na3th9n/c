/* Hello World */

#include <stdbool.h>
#include <stdio.h>

int main(void) {
  // init variables
  int i;
  float f;
  char *s;
  bool b;

  // assign
  i = 10;
  f = 3.14;
  s = "Nathan";
  b = true;

  printf("i = %d\nf = %f\ns = %s\n", i, f, s);

  if (b) {
    printf("%d\n", b);
  }

  if (i) {
    printf("i is true");
  }
}
