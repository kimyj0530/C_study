/* DYNAMIC_MEMORY_ALLOCATION */

#include <stdio.h>
#include <stdlib.h>

// void* malloc(size_t size_of_memory);
void allocation_malloc(void) {
  int* ptr = malloc(1 * sizeof(*ptr));
  printf(" ADDRESS: %p | VALUE: %d\n ", ptr, (*ptr));
  (*ptr) = 100;
  printf(" ADDRESS: %p | VALUE: %d\n ", ptr, (*ptr));
  free(ptr);
  return;
}

// void* calloc(size_t number_of_objects, size_t size_of_object);
void allocation_calloc(void) {
  int* ptr = calloc(1, sizeof(*ptr);
  printf(" ADDRESS: %p | VALUE: %d\n ", ptr, (*ptr));
  (*ptr) = 100;
  printf(" ADDRESS: %p | VALUE: %d\n ", ptr, (*ptr));
  free(ptr);
  return;
}
                    
int main(void){
  allocation_malloc();
  allocation_calloc();
  return (EXIT_SUCCESS);
}
