#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre , somme = 0 , i ;
    printf("veuiller entrer la nombre :");
    scanf("%d",&nombre);
    for(i=1;i<=nombre;i++){
            somme= somme + i ;
        printf("Après i=%d, somme=%d\n", i, somme);
    }
    printf("la somme de votre nombre est : %d \n", somme);

    return 0;
}
