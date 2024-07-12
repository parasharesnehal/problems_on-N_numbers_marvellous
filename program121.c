

#include <stdio.h>
#include <stdlib.h>
// void Display( int *ptr, int iSize)



int main()
{   
    int iCount = 0;
    int *Brr = NULL;
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
//Missing




    printf("entered elements are : \n"); //

    for(int i = 0; i < iCount; i++)
    {
        printf("%d\n", Brr[i]);
    }
    
//step5:- free the memory explicitly

    free(Brr);//free kela
    return 0;
}