

#include <stdio.h>
#include <stdlib.h>
// void Display( int *ptr, int iSize)

int Addition(int Arr[], int iSize)
{
    int i = 0;
    int iSum = 0;
    //      1          2          3
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
    
//step1:- accept number of elements from user

    printf("Enter the number of elements\n"); //kiti lok jewnare
    scanf("%d", &iCount);

//step2:- allocate dynamic memory for that many elements
    Brr = (int *)malloc(iCount * sizeof(int));//tevde taat ghetlayyy...

//step3:- accept the elements

    printf("Enter the elements\n"); //jewayla bsle
    for(int i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

//step4:-- pass the addres of that memory to the function (Any)
    iRet = Addition(Brr, iCount); //Display(100, 5)
    printf("Addition is : %d\n", iRet);

//step5:- free the memory explicitly

    free(Brr);//free kela
    return 0;
}