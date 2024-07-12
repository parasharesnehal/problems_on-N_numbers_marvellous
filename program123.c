

#include <stdio.h>
#include <stdlib.h>

int Addition(int Arr[], int iSize)
{
    int i = 0;
    int iSum = 0;
    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
    // 4
}


int main()
{   
    int iCount = 0;
    int *Brr = NULL;
    int iRet = 0;
    
    printf("Enter the number of elements\n"); //kiti lok jewnare
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));//tevde taat ghetlayyy...


    printf("Enter the elements\n"); //jewayla bsle
    for(int i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    iRet = Addition(Brr, iCount); //Display(100, 5)
    printf("Addition is : %d\n", iRet);


    free(Brr);//free kela
    return 0;
}