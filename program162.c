//display a letter from string
#include<stdio.h>

void Display(char *str)
{
    while(*str != '\0')
    {
        printf("%c\n", *str);
        str++;
    }

}

int main()
{
    char Arr[30];

    printf("Enter a String: \n");
    scanf("%[^'\n]s", Arr);

    Display(Arr); 

    return 0;
}