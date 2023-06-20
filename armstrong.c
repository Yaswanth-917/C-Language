//Armstrong Number
#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int count=0;
    int temp=num;
    int rem,res=0;
    while(temp>0)
    {
        temp=temp/10;
        count++;
    }
    temp=num;
    while(temp>0)
    {
        rem=temp%10;
        int power=1;
        for(int i=0; i<count; i++)
        {
            power=power*rem;
        }
        res=res+power;
        temp=temp/10;
    }
    printf("Digit Count: %d\n",count);
    if(res==num)
    {
        printf("%d is an Armstrong number",num);
    }
    else
    {
        printf("%d is not an Armstrong number",num);
    }
}
