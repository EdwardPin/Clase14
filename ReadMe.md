# Listados enlazados


## Primer Ejercicio

En el primer archivo de `ejercicio.c`
Se realizo un codigo que imprime cada uno de las letras del abecedario

# Como ejecutar

1. Puedes realizar un fork del archivo para poder obtener tu propia version personal que puedes modificar
2. En el terminal de comandos se debe ejecutar el siguiente comando para compilar y ejecutar

```bash
#Para compilar el archivo
gcc ejercicio.c -o ejercicio

#Para ejecutar el archivo
./ejercicio
```

# Estructura

1. Primero se creo el struct que contiene el caracter.
2. Luego se creo el nodo que hace la reserva de memoria (memory allocation `malloc`)
3. Despues se definio la funcion `printlist` el cual imprime cada uno de los caracters de la lista enlazada.
4. La funcion de `freelist` libera la memoria ocupada por cada uno de los cartacteres.
5. Cuando se realiza el main, el bucle pasa por cada uno de los caracteres generados.
6. Al final se realiza el llamado a la funcion `printlist` y `freelist` 

## Resultados

```bash
./ejercicio
a -> b -> c -> d -> e -> f -> g -> h -> i -> j -> k -> l -> m -> n -> o -> p -> q -> r -> s -> t -> u -> v -> w -> x -> y -> z -> NULL
```

El programa solo esta limitado a las letras del alfabeto en minuscula

---

## Segundo Ejercicio

En el segundo archivo llamado `ejercicio2.c`
Se realizo un codigo que permite que el usuario ingrese enteros
Y luego muestre el listado de numeros ingresados

# Como ejecutar?

1. Puedes realizar un fork del archivo para poder obtener tu propia version personal que puedes modificar
2. En el terminal de comandos se debe ejecutar el siguiente comando para compilar y ejecutar

```bash
#Para compilar el archivo
gcc ejercicio2.c -o ejercicio2

#Para ejecutar el archivo
./ejercicio2
```

# Estructura

1. Primero se creo el struct que contiene la estructura principal.
2. Luego se creo el nodo que hace la reserva de memoria (memory allocation `malloc`)
3. Despues se definio la funcion `printlist` el cual imprime cada uno de los enteros de la lista enlazada.
   Este contiene tambien un check en caso que el usuario no haya ingresado ningun numero
4. La funcion de `freelist` libera la memoria ocupada por cada uno de los enteros.
5. Cuando se realiza el main, el bucle pasa por cada uno de los enteros ingresados.
   Como el usuario es quien ingresa el primer dato "head", se debe realizar la especificacion
   Tambien se debe realizar la especificacion que si el dato ingresado no es un entero, terminar el proceso
6. Al final se realiza el llamado a la funcion `printlist` y `freelist` 

## Resultados

```bash
./ejercicio2
Introduce un número entero (o un valor no numérico para salir): 5
Introduce un número entero (o un valor no numérico para salir): 16
Introduce un número entero (o un valor no numérico para salir): 20
Introduce un número entero (o un valor no numérico para salir): 1
Introduce un número entero (o un valor no numérico para salir): 35
Introduce un número entero (o un valor no numérico para salir): 20
Introduce un número entero (o un valor no numérico para salir): 46
Introduce un número entero (o un valor no numérico para salir): a
Números ingresados:
5 -> 16 -> 20 -> 1 -> 35 -> 20 -> 46 -> NULL
```

El programa permite tantos datos ingresados como el usuario desee
