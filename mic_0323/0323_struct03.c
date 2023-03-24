#include <stdio.h>
typedef enum subject_code
{
    LINUX = 3,
    MICRO = 5,
    PROJECT = 8
} Code;

int main(void)
{
    Code emb;
    scanf("%d", (int*)&emb);
    // emb = LINUX;
    switch (emb)
    {
    case 3:
        printf("LINUX\n");
        break;
    case 5:
        printf("MICRO\n");
        break;
    case 8:
        printf("PROJECT\n");
        break;
    default:
        printf("재입력");
        break;
    }
    return 0;
}