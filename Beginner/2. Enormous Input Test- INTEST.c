
#include <stdio.h> 

int main() {
	int n,k,x,count=0;

	scanf("%d %d",&n,&k);

	
	for (int i=0;i<n;i++) {
        scanf("%d",&x);
	    if(x%k ==0){
	        count++;
	    }
	    /* code */
	}
	printf("%d",count);
	
	return 0;
}

