void factor(int n)
{
	int i;
	printf("\nFactor of %d are ",n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("\t%d",i);
		}
	}
}
int factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		 fact=fact*i;
	}
	printf("\nFactorial of %d is %d", n, fact);
	return fact;
	
}