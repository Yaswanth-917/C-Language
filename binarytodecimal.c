//binary to decimal
#include<stdio.h>
#include<math.h>
int main(){
    int count=0;
    int num;
    scanf("%d",&num);
    int res=0,base=1;
    while(num!=0){
        int rem=num%10;
        res=res+rem*base;
        num=num/10;
        base=base*2;
    }
    printf("%d",res);
}
