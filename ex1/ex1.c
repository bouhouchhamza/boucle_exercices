#include <stdio.h>
#include <stdlib.h>

int main()
{
int num , i , result  ;
    printf("veuiller entrer la valeur qui vous pouver multiplis : ");
    scanf("%d",&num);

   for(i=1;i<=10;i++){
        result = num * i;
        printf("%d * %d = %d \n",num,i,result);



    }
    return 0;

}
