#include <stdio.h>
#include <stdlib.h>

int main() {
    int i , num , inverse = 0 , dern_chif;
    printf("veuiller entrer la valeur de  num:");
    scanf("%d",&num);
    for(i=1;num!=0;i++){
        dern_chif = num % 10 ;
        inverse = inverse * 10 + dern_chif;
        num = num / 10;
}
    printf("l'inverse de votre nombre est : %d",inverse);
    return 0;
}
