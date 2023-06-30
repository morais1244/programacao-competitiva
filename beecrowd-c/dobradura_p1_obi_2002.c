#include <stdio.h>

int main()
{
  int teste=1, n;
  while (scanf("%d", &n) == 1 && n != -1)
    /*usando o operador << para deslocar os bits e multiplicar por 2^n*/
    printf("%d", (1<<n));
    printf("Teste %d\n%d\n\n", teste++, ((1 << n)+1)*((1 << n)+1));
  return 0;
}
