//created by Fajri Alhidra Fahlevi 23343062

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Stack {
    char data[MAX_SIZE];
    int top;
};

void initStack(struct Stack *s) {
    s->top = -1;
}

int isFull(struct Stack *s) {
    return s->top == MAX_SIZE - 1;
}

int isEmpty(struct Stack *s) {
    return s->top == -1;
}

void push(struct Stack *s, char item) {
    if (isFull(s)) {
        printf("Stack penuh, tidak bisa menambah data.\n");
        return;
    }
    s->top++;
    s->data[s->top] = item;
}

char pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack kosong, tidak bisa mengambil data.\n");
        return '\0';
    }
    char temp = s->data[s->top];
    s->top--;
    return temp;
}

void reverseString(char *str) {
    int length = strlen(str);
    struct Stack charStack;
    initStack(&charStack);

    for (int i = 0; i < length; i++) {
        push(&charStack, str[i]);
    }

    for (int i = 0; i < length; i++) {
        str[i] = pop(&charStack);
    }
}

int main() {
    int choice;
    char kata[MAX_SIZE];

    do {
        printf("\nMenu:\n");
        printf("1. Input Kata\n");
        printf("2. Balik Kata\n");
        printf("3. Exit\n");
        printf("Pilihan Anda: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Masukkan kata: ");
                scanf("%s", kata);
                break;
            case 2:
                reverseString(kata);
                printf("Kata setelah dibalik: %s\n", kata);
                break;
            case 3:
                printf("Program selesai. Terima kasih.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan masukkan pilihan yang benar.\n");
        }
    } while (choice != 3);

    return 0;
}

