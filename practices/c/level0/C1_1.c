#include <stdio.h>

int main()
{
	int a,b;
	printf("������һ��a��ֵ�� "); 
	scanf("%d",&a);
	b=a%2;
	
	if (a>0)
	{
		printf("aΪ����"); 
	}
	else if (a<0)
	{
		printf("aΪ����"); 
	}
	else
	{
		printf("aΪ0");
	}
	
    printf("\n");
	
	if (b==0)
    {
    	printf("aΪż��");
	}
	else
	{
		printf("aΪ����");
	}
	
    return 0;
}
