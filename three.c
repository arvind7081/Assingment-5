//3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter Input : ");
    scanf("%d",&n);
    for ( i = n; i>= 1; i--)
    {
        printf("%d ",i);
    }
    return 0;
}