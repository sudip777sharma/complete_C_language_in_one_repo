#include <stdio.h>
void main()
{
    float s = 0;
    float a[4][4] = {{1, 2, 3, 7}, {4, 5, 6, 6}, {7, 8, 1, 5}, {1, 2, 3, 4}};
    float b[4][4] = {{1, 2, 3, 7}, {4, 5, 6, 6}, {7, 8, 1, 5}, {1, 2, 3, 4}};
    float c[4][4] = {{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
    float d[4][4] = {{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
    printf("\n\nThe Inverse of the Matrix is:\n\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %8.0f  ", a[i][j]);
        }
        printf(" | ");
        for (int j = 0; j < 4; j++)
        {
            printf(" %8.0f  ", c[i][j]);
        }
        printf("\n");
    }
    printf("___________________________________________________________________________________\n");
    printf("\n");
    s = 0;
    int N = 4, n = 0, m = 1, c1 = 1, c2 = 0;
    int count1 = 0, count2 = 0;
    for (int k = 1; k <= 2 * (N - 1); k++)
    {
        if (k == N)
        {
            printf("___________________________________________________________________________________\n");
            printf("   180 degree rotated matrix is   \n\n");
            n = 0, m = 1, c1 = 1, c2 = 0;
            for (int i = N - 1; i >= 0; i--)
            {
                count2 = 0;
                for (int j = N - 1; j >= 0; j--)
                {
                    b[count1][count2] = a[i][j];
                    d[count1][count2] = c[i][j];
                    count2++;
                }
                count1++;
            }
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    a[i][j] = b[i][j];
                    c[i][j] = d[i][j];
                }
            }

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    printf(" %10.2f ", a[i][j]);
                }
                for (int j = 0; j < N; j++)
                {
                    printf(" %10.2f ", c[i][j]);
                }
                printf("\n");
            }
            printf("\n___________________________________________________________________________________\n");

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    printf(" %10.2f ", b[i][j]);
                }
                for (int j = 0; j < N; j++)
                {
                    printf(" %10.2f ", d[i][j]);
                }
                printf("\n");
            }
            printf("\n___________________________________________________________________________________\n");
        }
        for (int i = c1; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                b[i][j] = (a[i][j] - ((a[m][n]) * ((a[c2][j]) / (a[c1 - 1][c2]))));
                d[i][j] = (c[i][j] - ((a[m][n]) * ((c[c2][j]) / (a[c1 - 1][c2]))));
            }
            m = m + 1;
        }
        printf("\n");
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                printf(" %10.2f ", b[i][j]);
                a[i][j] = b[i][j];
                c[i][j] = d[i][j];
            }
            printf("  |");
            for (int j = 0; j < N; j++)
            {
                printf(" %10.2f ", d[i][j]);
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
    count1 = 0, count2 = 0;
    for (int i = N - 1; i >= 0; i--)
    {
        count2 = 0;
        for (int j = N - 1; j >= 0; j--)
        {
            b[count1][count2] = a[i][j];
            d[count1][count2] = c[i][j];
            count2++;
        }
        count1++;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            a[i][j] = b[i][j];
            c[i][j] = d[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf(" %5.2f ", a[i][j]);
        }
        printf(" | ");
        for (int j = 0; j < N; j++)
        {
            printf(" %5.2f ", c[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            c[i][j] = c[i][j] / a[i][i];
            if (i != j)
                a[i][j] = a[i][j] / a[i][i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        a[i][i]=1;
    }
    printf("\n___________________________________________________________________________________\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf(" %5.1f ", a[i][j]);
        }
        printf(" | ");
        for (int j = 0; j < N; j++)
        {
            printf(" %5.2f ", c[i][j]);
        }
        printf("\n");
    }
    printf("\n___________________________________________________________________________________\n");
}
