#include <stdio.h>
#include <boolean.H>
#include "stack.h"

void CreateEmpty(Stack *S) {
    CreateList(S);  // Gunakan CreateList dari linkedlist
}

boolean IsEmpty(Stack S) {
    return ListEmpty(S);
}

void Push(Stack *S, infotype X) {
    InsVFirst(S, X);  // Gunakan InsVFirst dari linkedlist untuk stack (LIFO)
}

void Pop(Stack *S, infotype *X) {
    DelVFirst(S, X);  // Gunakan DelVFirst dari linkedlist untuk stack (LIFO)
}

void decimalToBinary(decimalNumber) {
    Stack stack;
    CreateEmpty(&stack);  // Inisialisasi stack berbasis linked list dari linkedlist

    if (decimalNumber == 0) {
        printf("0\n");
        return;
    }

    while (decimalNumber > 0) {
        Push(&stack, decimalNumber % 2);  // Push hasil modulus ke stack
        decimalNumber /= 2;
    }

    while (!IsEmpty(stack)) {
        int bit;
        Pop(&stack, &bit);  // Pop elemen dari stack untuk mendapatkan hasil akhir
        printf("%d", bit);
    }
    printf("\n");
}