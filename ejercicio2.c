#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Numeros flotantes aleatorios
struct Node {
    float data;
    struct Node* next;
};

// Crear un nodo con un float
struct Node* createNode(float data) {
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
        printf("%.2f -> ", temp->data);
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

    srand(time(NULL)); // Inicializar la semilla para números aleatorios

    int n = 10; // Número de nodos que quieres crear

    for (int i = 0; i < n; i++) {
        float randomFloat = ((float) rand() / RAND_MAX) * 100.0f; // Generar float entre 0 y 100
        struct Node* newNode = createNode(randomFloat);

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
