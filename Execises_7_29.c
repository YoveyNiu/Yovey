//1.模拟实现strstr函数
char *strstr(const char*str1, const char*str2)
{
    int n=0;
	if (*str2)
	{
		while (*str1)
		{
			for (n = 0; *(str1 + n) == *(str2 + n); n++)
			{
				if (!*(str2 + n + 1))
					return (char*)str1;
			}
			str1++;
		}
		return NULL;
	}
	else
		return (char*)str1;
}

//2.拟实现strncat函数
char *mystrcat(char *str1, const char *str2)
{
	int i=0;
	int length = strlen(str1);

	while (*(str2+i))
	{
		*(str1 + length + i) = *(str2 + i);
		i++;
	}
	return str1;
}
