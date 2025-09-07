#include <stdio.h>
#include <stdlib.h>

int main()
{
int somme = 0 , num  ;
    printf("veuiller entrer la valeur de votre num:");
    scanf("%d",&num);

    for (int i = 1;i <= num;i++)
    {
        somme = i + somme ;
    }
    printf("somme = %d",somme);


    return 0;
}
