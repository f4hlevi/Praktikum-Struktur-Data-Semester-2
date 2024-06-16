//created by Fajri Alhidra Fahlevi 23343062

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Mahasiswa {
    char nim[15];
    char nama[50];
    float nilai;
};

struct Stack {
    struct Mahasiswa data[MAX_SIZE];
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

void push(struct Stack *s, struct Mahasiswa mhs) {
    if (isFull(s)) {
        printf("Stack penuh, tidak bisa menambah data.\n");
        return;
    }
    s->top++;
    s->data[s->top] = mhs;
    printf("Data mahasiswa berhasil ditambahkan ke dalam stack.\n");
}

struct Mahasiswa pop(struct Stack *s) {
    struct Mahasiswa temp;
    if (isEmpty(s)) {
        printf("Stack kosong, tidak bisa mengambil data.\n");
        strcpy(temp.nim, "");
        strcpy(temp.nama, "");
        temp.nilai = 0;
        return temp;
    }
    temp = s->data[s->top];
    s->top--;
    return temp;
}

void display(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack kosong, tidak ada data untuk ditampilkan.\n");
        return;
    }
    printf("Data mahasiswa dalam stack:\n");
    for (int i = s->top; i >= 0; i--) {
        printf("NIM: %s, Nama: %s, Nilai: %.2f\n", s->data[i].nim, s->data[i].nama, s->data[i].nilai);
    }
}

void sortByNIM(struct Stack *s) {
    struct Stack tempStack;
    initStack(&tempStack);

    while (!isEmpty(s)) {
        struct Mahasiswa temp = pop(s);

        while (!isEmpty(&tempStack) && strcmp(temp.nim, tempStack.data[tempStack.top].nim) < 0) {
            push(s, pop(&tempStack));
        }
        push(&tempStack, temp);
    }

    while (!isEmpty(&tempStack)) {
        push(s, pop(&tempStack));
    }
}

int main() {
    struct Stack mahasiswaStack;
    initStack(&mahasiswaStack);
    int choice;
    struct Mahasiswa mhs;

    do {
        printf("\nMenu:\n");
        printf("1. Tambah data mahasiswa\n");
        printf("2. Hapus data mahasiswa teratas\n");
        printf("3. Tampilkan data mahasiswa\n");
        printf("4. Urutkan data mahasiswa berdasarkan NIM\n");
        printf("5. Keluar\n");
        printf("Pilihan Anda: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Masukkan NIM mahasiswa: ");
                scanf("%s", mhs.nim);
                printf("Masukkan nama mahasiswa: ");
                scanf("%s", mhs.nama);
                printf("Masukkan nilai mahasiswa: ");
                scanf("%f", &mhs.nilai);
                push(&mahasiswaStack, mhs);
                break;
            case 2:
                pop(&mahasiswaStack);
                printf("Data mahasiswa teratas telah dihapus.\n");
                break;
            case 3:
                display(&mahasiswaStack);
                break;
            case 4:
                sortByNIM(&mahasiswaStack);
                printf("Data mahasiswa telah diurutkan berdasarkan NIM.\n");
                break;
            case 5:
                printf("Program selesai. Terima kasih.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan masukkan pilihan yang benar.\n");
        }
    } while (choice != 5);

    return 0;
}

