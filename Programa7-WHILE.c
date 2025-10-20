/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio con WHILE */
#include <stdio.h>
void main()
{
  int n;
  do
  {
    printf("Dame un numero: \n");
    scanf("%d", &n);
  }
  while(n<=0);
  int num=5, s=1;
  while(s<=n)
  {
    printf("El valor para la serie es: %d \n", num);
    num=num+5;
    s=s+1;
  }
}
