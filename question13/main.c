#include <stdio.h>

int main()
{
    int i, j, space, rows, k, t=1;
    printf("Input number of rows : ");
    scanf("%d", &rows);
    space = rows+4-1;
    for(i=1;i<=rows;i++)
    {
        for(k=space;k>=1;k--)
        {
        printf(" ");
        }

    for(j=1;j<=i;j++)
    {
        printf("* ",t++);
    }
    printf("\n");
    space--;
    }
}
