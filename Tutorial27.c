#include <stdio.h>
int main()
{
    //int a=34;
    //int* ptra=&a;
    //printf("%d\n",ptra);
    //printf("%d\n",ptra+1);
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    int* arrptra=arr;
    printf("The value at position 3 of the array is %d \n", arr[3]);
    printf("The address of first Element of the array is %d \n", &arr[0]);
    printf("The address of first Element of the array is %d \n", arr);
    printf("The address of second Element of the arrau is %d \n", &arr[1]);
    printf("The address of second Element of the array is %d \n", arr + 1);
    //arr++; this lines will throw an error
    arrptra++;// this line will not throw an error because this is a pointer
    printf("The value at position 3 of the array is %d \n", arr[3]);
    printf("The value at address of first Element of the array is %d \n", *(&arr[0]));
    printf("The value at address of first Element of the array is %d \n", *(arr));
    printf("The value at address of second Element of the array is %d \n", *(arr + 1));
    printf("The value at address of second Element of the arrau is %d \n", *(&arr[1]));

    return 0;
}