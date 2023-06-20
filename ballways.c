//possible ball ways
#include <stdio.h>
int main(){
    int ball;
    int ways=1;
    int p1=1;
    int p2=1;
    scanf("%d",&ball);
    if(ball<0){
        return 0;
    }
    for(int i=3;i<=ball;i++){
        int temp=ways;
        ways=ways+p2;
        p2=p1;
        p1=temp;
    }
    printf("No.of Ways: %d",ways);
}
