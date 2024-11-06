#include <stdio.h>

int main() {
    int num1,num2,s=0,i;
    do{
        printf("inserisci n1: ");
        scanf("%d",&num1);
        printf("inserisci n2: ");
        scanf("%d",&num2);
    }while(num2<=num1);
    for(i=num1;i<=num2;i++){
        s+=i;
    }
    printf("la somma e' %d",s);
    return 0;
}
