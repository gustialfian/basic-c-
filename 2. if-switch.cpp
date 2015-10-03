#include <stdio.h>

int main () {
    int x = 10;
    int y = 11;
    int z = 9;
    int pil = 1;

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
    printf("kurang dari samadengan \t:");
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
    if (x<y && 10>z){
        printf("true");
    }else{
        printf("false");
    }
    printf("\n");

    printf("operaton OR \t:");
    if (x<y || 10<z){
        printf("true");
    }else{
        printf("false");
    }
    printf("\n");

    // nested if
    printf("Nested if :");
    if(x<y){
        printf("Level 1\n");
        if(x>z){
            printf("Level 2\n");
            printf("benar\n");
        }
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
