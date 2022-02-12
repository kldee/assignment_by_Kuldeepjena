#include<stdio.h>
int main()
{
    float a,b;
    int n;
    printf("1:Addision");
    printf("2:Subtractionn");
    printf("3:Multiplication");
    printf("4:Division");
    printf(" enter two numbers:\n");
    scanf("%f%f",&a,&b);
    printf("enter your choice:\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("\n addision of %f and %f is %f",a,b,a+b);
        case 2:
            printf("\n subtraction of %f and %f is %f",a,b,a-b);
        case 3:
            printf("\n multiplication of %f and %f is %f",a,b,a*b);
        case 4: 
            printf("\n division  of %f and %f is %f",a,b,a/b);
        default:
                printf("invalid choice");
    }
    return 0;
}