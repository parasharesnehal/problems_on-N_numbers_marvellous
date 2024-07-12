//problem statement :- WAP to accept n number from user and update a even number by 1


#include<stdio.h>
#include<stdlib.h>

int updater(int Arr[], int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        (Arr[i] + 1);
    }
}


int main()
{
        int iCount = 0;
        int *Brr = NULL;
        int iRet = 0;

        printf("Enter the number of elements\n"); //step 1
        scanf("%d", &iCount);

        Brr = (int *)malloc(iCount * sizeof(int));//step 2

        printf("Enter the elements\n"); //step 3
        for(int i = 0; i < iCount; i++)
        {
            scanf("%d", &Brr[i]);
        }

        updater(Brr, iCount);//step 4
        
        printf("The updated array is\n");
        free(Brr);//step 5

    return 0;
}