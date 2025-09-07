#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i , N , U1=0 , U2=1, Un ;

    printf("veuiller entrer la valeur de votre nombre :");
    scanf("%d",&N);
    if(N>=1)
        printf("%d \n",U1);
    if(N>=2)
        printf("%d \n",U2);

    for(i = 2; i < N; i++) {
    Un = U1 + U2;
    U1 = U2;
    U2 = Un;
    printf("%d \n", Un);

}

    return 0;
}
