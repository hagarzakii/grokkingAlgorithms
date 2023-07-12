#include<stdio.h>

void countdown (int count);
int factorial(int number);

int main(void)
{
	int number = 10;
	countdown(number);
	printf("The factorial is %d" , factorial(number));
	return 0 ;
}
void countdown (int count )
{
	printf("%d\n" , count);
	if(count <= 0)
	{
		return ;
	}
	else
	{
		countdown(count-1);
	}
}

int factorial(int number)
{
	if(number==1)
	{
		return 1 ;
	}
	else
	{
		return number*factorial(number-1);
	}
}