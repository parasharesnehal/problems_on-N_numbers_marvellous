//problem statement:- check whether the given characteer is capital or not 

#include<stdio.h>
#include<stdbool.h>
bool CheckCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return true;
    }
    else
    {
        return false;
    }
}   

int main()
{
    char ch;
    bool bRet = false;

    printf("Enter a character: \n");
    scanf("%c", &ch);

    bRet = CheckCapital(ch);

    if(bRet == true)
    {
        printf("The entered character is capital \n");
    }
    else
    {
        printf("The entered character is not capital \n");
    }

    return 0;
}