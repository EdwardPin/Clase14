#include <stdio.h> //Es input output
#include <stdlib.h>

// Plantilla
struct Node{
    int data; //4 bytes, Almacena un dato interno
    struct Node* next;
    // Se esta llamando a si mismo como puntero
    // Esta llamando el punto a la siguiente estructura
    // Next es el puntero a la siguiente estructura
};

// Funcion que va a retornar un struct
//malloc = Memory ALLOCation
// Estructura que crea estrucutras


struct Node* createNode(int data){
    // Se reserva la memoria, en newNode se guarda en la memoria
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    if (newNode == NULL){
        printf("Error: Memoria no reservada");
        exist(1);

        //exist es para acabar el programa si no hay memoria suficiente
    }

    newNode -> data = data;
    newNode -> next = NULL;
    // dentro de esta estructura veale el valor de tada y asignelo a data
    return newNode;
}

//Esta funcion va a recibir el primer nodo, HEAD
//Como ese primer nodo tiene algo llamado next
//Cuando se vinculan los otros nodos, uno va imrpimendo al otro y asi en cadena
//Variable local
//mientras ese valor temp sea diferente a Nullo
//print cada dato, y luego hace el siguiente paso

void printlist(struct Node* head){
    struct Node* temp = head;
    while (temp =! NULL){
        printf("%d ->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    //Salto de linea \n
}

//Todo programa necesita un main 

//Se crea un struct con el numero en parentesis
//Los cuatro son separados, no tienen relacion uno con otro

int main(){
    struct Node* head = createNode(10);
    struct Node* first = createNode(11);
    struct Node* second = createNode(12);
    struct Node* third = createNode(13);

    // Primer estruct head en la posicion next apunte a first
    // la posicion next es un puntero

    head -> next = first;
    first -> next = second;
    second -> next = third;

}