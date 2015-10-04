#include <stdio.h>
#include <string.h>
#include <conio.h>

int main () {

    // tipe data karakter
    char karakter = 'a';
    printf ("ini karakter :%c", karakter);
    printf ("\n");

    // tipe data bilangan bulat
    int bilBulat = 10;
    printf ("ini bilangan bulat :%i", bilBulat);
    printf ("\n");

    // inputan char
    printf("getchar :");
    char a = getchar();
    putchar(a);
    printf ("\n");

    // inputan char
    printf("getche :");
    char b = getche();
    printf ("\n");
    putchar(b);
    printf ("\n");

    // inputan angka
    int x;
    printf("scanf :");
    scanf("%i", &x);
    printf("ini kata yg angka :%i", x);
    printf ("\n");



    return 0;
}
