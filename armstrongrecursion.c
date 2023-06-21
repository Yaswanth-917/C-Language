#include <stdio.h>
int digitCount(int num)
{
    int count=0;
    while(num>0)
    {
        num=num/10;
        count++;
    }
    return count;
}
int power(int num,int count)
{
    if (count<=0)
        return 1;
    else
        return num*power(num,count-1);
}
int armStrong(int num, int count)
{
    if(num==0)
        return 0;
    else
        return power(num%10,count)+armStrong(num/10,count);
}
int main()
{
    int num,count=0;
    scanf("%d",&num);
    count=digitCount(num);
    printf("Count: %d\n",count);
    if(armStrong(num,count)==num)
    {
        printf("%d is an Armstrong number",num);
    }
    else
    {
        printf("%d is not an Armstrong number",num);
    }
}

