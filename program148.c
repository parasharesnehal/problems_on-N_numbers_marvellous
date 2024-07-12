//swap two numbers

#include<stdio.h>

void Swap(int *p, int *q)
{
    int temp = 0;
    temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int A = 0;  
    int B = 0;

    printf("Enter the first number\n");
    scanf("%d", &A);

    printf("Enter the second number\n");
    scanf("%d", &B);

    Swap(&A, &B);
    printf("Before swapping A is %d and B is %d\n", A, B);

    return 0;
}

