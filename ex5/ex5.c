#include <stdlib.h>
#include <stdio.h>

int main()
{
    int base , ex , i , result = 1 ;
    printf("entrer la valeur de base : ");
    scanf("%d", &base);

    printf("entrer la valeur de  exposant : ");
    scanf("%d", &ex);
    for(i=1 ; i <= ex ; i++)
    {
        result = result * base;
    }
    printf("result = %d",result);


    return 0;
}
