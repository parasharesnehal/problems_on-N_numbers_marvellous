//problem statement :- WAP to accept n number from user and find out the smallest number from that number and display that number

#include<stdio.h>
#include<stdlib.h>

int Manimum(int Arr[], int iSize)
{
    int i = 0;
    int iMin = Arr[0];//negative test case 

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
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

        printf("The smallest number is %d\n", iRet);

        free(Brr);//step 5

    return 0;
}