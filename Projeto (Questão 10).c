#include<stdio.h>

int main()
{

   int num;

   printf("Numero: ");

   scanf("%i", &num);

   if(num % 2 == 0){

       printf("\nNumero Par\n\n");

   }

   else {

       printf("\nNumero Impar\n\n");

   } }