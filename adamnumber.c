//Adam number
#include <stdio.h>
#include <math.h>
int main()
{
    int n, square, rev, revsquare;
    printf("Enter a number: ");
    scanf("%d", &n);
    int num = n;
    int r=rev;
    square = num* num;
    printf("%d\n",square);
    rev = 0;
    int rev1=0;
    while (n > 0)
    {
        rev = rev*10+n% 10;
        n = n / 10;
    }
    printf("%d\n",rev);
    revsquare = rev * rev;
    printf("%d\n",revsquare);
    while(revsquare>0)
    {
        rev1=rev1*10+revsquare%10;
        revsquare=revsquare/10;
    }
    if (square==rev1)
    {
        printf("%d is an Adam number",num);
    }
    else
    {
        printf("%d is not an Adam number",num);
    }
}
