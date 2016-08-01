//1
void my_printf(char *str, ...)
{
	char cmp='\0';
	va_list arg;
	va_start(arg, n);
	while(*str)
	{
		
		if(*str=='%')
		{
			str++;
			swich(*str)
			{
				case:'c':
				cmp = va_arg(arg,char);
				putchar(cmp);
				break;
				case:'s':
				do
				{
					cmp=va_arg(arg,char);
					if(cmp)
						putchar(cmp);
				}while(cmp);
				break;
				default:
			}
		}
		else if(*str=='\')
		{
			str++;
			swich(*str)
			{
				case 'n':putchar('\n');break;
				case 't':putchar('\t');break;
				case 'v':putchar('\v');break;
				case 'r':putchar('\r');break;
				case 'b';putchar('\b');break;
				default:break;
			}
		}
		else
		{
			putchar(*str);
		}
		str++;
	}
	va_end(arg);
}

//2
main(int argc,char *argv[])
{	int ret=0;
	swich(argv[1])
	case "-a": ret=argv[2]+argv[3];break;
	case "-s": ret=argv[2]-argv[3];break;
	case "-m": ret=argv[2]*argv[3];break;
	case "-d": ret=argv[2]/argv[3];break;
	default: printf("错误的参数！")；exit(1);
	printf("%d",ret);
	exit(0);
}

//3
int power(int n,int k)
{	if(k>=2)
		return power(n,k-1)*n;
	else if(k==1)
		return n;
	else(k==0)
		return 1;
}

//4
int DigitSum(unsigned int n)
{
	if(n>=10)
		return n%10+DigitSum(n/10);
	else
		return n;
}

