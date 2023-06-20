//even and odd number with their count
int main()
{
    int num,rem;
    int count=0;
    int evencount=0;
    int oddcount=0;
    printf("Enter number: ");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        if(rem%2==0)
        {
            printf("%d is even\n",rem);
            evencount++;
        }
        else
        {
            printf("%d is odd\n",rem);
            oddcount++;
        }
    }
    printf("Even count: %d\n",evencount);
    printf("Odd count: %d\n",oddcount);
}
