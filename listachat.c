#include <stdio.h>
#include <stdlib.h>

// Estructura del nodo
struct Node {
    int data; 
    struct Node* next; // Puntero al siguiente nodo
};

// Función para crear un nodo
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));  // Se reserva memoria
    if (newNode == NULL) {
        printf("Error: Memoria no reservada\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL; // Inicialmente el siguiente es NULL
    return newNode;
}

// Función para imprimir la lista
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data); // Imprime el dato de cada nodo
        temp = temp->next; // Avanza al siguiente nodo
    }
    printf("NULL\n"); // Fin de la lista
}

// Función principal
int main() {
    struct Node* head = NULL;
    struct Node* current = NULL;

    // Crear 1000 nodos
    for (int i = 0; i <= 1000; i++) {
        struct Node* newNode = createNode(i); // Crear nodo con el número i

        if (head == NULL) {
            head = newNode; // Si es el primer nodo, asignarlo a head
        } else {
            current->next = newNode; // Enlazar el nodo actual con el siguiente
        }
        
        current = newNode; // Mover el puntero actual al último nodo creado
    }

    // Imprimir la lista (si es muy grande, puede tardar)
    printList(head);

    // Liberar memoria
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp); // Liberar el nodo actual
    }

    return 0;
}
