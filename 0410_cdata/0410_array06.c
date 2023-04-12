#include <stdio.h>

int main(void){
    char str[] = "coding";
    for(int i=0; i<sizeof(str); i++){
        printf("%c\n", str[i]);
    }
    return 0;
}