#include <stdio.h>
#include <stdlib.h>

// Estructura para almacenar cada número
struct Node {
    int data;
    struct Node* next;
};

// Función para crear un nodo con un número
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Error: Memoria no reservada\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Función para imprimir todos los números de la lista
void printList(struct Node* head) {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("No hay números ingresados.\n");
        return;
    }
    printf("Números ingresados:\n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Función para liberar memoria de la lista
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
    int input;

    while (1) {
        printf("Introduce un número entero (o un caracter para terminar de ingresar): ");
        if (scanf("%d", &input) != 1) {
            // Si no se ingresa un número, salir del ciclo
            break;
        }

        // Crear un nuevo nodo con el número ingresado
        struct Node* newNode = createNode(input);

        // Si es el primer nodo, asignar a head
        if (head == NULL) {
            head = newNode;
        } else {
            current->next = newNode;
        }
        current = newNode;
    }

    // Mostrar la lista de números ingresados
    printList(head);

    // Liberar memoria de la lista
    freeList(head);

    return 0;
}
