
#include "stdio.h"
#include "string.h"

//1.该函数用于实现左旋字符串中的k个字符
char *Spin(char *src, int k)
{
	int i, j;
	int len;
	char A;
	char *ret;
	ret = src;
	len = strlen(src);
	for (i = 0; i < k; i++)
	{
		A = *src;
		for (j = 0; j < len-1; j++)
		{
			*src = *(src + 1);
			src++;
		}
		*src = A;
		src = ret;
	}
	return ret;
}

//2.该函数用于判断一个字符串是否为另外一个字符串旋转之后的字符串
int JudgeSpin(char *src, char *cmp)
{
	int i;
	int ret = 0;
	int length = strlen(src);
	if (strlen(src) == strlen(cmp)) {
		for (i = 0; i < length; i++)
		{
			if (strcmp(Spin(src, 1), cmp) == 0) ret = 1;
		}
	}
	return ret;
}

//测试
main()
{
	int i = 0;
	char src[] = { "ABCDE" };
	char cmp[] = { "CDEAB" };
	for (i = 0; i < strlen(src); i++) {
		Spin(src, 1);
		printf("%s\n", src);
	}
	if (JudgeSpin(src, cmp))printf("Sucsses");
	else printf("false");

}
