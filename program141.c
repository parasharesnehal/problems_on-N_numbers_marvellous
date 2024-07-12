//problem statement :- WAP to accept n number from user and update a even number by 1 and display them 


#include<stdio.h>
#include<stdlib.h>

int updater(int Arr[], int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            (Arr[i] + 1);
        }
    }

}


int main()
{
        int iCount = 0;
        int *Brr = NULL;

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
        for(int i = 0; i < iCount; i++)
        {
            printf("%d\n", Brr[i]);
        }
      

        free(Brr);//step 5

    return 0;
}