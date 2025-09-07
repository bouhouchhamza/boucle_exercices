#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , pair , num ;
    printf("veuiller entrer la valeur de le num :");
    scanf("%d",&num);
    printf("affichage : ");
    for(i =1; i<=num ; i++){
         pair = 2 * i ;
         printf("%d, ",pair);
    }
    return 0;
}
