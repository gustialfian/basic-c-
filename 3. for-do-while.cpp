#include <stdio.h>

int main(){

    int x;
    int a = 1;
    printf("%i\t", a);
    // increment
    a++;
    printf("%i\t", a);
    ++a;
    printf("%i\t", a);
    // decremnet
    a--;
    printf("%i\t", a);
    --a;
    printf("%i\t", a);
    printf("\n");

    //for
    for(int i = 0; i < 10; i++){
        printf("%i ", i);
    }
    printf("for selesai \n");

    // while
    while (a < 10){
        printf("masukan a :");
        scanf("%i", &a);
        printf("%i\n", a);
    }
    printf("while selsai");

    // do-while
    do{
        printf("masukan x :");
        scanf("%i", &x);
        printf("%i\n", x);
    }while(x<10);
}
