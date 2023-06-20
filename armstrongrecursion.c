//Armstrong Using Recursion
#include <stdio.h>
int numberSum(int num)
{
    int sum=0;
    int temp=num;
    int count=0;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    temp=num;
    while(temp>0){
        int digit=temp%10;
        int power=1;
        for(int i=0;i<count;i++){
            power=power*digit;
        }
        sum=sum+power;
        temp=temp/10;
    }
    return sum;
}
int main()
{
    int num,sum;
    printf("Enter a number: ");
    scanf("%d",&num);
    sum=numberSum(num);
    if(sum==num){
        printf("%d is an Armstrong Number",num);
    }
    else{
        printf("%d is not an Armstrong Number",num);
    }
}
