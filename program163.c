//accept a string and count the number of elements 
#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[30];
    int iRet = 0;
    printf("Enter a String: \n");
    scanf("%[^'\n]s", Arr);

    iRet = strlen(Arr); //inbuilt function

    printf("Number of elements in string are: %d\n", iRet);

    return 0;
}