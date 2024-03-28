//created by Fajri Alhidra Fahlevi 23343062

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char judul[100];
    char pengarang[100];
    int tahun;
} Buku;

typedef struct Node {
    Buku data;
    struct Node* prev;
    struct Node* next;
} Node;

Node* buatSimpul(Buku data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void tambahAwal(Node** head, Buku data) {
    Node* newNode = buatSimpul(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    (*head)->prev = newNode;
    newNode->next = *head;
    *head = newNode;
}

void tambahAkhir(Node** head, Buku data) {
    Node* newNode = buatSimpul(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    newNode->prev = current;
}

void cetakLinkedList(Node* head) {
    printf("Isi Linked List:\n");
    while (head != NULL) {
        printf("Judul: %s, Pengarang: %s, Tahun: %d\n", head->data.judul, head->data.pengarang, head->data.tahun);
        head = head->next;
    }
}

void hapusSimpul(Node** head, char* judul) {
    Node* current = *head;
    Node* temp = NULL;

    if (current != NULL && strcmp(current->data.judul, judul) == 0) {
        *head = current->next;
        free(current);
        return;
    }

    while (current != NULL && strcmp(current->data.judul, judul) != 0) {
        temp = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Buku dengan judul '%s' tidak ditemukan.\n", judul);
        return;
    }

    temp->next = current->next;
    if (current->next != NULL) {
        current->next->prev = temp;
    }
    free(current);
}

void bersihkanLinkedList(Node** head) {
    Node* current = *head;
    Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *head = NULL;
}

int main() {
    Node* head = NULL;

    tambahAwal(&head, (Buku){"Harry Potter", "J.K. Rowling", 1997});
    tambahAwal(&head, (Buku){"Lord of the Rings", "J.R.R. Tolkien", 1954});
    tambahAkhir(&head, (Buku){"To Kill a Mockingbird", "Harper Lee", 1960});

    cetakLinkedList(head);

    hapusSimpul(&head, "Harry Potter");

    cetakLinkedList(head);

    bersihkanLinkedList(&head);

    return 0;
}

