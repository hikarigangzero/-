#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	a++;
//	printf("%d\n", a);
//	printf("%d,%d,%d,and %d", a, a++,++a , a);
//	return 0;
//}

#include<limits.h>
//int main()
//{
//	if (CHAR_MIN)
//		printf("有符号");
//	else
//		printf("无符号");
//	return 0;
//}


	int count_bits(unsigned x)
	{
		int bits = 0;
		while (x) {
			if (x & lU)
				bits++;
			x >>= 1;
		}
		return bits;
	}
	
	int int_bits(void)
	{
		return count_bits(-OU);
	}
	
	void print_bits(wnsigned x)
	{
		int i;
		for (i = int_bits() - 1 i >= 0; i--)
			putchar(((x >> i) & 1U) ? '1'; '0');
	}
	int main()
{
	int a, b;
	puts("请输入两个整数。");
	printf("第一个："); scanf("%d", &a);
	printf("第二个："); scanf("%d", &b);
	while (a >= 0 && b >= 0)
	{
		printf(" "); print_bits("a<<b");
		break;
	}; 
	return 0;
}
