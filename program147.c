//problem statement:- wap to accept n numbers from user and display in reverse 

#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[], int iSize)
{
    int i = 0;
    printf("The elements in reverse order are\n");
    for(i = iSize - 1; i >= 0; i--)
    {
        printf("%d\n", Arr[i]);
    }
}

int main()
{
        int iCount = 0;
        int *Brr = NULL;

        printf("Enter the number of elements\n"); //step 1
        scanf("%d", &iCount);

        Brr = (int *)malloc(iCount * sizeof(int));//step 2

        printf("Enter the elements\n"); //step 3
        for(int i = 0; i < iCount; i++)
        {
            scanf("%d", &Brr[i]);
        }

        Display(Brr, iCount);//step 4
        
        free(Brr);//step 5

    return 0;
}

