//count and sum of a number
#include<stdio.h>
int main()
{
    int num,rem;
    int count=0;
    int sum=0;
    printf("Enter Number: ");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        count=count+1;
        sum=sum+rem;
    }
    printf("count: %d\n",count);
    printf("sum:   %d",sum);
}
