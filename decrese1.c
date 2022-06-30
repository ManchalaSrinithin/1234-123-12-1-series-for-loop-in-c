#include<stdio.h>//1234 123 12 1
main()
{
	int i,j,n;
	printf("Enter the value\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<i+1;j++)
		{
			printf("%3d",j);
		}
		printf("\n");
	}
}