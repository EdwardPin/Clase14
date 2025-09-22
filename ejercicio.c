#include <stdio.h>
#include <stdlib.h>
//listas del abecedario
struct Node {
    char data;
    struct Node* next;
};

// Crear un nodo con un caracter
struct Node* createNode(char data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Error: Memoria no reservada\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Imprimir la lista enlazada
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%c -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Liberar memoria de la lista enlazada
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Node* head = NULL;
    struct Node* current = NULL;

    // Crear nodos con letras del abecedario de 'a' a 'z'
    for (char c = 'a'; c <= 'z'; c++) {
        struct Node* newNode = createNode(c);

        if (head == NULL) {
            head = newNode;
        } else {
            current->next = newNode;
        }
        current = newNode;
    }

    // Imprimir la lista
printList(head);

    // Liberar memoria
    freeList(head);

    return 0;
}
