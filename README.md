## 002-pointers

int bubble_sort(int *target, int count);
void insertion_sort(int *target, int count);
void reverse(int *target, int count);
int calulate_frequency(int *target, int count, int number);

Description
---
Implement `lib/pointers` such that:

`bubble_sort()` receives an `int*` named `collection` and the number of elements in `collection` named `count`
> it: sorts `collection` such that `t0` <= `t1` <= ... `tn` and returns the number of `swap` operations that were required.

> it: uses the bubble sort algorithm.

`insertion_sort()` receives an `int*` named `collection` and the number of elements in `collection` named `count`
> it: sorts `collection` such that `t0` <= `t1` <= ... `tn` and returns nothing.

> it: uses the insertion sort algorithm.

`reverse()` receives an `int*` named `collection` and the number of elements in `collection` named `count`.
> it: reverses the elements in `collection` such that the last element (`count-1`) is now the first element.
> the penultimate element is now the second element and so on.
> `i.e` if target is 4,7,8,9 . target must be mutated to 9,8,7,4.

`calculate_frequency()` receives an `int*` named `collection`, the number of elements in `collection` named `count`, and an `int` named `target`.
> it: calculates the frequency of `target` within `collection` and returns it.

Descripción
---
Implementa las funciones de `lib/pointers` tal que:

`bubble_sort()` recibe de argumento un `int*` llamado `collection` y el número de elementos en `collection` llamado `count`
> ella: ordena `collection` tal que `t0` <= `t1` <= ... `tn` y regresa el número de intercambios que fueron necesarios.
> ella: usa el algoritmo de ordenamiento burbuja.

`insertion_sort()` recibe de argumento un `int*` llamado `collection` y el número de elementos en `collection` llamado `count`
> ella: ordena `collection` tal que `t0` <= `t1` <= ... `tn` y regresa el número de intercambios que fueron necesarios.
> ella: usa el algoritmo de ordenamiento por inserción.

`reverse()` recibe de argumento un `int*` llamado `collection` y el número de elementos en `collection` llamado `count`
> ella: invierte los elementos de `collection` tal que el ultimo elemento (`count-1`) es ahora el primer elemento.
> el penultimo elemento es ahora el segundo y asi sucesivamente.

`calculate_frequency()` recibe de argumento un `int*` llamado `collection`, el número de elementos en `collection` llamado `count` y un `int` llamado `target`.
> ella: calcula la frecuencia de `target` en `collection` y la retorna.

Notes
---
No se permite usar notación de parentesis, tendrán que usar aritmética de apuntadores.