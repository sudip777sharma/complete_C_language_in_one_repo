#include <stdio.h>
void main()
{
    float s = 0;
    float a[4][4] = {{1, 2, 3, 7}, {4, 5, 6, 6}, {7, 8, 1, 5}, {1, 2, 3, 4}};
    float b[4][4] = {{1, 2, 3, 7}, {4, 5, 6, 6}, {7, 8, 1, 5}, {1, 2, 3, 4}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%5.1f  ", a[i][j]);
        }
        printf("\n");
    }
    printf("___________________________________________________________________________________\n");
    printf("\n");
    s = 0;
    int N = 4, n = 0, m = 1, c1 = 1, c2 = 0;

    for (int k = 1; k <= 2 * (N - 1); k++)
    {

        for (int i = c1; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                b[i][j] = (a[i][j] - ((a[m][n]) * ((a[c2][j]) / (a[c1 - 1][c2]))));
            }
            m = m + 1;
        }
        printf("\n");
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                printf(" %5.1f ", b[i][j]);
                a[i][j] = b[i][j];
            }
            printf("\n");
        }

        printf("...................................................................................\n");
        n = n + 1;
        m = n + 1;
        c1 = c1 + 1;
        c2 = c2 + 1;
    }
    printf("___________________________________________________________________________________\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%5.1f  ", a[i][j]);
        }
        printf("\n");
    }
    printf("___________________________________________________________________________________\n");
    printf("\n");
}
