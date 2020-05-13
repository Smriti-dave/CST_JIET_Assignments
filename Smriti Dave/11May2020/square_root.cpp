//finding square root of a no.

#include<stdio.h>
main()
{
	int n ,i=0 ;
	int root=1;
	printf("enter number ");
	
	scanf("%d",&n);
	while(1)
	{
		i=i+1;
		root = (n/root+root)/2;
		if(i == n+1)
		{
			break;
		}
		
	}
	printf("%d",root);
	
}
