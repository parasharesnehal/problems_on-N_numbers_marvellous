//problem on N numbers


#include <stdio.h>

void Display(int *ptr, int iSize)
{
    int i = 0;
    //      1          2          3
    for(i = 1; i < iSize; i++)
    {
        printf("%d\n", *ptr);
    // 4
    }
}

int main()
{
    int Arr[5] = {10,20,30,40,50}; //static memory allocation 

    Display(Arr, 5); //Display(100, 5)
    return 0;
}