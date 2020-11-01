#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    array[0] = 100;
}
void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
         //or we can also print like this printf("The value at %d is %d\n",i, *(ptr+i));
        printf("The value at %d is %d\n",i, *(ptr+i));// or we can also print like this printf("The value at %d is %d \n",i,arr[i]);
    }
    ptr[2] = 100;//we can also change value like this *(ptr+2)=100;
    *(ptr+2)=101;
}
int main()
{
    int arr[] = {23, 13, 3, 4};
    //printf("The v//alue at index 0 is %d \n",arr[0]);
    //func1(arr);
    //printf("The value at index 0 is %d \n",arr[0]);
    func2(arr);
    func2(arr);
    return 0;
}