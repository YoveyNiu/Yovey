//1
char* strrev(char* str)
{
    int length=strlen(str);
    char prior = *str;
    *(str)=*(str+length-1);
    *(str+length-1)='\0';
    strrev(str+1);
    *(str+length-1)=prior;
    return str;
}

//2
int Max(int n,...)
{
	int i=0;
	int Max = 0;
	va_list arg;
    va_start ( arg, n );
    Max = va_vrg(arg,n);
	for( i=1; i<n; i++ )
    {
        cmp = va_vrg ( arg, n );
        if(cmp>Max)
            Max=cmp
	}	
	va_end(arg);
	return Max;
}

//3
对于可变参数，我们只要探测到任意一个变量的地址，并且知道其他变量的类型，通过指针移位运算，则总可以顺藤摸瓜找到其他的输入变量

<1> va_list 定义一个字符指针，指向变参列表前的已知形参。
typedef char * va_list;

<2> va_start 将指针指向第一参数位，并返回该位内容。
#define va_start(ap,v) ( ap = (va_list)&v + _INTSIZEOF(v) )

<3> va_arg 返回arg当前指向参数值，并将arg指向下一位参数
#define va_arg(ap,t) ( *(t *)((ap += _INTSIZEOF(t)) - _INTSIZEOF(t)) )

<4> va_end 关闭指针，以免发生危险
#define va_end(ap) ( ap = (va_list)0 )

//4
int Fibonacci(int n)
{
	a = 0；
		b = 1;
	c = 1;
	for (i = 1; i < n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}



