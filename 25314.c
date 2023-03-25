#include <stdio.h>

int main(void){
    int a, b, i;
    scanf("%d", &a);
    b = a / 4;
    for(i=0; i<b; i++){
        printf("long ");
    }
    printf("int");
    return 0;
}
