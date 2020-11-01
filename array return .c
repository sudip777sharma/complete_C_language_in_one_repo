#include<stdio.h>
float* copyarr(float *a,float *b)
{
    a[1][1]=10;
    b[1][1]=a[1][1]=10;
    return b;
}

void main()
{
    float a[4][4] = {{1, 2, 3, 7}, {4, 5, 6, 6}, {7, 8, 1, 5}, {1, 2, 3, 4}};
    float b[4][4] = {{1, 2, 3, 7}, {4, 5, 6, 6}, {7, 8, 1, 5}, {1, 2, 3, 4}};
    float* ptr=copyarr(a,b);
    printf("b[1][1]=%f",ptr[1][1]);
}