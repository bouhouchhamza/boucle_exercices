#include <stdio.h>
#include <stdlib.h>

int main()
{
int num , i ;
    printf("veuiller entrer la valeur de N :");
    scanf("%d",&num);

    int result = 1;
    for(i=1;i<=num;i++){
        result = result * i;
    }
            printf("%d! = %d",num,result);


    return 0;
}
