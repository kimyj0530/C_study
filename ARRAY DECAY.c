/* EXAMPLE : ARRAY DECAY */ 
#include <stdio.h>
#include <stdlib.h>
 
void print_array_size(int array[5], int size){
    printf("DECAYED ARRAY'S SIZE : %lld\n", sizeof(array));
}
 
int main(void){
    int array[5] = {0};
    printf("CODE                  : int array[5] = {0};\n");
    printf("ORIGINAL ARRAY'S SIZE : %lld\n", sizeof(array));
 
    print_array_size(array);
 
    return (EXIT_SUCCESS);
}
