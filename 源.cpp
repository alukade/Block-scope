#include<stdio.h>

int main(void)
{
	int i = 100;//i-1属于第一个作用域
	{
		int i = 110;//i-2属第二个作用域
		{
			int i = 123;//i-3属于第三个作用域
			printf("i=%d\n", i);
		}
		{
			printf("i=%d\n", i);
			int i = 130;//i-4属于第四个作用域 
			printf("i=%d\n", i);

		}
		printf("i=%d\n", i);

	}
	printf("i=%d\n", i);


	return 0;
}