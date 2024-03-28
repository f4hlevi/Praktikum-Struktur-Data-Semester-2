//created by Fajri Alhidra Fahlevi 23343962

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char no_plat[20];
    char merk_mobil[50];
    char nama_pemilik[50];
} Mobil;

typedef struct Node {
    Mobil data;
    struct Node* prev;
    struct Node* next;
} Node;

Node* buatSimpul(Mobil data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void tambahAwal(Node** head, Mobil data) {
    Node* newNode = buatSimpul(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    (*head)->prev = newNode;
    newNode->next = *head;
    *head = newNode;
}

void tambahAkhir(Node** head, Mobil data) {
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

void cetakAntrian(Node* head) {
    printf("Antrian Parkir:\n");
    while (head != NULL) {
        printf("No. Plat: %s, Merk Mobil: %s, Nama Pemilik: %s\n", head->data.no_plat, head->data.merk_mobil, head->data.nama_pemilik);
        head = head->next;
    }
}

void hapusSimpul(Node** head, char* no_plat) {
    Node* current = *head;
    Node* temp = NULL;

    if (current != NULL && strcmp(current->data.no_plat, no_plat) == 0) {
        *head = current->next;
        free(current);
        return;
    }

    while (current != NULL && strcmp(current->data.no_plat, no_plat) != 0) {
        temp = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Mobil dengan nomor plat '%s' tidak ditemukan.\n", no_plat);
        return;
    }

    temp->next = current->next;
    if (current->next != NULL) {
        current->next->prev = temp;
    }
    free(current);
}

void bersihkanAntrian(Node** head) {
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

    tambahAwal(&head, (Mobil){"B 1234 AB", "Toyota Avanza", "Andi"});
    tambahAwal(&head, (Mobil){"B 5678 CD", "Honda Jazz", "Budi"});
    tambahAkhir(&head, (Mobil){"B 91011 EF", "Suzuki Ertiga", "Cindy"});

    cetakAntrian(head);

    hapusSimpul(&head, "B 1234 AB");

    cetakAntrian(head);

    bersihkanAntrian(&head);

    return 0;
}

