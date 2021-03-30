#include <stdio.h>

int main()
{
	int num;
	printf("Enter number: ");
	scanf(" %d", &num);
	printf("\n");
	
	if(num < 0)
		return -1;
	else if(num == 0)
	{
		printf("0");
		return 0;
	}
	
	while(num > 0)
	{
		printf("%d",num%10);
		num/=10;
	}
	
	return 0;
}