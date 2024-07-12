//problem statement:- check whether the given characteer is Digit or not 

#include<stdio.h>
void CheckDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        printf("The entered character is Digit \n");
    }
    else
    {
        printf("The entered character is not Digit \n");
    }
}   

int main()
{
    char ch;

    printf("Enter a character: \n");
    scanf("%c", &ch);

    CheckDigit(ch);

    return 0;
}