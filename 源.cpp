#include<stdio.h>

int main(void)
{
	int i = 100;//i-1���ڵ�һ��������
	{
		int i = 110;//i-2���ڶ���������
		{
			int i = 123;//i-3���ڵ�����������
			printf("i=%d\n", i);
		}
		{
			printf("i=%d\n", i);
			int i = 130;//i-4���ڵ��ĸ������� 
			printf("i=%d\n", i);

		}
		printf("i=%d\n", i);

	}
	printf("i=%d\n", i);


	return 0;
}