//created by Fajri Alhidra Fahlevi 23343062

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int atas;
    unsigned kapasitas;
    int* array;
};

struct Stack* buatStack(unsigned kapasitas) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->kapasitas = kapasitas;
    stack->atas = -1;
    stack->array = (int*)malloc(stack->kapasitas * sizeof(int));
    return stack;
}

int isFull(struct Stack* stack) {
    return stack->atas == stack->kapasitas - 1;
}

int isEmpty(struct Stack* stack) {
    return stack->atas == -1;
}

void push(struct Stack* stack, int item) {
    if (isFull(stack)) {
        printf("Stack penuh. Penambahan gagal.\n");
        return;
    }
    stack->array[++stack->atas] = item;
    printf("%d ditambahkan ke stack\n", item);
}

int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack kosong. Penghapusan gagal.\n");
        return INT_MIN;
    }
    return stack->array[stack->atas--];
}

int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack kosong. Tidak ada elemen untuk dilihat.\n");
        return INT_MIN;
    }
    return stack->array[stack->atas];
}

int main() {
    struct Stack* stack = buatStack(100);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    printf("%d dihapus dari stack\n", pop(stack));
    return 0;
}

