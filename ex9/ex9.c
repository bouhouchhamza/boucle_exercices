#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N , M = 0 ;
    int nombre ;
    printf("veuiller entrer la valeur de votre nomber : ");
    scanf("%d",&nombre);
    N = nombre ;
    do{
            M++ ;
            N = N /  10 ;
    }while(N != 0);
        printf("Le nombre total de chiffres est : %d\n", M);



    return 0;
}
