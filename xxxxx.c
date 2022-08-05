#include <stdio.h>
#include <stdlib.h>
int factorielle(int x)

{
   int fact,i;

   fact=1;
   for(i=2;i<=x;i++)
        fact=fact*i;
    return fact;

}
int main()
{
 int nombre ;

 do{
   printf("veuillez saisir un nombre\n");
   scanf("%d",&nombre);
}while(nombre<0);
printf("la factorille de %d! = %d \n",nombre,factorielle(nombre));
}
