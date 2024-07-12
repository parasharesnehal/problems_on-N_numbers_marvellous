//problem statement:- accept the number of elements, the elements and a number from arraay and check whether the number has occurd in array 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Search(int Arr[], int iSize , int iNo)
{
    int i = 0;
    bool bFlag = false;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iCount = 0;
    int *Brr = NULL;
    bool bRet = 0;
    int iValue = 0;
    
    printf("Enter the number of elements\n"); 
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements\n");
    for(int i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    printf("Enter the elements that you want to search\n");
    scanf("%d", &iValue);

    bRet = Search(Brr, iCount, iValue);


    if(bRet == true)
    {
        printf("Number is present in the array\n");
    }
    else
    {
        printf("Number is not present in the array\n");
    }

}