#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int num1=0;
	int num2=0 ;
	int num=0; 
	scanf("%d%d", &num1, &num2);
	num= num1 + num2;
	printf("���=%d\n\n\n", num);
	return 0;
}
enum COLOR
{
	RED,
	YELLOW,
	BLUE
};
int main()
{
	enum COLOR color=BLUE;
	color = RED;
	printf("%d", color);
	return 0;
}
int main()
{
	char arr1[] = {'a','b','c'};
	printf("%s\n", arr1);
	return 0;
}
int main()
{
	char arr2[] = { 'a','b','c',' ','\0'};
	printf("%d\n", strlen(arr2));
}
int main()
{
	printf("%c", '\x30');
	return 0;
}

int main()
{
	int wenda=0;
	printf("�������\n");
	printf("�ú�ѧϰ��(1/0):");
	scanf("%d", &wenda);
	if (wenda ==1)
	    printf("��offer\n");
	else
		printf("����\n");
	return 0;
}
int main()
{
	int line = 0;
	printf("�ô���\n");
	while (line <= 20000)
	{
		printf("һ�д���,%d\n",line);
		line++;
	}
	if(line>=20000)
	printf("��offer\n");
	return 0;
}
int main()
{
	int shuzu[11] = { 1,2,3,4,5,6,7,8,9,10,11 };
	printf("%d\n", shuzu[10]);
	return 0;
}
int main()
{
	int shuzu2[10] = { 1,2,3,4,5 ,6,7,8,9,10}; 
int i =2;

	while (i <7)
	{
		printf("%d ", shuzu2[i]);
		i++;
	}
	return 0;
}
int num = 10;
int main()
{
	int num = 1;//�ֲ���������
	printf("%d\n", num);
	return 0;
}
void test()
{
	static int a = 1;
	a++;
	printf("a=%d\n", a);
}
int main()
{
	int i = 0;
	int main = 0; while (i < 5)
	{
		test();
			i++;
	}
}
int main()
{
	int num = 0;
	if (num=0)//ֻҪ����0�������ܴ�ӡ
	{
		printf("hehe\n");
	}
	return 0;
}
int main()
{
	int i = 0;
	while (i <100)
	{
		i++;
		if (1 == i%2)
			printf("%d\n", i);
	}

	return 0;
}
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����1\n");
		break;
	case 2:
		printf("����2\n");
		break;
	case 3:
		printf("����3\n");
		break;
	case 4:
		printf("����4\n");
		break;
	}
	return 0;
}

