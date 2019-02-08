#include <stdio.h>

int g_One=1;
void func(int* pInt);

int main()
{
  int nvar=2;
  int* pvar=&nvar;
  func(pvar);
  printf("%d",*pvar);

  return 0;
}

void func(int* pInt)
{
  pInt=&g_One;
}
