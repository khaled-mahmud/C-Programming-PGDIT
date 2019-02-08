#include <stdio.h>
#include <stdlib.h>

void func(int* ptr);

int main()
{
  int* p, i;
  func(p);
  for (i=0;i<5;i++) scanf("%d",&p[i]);
  for (i=0;i<5;i++) printf("p[%d]=%d\n",i,p[i]);
  return 0;
}
void func(int* ptr)
{
  ptr=(int*)malloc(5*sizeof(int));
}
