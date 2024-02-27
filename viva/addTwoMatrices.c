/* WAP in C to add two matrices. */
#include <stdio.h>

int main()
{
    int m, n, i, j, a[10][10], b[10][10], sum[10][10];

    printf("\nEnter number of rows and columns: ");
    scanf("%d%d", &m, &n);

    printf("\nENTER MATRIX A:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("\nENTER MATRIX B:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &b[i][j]);

    printf("\nMATRIX A+B:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }

        printf("\n");
    }

    return 0;
}
