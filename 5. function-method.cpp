#include <stdio.h>

int varGlobal = 1;

void fungsiPrototype();
int perkalian(int a, int b)
{
    return (a*b);
}

int main(){
    int varLokal;
    // call function
    fungsiPrototype();
    printf("\n");
    varLokal = perkalian(2,2);
    printf("fungsi perkalian %i\n", varLokal);
    printf("fungsi perkalian %i\n", perkalian(4,2));

    return 0;
}

void fungsiPrototype(){
    printf("ini funsgi prototype %i", varGlobal);
}
