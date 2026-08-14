#include<stdio.h>
int main()
{
    int even,n,digit,odd;
    even=0,odd=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        if(digit%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        n=n/10;
    }
    printf("even=%d",even);
    printf("odd =%d",odd);
    return 0;
}