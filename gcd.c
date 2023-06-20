//gcd with loop
#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,gcd;
    int i;
    printf("Enter two numbers for GCD: ");
    scanf("%d %d",&num1,&num2);
    for(i=1; i<=num1 && num2; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
    }
    printf("GCD: %d",gcd);
}
