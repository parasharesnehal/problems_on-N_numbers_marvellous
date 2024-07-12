//problem statement:- check whether the given characteer is capital or not 

#include<stdio.h>
void CheckCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("The entered character is capital \n");
    }
    else
    {
        printf("The entered character is not capital \n");
    }
}   

int main()
{
    char ch;

    printf("Enter a character: \n");
    scanf("%c", &ch);

    CheckCapital(ch);

    return 0;
}