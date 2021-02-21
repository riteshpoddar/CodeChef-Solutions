#include <stdio.h>

int main(void) 
{
	int T;
	scanf("%d", &T);
	while (T--) 
	{
    	int n,rem;
    	scanf("%d",&n);
    	int sum=0;
    	while(n!=0)
    	{   rem= n%10;
    	    sum=sum+rem;
    	    n=n/10;
	    }
	printf("%d\n",sum);
	}
	
	return 0;
}

