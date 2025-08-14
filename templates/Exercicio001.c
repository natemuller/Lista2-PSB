#include <stdio.h>

void papelMoeda(unsigned r, unsigned *n100, unsigned *n50, unsigned *n10, unsigned *n5, unsigned *n1);

int main() {
  unsigned r, n100, n50, n10, n5, n1;
  scanf("%u", &r);
  papelMoeda(r, &n100, &n50, &n10, &n5, &n1);
  printf("%u %u %u %u %u\n", n100, n50, n10, n5, n1);
  return 0;
}
