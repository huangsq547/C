#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int reback(int a)
{
	if (a >= 10)
	{
		int s;
		s = a % 10;
		a = a / 10;
		reback(a);
		printf("%d ", s);

    }
	else
	{
		printf("%d ", a);
		return 0;
	}
}


int main(void)
{
	int n;
    printf("«Î ‰»Î ˝◊÷");
	scanf("%d", &n);
	reback(n);


}