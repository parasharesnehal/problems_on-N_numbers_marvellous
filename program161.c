//accept a full name fro user 
#include<stdio.h>

void Display(char *str)
{
    
        printf("%c", *str);
        str++;
        printf("%c", *str);
        str++;

        printf("%c", *str);
        str++;
        
}

int main()
{
    char Arr[30];

    printf("Enter a String: \n");
    scanf("%[^'\n]s", Arr);

    Display(Arr); 

    return 0;
}