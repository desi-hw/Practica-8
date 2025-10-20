/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 8 ARREGLO*/
#include<stdio.h>
void main()
{
  int i, arreglo[10]; 
  float prom=0;
  for(i=0; i<10; i++)
  {
    printf("Dame una calificación: \n");
    scanf("%d", &arreglo[i]);  
  } 
  for(i=0; i<10; i++)
  {
    prom=prom+arreglo[i];
  }
  prom=prom/10;
  printf("El promedio de las calificación es: %.2f", prom);
}
