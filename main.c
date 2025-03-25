#include <stdio.h>
#include "stack.h"
#include "linkedlist.H"

int main() {
    int decimalNumber;
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &decimalNumber);
    if (decimalNumber < 0) { 
        printf("Masukkan bilangan desimal positif.\n");
    } else {
        printf("Bilangan biner: ");
        decimalToBinary(decimalNumber);
    }
}
