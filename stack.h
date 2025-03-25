#ifndef STACK_H
#define STACK_H

#include "linkedlist.h"  // Menggunakan ADT dari BodyNRSL

typedef List Stack;  // Stack direpresentasikan sebagai List

void CreateEmpty(Stack *S);
int IsEmpty(Stack S);
void Push(Stack *S, infotype X);
void Pop(Stack *S, infotype *X);
void decimalToBinary(int n);

#endif