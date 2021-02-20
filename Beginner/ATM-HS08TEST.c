int main(void) {
	float b;
	int w;
	
	scanf("%d %f",&w,&b);
	
	if(w+0.5>b)
	printf("%.2f",b);
	
	else if(w%5 != 0)
	printf("%.2f",b);
	
	else
	printf("%.2f",b-w-0.5);

	return 0;
}
