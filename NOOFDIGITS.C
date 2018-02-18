#include <stdio.h>
int main() 
{
    int n,c=0;
    printf("input");
    scanf("%d",&n);
    while(n!=0)
    {
    	c++;
    	n=n/10;
    }
    printf("\nno of digits=%d",c);
	return 0;
}
