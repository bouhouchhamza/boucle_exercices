#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , num ;
    printf("veuiller entrer la valeur de le num :");
    scanf("%d",&num);
    int odd ;
    printf("affichage : ");
    for(i = 1 ; i<=num ; i++){
         odd = 2 * i-1 ;
         printf("%d, ",odd);
    }
    return 0;
}
