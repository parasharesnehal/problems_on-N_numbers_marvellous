//problem statement :- WAP to accept n number from user and find out the largest number from that number and display that number

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
    int i = 0;
    int iMax = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
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

        iRet = Maximum(Brr, iCount);//step 4

        printf("The largest number is %d\n", iRet);

        free(Brr);//step 5

    return 0;
}