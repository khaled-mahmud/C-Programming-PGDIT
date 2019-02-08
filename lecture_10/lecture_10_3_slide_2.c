#include <stdio.h>

void func(int** ppInt);
int g_One=5;

int main()
{
  int nvar=2;
  int* pvar=&nvar;
  func(&pvar);  // this is necessary to modify the pointer pvar in the function
  printf("%d",*pvar); // output???
  return 0;
}
void func(int** ppInt) // ppInt takes the address of pointer variable
{
  //Modify the pointer, ppInt points to
  *ppInt=&g_One;

  //You can also allocate memory, depending on your requirements
  //*ppInt=(int*)malloc(sizeof(int));
  //**ppInt=10;

  //Modify the variable, *ppInt points to
  //**ppInt=3;
}
