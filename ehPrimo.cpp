#include <cmath>

bool ehPrimo(int num)
{
  if (num == 2) return true;
  if (num <= 1 || num%2 == 0) return false;
  int raiz = sqrt(num);

  for (int i = 3; i <= raiz; i += 2)
      if (num%i == 0)
         return false;

   return true;
}
