#include<stdio.h>
int main()
{
    int a,b;
    printf("Please enter two numbers:\n");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("\n %d is the maximum number ",a);
    }
     else if(b>a)
    {
        printf("\n %d is the maximum number",b);
    }
     else
    {
    printf("both numbers are same");
    }

    return 0;
}