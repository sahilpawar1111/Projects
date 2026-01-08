#include<stdio.h>
int main()
{
	int num,firstdigit,lastdigit,sum;
	printf("Enter num :");
	scanf("%d",&num);
	
	lastdigit = num % 10;
	
	while(num>=10)
	{
		num = num / 10;
	}
	firstdigit = num;
	
	printf("sum of first and last digit %d",firstdigit + lastdigit);
	
	return 0;
}
