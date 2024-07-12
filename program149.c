//problem statement:- wap to accept n numbers from user and reverse the array 

#include<stdio.h>
#include<stdlib.h>

int Reverse(int Arr[], int iSize)
{
    int iStart = 0 , iEnd = 0;
    int temp = 0;
    iEnd = iSize - 1;

    while(iStart < iEnd)
    {
        temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = temp;

        iStart++;
        iEnd--;
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

        Reverse(Brr, iCount);//step 4

        printf("The elements in reverse order are\n");
        for(int i = 0; i < iCount; i++)
        {
            printf("%d\n", Brr[i]);
        }


        free(Brr);//step 5

    return 0;
}

