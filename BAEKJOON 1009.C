#include <stdio.h>
main()
{
    int T, a, b;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d", &a, &b);
        int com_num = 1;
        for (int j = 0; j < b; j++)
        {
            com_num *= a; 
            com_num %= 10;
        }
        if (com_num == 0) printf("10\n");
        else printf("%d\n", com_num);
    }
}
