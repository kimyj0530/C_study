#include <stdio.h>

int main(void){
    float arr_f[10] = {1.0f, 2.0f, 3.0f};
    for(int i=0; i<10; i++){
        printf("%.2f\n", arr_f[i]);
    }
    return 0;
}