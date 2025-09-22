class Node:
    def __init__(self, data):
        self.data = data  # El dato que guarda el nodo
        self.next = None  # El siguiente nodo (inicialmente None)

# Función para imprimir la lista enlazada
def print_list(head):
    current = head
    while current:
        print(f"{current.data} -> ", end="")
        current = current.next
    print("NULL")

# Función para crear una lista de nodos
def create_linked_list(n):
    head = None
    current = None

    # Crear los nodos y enlazarlos
    for i in range(n+1):  # Para crear los nodos con números de 0 a n
        new_node = Node(i)
        if head is None:
            head = new_node  # Si es el primer nodo, asignarlo como cabeza
        else:
            current.next = new_node  # Enlazar el nodo actual al nuevo nodo
        current = new_node  # Mover el puntero current al último nodo creado
    
    return head

# Main
if __name__ == "__main__":
    # Crear la lista con nodos de 0 a 1000
    head = create_linked_list(1000)
    
    # Imprimir la lista
    print_list(head)
