#include <stdio.h>
int main()
{
{
  int num;
  printf("INgrese un númmero:\n");
  scanf("%d",&num);
  if (num%2 == 0) 
  {
    printf("El numero %d es par,\n",num);
  }
  else 
  {
    printf("El numero %d es impar.\n",num);
  }
}
return 0;
}
