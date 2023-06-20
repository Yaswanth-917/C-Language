//decimal to binary
#include<stdio.h>
#include<math.h>
int main(){
    int num;
    int rem;
    int place=1;
    int binary=0;
    scanf("%d",&num);
    while(num>0){
        int rem=num%2;
        binary=binary+rem*place;
        num=num/2;
        place=place*10;
    }
    printf("%d",binary);
}
