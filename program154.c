//problem statement:- check whether the given characteer is Small or not 

#include<stdio.h>
void CheckSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        printf("The entered character is small \n");
    }
    else
    {
        printf("The entered character is not small \n");
    }
}   

int main()
{
    char ch;

    printf("Enter a character: \n");
    scanf("%c", &ch);

    CheckSmall(ch);

    return 0;
}