int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d\n", i);
		i++;
	}
	return 0;
}
int main()
{
	int ch = 0;
	while ((ch = getchar())!= EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
  } 
}
int main()
{int i = 0;
for (i = 0; i < 10; i++)
{
	if (i == 5)
		printf("haha\n");
	printf("hehe\n");
}
return 0;
}
int main()
{
	int i = 0;
	int j = 0;
	for (;i<10;i++)
	{
		for (j=0;j<10;j++)
		{
			printf("hhaa\n");
		}
	}
	return 0;
}
int main()
{
	int i = 5;
	int j = 5;
	for (i = 0, j = 0; j = 1; i++, j++)
		j++;
	return 0;
}
int i = 0;
int j = 0;
JC(int x, int y)
{
	int z = 0;
	z = i*j;
		return z;
}
int main()
{
	for(i=0;;i++)

	return 0;
}
int main()//�����
{
	int s = 0;
	int i = 0;
	int ret = 1;
	int sum = 0;
	int n = 0;
	scanf("%d", &s);
	for (n = 1; n<= s; n++)
	{
		for (i = 1,ret = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = ret + sum;
	}
	printf("%d", sum);
	return 0;
}
int main()//�����
{
	int s = 0;
	int ret = 1;
	int sum = 0;
	int n = 0;
	scanf("%d", &s);
	for (n = 1; n <= s; n++)
	{
			ret = ret * n;
		sum = ret + sum;
	}
	printf("%d", sum);
	return 0;
}

int main()
{
	char arr1[]="welcom to bite!!!!!!";
	char arr2[]="####################";
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(250);
		system("cls");
		left++;
		right--;
	}
	return 0;
}
int main()
{
	int i = 0;
	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0)
			printf("%d\n", i);
	}
	return 0;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200;i++)
	{
			int j=0;
			for (j = 2; j <= sqrt(i); j++)
			{
				if (i % j == 0)
				{
					break;
				}

			}
			if (j >sqrt(i))
			{
				printf("%d ", i);
				count++;

			}
	}
	printf("\n\n%d", count);
		return 0;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100;i++)
	{
		if (i / 10 == 9)
			count++;
		if (i % 10 == 9)
			count++;
	}
	printf("%d", count);
	return 0;
}
void game()
{
	int w = 0;
	int ����� = rand() % 100 + 1;
	printf("************������************\n");
	printf("��:%d\n",�����);	
	printf("******************************\n");
	while (1)
	{
		scanf("%d", &w);
		if (����� == w)
		{
			system("cls");
			printf("�������\n");
			Sleep(3000);
			system("cls");
			printf("��������\n");
			break;
		}
		else if (����� > w)
		{
			system("cls");
			printf("����С��\n");
		}
		else if (����� < w)
		{
			system("cls");
			printf("�������\n");
		}
	}
}
void menue()
{
	printf("==============================\n");
    printf("=======   1.play 0.exit  =====\n");
	printf("==============================\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int i = 0;
	do
	{
		menue();
		printf("��ѡ��1 or 0 : ");
		scanf("%d", &i);
		switch(i)
		{
		case 1:
			system("cls");
			game();
				break;
		case 0:
			system("cls");
			printf("�˳���Ϸ\n");
				break;
		default:
			system("cls");
			printf("����\n");
			break;
		}

	} while (i);
	return 0;
}
void SSS(int* a,int* b)
{
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
int main()
{
	int a = 1000000;
	int b = 2;
	SSS(&a,&b);
	printf("%d����������%d", a,b);
}
int	WWW(int n)
{
	int m = 0;
	for (m = 2; m <=sqrt(n); m++)
	{
		if(n%m==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (WWW(i) == 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
 void hanshu(int n)
{
	if (n > 9)
	{
		hanshu(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	hanshu(num);
	return 0;
}
//int main()
//{
//	main();
//	return 0;
//}
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("%d", ret);
	return 0;
}
int main()
{
	int a = 0;
	char arr[] = "abcdefg";
	a = sizeof(arr);
	printf("%d", a);
	return 0;
}
int main()
{
	int a =(int)3.14;
	printf("%d", a);
	return 0;
}
int main()
{
	int a = 0x11223344;
	int* pa = &a;
	printf("%p\n", pa);
	printf("%p\n", pa + 2);
	/*printf("%d", sizeof(char*));*/
}
int main()
{
	char arr[4] = "abc";
	/*char* ss = &arr[9];*/
	/*int* sss = &arr[0];*/
	char* www = arr;
	printf("%d", *www);
}
int main()
{
	int a,b,c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	printf("a=%d b=%d c=%d\n", a, b, c);
	return 0;
}
int yihuo(int a, int b)
{
	int tmp = a ^ b;
	int count1 = 0;
	while (tmp)
	{
		tmp=tmp& (tmp - 1);
		count1++;
	}
	return count1;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d",&a, &b);
	 int count2=yihuo(a, b);
	printf("%d", count2);
}
int hanshu(int a,int b)
{
	if (a > 9)
	{
		hanshu(a / 10, b+a%10);//��������if������ӡ
    }
	return b;
}
int main()
{
	int b =0;
	int a = 551;
	b=hanshu(a,b);
	printf("%d", b);
	return 0;
}
reverse_string()
{

}
int main()
{
	char arr[] = "abcdef";
	reverse_string();
	return 0;
}
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 9; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	system("pause");
	return 0;
}
 /*void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
}
int main()
{
	char arr1[] = "#################";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}*/
int main()
{
	int num = 10;
    int*const p = &num;
	*p = 20;
	printf("%d\n", num);
	return 0;

}
int main()
{
	int a = 1;
	char* p = (char*)&a;
	if(*p==1)
	{
		printf("С\n");
	}
	else {
		printf("��\n");
	}
	return 0;
}
int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("%d %d %d", a, b, c);
	return 0;
}
int main()
{
	char arr[] = "abcfef";
	char* pc = arr;
	printf("%s\n", arr);
	printf("%c\n", *pc);
	return 0;
}
int main()
{
	char* p = "abcdef";
	printf("%s\n", p);
	return 0;
}
int main()
{
	char* p = "abcdef";
	*p = 'W';
	printf("%s\n", p);
	return 0;
}
char* (*pf)(char*, const char*);
char* (*pfarr[4])(char*, const char*);
int main()
{
	char arr[1023] = { "abc@def.ghi@.jkl" };
	char* p = "@.";
	char* ret = strtok(arr, p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);
	ret = strtok(NULL,p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);
}
enum day
{
	min=10,
	tues,
	wed,
	thur,
	fri
};
int main()
{
	//int s = 0;
	//enum day s = tues;
	//s = 10;
	printf("%d", tues);
	return 0;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[n] = { 0 };
}
int main()
{
	printf("%f",3.14112);
	return 0;
}