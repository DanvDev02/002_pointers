#include "pointers.h"
int main(void)
{
  int colleccion[5] = {25,58,25,15,8};

  bubble_sort(colleccion,5);
  insertion_sort(colleccion,5);
  reverse(colleccion,5);
  calulate_frequency(colleccion,5,25);

  return 0;
}
