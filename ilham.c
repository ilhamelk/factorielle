#include <stdio.h>
#include <stdlib.h>



    int main()
{
    int i,f,x;
    f=1;
    printf("entre un nombre : \n");
    scanf(" %d",&x);
    if(x<0)
        printf("impossible");
        else
    for (i=1; i<=x ;i++)

    f=f*i;
    printf("la factorielle est %d",f);

    return 0;
}
