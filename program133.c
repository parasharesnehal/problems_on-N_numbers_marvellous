//problem statement:- accept the number of elements, the elements and a number from arraay and count the number of times that number has occurd in array 

#include <stdio.h>
#include <stdlib.h>

int Search(int Arr[], int iSize , int iNo)
{
    int i = 0;
    int iFreq = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
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
    int iValue = 0;
    
    printf("Enter the number of elements\n"); //kiti lok jewnare
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));//tevde taat ghetlayyy...


    printf("Enter the elements\n"); //jewayla bsle
    for(int i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    printf("Enter the elements that you want to search\n");
    scanf("%d", &iValue);

    iRet = Search(Brr, iCount, iValue); //Display(100, 5)
    printf(" frequency of that number is : %d\n", iRet);

    free(Brr);//free kela
    return 0;
}