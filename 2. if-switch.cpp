#include <stdio.h>

int main () {
    int x = 10;
    int y = 11;
    int z = 9;
    int pil = 1; // %i, %d

    // sama denagan
    printf("sama denagan \t\t\t:");
    if (x == 10){
        printf("benar");
    }else{
        printf("salah");
    }
    printf("\n");

    // kurang dari
    printf("kurang dari \t\t\t:");
    if (x < y){
        printf("benar");

    }else{
        printf("salah");

    }
    printf("\n");

    // lebih dari
    printf("lebih dari \t\t\t:");
    if (z > x){
        printf("benar");

    }else{
        printf("salah");

    }
    printf("\n");

    // kurang dari samadengan
    printf("kurang dari samadengan \t\t:");
    if (10 <= y){
        printf("benar");
    }else{
        printf("salah");
    }
    printf("\n");

    // lebih dari samadengan
    printf("lebih dari samadengan \t\t:");
    if (z >= y){
        printf("benar");
    }else{
        printf("salah");
    }
    printf("\n");

    printf("operaton AND \t:");
    if (1<2 && 10>9){
        printf("true");
    }else{
        printf("false");
    }
    printf("\n");

    printf("operaton OR \t:");
    if (1<0 || 10>9){
        printf("true");
    }else{
        printf("false");
    }
    printf("\n");

    // nested if
    printf("Nested if :");
    if(1<2){
        printf("Level 1\n");

        if(3<2){
            printf("Level 2\n");
            if (1 == 1){
                printf("Level 3\n");
            }
        }
    }

    if (!(1>10)){
        printf("masuk");
    }

    printf("\n\n");

    printf("Switch case:\n");
    printf("masukan :");
    scanf("%d", &pil);
    switch(pil)
    case 1:{
        printf("1");
        break;
    case 2:
        printf("2");
        break;
    }
    printf("\n");

    return 0;
}
