//accept a string and count the number of elements 
#include<stdio.h>

int StringLen(char *str)
{
    int iCnt = 0;
    while (*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;
    printf("Enter a String: \n");
    scanf("%[^'\n]s", Arr);

    iRet = StringLen(Arr); //inbuilt function

    printf("Number of elements in string are: %d\n", iRet);

    return 0;
}