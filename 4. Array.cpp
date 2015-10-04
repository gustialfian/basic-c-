#include <stdio.h>

int main(){

    // array dari char
    char kata[7] = {'i', 'n', 'i', 'K', 'a', 't', 'a'};
    for(int i=0; i<7; i++){
        printf("%c", kata[i]);
    }
    printf ("\n");

    // inputan kata
    char kata1[7];
    printf("Masukan kata :");
    gets(kata1);
    printf ("kata yang dimasukan :");
    puts(kata1);

    return 0;
}
