//problem statement:- display count of even numbers from the array 

#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int i = 0;
    int iFreq = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iFreq++; 
        }
    }
    return iFreq;
    
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

    iRet = CountEven(Brr, iCount); //Display(100, 5)
    printf("even numbers are : %d\n", iRet);

    free(Brr);//free kela
    return 0;
}