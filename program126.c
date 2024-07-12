//problem statement:- display odd numbers from the array 

#include <stdio.h>
#include <stdlib.h>

int DisplayOdd(int Arr[], int iSize)
{
    int i = 0;
    printf("odd elements are\n");
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            printf("%d\n",Arr[i]);
        }
    }
    return 0;
    
}


int main()
{   
    int iCount = 0;
    int *Brr = NULL;
    
    printf("Enter the number of elements\n"); //kiti lok jewnare
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));//tevde taat ghetlayyy...


    printf("Enter the elements\n"); //jewayla bsle
    for(int i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    DisplayOdd(Brr, iCount); //Display(100, 5)


    free(Brr);//free kela
    return 0;
}