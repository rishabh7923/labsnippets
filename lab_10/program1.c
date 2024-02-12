// WAP in C to multiply two matrices.
#include <stdio.h>

int main()
{
    int m, n, p, q, i, j, k;
    int a[10][10], b[10][10], result[10][10];

    printf("Enter the order of first matrix (mxn): ");
    scanf("%d%*c%d", &m, &n);

    printf("Enter the order of second matrix (pxq): ");
    scanf("%d%*c%d", &p, &q);

    if (n != p)
        return printf("\nMatrix is incompatible for multiplication\n"), -1;

    printf("\nEnter the elements of Matrix-A:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("\nEnter the elements of Matrix-B:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
        {
            result[i][j] = 0;

            for (k = 0; k < p; k++)
                result[i][j] += a[i][k] * b[k][j];
        }

    printf("\nProduct of the both matrices is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%d\t", result[i][j]);
        printf("\n");
    }

    return 0;
}
